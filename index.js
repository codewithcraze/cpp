import fs from 'fs';

// Input and output file paths
const inputFile = 'learn.txt';
const outputFile = 'unique_urls.txt';

// Read all URLs from input file
const urls = fs.readFileSync(inputFile, 'utf-8')
    .split('\n')          // split by line
    .map(line => line.trim()) // remove spaces
    .filter(Boolean);     // remove empty lines

// Use Set to remove duplicates
const uniqueUrls = [...new Set(urls)];

// Write unique URLs to output file (one per line)
fs.writeFileSync(outputFile, uniqueUrls.join('\n'));

console.log(`✅ ${uniqueUrls.length} unique URLs saved to ${outputFile}`);
