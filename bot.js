const { chromium } = require('playwright');

async function init_page() {
  const browser = await chromium.launch({ headless: false });
  const context = await browser.newContext();
  const page = await context.newPage();

  await page.goto('https://setwithfriends.com/');
  console.log(await page.title());
  await page.getByRole('button', { name: 'Enter' }).click();
  await page.getByRole('button', { name: 'New Private Game' }).click();
  await page.locator('button:has-text("Start game")').click();
  return page;
  //await browser.close();
}

async function readPage(page) 
{
  console.log(await page.title());


  const cards = await page.locator('.MuiPaper-root > div').all();
  console.log(await cards.count());
  for (const card of cards)
  {
    const text = await card.textContent();
    console.log(`Item text: ${text}`);
  }
}


async function main() {

  const page = await init_page();

  await readPage(page);

}

main();