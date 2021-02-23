1->  feature selection methods
=> tf-idf +ngram => vectorization methods
=> Bag of words => 2 methods =>

tfidf => (ngram + bag of words)

Task???
w2v   different separate methods
tfidfw2v
avg tfidfw2v

modelling n-gram frequency
new features=> text to vector=>
from text we can extract some more new features => 
=> Hashtags in tweet text
1. Special set of words => click for offer , register, Abusive words
2. Urls => filter out with the blacked list Urls(https)
3. User listed (how many times) =>
4. Age of account
5. Ratio of [following count/followers count]

feature extract => (tf-idf + bag of words)
feature selection => n-gram => tf-idf  
feature 

=>Remove punctuation, Normalise whitespace, Strip stop words, To lowercase
,Strip stop words, Divide emojis and alphanumeric characters,Word stemming
Feature matrix generation


==>

                          <=======>
                        Labeling of datasets
file:///G:/MTP/Research%20Papers/New%20folder/08443779.pdf
In this research papers first they apply word filter then after that 
use URL filter(blackedlist url, secure url)
Spam Word Filter: For example, Billion dollars, Dear friend, Free sample, Brand new
pager, Dear somebody, Free trial and more to be the rules in
the Spam Word Filter.
3) URL Filter: We take the link to check that it is a
shortened URL. Then we find the destination link and
apply only domain name to the rules of the Blacklist domain
that will be taken from URLBlacklist.com. [16] After that, we
will update the Official domain to the URL Filter.



file:///G:/MTP/Research%20Papers/sir/jmromo-eswa-2013.pdf
file:///G:/MTP/Research%20Papers/sir/1-s2.0-S0925231218308798-main.pdf

For labeliing

=IF(OR(AND(F2<G2,H2=FALSE),AND(COUNT(SEARCH({"offer","register","sex","Click here","extra","guarantee","discount","deal","collect","buy","apply now","bonus","free","sales","unlimited","win","purchase","order now","lowest"},B5))>2)),"Spam", "Normal")


