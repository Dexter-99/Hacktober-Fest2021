import tkinter as tk
from tkinter import ttk

win=tk.Tk()
win.title('Menubar creation')

def func():
    print('Func called')

# menubar=tk.Menu(win)
# menubar.add_command(label='File',command=func)
# menubar.add_command(label='Edit',command=func)
# menubar.add_command(label='Help',command=func)
# menubar.add_command(label='View',command=func)

#Dropdown_menubar -------> like in files etc we have different options to perform

main_menu=tk.Menu(win)
file_menu=tk.Menu(main_menu,tearoff=0)    #---------> teraoff se extra line nhi aygi dropdown me 
file_menu.add_command(label='New',command=func)
file_menu.add_command(label='Save',command=func)
file_menu.add_separator()         # Creates a seperating line
file_menu.add_command(label='Open',command=func)

Edit_menu=tk.Menu(main_menu,tearoff=0)
Edit_menu.add_command(label='Undo',command=func)
Edit_menu.add_command(label='Redo',command=func)
Edit_menu.add_command(label='cut',command=func)

main_menu.add_cascade(label='File',menu=file_menu)
main_menu.add_cascade(label='Edit',menu=Edit_menu)

win.config(menu=main_menu)


win.mainloop()