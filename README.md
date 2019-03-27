# IR-Proximity-Sensor
Tunable IR based proximity sensor with a digital output

<ul>
<li>Autodesk Eagle .brd and .sch files included with all non-standard libs</li>
<li>Sample Arduino code also for tuning and testing included</li>
<li>Potentiometer used to adjust the range</li>
<li>Detection range of about 9cm (3.5 in)</li>
</ul>
<p><strong>Important Notes:</strong></p>
<ul class="remarkup-list">
<li class="remarkup-list-item">The 220 &Omega; resistor is a pull-up in parallel with the LED. The LED needs to be one with an internal resistance (Standard RED 5mm LED with internal resistance is recommended)</li>
<li class="remarkup-list-item">The board has a normal HIGH and triggered LOW. The LED will be ON when the sensor hasn't been triggered and will turn OFF when it has.</li>
</ul>
<br>
<br>
<b> BOM: </b>
<table style="width: 340px;">
<tbody>
<tr>
<td style="width: 224px;">
<p><strong>Part</strong></p>
</td>
<td style="width: 90px;">
<p><strong>Part no.</strong></p>
</td>
<td style="width: 25px;">
<p><strong>Quantity</strong></p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>IR Reflective Sensor</p>
</td>
<td style="width: 90px;">
<p>TCRT 5000</p>
</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>Red LED (internal resistor)</p>
</td>
<td style="width: 90px;">&nbsp;</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>100 ohm Resistor</p>
</td>
<td style="width: 90px;">&nbsp;</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>220 ohm Resistor</p>
</td>
<td style="width: 90px;">&nbsp;</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>4.7k ohm Resistor</p>
</td>
<td style="width: 90px;">&nbsp;</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>10k Multi-turn POT</p>
</td>
<td style="width: 90px;">&nbsp;</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>0.1uF Ceramic Capacitor</p>
</td>
<td style="width: 90px;">&nbsp;</td>
<td style="width: 25px;">
<p>2</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>TL081 op-amp</p>
</td>
<td style="width: 90px;">
<p>TL081</p>
</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>LM311N op-amp</p>
</td>
<td style="width: 90px;">
<p>LM311N</p>
</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>Break Away Headers</p>
</td>
<td style="width: 90px;">&nbsp;</td>
<td style="width: 25px;">
<p>6</p>
</td>
</tr>
</tbody>
</table>
<br>
<br>
<b> Schematic </b>
<p><img src="https://lh3.googleusercontent.com/Zwb_SkjRGWa19hBm1e4YVG9eZ23glGA6NjS-Ou1clzG_oZjOFmPfgkMU8Cp334mmLKKAjStN9HKiv2pWfvJR2-hTuLmWyR8rWoQOM7ayoLPobvB7CmQ-dfeZYlmZo9L1Wi9_KP8W2_uJr8D0wNGXsQQSpvhhvg8mz8kDS5CAi4ykdRVQheV74HC4zo0v5zkerF4vZkbousf5RiH_KLvuS8Llrjs1dhtjkYM-MijDMBwaktunjV010px6oPd78s-cyNc4TQBTKt9N7yJLx2kM9ZHCTrbilLN_2Hra7wP7xL3pwj1ZeHxO5uo4zHPfYah_iJ3MJCyRHsIzbPK4ZB9vVi52PL1uQwYg5UyD7BXRonCWu0UCDisdlhRqaIUkuDGP3NU6K4zZXXNWVuxuSWk6KN1QmPfbB7H_pQ6c6z2nli-gSeCfMHAZPdB5eizKbrXndTJUzZG39JknZ1oxK8gkzMEgsBV8jNmg_fiKLtT1w2CQ6GuRNpTRqC7p0bxaDu1cHEFVb5VeQJyPk7cohww0hd_GRQ7aNg3djUZwAVCC1HDRR9v4lE6sAoWaw8-9kwiJ0NFAgWW4Cx5o6IzdE_UPnTP-PvRc4I_q4wulW1vOqoA6WQu6DR8ch-eUSng8WL1XrTcQPgox8_Rj7cVs4KgAeXGLxpkLgvk=w1490-h647-no" alt="Schematic" /></p>
<br>
<br>
<b> Prototype Board </b>
<p><img src="https://lh3.googleusercontent.com/gvSoMGs5gpEqNq5kQ4bKQA00t61IJcTBuzISwLatA0wFgPTwVa4umzy1J7WFPzYABoauxvNZ3IemVxt44_u3wGDseMcylE17G3Osf3VbzBvXPLmhv-YTjbwJ-iJk_RlJqQ3Md2W4tocziQhyi4bHT98rbIriZWs1QBNeaNBfID5Jf_tgrBd7yk-kDfMxaZepHhADgvXd4sknV4axEIJG-Gdi4We3iCnnE1tJU4FwnwWkGia6l0wSpwqammB-8_oun9vxwywDYXaJU5duVYUTe4HZZ0G0XVuCWacgxA3G6enlCvkpRi6m3vWD9zNpledaLCw8Qa1RQQnHcYpvYuQTLExs92DLanzGYXHfDDJ6_maywd-6syG4qWzALuNWJtMLjgxk7Hz9iemSHIJaQ8wB7VwEDn0Hy6fB9OlIw3K_eON4d4HryxLnHAjmD8_V9_YLxE3RqYOSVOQ6XFjDtM7VQfCNqdGuK4oEwVgk4K89QPXnnWYrPRHSVKC4_UnGh2NIqoWDtybgwNdGdrt4KAce0_uVSaeaQRd06yx4mpiB_eruUhG7Z0tuzw5kLGgcsAWyMom_UIsPHalPUGtBloBU-zOLf2ME1VK12jDi=s975-no" alt="Prototype Board" /></p>
<br>
<br>
<b> BreadBoard based testing </b>
<p><img src="https://lh3.googleusercontent.com/KNCvc36VUrslMxsh6HmgmDm3YOIE5rriZh35m3Jh_tQKE1vIxncJQ9UeL9BvH72-x3cRnJxBT2OJ4o7zHGsv2hv3hWVHML6OwoHX1cR3RLsXQI-MtN4q6jbs-hKA7ZZLTGPMRexm3vYKevmCRJZUkNi4ts5JK7wZM2hLY7YpQzJQBDPNLCaAP7MQbGGfoDwEiQckH-RjEJ4XxpLdGNfTUuMhU54wYxUS-FlFjFhMGsDZgHqHCAHEc0aoSaTx-h17VHzn1e0oY7mCy3YJzWBKXtKah7L0en7N_McKMPbu4eX3CoaNEb1K7cpucCAF76_R7e36YmtOPG93sDLarWv7YCSUDajd-rbAE0PWDB91UlcSK-ZMoHE6HF1Q0rOrWRyfEBs9J1Sqe5gSUBvAy0oLEHeemQyq8Ofhw_mydzcYbB_g4xJTV0_fafTNZgmjg38GIcKKTAWLCjsJPOeMuOfzhm5h1X0OvZtVLoGM-YD9ig2uoD5o5zgkX6odojuREnOgi6ZC5FekFVk2FhQ6Jpvy9MeC8vPvBywArM6KvpoCqKN9lV6OcufxVvlg9nMkm8s-I5VU2qhFYb5vx1Ge6IOx6vHoRnC7CPWiHc-CvKhJ2RlDyhEP3VXrD1ZRANMmraztDeo6BIafrkpeM3lvhzD2DIAcsEXcpVTKwZYM0w-uEAE0v4EDGa73ulXWzAkUJXIuE8NhkAklDUBo9MHXvhtkclR4=w1300-h975-no" alt="Prototype Board" /></p>
<br>
<br>

OSH Park Project Link: <a href="https://oshpark.com/shared_projects/O8bRqG8g"><img src="https://oshpark.com/assets/badge-5b7ec47045b78aef6eb9d83b3bac6b1920de805e9a0c227658eac6e19a045b9c.png" alt="Order from OSH Park"></img></a>
