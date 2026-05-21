const apiUrls = [
  'https://api.devfolio.co/api/hackathons?page=1',
  'https://api.devfolio.co/api/hackathons?page=2',
//   'https://api.unstop.com/api/public/opportunity/search-result',
  'https://devpost.com/api/hackathons?page=2',
//   'https://hack2skill.com/api/events'
];

async function callAllApis() {
  try {
    const responses = await Promise.all(apiUrls.map(url => fetch(url)));
    const data = await Promise.all(responses.map(res => res.json()));
    console.log(data); // Array of results from all 4 APIs
  } catch (error) {
    console.error("One or more APIs failed", error);
  }
}
callAllApis()