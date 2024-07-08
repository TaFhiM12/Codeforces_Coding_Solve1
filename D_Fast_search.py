class Process:
    def __init__(self, pid, burst_time, arrival_time):
        self.pid = pid
        self.burst_time = burst_time
        self.arrival_time = arrival_time
        self.completion_time = 0
        self.waiting_time = 0
        self.turnaround_time = 0


def find_waiting_and_turnaround_time(processes):
    n = len(processes)
    processes[0].waiting_time = 0
    processes[0].completion_time = processes[0].burst_time
    processes[0].turnaround_time = processes[0].completion_time - processes[0].arrival_time

    for i in range(1, n):
        processes[i].waiting_time = max(0, processes[i - 1].completion_time - processes[i].arrival_time)
        processes[i].completion_time = processes[i - 1].completion_time + processes[i].burst_time
        processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time


def find_average_time(processes):
    total_waiting_time = sum(process.waiting_time for process in processes)
    total_turnaround_time = sum(process.turnaround_time for process in processes)
    n = len(processes)

    print("Processes   Burst Time   Arrival Time   Waiting Time   Turn-Around Time   Completion Time")
    for process in processes:
        print(f"{process.pid}\t\t{process.burst_time}\t\t{process.arrival_time}\t\t"
              f"{process.waiting_time}\t\t{process.turnaround_time}\t\t{process.completion_time}")

    print(f"Average waiting time = {total_waiting_time / n}")
    print(f"Average turn around time = {total_turnaround_time / n}")


def main():
    processes = [
        Process(1, 3, 1),
        Process(2, 4, 2),
        Process(3, 3, 1)
    ]

    processes.sort(key=lambda x: x.arrival_time)
    find_waiting_and_turnaround_time(processes)
    find_average_time(processes)


if __name__ == "__main__":
    main()
