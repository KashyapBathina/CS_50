import csv
import sys


def main():

    # TODO: Check for command-line usage
    if sys.argv < 3
    print("Usage: python dna.py data.csv sequence.txt")

    # TODO: Read database file into a variable
    with open(argv[1], "r") as csvfile
        reader = csv.DictReader(csvfile)
        sequence = list(reader)

    # TODO: Read DNA sequence file into a variable
    with open(argv[2], 'r') as dnafile:
        dna = dnafile.read()

    # TODO: Find longest match of each STR in DNA sequence
     max_counts = []
    for i in range(1, len(reader.fieldnames)):
        STR = reader.fieldnames[i]
        max_counts.append(0)
    # Loop through sequence to find STR
        for j in range(len(sequence)):
            STR_count = 0
            # If match found, start counting repeats
            if sequence[j:(j + len(STR))] == STR:
                k = 0
                while sequence[(j + k):(j + k + len(STR))] == STR:
                    STR_count += 1
                    k += len(STR)
                # If new maximum of repeats, update max_counts
                if STR_count > max_counts[i - 1]:
                    max_counts[i - 1] = STR_count


    # TODO: Check database for matching profiles

    return


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
