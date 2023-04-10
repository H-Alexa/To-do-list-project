﻿//---------------------------------------------------------------------------

#include <fmx.h>
#include<string.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::addTask(TObject *Sender)
{
	String newTask = taskAdd->Text;
	bool ok= false;

	if(newTask.Trim()!="")
	{
		taskList->Items->Add(newTask);
	}
    taskAdd->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::removeItem(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	int index = Item->Index;
    taskList->Items->Delete(index);
}
//---------------------------------------------------------------------------
