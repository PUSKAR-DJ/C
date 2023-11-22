//Job Scheduling by BARD
#include <stdio.h>

struct process {
  int process_id;
  int arrival_time;
  int burst_time;
  int completion_time;
  int waiting_time;
  int turn_around_time;
};

void calculate_waiting_time(struct process processes[], int n) {
  for (int i = 0; i < n; i++) {
    processes[i].waiting_time = 0;
    for (int j = 0; j < i; j++) {
      processes[i].waiting_time += processes[j].burst_time;
    }
  }
}

void calculate_turn_around_time(struct process processes[], int n) {
  for (int i = 0; i < n; i++) {
    processes[i].turn_around_time = processes[i].waiting_time + processes[i].burst_time;
  }
}

void print_table(struct process processes[], int n) {
  printf("\n\tProcess ID\tArrival Time\tBurst Time\tWaiting Time\tTurn Around Time\n");
  for (int i = 0; i < n; i++) {
    printf("\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", processes[i].process_id, processes[i].arrival_time, processes[i].burst_time, processes[i].waiting_time, processes[i].turn_around_time);
  }
}

void fcfs_scheduling(struct process processes[], int n) {
  for (int i = 0; i < n; i++) {
    processes[i].completion_time = processes[i].arrival_time + processes[i].burst_time;
  }

  calculate_waiting_time(processes, n);
  calculate_turn_around_time(processes, n);
  print_table(processes, n);
}

int main() {
  int n;
  printf("Enter the number of processes: ");
  scanf("%d", &n);

  struct process processes[n];

  for (int i = 0; i < n; i++) {
    printf("Enter process ID for process %d: ", i + 1);
    scanf("%d", &processes[i].process_id);

    printf("Enter arrival time for process %d: ", i + 1);
    scanf("%d", &processes[i].arrival_time);

    printf("Enter burst time for process %d: ", i + 1);
    scanf("%d", &processes[i].burst_time);
  }

  printf("\nFCFS Scheduling:\n");
  fcfs_scheduling(processes, n);

  return 0;
}
