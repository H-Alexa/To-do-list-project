# To-do-list-project

-initial release-

This is a simple to do list project that allows you to add new tasks and delete existing tasks after successful completion. It is a GUI project implemented using C++.
Detailed walkthrough video given at the last of the readme doc.

Start page:


![ss1](https://user-images.githubusercontent.com/54031572/231008015-3287924e-eb51-4627-b63b-25098781a9d7.jpg)

![ss2](https://user-images.githubusercontent.com/54031572/231008064-e7499a71-6500-490f-a642-bad1b5df3dc9.jpg)

Functions:
Can add items to list.
Can delete items from list.
Can perform data validation. (Doesn't enlist empty characters or strings with lots of spaces or newlines.

Limitations:
Items are volatile.
Can't edit tasks.

This project was done after watching this video( https://youtu.be/FxQTXyR4mjs ). The bugs shown in the yt video are fixed. Some alterations have been done for data validation which is explained below.

https://user-images.githubusercontent.com/54031572/231010360-11ce7f2f-0a1c-4321-b356-4592da3fa78c.mp4

Sorry for the poor quality, for uploading in github the video needed to be compressed to reach size <10 MB. I have just used .Trim() method to check whether there are other characters apart from spaces or newlines in input or not. If present, then has taken the input. Otherwise discarded.



