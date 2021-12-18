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
<p><img src="https://lh3.googleusercontent.com/fife/AAWUweXJ0cqJTT9yQKcJLtwWGiwWtPHNEDslHPKHX4X1kVe6rQgvylilLF-veRYypt4GBSyLvxIxgf_NBnjHtnxn2Fl2rCG9K_CXedOrj_bJrCb9PioXvAnjB80D2a0JiKlN0q2BV1EuuyBJM3cF4zWPFrK_ZCTCOgk6yfm_oHXbCRD5ekSx6PWZowFjhlelqWYi70vbxbF-7owTEbR0xGJ5UWBRVcrjVOpbwydnRtH584SyAf-udRqynxx5dkARvue_5rLb3AlWk1Whh5RAajTCkvgW4AK1EAxEA8O7RRdv5iY4lzVDs3q3AZRbzjtEcMSYzmWkkQL8p_EDrIesJH7LgoMswqbennmZJk6drwUTHa71WNQo625rHrt8JnTFp2NSJ6NUYdfE151DOkQJxdNym9DSvMmVbrnafRu51aJyEk-NZaPi9QqR9XVH6-emrRRxPwtjUv7AzXcPG-ChSayDAqQHkr3lHhr_HujkP6v8GJ7Ek8r4JnYpr-zAE-dVjSty9proRJBWXbD01yU5dkvpQ8BYxBlc7e2ec_te5tm6TB70sySlBcXVLOqPu8-fop8WtkFTbITsYDsc-INzU177CpvXsvYDvdM7-Vjdk6bKgADZnufWxZXwwVHX3nUWLGIkV43qQwWrHAA816nxQxJTwIUY5DzuLddsJ_GjRQXqQ61aT__i1tyuH3yLi4vK7uP3y0tMJPLedDnnJIhWBYNk91k-UWk83fL_AC7vRa7_l8D-C2yvENC-iwf1alsjptwYCByUk4cvoQbbeGjgenzsshzjy2SdnkBOlhW0RhNocaOOkBKnMzyLFkr0ULQ3GJD6mguxIJdqG7CRH68a-Pl1_XZ5OfUJI4QYMwJ18C_BT0NWODeldg-inMBEKxh29MLZ8zIS4MpJWytfc0aYgFdNBcCUETBavcrAqinttq3YfZGPw8WbIf54afK3jPAQjIfaGodGy0qtbEUKXmHyIePLx9rw3gC59Uip7NdncRc8NIJMqCAMtXVjI8OnZH58SrmUf0QIwZfzkkGyAQ264nmQQM5bM-25FlpJIfriYAnz6cHoLN6rQkTZCmzi7AUVCMAzfGevw9UFx7Adk3Q3j2fWAD78qvecGiyIZuXCTCXmhoCpCuhUNc9kRCWo-vuahQz9BENvtymh8kyJj-AwA9Niu45XOD043px8s4_OlvbjdNb-VAIlMGryZ3OectBs7BbqDaD0-c9xFugOCttM_4Tn2e-H8yTLttc1BWikI82273CD3G56k1ZH5o07MobdQc12tD5cWWRtP6IS_J6vC4gZEj-jM_8oDNllCH6MjUvSWEbnKAHjXu-avTNzrUCLkVz64DbCiiWOAUu60jM1AWN8OCly30CuyNWg2KreVKFh8v0ZTHyILAKf1MzP5oEXidUEEe-LI36NUuLEj9IOODJtNKK6oW2PpvOdvrH3tbwfAw5Af32BFiYyNrqu2490iqmG_BL2tslQMtXDjyu0mlZt9GxM8YzY6WgpfVl5zzp3Ih2lDolEXcSJTntM3rKIvmz7Bs_Khb9HHj3Y8v3xbcyiXVLvpdX2qNtXukv05Y8x05GDsp59mWwkrLJorkgG-Eh5kPmEPltWHlA2lcAxN1EQIZrs10f7ycuyMRtShH4vymmiTzteLxZle8fCAyBbxx_BmKJiU03YqFCQq2MoFFU43bGBEuxs20FnXFYBEQt2x9yrEJ94GQ16KcLWwIRsBsCuYT4ekjIKE8RHF7VOGT-ZcSkayg9mSYw3FODNxonVjNbYXlbvWIP0-sByOPo5AyfK6kWpGPndsg1T9ogEUTXN32a1CnleRyb_ccDMs5kaSVA_nfqZ7RreaXSj8PavfMwAv9ibYOmS0SjZ76zIcb0dIJC7D_SzT44zdXpMAAXEPWCfTBj6HfJVU3IbzwB8W1vevgtk9MoOuS0_nCHk6jJAUg4gvagi8ZMxVawoSxpBNMpRm28Lnk243cEJkULltNM3uga3nltLoyhNbtYhMlIXtQ7Uynx69zBnO-2WP8uNJpHhrF7ViGFTa2iSNq46iVgfaQIfewvbFprwMCFNRnXhkqi4X3cFJhdRqhqxQ4VhZ_7_kiT-fTb2esYIBMuvrr2P4dbOHbYCSA0XigmI8ZxShCH80p3EZVXWyqOzcscU1aXllhD9_zsxhFEfYV9_RS5KsZJbd3o2Ec1sdUKBxMyqP1GwGSXpZ4ZLdUcoTWYqwpNyDum7Q2kOOSPLw6GxMatMozznrZ5EloGHrwIsWk1-kS48AC1m5pTfynU5_iSSfHKHiVRbHZkbdDKxK1jBuIY_7CWebR24LIvnu7rDrFW3ja3GNWl0nijK6kEcOsZburlDmnHF5PWvipmcDeB1PaRPRv27cZ_jcRStsBskj8G3b_LXndvVsPCdjOi0cspqZTnuaBrDTk8G9HXWdVNmdyGpHz3Ij39iosXmOx6b9IHicOapG3gi66TEsfWLI5TWymjwoOYtgu11lSvmQ8XAyOE59gKGfkqQqcMi5Y--Yn-JpZoOBrEUrWF0Bxvk8nV8JKj7zd5kfAF8EUm7oR3ZjkH5Zzi6XRcYg_0LWSXXUcvvfavBZ_tg5wkFAnvQhUCoKLwnwAzZ8ho7QcQqebX-oYHcC7H4xqhHQml6nVDzq10h-OW1bn6iEUdtnieh2t-XhsPU8inyDsLDXPGjxMwk0GQ7j7zSqqXEZ0vtoNj2L8FhlF7c8SqGAgr1V40fJ75NzGhh5YI6OgI5LU_tAEVD660-H5bLWilHTutoy1x5QcCBnYMkflmBZncyOvV7DAD3C-GpSIRoY_x03-QP7-zb9kU5eqQiaPZ7YacrJrV2fWEpkhlo4fCg94JbSs56TnGDfXyFFSZv2d5ac6ALYDgplpE9p-jO_yEZuaS-3s2vvIv-s0dyr9C9rxdgmDMKFjdu_gYxSxPKvkPt-6RfwBZr_oc2XGWyHa3p2zFBTFMq0-DWxPfRgVStAohx1Jpsf1qm-jojxymwdm6uh4rAaWW8D1k34AwaKNlLLgw7pDEiYhbJ024qaizds4lOaSaTKW_PaZ90YwLfmIMPPjgN6w_1zjpqy2DH5z4W58V2XWqP61jftZGEcTaNVKAFMrDhaEXu9Ci61uHg_mdKuGijvg9YBQ0_bZ54lZzhfwcDKjpvBDrDEJr870M1SQExzMBFYDZnU-SFbDZDJL5S5v_HpecCahdA0B5WCgoM7-a9yIHPB6DK42S2TvEf1NXwhL6kjnIT14togUgFT_iuqBD7CkOdjLLcFgf454nLscb8B00Sr9Py-33zWfD3NAGlp3gqtaCCl8ofj-StlHzvCU_Z1KRBiQp68_YE5GxzGvlXZFchUZ2icvXA1jWsCENTQn5ZYCjmTCs6w6doq4zc920_wFd1tZMGv-W_TVxMNSX5_0FuN92mXZTSgJIEq3iblNqKbhZYgA68q5mH0813hcS2ONU1bTXb0YXwkvN99FQpDCiOrtdzcj2RaYH2H7yjopAJ-oOjUFOfaiYmB8JnOx6vDSz0GFBucXswOS-Nemzfz42at4rRRXstm_Brjpf2JPLOQwLGUMwl3XYddlAuryTyxJRtG6p-PUj6-YTrhXj4T6WAhjYmgmNOSm-tp7lyQMKebPg7mVqkZNuU8BppvTwsWTiYJUZqLAKt7ivGpPlBkWxmu8bcEwQEU_JFWgT3aZRKv9lIUwJGAWt_uyAQIdN3AzPeVnhNBbtF-yrrhxbGd-SLLOiQx61h5ioc86I=s1490-w1490-h647-no" alt="Schematic" /></p>
<br>
<br>
<b> Prototype Board </b>
<p><img src="https://lh3.googleusercontent.com/cFEWzSny9ccC4d_HE8IASWJgXHdl8u-RXzT_TEeWNE-iyhfp9NyLiTfxM5cJoXSZFosWdKZK19vt2ZbRmecgdbaDPPTemqoxb_MeuwmrncJQosgrSmDAabYzOnkEWu5S71KXQWYxnUMIoJl2BU42n01tZPTwKhygag0Ah5SI-17bRR5-WfLz98OFMJ9k_4bPc5eQliZjYWnFDLH_yLVeKES1i7ADf73Vw7brMtxizSIqGZGDEDDAC_2KqrW0WDPaQWnvs8fKQRUDVmUdQQZCCnBNx0QURYSv3gcTCw5eWjwKbgeOhaQIKIB9rrFHgLp58OWtYXJ1Kn1otXfOdVWdYpw0dYs72Cz2Dkwp6EsakRoGNUfZPEtYTr5ZIsj9JJXoKF6XW177EasanWhQxZd-pF7RDV26Kp1ka3C2I1JXXKzWI9bvU3ZtQzG8rOKhkmgYDLj8k1KykYC95zMy82bFdjvPdJZCyRuDCZB6zWf6wEUW_k6uyYwG-nZB6ZenEomgcwrsLf5R2AjF9PllFyK5QEX1MTJLFMRy6Qw-oMzNSP1f3y-DtuQaWvH4AKCNpF_8nBOqh3PW7A2jpOMLACG651VI3dmTwqCpfSbSWzr6lGeBDKGozDUCNh0TFBc6JjV4ARjUFRYOKu3Aq7q0RJVWL69sonvdUf18zGPUgIp8uMwbDEguyBHpM-7cXxcYNbzXNUAWLd-XN-qKLZO5nLM43Hwf=s975-no" alt="Prototype Board" /></p>
<br>
<br>
<b> BreadBoard based testing </b>
<p><img src="https://lh3.googleusercontent.com/KNCvc36VUrslMxsh6HmgmDm3YOIE5rriZh35m3Jh_tQKE1vIxncJQ9UeL9BvH72-x3cRnJxBT2OJ4o7zHGsv2hv3hWVHML6OwoHX1cR3RLsXQI-MtN4q6jbs-hKA7ZZLTGPMRexm3vYKevmCRJZUkNi4ts5JK7wZM2hLY7YpQzJQBDPNLCaAP7MQbGGfoDwEiQckH-RjEJ4XxpLdGNfTUuMhU54wYxUS-FlFjFhMGsDZgHqHCAHEc0aoSaTx-h17VHzn1e0oY7mCy3YJzWBKXtKah7L0en7N_McKMPbu4eX3CoaNEb1K7cpucCAF76_R7e36YmtOPG93sDLarWv7YCSUDajd-rbAE0PWDB91UlcSK-ZMoHE6HF1Q0rOrWRyfEBs9J1Sqe5gSUBvAy0oLEHeemQyq8Ofhw_mydzcYbB_g4xJTV0_fafTNZgmjg38GIcKKTAWLCjsJPOeMuOfzhm5h1X0OvZtVLoGM-YD9ig2uoD5o5zgkX6odojuREnOgi6ZC5FekFVk2FhQ6Jpvy9MeC8vPvBywArM6KvpoCqKN9lV6OcufxVvlg9nMkm8s-I5VU2qhFYb5vx1Ge6IOx6vHoRnC7CPWiHc-CvKhJ2RlDyhEP3VXrD1ZRANMmraztDeo6BIafrkpeM3lvhzD2DIAcsEXcpVTKwZYM0w-uEAE0v4EDGa73ulXWzAkUJXIuE8NhkAklDUBo9MHXvhtkclR4=w1300-h975-no" alt="Prototype Board" /></p>
<br>
<br>

OSH Park Project Link: <a href="https://oshpark.com/shared_projects/O8bRqG8g"><img src="https://oshpark.com/assets/badge-5b7ec47045b78aef6eb9d83b3bac6b1920de805e9a0c227658eac6e19a045b9c.png" alt="Order from OSH Park"></img></a>
