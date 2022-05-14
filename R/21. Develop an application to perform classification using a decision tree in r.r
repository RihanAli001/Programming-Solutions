library(datasets)
library(caTools)
library(party)
library(dplyr)
library(magrittr)

data("readingSkills")
print(head(readingSkills))

sample_data = sample.split(readingSkills, SplitRatio = 0.8)
train_data <- subset(readingSkills, sample_data == TRUE)
test_data <- subset(readingSkills, sample_data == FALSE)

model<- ctree(nativeSpeaker ~ ., train_data)
plot(model)
