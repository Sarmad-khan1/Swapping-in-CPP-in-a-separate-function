void generateMeritList()
{
	aggregate();
	// sort elements of the array to create a merit list as per highest merit aggregate.
	for (int i = 0; i < studentCount; i++)
	{
		for (int j = i + 1; j < studentCount; j++)
		{
			if (merit[i] < merit[j])
			{
				// swap elements to position the students as per merit criteria in a list.
				float tempMerit = merit[i];
				merit[i] = merit[j];
				merit[j] = tempMerit;

				string tempstudent = student[i];
				student[i] = student[j];
				student[j] = tempstudent;

				float temprolls = rolls[i];
				rolls[i] = rolls[j];
				rolls[j] = temprolls;

				float tempfsc = fsc[i];
				fsc[i] = fsc[j];
				fsc[j] = tempfsc;

				float tempecat = ecat[i];
				ecat[i] = ecat[j];
				ecat[j] = tempecat;
			}
		}
	}
}
