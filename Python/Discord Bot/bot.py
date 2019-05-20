import discord
from discord.ext import commands
import random

TOKEN = ''

bot = commands.Bot(command_prefix='')
@bot.event
async def on_ready():
    print('Logged in as')
    print(bot.user.name)
    print(bot.user.id)
    print('------')

input_text =


bot.run(TOKEN)
