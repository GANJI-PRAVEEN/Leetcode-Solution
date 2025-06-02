select yesterday.id from Weather yesterday
join Weather today where datediff(yesterday.recordDate , today.recordDate)=1 and yesterday.temperature > today.temperature;
