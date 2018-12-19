let foo = () => {
    /* Two strings with levenshtein distance of 5 */
    let string1 = "Lorem ipsum do";
    let string2 = "Loram aps da"; 

    Levenshtein.String.distance(string1, string2);
}