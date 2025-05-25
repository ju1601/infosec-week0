#to do list
def todo():
    f=open('todo.txt','w')
    x=int(input("enter the number of tasks to be done: "))
    for i in range(x):
        f.write(str(i)+". "+input("enter the task: ")+"\n")

def todo2():
    f=open('todo2.txt','w+')
    x=int(input("enter the number of users: "))
    for i in range(x):
        name=input("enter the user name: ")
        g=[name+":"+'\n']
        print("enter tasks and put in . to stop")
        u=1
        while True:
            k=input("Enter the task: ")
            if k !=".":
                g.append(str(u)+". "+str(k)+'\n')
            else:
                break
            u+=1
        f.writelines(g)
        f.write("\n")