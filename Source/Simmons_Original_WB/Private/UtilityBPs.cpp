// Fill out your copyright notice in the Description page of Project Settings.

#include "UtilityBPs.h"
#include <direct.h>

FString UUtilityBPs::GetWorkingDirectory()
{
	char buffer[FILENAME_MAX];
	FString classified = "[CLASSIFIED]\\";
	int32 end;

	_getcwd(buffer, FILENAME_MAX);

	FString result(buffer);
	FString substr = "";
	int32 spot = result.Find("C:\\Users");

	if (spot >= 0)
	{
		for (int32 i = 9; i < result.Len(); ++i)
		{
			substr += result[i];
			if (result[i] == '\\')
			{
				end = i;
				i = result.Len();
			}
		}
	}

	return result.Replace(*substr, *classified);
}