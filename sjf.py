size=input("Enter Number of Processes")

burst_time=[0]*size
process_id=[0]*size
waiting_time=[0]*size
turnaround_time=[0]*size

for i in range(size):

	print " "
	process_id[i]=input("Enter Process_Id")
	burst_time[i]=input("Enter Burst_Time")
	
for i in range(size):

	for j in range(size-1):
	
		if burst_time[j]>burst_time[j+1]:
	
			process_id[j],process_id[j+1]=process_id[j+1],process_id[j]
			burst_time[j],burst_time[j+1]=burst_time[j+1],burst_time[j]

i=1
			
while i<size:

	waiting_time[i]=waiting_time[i-1]+burst_time[i-1]
	i=i+1
	
for i in range(size):

	turnaround_time[i]=burst_time[i]+waiting_time[i]
	
print " "
print "Process_Id    Burst_Time    Turnaround_Time    Waiting_Time"
print " "

for i in range(size);

	print "    ",process_id[i],"             ",burst_time[i],"              ",turnaround_time[i],"             ",waiting_time[i]
	
total=0

for i in range(size):

	total+=turnaround_time[i]
	
average=float(total)/float(size)

print "Average Turnaround_Time = ",average
