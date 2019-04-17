#include <stdio.h>
#include <stdlib.h>
typedef unsigned int u8;

struct Audio {
    u8 id;
    u8 intensity;
    u8 tone;
    struct Audio *next;
};

struct Particle {
    u8 id;
    u8 velocity;
    u8 weight;
    struct Particle *next;
};

struct Cell {
    u8 id;
    struct Particle *particle_ptr;
    struct Audio *audio_ptr;
    struct Cell *next;
};

struct Cell *cell_head = NULL;
struct Audio *audio_head;
struct Particle *particle_head;

struct Cell* initialize() {
    // Cell Head
    cell_head = (struct Cell*) malloc(sizeof(struct Cell));
    cell_head -> id = 1;
    cell_head -> next = NULL;
    cell_head -> particle_ptr = NULL;
    cell_head -> audio_ptr = NULL;
    
    return cell_head;
}

struct Audio* initialize_audio(struct Cell *cell_head) {
    // First Audio
    audio_head = cell_head -> audio_ptr = (struct Audio*) malloc(sizeof(struct Audio));
    audio_head -> next = NULL;
    audio_head -> id = 1;
    // intensity
    printf("Enter intensity of audio number %i:\n", audio_head -> id);
    scanf("%i", &audio_head -> intensity);
    // tone
    printf("Enter tone of audio number %i:\n", audio_head -> id);
    scanf("%i", &audio_head -> tone);

    return audio_head;
}

struct Particle* initialize_particle(struct Cell *cell_head) {
    // First Audio
    particle_head = cell_head -> particle_ptr = (struct Particle*) malloc(sizeof(struct Particle));
    particle_head -> next = NULL;
    particle_head -> id = 1;
    // valocity
    printf("Enter velocity of particle number %i:\n", particle_head -> id);
    scanf("%i", &particle_head -> velocity);
    // weight
    printf("Enter weight of particle number %i:\n", particle_head -> id);
    scanf("%i", &particle_head -> weight);

    return particle_head;
}

void create_new_particle() {
    struct Particle *temp;
    temp = particle_head;
    for(;;) {
        if((temp->next) == NULL) {
            break;
        } else {
            temp = temp->next;
        }
    }
    temp->next = (struct Particle*) malloc(sizeof(struct Particle));
    temp->next->id = temp -> id + 1;
    // valocity
    printf("Enter velocity of particle number %i:\n", temp->next->id);
    scanf("%i", &temp -> next -> velocity);
    // weight
    printf("Enter weight of particle number %i:\n", temp->next->id);
    scanf("%i", &temp -> next -> weight);
    temp->next->next = NULL;
}

void create_new_audio() {
    struct Audio *temp;
    temp = audio_head;
    for(;;) {
        if((temp->next) == NULL) {
            break;
        } else {
            temp = temp->next;
        }
    }
    temp->next = (struct Audio*) malloc(sizeof(struct Audio));
    temp->next->id = temp -> id + 1;
    // intensity
    printf("Enter intensity of audio number %i:\n", temp->next->id);
    scanf("%i", &temp -> next -> intensity);
    // tone
    printf("Enter tone of audio number %i:\n", temp->next->id);
    scanf("%i", &temp -> next -> tone);
    temp->next->next = NULL;
}

void print_audios() {
    struct Audio *temp;
    temp = audio_head;
    int counter = 1;
    printf("Here are your audio cells:\n");
    for(;;) {
        if(temp->next != NULL) {
            printf("Intensity of audio cell number %i = %i\n", counter,temp->intensity);
            printf("Tone of audio cell number %i = %i\n", counter,temp->tone);
            temp = temp->next;
            counter++;
        } else {
            printf("Intensity of audio cell number %i = %i\n", counter,temp->intensity);
            printf("Tone of audio cell number %i = %i\n", counter,temp->tone);
            break;
        }
    }
}

void print_particles() {
    struct Particle *temp;
    temp = particle_head;
    int counter = 1;
    printf("Here are your particles:\n");
    for(;;) {
        if(temp->next != NULL) {
            printf("Velocity of particle number %i = %i\n", counter,temp->velocity);
            printf("Weight of particle number %i = %i\n", counter,temp->weight);
            temp = temp->next;
            counter++;
        } else {
            printf("Velocity of particle number %i = %i\n", counter,temp->velocity);
            printf("Weight of particle number %i = %i\n", counter,temp->weight);
            break;
        }
    }
}

int main() {
    cell_head = initialize();
    cell_head -> audio_ptr = initialize_audio(cell_head);
    cell_head -> particle_ptr = initialize_particle(cell_head);

    char choice;

    for(;;) {
        printf("Do you want to add a new Audio cell? (y) or (n):\n");
        scanf("%c", &choice);
        if(choice == 'y') {
            create_new_audio();
        } else if(choice == 'n') {
            break;
        }
    }
    for(;;) {
        printf("Do you want to add a new Particle? (y) or (n):\n");
        scanf("%c", &choice);
        if(choice == 'y') {
            create_new_particle();
        } else if(choice == 'n') {
            break;
        }
    }
}
