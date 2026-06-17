const axios = require("axios");

const res = await axios.get(
  " https://v3.football.api-sports.io/fixtures?league=1&live=all",
  {
    headers: {
      "x-apisports-key": ec14f31fdfa54e68d80d241caa82c7d5,
    },
  }
);

console.log(res.data);