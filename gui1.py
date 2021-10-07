import tkinter as tk
from tkinter import ttk
import os,shutil
import time

win=tk.Tk()
win.title('Practice')

label_frame=ttk.Labelframe(win,text='THIS IS A LABEL FRAME')
label_frame.grid(row=0,column=0,padx=30,pady=20)

path_label=ttk.Label(label_frame,text='Enter the path : ')
path_label.grid(row=1,columnspan=2,sticky=tk.W)

path_box_var=tk.StringVar()
entry_box=ttk.Entry(label_frame,width=20,textvariable=path_box_var)
entry_box.grid(row=1,column=3)

def sub():
    folderpath=path_box_var
    func1()
    print(folderpath)

submit=ttk.Button(label_frame,text="Submit",command=sub)
submit.grid(row=2,column=2)




def func1():
    t1=time.time()
    dict_extension={
        'audio_extension':('.mp3','m4a'),
        'video_extension':('.mp4','.mkv'),
        'document_extension':('.pdf','.txt')
    }

    folderpath=
    def file_finder(folderpath,file_extension):
        files=[]
        for file in os.listdir(folderpath):
            for extension in file_extension:
                if file.endswith(extension):
                    files.append(file)
        return files
        # return (files for file1 in os.listdir(folderpath) for extension in file_extension if file1.endswith(extension))

    for extension_type,extension_tuple in dict_extension.items():
        folder_name=extension_type.split('_')[0] + 'files'
        folder_path=os.path.join(folderpath,folder_name)
        if os.path.exists(folder_path):
            print('Folders already exist..')
        else:
            os.mkdir(folder_path)
        for item in file_finder(folderpath,extension_tuple):
            item_path=os.path.join(folderpath,item)
            item_new_path=os.path.join(folder_path,item)
            shutil.move(item_path,item_new_path)

    t2=time.time()
    print(t2-t1)

win.mainloop()