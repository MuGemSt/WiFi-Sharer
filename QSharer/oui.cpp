#include "oui.h"

oui::oui()
{
}

oui::~oui()
{
}

QString oui::getCompanyId(QString Mac)
{
	QString pMac = Mac.left(8);
	pMac = pMac.remove(":");

	return Translate(pMac);
}

QString oui::Translate(QString pMac)
{
	QString cid = "";
	UINT32 bcd = pMac.toInt(NULL, 16);
	switch (bcd)
	{
	case 0xE043DB:
		cid = "Shenzhen ViewAt Technology Co.,Ltd.";
		break;
	case 0x2405F5:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0x3CD92B:
		cid = "Hewlett Packard";
		break;
	case 0x9C8E99:
		cid = "Hewlett Packard";
		break;
	case 0xB499BA:
		cid = "Hewlett Packard";
		break;
	case 0x1CC1DE:
		cid = "Hewlett Packard";
		break;
	case 0x3C3556:
		cid = "Cognitec Systems GmbH";
		break;
	case 0x0050BA:
		cid = "D-Link Corporation";
		break;
	case 0x00179A:
		cid = "D-Link Corporation";
		break;
	case 0x1CBDB9:
		cid = "D-Link International";
		break;
	case 0x9094E4:
		cid = "D-Link International";
		break;
	case 0x28107B:
		cid = "D-Link International";
		break;
	case 0x1C7EE5:
		cid = "D-Link International";
		break;
	case 0xC4A81D:
		cid = "D-Link International";
		break;
	case 0x18622C:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x7C03D8:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xE8F1B0:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x00F871:
		cid = "DGS Denmark A/S";
		break;
	case 0x20BB76:
		cid = "COL GIOVANNI PAOLO SpA";
		break;
	case 0x2C228B:
		cid = "CTR SRL";
		break;
	case 0x348AAE:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xBCEC23:
		cid = "SHENZHEN CHUANGWEI-RGB ELECTRONICS CO.,LTD";
		break;
	case 0xAC06C7:
		cid = "ServerNet S.r.l.";
		break;
	case 0xCC46D6:
		cid = "Cisco Systems, Inc";
		break;
	case 0x48AD08:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x2CAB00:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x00E0FC:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x24DF6A:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x009ACD:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x38F23E:
		cid = "Microsoft Mobile Oy";
		break;
	case 0x58AC78:
		cid = "Cisco Systems, Inc";
		break;
	case 0x907F61:
		cid = "Chicony Electronics Co., Ltd.";
		break;
	case 0x28BC18:
		cid = "SourcingOverseas Co. Ltd";
		break;
	case 0x807ABF:
		cid = "HTC Corporation";
		break;
	case 0x409F87:
		cid = "Jide Technology (Hong Kong) Limited";
		break;
	case 0x3C5AB4:
		cid = "Google, Inc.";
		break;
	case 0x001A11:
		cid = "Google, Inc.";
		break;
	case 0xD83C69:
		cid = "Shenzhen TINNO Mobile Technology Corp.";
		break;
	case 0x74AC5F:
		cid = "Qiku Internet Network Scientific (Shenzhen) Co., Ltd.";
		break;
	case 0xBC83A7:
		cid = "SHENZHEN CHUANGWEI-RGB ELECTRONICS CO.,LTD";
		break;
	case 0x000347:
		cid = "Intel Corporation";
		break;
	case 0x001175:
		cid = "Intel Corporation";
		break;
	case 0x0013E8:
		cid = "Intel Corporate";
		break;
	case 0x001302:
		cid = "Intel Corporate";
		break;
	case 0xE4F89C:
		cid = "Intel Corporate";
		break;
	case 0xA402B9:
		cid = "Intel Corporate";
		break;
	case 0x4C3488:
		cid = "Intel Corporate";
		break;
	case 0x000D0B:
		cid = "BUFFALO.INC";
		break;
	case 0x000740:
		cid = "BUFFALO.INC";
		break;
	case 0x0024A5:
		cid = "BUFFALO.INC";
		break;
	case 0xDCFB02:
		cid = "BUFFALO.INC";
		break;
	case 0xF4CE46:
		cid = "Hewlett Packard";
		break;
	case 0x001CC4:
		cid = "Hewlett Packard";
		break;
	case 0x0025B3:
		cid = "Hewlett Packard";
		break;
	case 0x001871:
		cid = "Hewlett Packard";
		break;
	case 0x000BCD:
		cid = "Hewlett Packard";
		break;
	case 0x000E7F:
		cid = "Hewlett Packard";
		break;
	case 0x000F20:
		cid = "Hewlett Packard";
		break;
	case 0x00110A:
		cid = "Hewlett Packard";
		break;
	case 0x001321:
		cid = "Hewlett Packard";
		break;
	case 0x001635:
		cid = "Hewlett Packard";
		break;
	case 0x0017A4:
		cid = "Hewlett Packard";
		break;
	case 0x000802:
		cid = "Hewlett Packard";
		break;
	case 0x90E7C4:
		cid = "HTC Corporation";
		break;
	case 0x74A78E:
		cid = "zte corporation";
		break;
	case 0xD860B0:
		cid = "bioMérieux Italia S.p.A.";
		break;
	case 0x8038BC:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xD440F0:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x64A651:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xE8CD2D:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xACE215:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xEC233D:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x78F5FD:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x80B686:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x10C61F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x8853D4:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x0C37DC:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xBC7670:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x24DBAC:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x0021E8:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x006057:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x0007D8:
		cid = "Hitron Technologies. Inc";
		break;
	case 0x84742A:
		cid = "zte corporation";
		break;
	case 0x681AB2:
		cid = "zte corporation";
		break;
	case 0xE005C5:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xA0F3C1:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x8C210A:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xEC172F:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xEC888F:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x14CF92:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x645601:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x14CC20:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xBC4699:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x0C45BA:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x847778:
		cid = "Cochlear Limited";
		break;
	case 0x0453D5:
		cid = "Sysorex Global Holdings";
		break;
	case 0xCCA223:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xE8088B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x60E701:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x000883:
		cid = "Hewlett Packard";
		break;
	case 0xC4346B:
		cid = "Hewlett Packard";
		break;
	case 0x8CDCD4:
		cid = "Hewlett Packard";
		break;
	case 0x3464A9:
		cid = "Hewlett Packard";
		break;
	case 0xD4C9EF:
		cid = "Hewlett Packard";
		break;
	case 0xA45D36:
		cid = "Hewlett Packard";
		break;
	case 0xA0D3C1:
		cid = "Hewlett Packard";
		break;
	case 0x40A8F0:
		cid = "Hewlett Packard";
		break;
	case 0x6C3BE5:
		cid = "Hewlett Packard";
		break;
	case 0x082E5F:
		cid = "Hewlett Packard";
		break;
	case 0x28924A:
		cid = "Hewlett Packard";
		break;
	case 0x10604B:
		cid = "Hewlett Packard";
		break;
	case 0x308D99:
		cid = "Hewlett Packard";
		break;
	case 0x0030C1:
		cid = "Hewlett Packard";
		break;
	case 0xFC3FDB:
		cid = "Hewlett Packard";
		break;
	case 0x4CA161:
		cid = "Rain Bird Corporation";
		break;
	case 0x7C6193:
		cid = "HTC Corporation";
		break;
	case 0x001217:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x000C41:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x000F66:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x44E08E:
		cid = "Cisco SPVTG";
		break;
	case 0x185933:
		cid = "Cisco SPVTG";
		break;
	case 0xE448C7:
		cid = "Cisco SPVTG";
		break;
	case 0x24767D:
		cid = "Cisco SPVTG";
		break;
	case 0x2CABA4:
		cid = "Cisco SPVTG";
		break;
	case 0x0002C7:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x04766E:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x006B8E:
		cid = "Shanghai Feixun Communication Co.,Ltd.";
		break;
	case 0xAC853D:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x74882A:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x78D752:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xE0247F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x00464B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x707BE8:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x548998:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x0819A6:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x3CF808:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xB41513:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x283152:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xDCD2FC:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x0003DD:
		cid = "Comark Interactive Solutions";
		break;
	case 0x00107B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00906D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0090BF:
		cid = "Cisco Systems, Inc";
		break;
	case 0x005080:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00E018:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x000C6E:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x001BFC:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x001E8C:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x0015F2:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x002354:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x001FC6:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x60182E:
		cid = "ShenZhen Protruly Electronic Ltd co.";
		break;
	case 0xF4CFE2:
		cid = "Cisco Systems, Inc";
		break;
	case 0x501CBF:
		cid = "Cisco Systems, Inc";
		break;
	case 0x285FDB:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x404D8E:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x781DBA:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x001E10:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x88F031:
		cid = "Cisco Systems, Inc";
		break;
	case 0x508789:
		cid = "Cisco Systems, Inc";
		break;
	case 0x381C1A:
		cid = "Cisco Systems, Inc";
		break;
	case 0xF40F1B:
		cid = "Cisco Systems, Inc";
		break;
	case 0xBC671C:
		cid = "Cisco Systems, Inc";
		break;
	case 0xA0ECF9:
		cid = "Cisco Systems, Inc";
		break;
	case 0xD46D50:
		cid = "Cisco Systems, Inc";
		break;
	case 0x1CE85D:
		cid = "Cisco Systems, Inc";
		break;
	case 0xC47295:
		cid = "Cisco Systems, Inc";
		break;
	case 0xA0554F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x84B802:
		cid = "Cisco Systems, Inc";
		break;
	case 0xBCC493:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001947:
		cid = "Cisco SPVTG";
		break;
	case 0x0022CE:
		cid = "Cisco SPVTG";
		break;
	case 0xF02929:
		cid = "Cisco Systems, Inc";
		break;
	case 0xECE1A9:
		cid = "Cisco Systems, Inc";
		break;
	case 0x7C69F6:
		cid = "Cisco Systems, Inc";
		break;
	case 0xC08C60:
		cid = "Cisco Systems, Inc";
		break;
	case 0xC0255C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x885A92:
		cid = "Cisco Systems, Inc";
		break;
	case 0xE4C722:
		cid = "Cisco Systems, Inc";
		break;
	case 0xC07BBC:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0090F2:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00173B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00400B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x006009:
		cid = "Cisco Systems, Inc";
		break;
	case 0x006047:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0006C1:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00E014:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00E01E:
		cid = "Cisco Systems, Inc";
		break;
	case 0xACF2C5:
		cid = "Cisco Systems, Inc";
		break;
	case 0x84285A:
		cid = "Saffron Solutions Inc";
		break;
	case 0x80A1AB:
		cid = "Intellisis";
		break;
	case 0xF832E4:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x0010FF:
		cid = "Cisco Systems, Inc";
		break;
	case 0x34BDC8:
		cid = "Cisco Systems, Inc";
		break;
	case 0x54A274:
		cid = "Cisco Systems, Inc";
		break;
	case 0x5897BD:
		cid = "Cisco Systems, Inc";
		break;
	case 0x046C9D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x141357:
		cid = "ATP Electronics, Inc.";
		break;
	case 0xF44B2A:
		cid = "Cisco SPVTG";
		break;
	case 0x3C8CF8:
		cid = "TRENDnet, Inc.";
		break;
	case 0x78D6B2:
		cid = "Toshiba";
		break;
	case 0xC04A09:
		cid = "Zhejiang Everbright Communication Equip. Co,. Ltd";
		break;
	case 0xF00D5C:
		cid = "JinQianMao  Technology Co.,Ltd.";
		break;
	case 0x2C081C:
		cid = "OVH";
		break;
	case 0x30E090:
		cid = "Linctronix Ltd,";
		break;
	case 0x70BF3E:
		cid = "Charles River Laboratories";
		break;
	case 0xD848EE:
		cid = "Hangzhou Xueji Technology Co., Ltd.";
		break;
	case 0x88C242:
		cid = "Poynt Co.";
		break;
	case 0xE8343E:
		cid = "Beijing Infosec Technologies Co., LTD.";
		break;
	case 0xC4ADF1:
		cid = "GOPEACE Inc.";
		break;
	case 0x58F496:
		cid = "Source Chain";
		break;
	case 0x80B709:
		cid = "Viptela, Inc";
		break;
	case 0x741865:
		cid = "Shanghai DareGlobal Technologies Co.,Ltd";
		break;
	case 0x0084ED:
		cid = "Private";
		break;
	case 0xDCDC07:
		cid = "TRP Systems BV";
		break;
	case 0x080A4E:
		cid = "Planet Bingo® �?3rd Rock Gaming®";
		break;
	case 0x0C1A10:
		cid = "Acoustic Stream";
		break;
	case 0xE4A387:
		cid = "Control Solutions LLC";
		break;
	case 0xDC82F6:
		cid = "iPort";
		break;
	case 0xC49E41:
		cid = "G24 Power Limited";
		break;
	case 0xD03E5C:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xC8A9FC:
		cid = "Goyoo Networks Inc.";
		break;
	case 0xC49FF3:
		cid = "Mciao Technologies, Inc.";
		break;
	case 0x7C2BE1:
		cid = "Shenzhen Ferex Electrical Co.,Ltd";
		break;
	case 0x30FFF6:
		cid = "HangZhou KuoHeng Technology Co.,ltd";
		break;
	case 0x5853C0:
		cid = "Beijing Guang Runtong Technology Development Company co.,Ltd";
		break;
	case 0x5031AD:
		cid = "ABB Global Industries and Services Private Limited";
		break;
	case 0x30A243:
		cid = "Shenzhen Prifox Innovation Technology Co., Ltd.";
		break;
	case 0x2CA539:
		cid = "Parallel Wireless, Inc";
		break;
	case 0xFC335F:
		cid = "Polyera";
		break;
	case 0xA8C87F:
		cid = "Roqos, Inc.";
		break;
	case 0xC025A2:
		cid = "NEC Platforms, Ltd.";
		break;
	case 0x7853F2:
		cid = "ROXTON Ltd.";
		break;
	case 0x94BBAE:
		cid = "Husqvarna AB";
		break;
	case 0xAC8995:
		cid = "AzureWave Technology Inc.";
		break;
	case 0xF898B9:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x1C497B:
		cid = "Gemtek Technology Co., Ltd.";
		break;
	case 0x2CCF58:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x54FF82:
		cid = "Davit Solution co.";
		break;
	case 0xD445E8:
		cid = "Jiangxi Hongpai Technology Co., Ltd.";
		break;
	case 0x847973:
		cid = "Shanghai Baud Data Communication Co.,Ltd.";
		break;
	case 0x906F18:
		cid = "Private";
		break;
	case 0x881B99:
		cid = "SHENZHEN XIN FEI JIA ELECTRONIC CO. LTD.";
		break;
	case 0x681295:
		cid = "Lupine Lighting Systems GmbH";
		break;
	case 0x649A12:
		cid = "P2 Mobile Technologies Limited";
		break;
	case 0xE4C2D1:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xDC3CF6:
		cid = "Atomic Rules LLC";
		break;
	case 0x3C3178:
		cid = "Qolsys Inc.";
		break;
	case 0x083A5C:
		cid = "Junilab, Inc.";
		break;
	case 0x4CAE31:
		cid = "ShengHai Electronics (Shenzhen) Ltd";
		break;
	case 0xF0D657:
		cid = "ECHOSENS";
		break;
	case 0x24693E:
		cid = "innodisk Corporation";
		break;
	case 0xE48D8C:
		cid = "Routerboard.com";
		break;
	case 0xC0DC6A:
		cid = "Qingdao Eastsoft Communication Technology Co.,LTD";
		break;
	case 0x6459F8:
		cid = "Vodafone Omnitel B.V.";
		break;
	case 0x082CB0:
		cid = "Network Instruments";
		break;
	case 0x485073:
		cid = "Microsoft Corporation";
		break;
	case 0x3CA31A:
		cid = "Oilfind International LLC";
		break;
	case 0xA424DD:
		cid = "Cambrionix Ltd";
		break;
	case 0x88A2D7:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xD89A34:
		cid = "Beijing SHENQI Technology Co., Ltd.";
		break;
	case 0x1CADD1:
		cid = "Bosung Electronics Co., Ltd.";
		break;
	case 0x24E5AA:
		cid = "Philips Oral Healthcare, Inc.";
		break;
	case 0x88CBA5:
		cid = "Suzhou Torchstar Intelligent Technology Co.,Ltd";
		break;
	case 0x046169:
		cid = "MEDIA GLOBAL LINKS CO., LTD.";
		break;
	case 0xAC562C:
		cid = "LAVA INTERNATIONAL(H.K) LIMITED";
		break;
	case 0x3CCE15:
		cid = "Mercedes-Benz USA, LLC";
		break;
	case 0x84DF19:
		cid = "Chuango Security Technology Corporation";
		break;
	case 0x3C4711:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x245BF0:
		cid = "Liteon, Inc.";
		break;
	case 0xFCFEC2:
		cid = "Invensys Controls UK Limited";
		break;
	case 0xE8F2E2:
		cid = "LG Innotek";
		break;
	case 0xAC676F:
		cid = "Electrocompaniet A.S.";
		break;
	case 0x4CB82C:
		cid = "Cambridge Mobile Telematics, Inc.";
		break;
	case 0xF0224E:
		cid = "Esan electronic co.";
		break;
	case 0xB0411D:
		cid = "ITTIM Technologies";
		break;
	case 0x7CB25C:
		cid = "Acacia Communications";
		break;
	case 0x78EB39:
		cid = "Instituto Nacional de Tecnología Industrial";
		break;
	case 0xECEED8:
		cid = "ZTLX Network Technology Co.,Ltd";
		break;
	case 0xF85B9C:
		cid = "SB SYSTEMS Co.,Ltd";
		break;
	case 0x7CA237:
		cid = "King Slide Technology CO., LTD.";
		break;
	case 0x847303:
		cid = "Letv Mobile and Intelligent Information Technology (Beijing) Corporation Ltd.";
		break;
	case 0xB0495F:
		cid = "OMRON HEALTHCARE Co., Ltd.";
		break;
	case 0xF44713:
		cid = "Leading Public Performance Co., Ltd.";
		break;
	case 0xD4522A:
		cid = "TangoWiFi.com";
		break;
	case 0xB0ECE1:
		cid = "Private";
		break;
	case 0x407FE0:
		cid = "Glory Star Technics (ShenZhen) Limited";
		break;
	case 0xBC5C4C:
		cid = "ELECOM CO.,LTD.";
		break;
	case 0x6CA75F:
		cid = "zte corporation";
		break;
	case 0xC8C50E:
		cid = "Shenzhen Primestone Network Technologies.Co., Ltd.";
		break;
	case 0x9CBEE0:
		cid = "Biosoundlab Co., Ltd.";
		break;
	case 0x5C5B35:
		cid = "Mist Systems, Inc.";
		break;
	case 0xE807BF:
		cid = "SHENZHEN BOOMTECH INDUSTRY CO.,LTD";
		break;
	case 0xE8162B:
		cid = "IDEO Security Co., Ltd.";
		break;
	case 0x709F2D:
		cid = "zte corporation";
		break;
	case 0xECE2FD:
		cid = "SKG Electric Group(Thailand) Co., Ltd.";
		break;
	case 0x88E603:
		cid = "Avotek corporation";
		break;
	case 0x74E28C:
		cid = "Microsoft Corporation";
		break;
	case 0x94F19E:
		cid = "HUIZHOU MAORONG INTELLIGENT TECHNOLOGY CO.,LTD";
		break;
	case 0xC4924C:
		cid = "KEISOKUKI CENTER CO.,LTD.";
		break;
	case 0xE4F939:
		cid = "Minxon Hotel Technology INC.";
		break;
	case 0x38C70A:
		cid = "WiFiSong";
		break;
	case 0x60E6BC:
		cid = "Sino-Telecom Technology Co.,Ltd.";
		break;
	case 0x486EFB:
		cid = "Davit System Technology Co., Ltd.";
		break;
	case 0x340A22:
		cid = "TOP-ACCESS ELECTRONICS CO LTD";
		break;
	case 0xB008BF:
		cid = "Vital Connect, Inc.";
		break;
	case 0x485415:
		cid = "NET RULES TECNOLOGIA EIRELI";
		break;
	case 0x70C76F:
		cid = "INNO S";
		break;
	case 0x704E66:
		cid = "SHENZHEN FAST TECHNOLOGIES CO.,LTD";
		break;
	case 0x409B0D:
		cid = "Shenzhen Yourf Kwan Industrial Co., Ltd";
		break;
	case 0xC40880:
		cid = "Shenzhen UTEPO Tech Co., Ltd.";
		break;
	case 0x94C038:
		cid = "Tallac Networks";
		break;
	case 0x801967:
		cid = "Shanghai Reallytek Information Technology  Co.,Ltd";
		break;
	case 0x6836B5:
		cid = "DriveScale, Inc.";
		break;
	case 0x2CF7F1:
		cid = "Seeed Technology Inc.";
		break;
	case 0xF88479:
		cid = "Yaojin Technology(Shenzhen)Co.,Ltd";
		break;
	case 0x4C48DA:
		cid = "Beijing Autelan Technology Co.,Ltd";
		break;
	case 0x90179B:
		cid = "Nanomegas";
		break;
	case 0x3077CB:
		cid = "Maike Industry(Shenzhen)CO.,LTD";
		break;
	case 0x3428F0:
		cid = "ATN International Limited";
		break;
	case 0xEC3C5A:
		cid = "SHEN ZHEN HENG SHENG HUI DIGITAL TECHNOLOGY CO.,LTD";
		break;
	case 0x8C0551:
		cid = "Koubachi AG";
		break;
	case 0xE887A3:
		cid = "Loxley Public Company Limited";
		break;
	case 0x10FACE:
		cid = "Reacheng Communication Technology Co.,Ltd";
		break;
	case 0xD8CB8A:
		cid = "Micro-Star INTL CO., LTD.";
		break;
	case 0xA8D0E3:
		cid = "Systech Electronics Ltd.";
		break;
	case 0x8463D6:
		cid = "Microsoft Corporation";
		break;
	case 0x78B3B9:
		cid = "ShangHai sunup lighting CO.,LTD";
		break;
	case 0x186571:
		cid = "Top Victory Electronics (Taiwan) Co., Ltd.";
		break;
	case 0xF8BC41:
		cid = "Rosslare Enterprises Limited";
		break;
	case 0x8486F3:
		cid = "Greenvity Communications";
		break;
	case 0x205CFA:
		cid = "Yangzhou ChangLian Network Technology Co,ltd.";
		break;
	case 0x8C18D9:
		cid = "Shenzhen RF Technology Co., Ltd";
		break;
	case 0x6099D1:
		cid = "Vuzix / Lenovo";
		break;
	case 0x34F6D2:
		cid = "Panasonic Taiwan Co.,Ltd.";
		break;
	case 0xDC2F03:
		cid = "Step forward Group Co., Ltd.";
		break;
	case 0x582136:
		cid = "KMB systems, s.r.o.";
		break;
	case 0x00AEFA:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x8CDF9D:
		cid = "NEC Corporation";
		break;
	case 0xF8E903:
		cid = "D-Link International";
		break;
	case 0x6828F6:
		cid = "Vubiq Networks, Inc.";
		break;
	case 0x44356F:
		cid = "Neterix";
		break;
	case 0x742EFC:
		cid = "DirectPacket Research, Inc,";
		break;
	case 0x20C06D:
		cid = "SHENZHEN SPACETEK TECHNOLOGY CO.,LTD";
		break;
	case 0x3CB792:
		cid = "Hitachi Maxell, Ltd., Optronics Division";
		break;
	case 0x7491BD:
		cid = "Four systems Co.,Ltd.";
		break;
	case 0xD43266:
		cid = "Fike Corporation";
		break;
	case 0x948E89:
		cid = "INDUSTRIAS UNIDAS SA DE CV";
		break;
	case 0x9405B6:
		cid = "Liling FullRiver Electronics & Technology Ltd";
		break;
	case 0x382C4A:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x74547D:
		cid = "Cisco SPVTG";
		break;
	case 0xD48F33:
		cid = "Microsoft Corporation";
		break;
	case 0x1CA2B1:
		cid = "ruwido austria gmbh";
		break;
	case 0x945493:
		cid = "Rigado, LLC";
		break;
	case 0x34B7FD:
		cid = "Guangzhou Younghead Electronic Technology Co.,Ltd";
		break;
	case 0x384B76:
		cid = "AIRTAME ApS";
		break;
	case 0x1C5216:
		cid = "DONGGUAN HELE ELECTRONICS CO., LTD";
		break;
	case 0x34029B:
		cid = "CloudBerry Technologies Private Limited";
		break;
	case 0x70AF25:
		cid = "Nishiyama Industry Co.,LTD.";
		break;
	case 0xB47C29:
		cid = "Shenzhen Guzidi Technology Co.,Ltd";
		break;
	case 0x2C1A31:
		cid = "Electronics Company Limited";
		break;
	case 0x6C198F:
		cid = "D-Link International";
		break;
	case 0x60C1CB:
		cid = "Fujian Great Power PLC Equipment Co.,Ltd";
		break;
	case 0x686E48:
		cid = "Prophet Electronic Technology Corp.,Ltd";
		break;
	case 0x30F7D7:
		cid = "Thread Technology Co., Ltd";
		break;
	case 0x3808FD:
		cid = "Silca Spa";
		break;
	case 0x7C2587:
		cid = "chaowifi.com";
		break;
	case 0x2012D5:
		cid = "Scientech Materials Corporation";
		break;
	case 0xEC1D7F:
		cid = "zte corporation";
		break;
	case 0xAC11D3:
		cid = "Suzhou HOTEK  Video Technology Co. Ltd";
		break;
	case 0x304225:
		cid = "BURG-WÄCHTER KG";
		break;
	case 0x1C4840:
		cid = "IMS Messsysteme GmbH";
		break;
	case 0xF42853:
		cid = "Zioncom Electronics (Shenzhen) Ltd.";
		break;
	case 0x3C46D8:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x6C0273:
		cid = "Shenzhen Jin Yun Video Equipment Co., Ltd.";
		break;
	case 0xF42833:
		cid = "MMPC Inc.";
		break;
	case 0x244F1D:
		cid = "iRule LLC";
		break;
	case 0xBC9CC5:
		cid = "Beijing Huafei Technology Co., Ltd.";
		break;
	case 0x505065:
		cid = "TAKT Corporation";
		break;
	case 0xA4A4D3:
		cid = "Bluebank Communication Technology Co.Ltd";
		break;
	case 0x74F413:
		cid = "Maxwell Forest";
		break;
	case 0x34F0CA:
		cid = "Shenzhen Linghangyuan Digital Technology Co.,Ltd.";
		break;
	case 0x30B5F1:
		cid = "Aitexin Technology Co., Ltd";
		break;
	case 0x08CD9B:
		cid = "samtec automotive electronics & software GmbH";
		break;
	case 0x28FCF6:
		cid = "Shenzhen Xin KingBrand enterprises Co.,Ltd";
		break;
	case 0x4C26E7:
		cid = "Welgate Co., Ltd.";
		break;
	case 0x94D60E:
		cid = "shenzhen yunmao information technologies co., ltd";
		break;
	case 0x7C6AC3:
		cid = "GatesAir, Inc";
		break;
	case 0x3CCD5A:
		cid = "Technische Alternative GmbH";
		break;
	case 0x604826:
		cid = "Newbridge Technologies Int. Ltd.";
		break;
	case 0x24D13F:
		cid = "MEXUS CO.,LTD";
		break;
	case 0x702C1F:
		cid = "Wisol";
		break;
	case 0x9CBD9D:
		cid = "SkyDisk, Inc.";
		break;
	case 0x74C621:
		cid = "Zhejiang Hite Renewable Energy Co.,LTD";
		break;
	case 0x44C306:
		cid = "SIFROM Inc.";
		break;
	case 0x54A31B:
		cid = "Shenzhen Linkworld Technology Co,.LTD";
		break;
	case 0x5CE7BF:
		cid = "New Singularity International Technical Development Co.,Ltd";
		break;
	case 0x1CEEE8:
		cid = "Ilshin Elecom";
		break;
	case 0x6C641A:
		cid = "Penguin Computing";
		break;
	case 0xE036E3:
		cid = "Stage One International Co., Ltd.";
		break;
	case 0x34DE34:
		cid = "zte corporation";
		break;
	case 0x34466F:
		cid = "HiTEM Engineering";
		break;
	case 0x2C39C1:
		cid = "Ciena Corporation";
		break;
	case 0x6C2C06:
		cid = "OOO NPP Systemotechnika-NN";
		break;
	case 0x54EE75:
		cid = "Wistron InfoComm(Kunshan)Co.,Ltd.";
		break;
	case 0x60812B:
		cid = "Custom Control Concepts";
		break;
	case 0xF86601:
		cid = "Suzhou Chi-tek information technology Co., Ltd";
		break;
	case 0xFC4AE9:
		cid = "Castlenet Technology Inc.";
		break;
	case 0x34E42A:
		cid = "Automatic Bar Controls Inc.";
		break;
	case 0x20A787:
		cid = "Bointec Taiwan Corporation Limited";
		break;
	case 0xA481EE:
		cid = "Nokia Corporation";
		break;
	case 0x54C80F:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xEC1766:
		cid = "Research Centre Module";
		break;
	case 0x7CFF62:
		cid = "Huizhou Super Electron Technology Co.,Ltd.";
		break;
	case 0xA0D12A:
		cid = "AXPRO Technology Inc.";
		break;
	case 0x30C750:
		cid = "MIC Technology Group";
		break;
	case 0x442938:
		cid = "NietZsche enterprise Co.Ltd.";
		break;
	case 0xD881CE:
		cid = "AHN INC.";
		break;
	case 0xE0D31A:
		cid = "EQUES Technology Co., Limited";
		break;
	case 0x9C3EAA:
		cid = "EnvyLogic Co.,Ltd.";
		break;
	case 0x909864:
		cid = "Impex-Sat GmbH&amp;Co KG";
		break;
	case 0xDCE578:
		cid = "Experimental Factory of Scientific Engineering and Special Design Department";
		break;
	case 0x949F3F:
		cid = "Optek Digital Technology company limited";
		break;
	case 0x987770:
		cid = "Pep Digital Technology (Guangzhou) Co., Ltd";
		break;
	case 0x4411C2:
		cid = "Telegartner Karl Gartner GmbH";
		break;
	case 0x9451BF:
		cid = "Hyundai ESG";
		break;
	case 0x4C7F62:
		cid = "Nokia Corporation";
		break;
	case 0xF03FF8:
		cid = "R L Drake";
		break;
	case 0xB0C554:
		cid = "D-Link International";
		break;
	case 0x54D163:
		cid = "MAX-TECH,INC";
		break;
	case 0xE41218:
		cid = "ShenZhen Rapoo Technology Co., Ltd.";
		break;
	case 0x2C8A72:
		cid = "HTC Corporation";
		break;
	case 0x4486C1:
		cid = "Siemens Low Voltage & Products";
		break;
	case 0xC83168:
		cid = "eZEX corporation";
		break;
	case 0xF84A73:
		cid = "EUMTECH CO., LTD";
		break;
	case 0x880F10:
		cid = "Huami Information Technology Co.,Ltd.";
		break;
	case 0x24336C:
		cid = "Private";
		break;
	case 0xC46BB4:
		cid = "myIDkey";
		break;
	case 0xECE512:
		cid = "tado GmbH";
		break;
	case 0x30918F:
		cid = "Technicolor";
		break;
	case 0xFC09F6:
		cid = "GUANGDONG TONZE ELECTRIC CO.,LTD";
		break;
	case 0x687848:
		cid = "Westunitis Co., Ltd.";
		break;
	case 0xA8B9B3:
		cid = "ESSYS";
		break;
	case 0x64B370:
		cid = "PowerComm Solutions LLC";
		break;
	case 0xD86595:
		cid = "Toy's Myth Inc.";
		break;
	case 0xD8DD5F:
		cid = "BALMUDA Inc.";
		break;
	case 0x88D962:
		cid = "Canopus Systems US LLC";
		break;
	case 0x2C18AE:
		cid = "Trend Electronics Co., Ltd.";
		break;
	case 0xE097F2:
		cid = "Atomax Inc.";
		break;
	case 0x90F3B7:
		cid = "Kirisun Communications Co., Ltd.";
		break;
	case 0xDCAD9E:
		cid = "GreenPriz";
		break;
	case 0xB4827B:
		cid = "AKG Acoustics GmbH";
		break;
	case 0x908C44:
		cid = "H.K ZONGMU TECHNOLOGY CO., LTD.";
		break;
	case 0x0C473D:
		cid = "Hitron Technologies. Inc";
		break;
	case 0x9CF8DB:
		cid = "shenzhen eyunmei technology co,.ltd";
		break;
	case 0x644214:
		cid = "Swisscom Energy Solutions AG";
		break;
	case 0x8CCDA2:
		cid = "ACTP, Inc.";
		break;
	case 0xCC720F:
		cid = "Viscount Systems Inc.";
		break;
	case 0x906717:
		cid = "Alphion India Private Limited";
		break;
	case 0x24050F:
		cid = "MTN Electronic Co. Ltd";
		break;
	case 0x40B6B1:
		cid = "SUNGSAM CO,.Ltd";
		break;
	case 0x98FF6A:
		cid = "OTEC(Shanghai)Technology Co.,Ltd.";
		break;
	case 0xAC6BAC:
		cid = "Jenny Science AG";
		break;
	case 0x707C18:
		cid = "ADATA Technology Co., Ltd";
		break;
	case 0xFC4B1C:
		cid = "INTERSENSOR S.R.L.";
		break;
	case 0x1879A2:
		cid = "GMJ ELECTRIC LIMITED";
		break;
	case 0xE0C86A:
		cid = "SHENZHEN TW-SCIE Co., Ltd";
		break;
	case 0x80BAE6:
		cid = "Neets";
		break;
	case 0x041A04:
		cid = "WaveIP";
		break;
	case 0x50206B:
		cid = "Emerson Climate Technologies Transportation Solutions";
		break;
	case 0xC8EE75:
		cid = "Pishion International Co. Ltd";
		break;
	case 0xCC3429:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x407496:
		cid = "aFUN TECHNOLOGY INC.";
		break;
	case 0x18C8E7:
		cid = "Shenzhen Hualistone Technology Co.,Ltd";
		break;
	case 0x3CF748:
		cid = "Shenzhen Linsn Technology Development Co.,Ltd";
		break;
	case 0x9C039E:
		cid = "Beijing Winchannel Software Technology Co., Ltd";
		break;
	case 0x48A2B7:
		cid = "Kodofon JSC";
		break;
	case 0x443C9C:
		cid = "Pintsch Tiefenbach GmbH";
		break;
	case 0xF81CE5:
		cid = "Telefonbau Behnke GmbH";
		break;
	case 0xBC2D98:
		cid = "ThinGlobal LLC";
		break;
	case 0x7C72E4:
		cid = "Unikey Technologies";
		break;
	case 0x181BEB:
		cid = "Actiontec Electronics, Inc";
		break;
	case 0xCC7498:
		cid = "Filmetrics Inc.";
		break;
	case 0x7C6AB3:
		cid = "IBC TECHNOLOGIES INC.";
		break;
	case 0xF0321A:
		cid = "Mita-Teknik A/S";
		break;
	case 0x4CD7B6:
		cid = "Helmer Scientific";
		break;
	case 0x746F3D:
		cid = "Contec GmbH";
		break;
	case 0x483D32:
		cid = "Syscor Controls &amp; Automation";
		break;
	case 0x9031CD:
		cid = "Onyx Healthcare Inc.";
		break;
	case 0x404A18:
		cid = "Addrek Smart Solutions";
		break;
	case 0xC4C0AE:
		cid = "MIDORI ELECTRONIC CO., LTD.";
		break;
	case 0x90837A:
		cid = "General Electric Water & Process Technologies";
		break;
	case 0x089758:
		cid = "Shenzhen Strong Rising Electronics Co.,Ltd DongGuan Subsidiary";
		break;
	case 0xB424E7:
		cid = "Codetek Technology Co.,Ltd";
		break;
	case 0x44EE30:
		cid = "Budelmann Elektronik GmbH";
		break;
	case 0x38DBBB:
		cid = "Sunbow Telecom Co., Ltd.";
		break;
	case 0x2493CA:
		cid = "Voxtronic Technology Computer-Systeme GmbH";
		break;
	case 0x688AB5:
		cid = "EDP Servicos";
		break;
	case 0x407A80:
		cid = "Nokia Corporation";
		break;
	case 0xD481CA:
		cid = "iDevices, LLC";
		break;
	case 0xB898F7:
		cid = "Gionee Communication Equipment Co,Ltd.ShenZhen";
		break;
	case 0xC0F1C4:
		cid = "Pacidal Corporation Ltd.";
		break;
	case 0xD858D7:
		cid = "CZ.NIC, z.s.p.o.";
		break;
	case 0x10B713:
		cid = "Private";
		break;
	case 0xE8E770:
		cid = "Warp9 Tech Design, Inc.";
		break;
	case 0x78CA5E:
		cid = "ELNO";
		break;
	case 0x98FFD0:
		cid = "Lenovo Mobile Communication Technology Ltd.";
		break;
	case 0x50A054:
		cid = "Actineon";
		break;
	case 0x48EE86:
		cid = "UTStarcom (China) Co.,Ltd";
		break;
	case 0x5056A8:
		cid = "Jolla Ltd";
		break;
	case 0xD09D0A:
		cid = "LINKCOM";
		break;
	case 0x54FB58:
		cid = "WISEWARE, Lda";
		break;
	case 0xC0A0BB:
		cid = "D-Link International";
		break;
	case 0x28A1EB:
		cid = "ETEK TECHNOLOGY (SHENZHEN) CO.,LTD";
		break;
	case 0x4CCBF5:
		cid = "zte corporation";
		break;
	case 0xF0F5AE:
		cid = "Adaptrum Inc.";
		break;
	case 0xF42896:
		cid = "SPECTO PAINEIS ELETRONICOS LTDA";
		break;
	case 0x9C2840:
		cid = "Discovery Technology,LTD..";
		break;
	case 0xF89FB8:
		cid = "YAZAKI Energy System Corporation";
		break;
	case 0xF037A1:
		cid = "Huike Electronics (SHENZHEN) CO., LTD.";
		break;
	case 0x6CD1B0:
		cid = "WING SING ELECTRONICS HONG KONG LIMITED";
		break;
	case 0xA4F522:
		cid = "CHOFU SEISAKUSHO CO.,LTD";
		break;
	case 0x7CE56B:
		cid = "ESEN Optoelectronics Technology Co.,Ltd.";
		break;
	case 0xCC4703:
		cid = "Intercon Systems Co., Ltd.";
		break;
	case 0x5C3327:
		cid = "Spazio Italia srl";
		break;
	case 0xF85BC9:
		cid = "M-Cube Spa";
		break;
	case 0x8005DF:
		cid = "Montage Technology Group Limited";
		break;
	case 0x78E8B6:
		cid = "zte corporation";
		break;
	case 0x041B94:
		cid = "Host Mobility AB";
		break;
	case 0xCC2A80:
		cid = "Micro-Biz intelligence solutions Co.,Ltd";
		break;
	case 0x3859F8:
		cid = "MindMade Sp. z o.o.";
		break;
	case 0x5C026A:
		cid = "Applied Vision Corporation";
		break;
	case 0x7CBD06:
		cid = "AE REFUsol";
		break;
	case 0x94BA56:
		cid = "Shenzhen Coship Electronics Co., Ltd.";
		break;
	case 0x2894AF:
		cid = "Samhwa Telecom";
		break;
	case 0x740EDB:
		cid = "Optowiz Co., Ltd";
		break;
	case 0x00A2FF:
		cid = "abatec group AG";
		break;
	case 0xD095C7:
		cid = "Pantech Co., Ltd.";
		break;
	case 0xD02C45:
		cid = "littleBits Electronics, Inc.";
		break;
	case 0x5027C7:
		cid = "TECHNART Co.,Ltd";
		break;
	case 0x248000:
		cid = "Westcontrol AS";
		break;
	case 0xF84A7F:
		cid = "Innometriks Inc";
		break;
	case 0x58639A:
		cid = "TPL SYSTEMES";
		break;
	case 0x0C9B13:
		cid = "Shanghai Magic Mobile Telecommunication Co.Ltd.";
		break;
	case 0x3C15EA:
		cid = "TESCOM CO., LTD.";
		break;
	case 0xB4CCE9:
		cid = "PROSYST";
		break;
	case 0x34A3BF:
		cid = "Terewave. Inc.";
		break;
	case 0xB0CE18:
		cid = "Zhejiang shenghui lighting co.,Ltd";
		break;
	case 0x503CC4:
		cid = "Lenovo Mobile Communication Technology Ltd.";
		break;
	case 0x286D97:
		cid = "SAMJIN Co., Ltd.";
		break;
	case 0xACE42E:
		cid = "SK hynix";
		break;
	case 0x08EF3B:
		cid = "MCS Logic Inc.";
		break;
	case 0x806C8B:
		cid = "KAESER KOMPRESSOREN AG";
		break;
	case 0x048C03:
		cid = "ThinPAD Technology (Shenzhen)CO.,LTD";
		break;
	case 0x84E629:
		cid = "Bluwan SA";
		break;
	case 0x34CD6D:
		cid = "CommSky Technologies";
		break;
	case 0xC47F51:
		cid = "Inventek Systems";
		break;
	case 0xE8D4E0:
		cid = "Beijing BenyWave Technology Co., Ltd.";
		break;
	case 0x681D64:
		cid = "Sunwave Communications Co., Ltd";
		break;
	case 0xF4CD90:
		cid = "Vispiron Rotec GmbH";
		break;
	case 0xE438F2:
		cid = "Advantage Controls";
		break;
	case 0xC8F386:
		cid = "Shenzhen Xiaoniao Technology Co.,Ltd";
		break;
	case 0xE8CE06:
		cid = "SkyHawke Technologies, LLC.";
		break;
	case 0xB0808C:
		cid = "Laser Light Engines";
		break;
	case 0xC419EC:
		cid = "Qualisys AB";
		break;
	case 0x981094:
		cid = "Shenzhen Vsun communication technology Co.,ltd";
		break;
	case 0x082719:
		cid = "APS systems/electronic AG";
		break;
	case 0xD4AC4E:
		cid = "BODi rS, LLC";
		break;
	case 0xB03850:
		cid = "Nanjing CAS-ZDC IOT SYSTEM CO.,LTD";
		break;
	case 0xC0DA74:
		cid = "Hangzhou Sunyard Technology Co., Ltd.";
		break;
	case 0x34A843:
		cid = "KYOCERA Display Corporation";
		break;
	case 0x6C5779:
		cid = "Aclima, Inc.";
		break;
	case 0x40BD9E:
		cid = "Physio-Control, Inc";
		break;
	case 0x581CBD:
		cid = "Affinegy";
		break;
	case 0xF82BC8:
		cid = "Jiangsu Switter Co., Ltd";
		break;
	case 0x60C397:
		cid = "2Wire Inc";
		break;
	case 0x3065EC:
		cid = "Wistron (ChongQing)";
		break;
	case 0x5CA3EB:
		cid = "Lokel s.r.o.";
		break;
	case 0x04DF69:
		cid = "Car Connectivity Consortium";
		break;
	case 0x28DB81:
		cid = "Shanghai Guao Electronic Technology Co., Ltd";
		break;
	case 0x9CB793:
		cid = "Creatcomm Technology Inc.";
		break;
	case 0xA0B100:
		cid = "ShenZhen Cando Electronics Co.,Ltd";
		break;
	case 0x40560C:
		cid = "In Home Displays Ltd";
		break;
	case 0x9436E0:
		cid = "Sichuan Bihong Broadcast &amp; Television New Technologies Co.,Ltd";
		break;
	case 0xD4D50D:
		cid = "Southwest Microwave, Inc";
		break;
	case 0xB8CD93:
		cid = "Penetek, Inc";
		break;
	case 0xD8FEE3:
		cid = "D-Link International";
		break;
	case 0xF8516D:
		cid = "Denwa Technology Corp.";
		break;
	case 0x1078CE:
		cid = "Hanvit SI, Inc.";
		break;
	case 0xD8DA52:
		cid = "APATOR S.A.";
		break;
	case 0x107A86:
		cid = "U&U ENGINEERING INC.";
		break;
	case 0x980D2E:
		cid = "HTC Corporation";
		break;
	case 0x842F75:
		cid = "Innokas Group";
		break;
	case 0xD4BF7F:
		cid = "UPVEL";
		break;
	case 0x5061D6:
		cid = "Indu-Sol GmbH";
		break;
	case 0x68EC62:
		cid = "YODO Technology Corp. Ltd.";
		break;
	case 0xF07F0C:
		cid = "Leopold Kostal GmbH &Co. KG";
		break;
	case 0x5C22C4:
		cid = "DAE EUN ELETRONICS CO., LTD";
		break;
	case 0x08482C:
		cid = "Raycore Taiwan Co., LTD.";
		break;
	case 0xF4B381:
		cid = "WindowMaster A/S";
		break;
	case 0x74F102:
		cid = "Beijing HCHCOM Technology Co., Ltd";
		break;
	case 0x080EA8:
		cid = "Velex s.r.l.";
		break;
	case 0x0086A0:
		cid = "Private";
		break;
	case 0x60FE1E:
		cid = "China Palms Telecom.Ltd";
		break;
	case 0x841E26:
		cid = "KERNEL-I Co.,LTD";
		break;
	case 0x349D90:
		cid = "Heinzmann GmbH & CO. KG";
		break;
	case 0xD4016D:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xFC1186:
		cid = "Logic3 plc";
		break;
	case 0x50CD32:
		cid = "NanJing Chaoran Science & Technology Co.,Ltd.";
		break;
	case 0x683EEC:
		cid = "ERECA";
		break;
	case 0x44619C:
		cid = "FONsystem co. ltd.";
		break;
	case 0xBCBAE1:
		cid = "AREC Inc.";
		break;
	case 0x18FA6F:
		cid = "ISC applied systems corp";
		break;
	case 0x9C9726:
		cid = "Technicolor";
		break;
	case 0x880905:
		cid = "MTMCommunications";
		break;
	case 0xC42628:
		cid = "Airo Wireless";
		break;
	case 0x745F00:
		cid = "Samsung Semiconductor Inc.";
		break;
	case 0x541FD5:
		cid = "Advantage Electronics";
		break;
	case 0x90FF79:
		cid = "Metro Ethernet Forum";
		break;
	case 0xE08177:
		cid = "GreenBytes, Inc.";
		break;
	case 0x48F230:
		cid = "Ubizcore Co.,LTD";
		break;
	case 0xB0C95B:
		cid = "Beijing Symtech CO.,LTD";
		break;
	case 0xDCA989:
		cid = "MACANDC";
		break;
	case 0xC05E6F:
		cid = "V. Stonkaus firma Kodinis Raktas";
		break;
	case 0x6CD146:
		cid = "Smartek d.o.o.";
		break;
	case 0xE0C2B7:
		cid = "Masimo Corporation";
		break;
	case 0xF82EDB:
		cid = "RTW GmbH & Co. KG";
		break;
	case 0x60A44C:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x045FA7:
		cid = "Shenzhen Yichen Technology Development Co.,LTD";
		break;
	case 0x983F9F:
		cid = "China SSJ (Suzhou) Network Technology Inc.";
		break;
	case 0xF02329:
		cid = "SHOWA DENKI CO.,LTD.";
		break;
	case 0x6499A0:
		cid = "AG Elektronik AB";
		break;
	case 0xA80180:
		cid = "IMAGO Technologies GmbH";
		break;
	case 0x044CEF:
		cid = "Fujian Sanao Technology Co.,Ltd";
		break;
	case 0xDC1DD4:
		cid = "Microstep-MIS spol. s r.o.";
		break;
	case 0xE01877:
		cid = "FUJITSU LIMITED";
		break;
	case 0x149448:
		cid = "BLU CASTLE S.A.";
		break;
	case 0x40516C:
		cid = "Grandex International Corporation";
		break;
	case 0xD0D471:
		cid = "MVTECH co., Ltd";
		break;
	case 0x34ADE4:
		cid = "Shanghai Chint Power Systems Co., Ltd.";
		break;
	case 0x1853E0:
		cid = "Hanyang Digitech Co.Ltd";
		break;
	case 0xC4E032:
		cid = "IEEE 1904.1 Working Group";
		break;
	case 0xACDBDA:
		cid = "Shenzhen Geniatech Inc, Ltd";
		break;
	case 0xA42C08:
		cid = "Masterwork Automodules";
		break;
	case 0x60B185:
		cid = "ATH system";
		break;
	case 0x504F94:
		cid = "Loxone Electronics GmbH";
		break;
	case 0x8C078C:
		cid = "FLOW DATA INC";
		break;
	case 0x8887DD:
		cid = "DarbeeVision Inc.";
		break;
	case 0x807B1E:
		cid = "Corsair Components";
		break;
	case 0xA0E25A:
		cid = "Amicus SK, s.r.o.";
		break;
	case 0xF87B62:
		cid = "FASTWEL INTERNATIONAL CO., LTD. Taiwan Branch";
		break;
	case 0xB49842:
		cid = "zte corporation";
		break;
	case 0x9C9C1D:
		cid = "Starkey Labs Inc.";
		break;
	case 0xAC1702:
		cid = "Fibar Group sp. z o.o.";
		break;
	case 0x7898FD:
		cid = "Q9 Networks Inc.";
		break;
	case 0x3C57D5:
		cid = "FiveCo";
		break;
	case 0x4C2258:
		cid = "cozybit, Inc.";
		break;
	case 0x10EA59:
		cid = "Cisco SPVTG";
		break;
	case 0x34FA40:
		cid = "Guangzhou Robustel Technologies Co., Limited";
		break;
	case 0x181725:
		cid = "Cameo Communications, Inc.";
		break;
	case 0xE82E24:
		cid = "Out of the Fog Research LLC";
		break;
	case 0x1C52D6:
		cid = "FLAT DISPLAY TECHNOLOGY CORPORATION";
		break;
	case 0x40270B:
		cid = "Mobileeco Co., Ltd";
		break;
	case 0xACE97F:
		cid = "IoT Tech Limited";
		break;
	case 0x301518:
		cid = "Ubiquitous Communication Co. ltd.";
		break;
	case 0x101248:
		cid = "ITG, Inc.";
		break;
	case 0x106FEF:
		cid = "Ad-Sol Nissin Corp";
		break;
	case 0xA036F0:
		cid = "Comprehensive Power";
		break;
	case 0x180CAC:
		cid = "CANON INC.";
		break;
	case 0x00DB1E:
		cid = "Albedo Telecom SL";
		break;
	case 0x74943D:
		cid = "AgJunction";
		break;
	case 0x080C0B:
		cid = "SysMik GmbH Dresden";
		break;
	case 0xC8FB26:
		cid = "Cisco SPVTG";
		break;
	case 0x7CC8AB:
		cid = "Acro Associates, Inc.";
		break;
	case 0xC4DA26:
		cid = "NOBLEX SA";
		break;
	case 0x1CC316:
		cid = "MileSight Technology Co., Ltd.";
		break;
	case 0xC4E7BE:
		cid = "SCSpro Co.,Ltd";
		break;
	case 0x105F49:
		cid = "Cisco SPVTG";
		break;
	case 0x4495FA:
		cid = "Qingdao Santong Digital Technology Co.Ltd";
		break;
	case 0x60F2EF:
		cid = "VisionVera International Co., Ltd.";
		break;
	case 0xB01266:
		cid = "Futaba-Kikaku";
		break;
	case 0x909DE0:
		cid = "Newland Design + Assoc. Inc.";
		break;
	case 0x64D814:
		cid = "Cisco Systems, Inc";
		break;
	case 0x6CE4CE:
		cid = "Villiger Security Solutions AG";
		break;
	case 0x30F33A:
		cid = "#NAME?";
		break;
	case 0x58CF4B:
		cid = "Lufkin Industries";
		break;
	case 0xC4393A:
		cid = "SMC Networks Inc";
		break;
	case 0xD45C70:
		cid = "Wi-Fi Alliance";
		break;
	case 0x08EBED:
		cid = "World Elite Technology Co.,LTD";
		break;
	case 0x60BC4C:
		cid = "EWM Hightec Welding GmbH";
		break;
	case 0xF41E26:
		cid = "Simon-Kaloi Engineering";
		break;
	case 0xC44567:
		cid = "SAMBON PRECISON and ELECTRONICS";
		break;
	case 0xD0738E:
		cid = "DONG OH PRECISION CO., LTD.";
		break;
	case 0xE8718D:
		cid = "Elsys Equipamentos Eletronicos Ltda";
		break;
	case 0x3C83B5:
		cid = "Advance Vision Electronics Co. Ltd.";
		break;
	case 0x808287:
		cid = "ATCOM Technology Co.Ltd.";
		break;
	case 0x28A192:
		cid = "GERP Solution";
		break;
	case 0xA08C15:
		cid = "Gerhard D. Wempe KG";
		break;
	case 0x8CE081:
		cid = "zte corporation";
		break;
	case 0x485261:
		cid = "SOREEL";
		break;
	case 0x10FBF0:
		cid = "KangSheng LTD.";
		break;
	case 0x3C57BD:
		cid = "Kessler Crane Inc.";
		break;
	case 0x600F77:
		cid = "SilverPlus, Inc";
		break;
	case 0x6851B7:
		cid = "PowerCloud Systems, Inc.";
		break;
	case 0xA44E2D:
		cid = "Adaptive Wireless Solutions, LLC";
		break;
	case 0x3CC12C:
		cid = "AES Corporation";
		break;
	case 0x0CCDFB:
		cid = "EDIC Systems Inc.";
		break;
	case 0x2CE2A8:
		cid = "DeviceDesign";
		break;
	case 0xB49DB4:
		cid = "Axion Technologies Inc.";
		break;
	case 0xD8182B:
		cid = "Conti Temic Microelectronic GmbH";
		break;
	case 0x304449:
		cid = "PLATH GmbH";
		break;
	case 0x94FD2E:
		cid = "Shanghai Uniscope Technologies Co.,Ltd";
		break;
	case 0x64A341:
		cid = "Wonderlan (Beijing) Technology Co., Ltd.";
		break;
	case 0x8CAE4C:
		cid = "Plugable Technologies";
		break;
	case 0xD8D5B9:
		cid = "Rainforest Automation, Inc.";
		break;
	case 0xC0A0E2:
		cid = "Eden Innovations";
		break;
	case 0xE8ABFA:
		cid = "Shenzhen Reecam Tech.Ltd.";
		break;
	case 0x58874C:
		cid = "LITE-ON CLEAN ENERGY TECHNOLOGY CORP.";
		break;
	case 0xE85BF0:
		cid = "Imaging Diagnostics";
		break;
	case 0x20DC93:
		cid = "Cheetah Hi-Tech, Inc.";
		break;
	case 0x0CD9C1:
		cid = "Visteon Corporation";
		break;
	case 0x68AB8A:
		cid = "RF IDeas";
		break;
	case 0x70E24C:
		cid = "SAE IT-systems GmbH & Co. KG";
		break;
	case 0x88615A:
		cid = "Siano Mobile Silicon Ltd.";
		break;
	case 0x30215B:
		cid = "Shenzhen Ostar Display Electronic Co.,Ltd";
		break;
	case 0xDC028E:
		cid = "zte corporation";
		break;
	case 0xDCB058:
		cid = "Bürkert Werke GmbH";
		break;
	case 0xC8E1A7:
		cid = "Vertu Corporation Limited";
		break;
	case 0x88D7BC:
		cid = "DEP Company";
		break;
	case 0xF49466:
		cid = "CountMax,  ltd";
		break;
	case 0x4CAB33:
		cid = "KST technology";
		break;
	case 0x5CE0F6:
		cid = "NIC.br- Nucleo de Informacao e Coordenacao do Ponto BR";
		break;
	case 0x00E666:
		cid = "ARIMA Communications Corp.";
		break;
	case 0xF8E4FB:
		cid = "Actiontec Electronics, Inc";
		break;
	case 0x5887E2:
		cid = "Shenzhen Coship Electronics Co., Ltd.";
		break;
	case 0xB4DFFA:
		cid = "Litemax Electronics Inc.";
		break;
	case 0x48F8B3:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x681CA2:
		cid = "Rosewill Inc.";
		break;
	case 0x7C092B:
		cid = "Bekey A/S";
		break;
	case 0xD808F5:
		cid = "Arcadia Networks Co. Ltd.";
		break;
	case 0x84DF0C:
		cid = "NET2GRID BV";
		break;
	case 0x3CB87A:
		cid = "Private";
		break;
	case 0xE425E9:
		cid = "Color-Chip";
		break;
	case 0xF44848:
		cid = "Amscreen Group Ltd";
		break;
	case 0x441319:
		cid = "WKK TECHNOLOGY LTD.";
		break;
	case 0x088F2C:
		cid = "Hills Sound Vision & Lighting";
		break;
	case 0x3C9F81:
		cid = "Shenzhen CATIC Bit Communications Technology Co.,Ltd";
		break;
	case 0x18339D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x642216:
		cid = "Shandong Taixin Electronic co.,Ltd";
		break;
	case 0xD43D7E:
		cid = "Micro-Star Int'l Co, Ltd";
		break;
	case 0x64517E:
		cid = "LONG BEN (DONGGUAN) ELECTRONIC TECHNOLOGY CO.,LTD.";
		break;
	case 0x0C57EB:
		cid = "Mueller Systems";
		break;
	case 0x48282F:
		cid = "zte corporation";
		break;
	case 0x745327:
		cid = "COMMSEN CO., LIMITED";
		break;
	case 0xE47185:
		cid = "Securifi Ltd";
		break;
	case 0x881036:
		cid = "Panodic(ShenZhen) Electronics Limted";
		break;
	case 0x18F87A:
		cid = "i3 International Inc.";
		break;
	case 0x142DF5:
		cid = "Amphitech";
		break;
	case 0x90F72F:
		cid = "Phillips Machine & Welding Co., Inc.";
		break;
	case 0xB45570:
		cid = "Borea";
		break;
	case 0x5C5015:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0CD2B5:
		cid = "Binatone Telecommunication Pvt. Ltd";
		break;
	case 0x4846F1:
		cid = "Uros Oy";
		break;
	case 0x1CD40C:
		cid = "Kriwan Industrie-Elektronik GmbH";
		break;
	case 0x747B7A:
		cid = "ETH Inc.";
		break;
	case 0x1C7C45:
		cid = "Vitek Industrial Video Products, Inc.";
		break;
	case 0xC8AE9C:
		cid = "Shanghai TYD Elecronic Technology Co. Ltd";
		break;
	case 0xA44C11:
		cid = "Cisco Systems, Inc";
		break;
	case 0x782544:
		cid = "Omnima Limited";
		break;
	case 0xD4DF57:
		cid = "Alpinion Medical Systems";
		break;
	case 0x5048EB:
		cid = "BEIJING HAIHEJINSHENG NETWORK TECHNOLOGY CO. LTD.";
		break;
	case 0x40AC8D:
		cid = "Data Management, Inc.";
		break;
	case 0x54466B:
		cid = "Shenzhen CZTIC Electronic Technology Co., Ltd ";
		break;
	case 0x1C3477:
		cid = "Innovation Wireless";
		break;
	case 0x4423AA:
		cid = "Farmage Co., Ltd.";
		break;
	case 0xA0EF84:
		cid = "Seine Image Int'l Co., Ltd";
		break;
	case 0xAC7A42:
		cid = "iConnectivity";
		break;
	case 0x5869F9:
		cid = "Fusion Transactive Ltd.";
		break;
	case 0xB0C83F:
		cid = "Jiangsu Cynray IOT Co., Ltd.";
		break;
	case 0xCC14A6:
		cid = "Yichun MyEnergy Domain, Inc";
		break;
	case 0x98D686:
		cid = "Chyi Lee industry Co., ltd.";
		break;
	case 0x20443A:
		cid = "Schneider Electric Asia Pacific Ltd";
		break;
	case 0x28C914:
		cid = "Taimag Corporation";
		break;
	case 0x4C7897:
		cid = "Arrowhead Alarm Products Ltd";
		break;
	case 0xAC0A61:
		cid = "Labor S.r.L.";
		break;
	case 0xB482C5:
		cid = "Relay2, Inc.";
		break;
	case 0x60D1AA:
		cid = "Vishal Telecommunications Pvt Ltd";
		break;
	case 0xCCC104:
		cid = "Applied Technical Systems";
		break;
	case 0x709BA5:
		cid = "Shenzhen Y&D Electronics Co.,LTD.";
		break;
	case 0xEC42F0:
		cid = "ADL Embedded Solutions, Inc.";
		break;
	case 0x10BD18:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB0435D:
		cid = "NuLEDs, Inc.";
		break;
	case 0xA82BD6:
		cid = "Shina System Co., Ltd";
		break;
	case 0x8CC7AA:
		cid = "Radinet Communications Inc.";
		break;
	case 0x20014F:
		cid = "Linea Research Ltd";
		break;
	case 0x80D18B:
		cid = "Hangzhou I'converge Technology Co.,Ltd";
		break;
	case 0xB4A4B5:
		cid = "Zen Eye Co.,Ltd";
		break;
	case 0x489153:
		cid = "Weinmann Geräte für Medizin GmbH + Co. KG";
		break;
	case 0x549D85:
		cid = "EnerAccess inc";
		break;
	case 0x5CEE79:
		cid = "Global Digitech Co LTD";
		break;
	case 0x9CE10E:
		cid = "NCTech Ltd";
		break;
	case 0x28F606:
		cid = "Syes srl";
		break;
	case 0xA0C3DE:
		cid = "Triton Electronic Systems Ltd.";
		break;
	case 0xAC3FA4:
		cid = "TAIYO YUDEN CO.,LTD";
		break;
	case 0x0C130B:
		cid = "Uniqoteq Ltd.";
		break;
	case 0x808698:
		cid = "Netronics Technologies Inc.";
		break;
	case 0x2C00F7:
		cid = "XOS";
		break;
	case 0x809393:
		cid = "Xapt GmbH";
		break;
	case 0x00DEFB:
		cid = "Cisco Systems, Inc";
		break;
	case 0x90AC3F:
		cid = "BrightSign LLC";
		break;
	case 0x7CACB2:
		cid = "Bosch Software Innovations GmbH";
		break;
	case 0x0043FF:
		cid = "KETRON S.R.L.";
		break;
	case 0x745798:
		cid = "TRUMPF Laser GmbH + Co. KG";
		break;
	case 0x38E08E:
		cid = "Mitsubishi Electric Corporation";
		break;
	case 0xE4FA1D:
		cid = "PAD Peripheral Advanced Design Inc.";
		break;
	case 0x4C9E80:
		cid = "KYOKKO ELECTRIC Co., Ltd.";
		break;
	case 0xA826D9:
		cid = "HTC Corporation";
		break;
	case 0xF03A55:
		cid = "Omega Elektronik AS";
		break;
	case 0x24B88C:
		cid = "Crenus Co.,Ltd.";
		break;
	case 0x98BC57:
		cid = "SVA TECHNOLOGIES CO.LTD";
		break;
	case 0x98FE03:
		cid = "Ericsson - North America";
		break;
	case 0xF0EEBB:
		cid = "VIPAR GmbH";
		break;
	case 0x54D0ED:
		cid = "AXIM Communications";
		break;
	case 0xA49005:
		cid = "CHINA GREATWALL COMPUTER SHENZHEN CO.,LTD";
		break;
	case 0x3055ED:
		cid = "Trex Network LLC";
		break;
	case 0xD4A02A:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0463E0:
		cid = "Nome Oy";
		break;
	case 0xBCA4E1:
		cid = "Nabto";
		break;
	case 0x900A3A:
		cid = "PSG Plastic Service GmbH";
		break;
	case 0xFC5B26:
		cid = "MikroBits";
		break;
	case 0x5CC213:
		cid = "Fr. Sauter AG";
		break;
	case 0x581D91:
		cid = "Advanced Mobile Telecom co.,ltd.";
		break;
	case 0x9CB008:
		cid = "Ubiquitous Computing Technology Corporation";
		break;
	case 0x00376D:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0xE0EF25:
		cid = "Lintes Technology Co., Ltd.";
		break;
	case 0x645EBE:
		cid = "Yahoo! JAPAN";
		break;
	case 0xCCC50A:
		cid = "SHENZHEN DAJIAHAO TECHNOLOGY CO.,LTD";
		break;
	case 0xD01AA7:
		cid = "UniPrint";
		break;
	case 0xB08E1A:
		cid = "URadio Systems Co., Ltd";
		break;
	case 0xE05DA6:
		cid = "Detlef Fink Elektronik & Softwareentwicklung";
		break;
	case 0x0C7523:
		cid = "BEIJING GEHUA CATV NETWORK CO.,LTD";
		break;
	case 0xBC2C55:
		cid = "Bear Flag Design, Inc.";
		break;
	case 0x04F4BC:
		cid = "Xena Networks";
		break;
	case 0x608C2B:
		cid = "Hanson Technology";
		break;
	case 0xEC1120:
		cid = "FloDesign Wind Turbine Corporation";
		break;
	case 0xC495A2:
		cid = "SHENZHEN WEIJIU INDUSTRY AND TRADE DEVELOPMENT CO., LTD";
		break;
	case 0x0C9E91:
		cid = "Sankosha Corporation";
		break;
	case 0xF48771:
		cid = "Infoblox";
		break;
	case 0x04F021:
		cid = "Compex Systems Pte Ltd";
		break;
	case 0x8823FE:
		cid = "TTTech Computertechnik AG";
		break;
	case 0x98AAD7:
		cid = "BLUE WAVE NETWORKING CO LTD";
		break;
	case 0x20107A:
		cid = "Gemtek Technology Co., Ltd.";
		break;
	case 0x502267:
		cid = "PixeLINK";
		break;
	case 0x9092B4:
		cid = "Diehl BGT Defence GmbH & Co. KG";
		break;
	case 0x806007:
		cid = "RIM";
		break;
	case 0x38A851:
		cid = "Moog, Ing";
		break;
	case 0x90185E:
		cid = "Apex Tool Group GmbH & Co OHG";
		break;
	case 0x649EF3:
		cid = "Cisco Systems, Inc";
		break;
	case 0x34D09B:
		cid = "MobilMAX Technology Inc.";
		break;
	case 0x087572:
		cid = "Obelux Oy";
		break;
	case 0x9C1FDD:
		cid = "Accupix Inc.";
		break;
	case 0x506441:
		cid = "Greenlee";
		break;
	case 0x80946C:
		cid = "TOKYO RADAR CORPORATION";
		break;
	case 0x00FA3B:
		cid = "CLOOS ELECTRONIC GMBH";
		break;
	case 0x28CD1C:
		cid = "Espotel Oy";
		break;
	case 0xD824BD:
		cid = "Cisco Systems, Inc";
		break;
	case 0xD878E5:
		cid = "KUHN SA";
		break;
	case 0xC49300:
		cid = "8Devices";
		break;
	case 0x4C3910:
		cid = "Newtek Electronics co., Ltd.";
		break;
	case 0x5808FA:
		cid = "Fiber Optic & telecommunication INC.";
		break;
	case 0x7C94B2:
		cid = "Philips Healthcare PCCI";
		break;
	case 0x200505:
		cid = "RADMAX COMMUNICATION PRIVATE LIMITED";
		break;
	case 0x5848C0:
		cid = "COFLEC";
		break;
	case 0xC8F704:
		cid = "Building Block Video";
		break;
	case 0xC8AF40:
		cid = "marco Systemanalyse und Entwicklung GmbH";
		break;
	case 0xAC319D:
		cid = "Shenzhen TG-NET Botone Technology Co.,Ltd.";
		break;
	case 0x08D09F:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB81413:
		cid = "Keen High Holding(HK) Ltd.";
		break;
	case 0x2037BC:
		cid = "Kuipers Electronic Engineering BV";
		break;
	case 0xA887ED:
		cid = "ARC Wireless LLC";
		break;
	case 0x983571:
		cid = "Sub10 Systems Ltd";
		break;
	case 0xB05CE5:
		cid = "Nokia Corporation";
		break;
	case 0xCC6BF1:
		cid = "Sound Masking Inc.";
		break;
	case 0xB82CA0:
		cid = "Honeywell HomMed";
		break;
	case 0x94AE61:
		cid = "Alcatel Lucent";
		break;
	case 0x7CA61D:
		cid = "MHL, LLC";
		break;
	case 0x5CCEAD:
		cid = "CDYNE Corporation";
		break;
	case 0x9CA3BA:
		cid = "SAKURA Internet Inc.";
		break;
	case 0x709756:
		cid = "Happyelectronics Co.,Ltd";
		break;
	case 0xD4206D:
		cid = "HTC Corporation";
		break;
	case 0x1866E3:
		cid = "Veros Systems, Inc.";
		break;
	case 0x94DE0E:
		cid = "SmartOptics AS";
		break;
	case 0xA429B7:
		cid = "bluesky";
		break;
	case 0x7C6B33:
		cid = "Tenyu Tech Co. Ltd.";
		break;
	case 0xCCB8F1:
		cid = "EAGLE KINGDOM TECHNOLOGIES LIMITED";
		break;
	case 0xDC2E6A:
		cid = "HCT. Co., Ltd.";
		break;
	case 0x34255D:
		cid = "Shenzhen Loadcom Technology Co.,Ltd";
		break;
	case 0x1897FF:
		cid = "TechFaith Wireless Technology Limited";
		break;
	case 0x8C8E76:
		cid = "taskit GmbH";
		break;
	case 0xB4D8DE:
		cid = "iota Computing, Inc.";
		break;
	case 0x54CDA7:
		cid = "Fujian Shenzhou Electronic Co.,Ltd";
		break;
	case 0x1000FD:
		cid = "LaonPeople";
		break;
	case 0x603553:
		cid = "Buwon Technology";
		break;
	case 0xB89BC9:
		cid = "SMC Networks Inc";
		break;
	case 0x48022A:
		cid = "B-Link Electronic Limited";
		break;
	case 0x48A6D2:
		cid = "GJsun Optical Science and Tech Co.,Ltd.";
		break;
	case 0x186D99:
		cid = "Adanis Inc.";
		break;
	case 0xD44B5E:
		cid = "TAIYO YUDEN CO., LTD.";
		break;
	case 0xB40C25:
		cid = "Palo Alto Networks";
		break;
	case 0x40BF17:
		cid = "Digistar Telecom. SA";
		break;
	case 0xE4AFA1:
		cid = "HES-SO";
		break;
	case 0x58920D:
		cid = "Kinetic Avionics Limited";
		break;
	case 0x207600:
		cid = "Actiontec Electronics, Inc";
		break;
	case 0x84D32A:
		cid = "IEEE 1905.1";
		break;
	case 0xF8E7B5:
		cid = "µTech Tecnologia LTDA";
		break;
	case 0x0462D7:
		cid = "ALSTOM HYDRO FRANCE";
		break;
	case 0xCCC8D7:
		cid = "CIAS Elettronica srl";
		break;
	case 0x64AE0C:
		cid = "Cisco Systems, Inc";
		break;
	case 0xA446FA:
		cid = "AmTRAN Video Corporation";
		break;
	case 0x2804E0:
		cid = "FERMAX ELECTRONICA S.A.U.";
		break;
	case 0xFC01CD:
		cid = "FUNDACION TEKNIKER";
		break;
	case 0x88E7A6:
		cid = "iKnowledge Integration Corp.";
		break;
	case 0x98E79A:
		cid = "Foxconn(NanJing) Communication Co.,Ltd.";
		break;
	case 0x54F5B6:
		cid = "ORIENTAL PACIFIC INTERNATIONAL LIMITED";
		break;
	case 0x34A55D:
		cid = "TECHNOSOFT INTERNATIONAL SRL";
		break;
	case 0xD0C282:
		cid = "Cisco Systems, Inc";
		break;
	case 0x449CB5:
		cid = "Alcomp, Inc";
		break;
	case 0x24E6BA:
		cid = "JSC Zavod im. Kozitsky";
		break;
	case 0x8C8A6E:
		cid = "ESTUN AUTOMATION TECHNOLOY CO., LTD";
		break;
	case 0xE0ED1A:
		cid = "vastriver Technology Co., Ltd";
		break;
	case 0x685E6B:
		cid = "PowerRay Co., Ltd.";
		break;
	case 0x4C32D9:
		cid = "M Rutty Holdings Pty. Ltd.";
		break;
	case 0x603FC5:
		cid = "COX CO., LTD";
		break;
	case 0x182B05:
		cid = "8D Technologies";
		break;
	case 0x54A9D4:
		cid = "Minibar Systems";
		break;
	case 0x4861A3:
		cid = "Concern Axion JSC";
		break;
	case 0xD89685:
		cid = "GoPro";
		break;
	case 0x08A12B:
		cid = "ShenZhen EZL Technology Co., Ltd";
		break;
	case 0x94319B:
		cid = "Alphatronics BV";
		break;
	case 0x08FC52:
		cid = "OpenXS BV";
		break;
	case 0x205B5E:
		cid = "Shenzhen Wonhe Technology Co., Ltd";
		break;
	case 0x3CC99E:
		cid = "Huiyang Technology Co., Ltd";
		break;
	case 0xC8A1BA:
		cid = "Neul Ltd";
		break;
	case 0xAC02EF:
		cid = "Comsis";
		break;
	case 0xC43A9F:
		cid = "Siconix Inc.";
		break;
	case 0x0418B6:
		cid = "Private";
		break;
	case 0xD4024A:
		cid = "Delphian Systems LLC";
		break;
	case 0x84248D:
		cid = "Zebra Technologies Inc";
		break;
	case 0x24EC99:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0xB8621F:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB45CA4:
		cid = "Thing-talk Wireless Communication Technologies Corporation Limited";
		break;
	case 0xAC8ACD:
		cid = "ROGER D.Wensker, G.Wensker sp.j.";
		break;
	case 0x984246:
		cid = "SOL INDUSTRY PTE., LTD";
		break;
	case 0x28A574:
		cid = "Miller Electric Mfg. Co.";
		break;
	case 0x3826CD:
		cid = "ANDTEK";
		break;
	case 0xC436DA:
		cid = "Rusteletech Ltd.";
		break;
	case 0x00FC70:
		cid = "Intrepid Control Systems, Inc.";
		break;
	case 0xD0AFB6:
		cid = "Linktop Technology Co., LTD";
		break;
	case 0x444F5E:
		cid = "Pan Studios Co.,Ltd.";
		break;
	case 0x0C3956:
		cid = "Observator instruments";
		break;
	case 0xA49981:
		cid = "FuJian Elite Power Tech CO.,LTD.";
		break;
	case 0xB83A7B:
		cid = "Worldplay (Canada) Inc.";
		break;
	case 0x783F15:
		cid = "EasySYNC Ltd.";
		break;
	case 0x88B168:
		cid = "Delta Control GmbH";
		break;
	case 0x20B399:
		cid = "Enterasys";
		break;
	case 0x18B79E:
		cid = "Invoxia";
		break;
	case 0x147411:
		cid = "RIM";
		break;
	case 0x5C56ED:
		cid = "3pleplay Electronics Private Limited";
		break;
	case 0x0838A5:
		cid = "Funkwerk plettac electronic GmbH";
		break;
	case 0xBCCD45:
		cid = "VOISMART";
		break;
	case 0x78028F:
		cid = "Adaptive Spectrum and Signal Alignment (ASSIA), Inc.";
		break;
	case 0xD4A425:
		cid = "SMAX Technology Co., Ltd.";
		break;
	case 0x98F8DB:
		cid = "Marini Impianti Industriali s.r.l.";
		break;
	case 0x140708:
		cid = "Private";
		break;
	case 0x24C9DE:
		cid = "Genoray";
		break;
	case 0x605464:
		cid = "Eyedro Green Solutions Inc.";
		break;
	case 0x54055F:
		cid = "Alcatel Lucent";
		break;
	case 0x405539:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB8BEBF:
		cid = "Cisco Systems, Inc";
		break;
	case 0x38FEC5:
		cid = "Ellips B.V.";
		break;
	case 0x24C86E:
		cid = "Chaney Instrument Co.";
		break;
	case 0xD4D898:
		cid = "Korea CNO Tech Co., Ltd";
		break;
	case 0x5070E5:
		cid = "He Shan World Fair Electronics Technology Limited";
		break;
	case 0x28EE2C:
		cid = "Frontline Test Equipment";
		break;
	case 0x802275:
		cid = "Beijing Beny Wave Technology Co Ltd";
		break;
	case 0xBC8199:
		cid = "BASIC Co.,Ltd.";
		break;
	case 0x24470E:
		cid = "PentronicAB";
		break;
	case 0xA4DB2E:
		cid = "Kingspan Environmental Ltd";
		break;
	case 0xF44EFD:
		cid = "Actions Semiconductor Co.,Ltd.(Cayman Islands)";
		break;
	case 0x34BCA6:
		cid = "Beijing Ding Qing Technology, Ltd.";
		break;
	case 0xD4C1FC:
		cid = "Nokia Corporation";
		break;
	case 0x48DCFB:
		cid = "Nokia Corporation";
		break;
	case 0x688470:
		cid = "eSSys Co.,Ltd";
		break;
	case 0xF08BFE:
		cid = "COSTEL.,CO.LTD";
		break;
	case 0x5435DF:
		cid = "Symeo GmbH";
		break;
	case 0xF43D80:
		cid = "FAG Industrial Services GmbH";
		break;
	case 0xD4F0B4:
		cid = "Napco Security Technologies";
		break;
	case 0x40B3FC:
		cid = "Logital Co. Limited";
		break;
	case 0xD05FCE:
		cid = "Hitachi Data Systems";
		break;
	case 0x8C82A8:
		cid = "Insigma Technology Co.,Ltd";
		break;
	case 0x3C2763:
		cid = "SLE quality engineering GmbH & Co. KG";
		break;
	case 0xA44B15:
		cid = "Sun Cupid Technology (HK) LTD";
		break;
	case 0x508ACB:
		cid = "SHENZHEN MAXMADE TECHNOLOGY CO., LTD.";
		break;
	case 0x7032D5:
		cid = "Athena Wireless Communications Inc";
		break;
	case 0x7CF0BA:
		cid = "Linkwell Telesystems Pvt Ltd";
		break;
	case 0xCCC62B:
		cid = "Tri-Systems Corporation";
		break;
	case 0xACF97E:
		cid = "ELESYS INC.";
		break;
	case 0x4C7367:
		cid = "Genius Bytes Software Solutions GmbH";
		break;
	case 0xDC2B66:
		cid = "InfoBLOCK S.A. de C.V.";
		break;
	case 0x14F0C5:
		cid = "Xtremio Ltd.";
		break;
	case 0xC027B9:
		cid = "Beijing National Railway Research & Design Institute  of Signal & Communication Co., Ltd.";
		break;
	case 0x70A41C:
		cid = "Advanced Wireless Dynamics S.L.";
		break;
	case 0x285132:
		cid = "Shenzhen Prayfly Technology Co.,Ltd";
		break;
	case 0x4C3B74:
		cid = "VOGTEC(H.K.) Co., Ltd";
		break;
	case 0x509772:
		cid = "Westinghouse Digital";
		break;
	case 0xD85D84:
		cid = "CAx soft GmbH";
		break;
	case 0x78A683:
		cid = "Precidata";
		break;
	case 0xBC6784:
		cid = "Environics Oy";
		break;
	case 0xB4E0CD:
		cid = "Fusion-io, Inc";
		break;
	case 0x50AF73:
		cid = "Shenzhen Bitland Information Technology Co., Ltd.";
		break;
	case 0x488E42:
		cid = "DIGALOG GmbH";
		break;
	case 0x286046:
		cid = "Lantech Communications Global, Inc.";
		break;
	case 0xA424B3:
		cid = "FlatFrog Laboratories AB";
		break;
	case 0xA4856B:
		cid = "Q Electronics Ltd";
		break;
	case 0x84EA99:
		cid = "Vieworks";
		break;
	case 0xDCCBA8:
		cid = "Explora Technologies Inc";
		break;
	case 0x58EECE:
		cid = "Icon Time Systems";
		break;
	case 0xA41BC0:
		cid = "Fastec Imaging Corporation";
		break;
	case 0xE01F0A:
		cid = "Xslent Energy Technologies. LLC";
		break;
	case 0xF40321:
		cid = "BeNeXt B.V.";
		break;
	case 0x00B033:
		cid = "OAO Izhevskiy radiozavod";
		break;
	case 0x707EDE:
		cid = "NASTEC LTD.";
		break;
	case 0xCCBE71:
		cid = "OptiLogix BV";
		break;
	case 0x7CDD90:
		cid = "Shenzhen Ogemray Technology Co., Ltd.";
		break;
	case 0xC07E40:
		cid = "SHENZHEN XDK COMMUNICATION EQUIPMENT CO.,LTD";
		break;
	case 0xE44F29:
		cid = "MA Lighting Technology GmbH";
		break;
	case 0x6CAB4D:
		cid = "Digital Payment Technologies";
		break;
	case 0x60DA23:
		cid = "Estech Co.,Ltd";
		break;
	case 0x28F358:
		cid = "2C - Trifonov & Co";
		break;
	case 0x304C7E:
		cid = "Panasonic Electric Works Automation Controls Techno Co.,Ltd.";
		break;
	case 0x64D1A3:
		cid = "Sitecom Europe BV";
		break;
	case 0x3831AC:
		cid = "WEG";
		break;
	case 0x2C7ECF:
		cid = "Onzo Ltd";
		break;
	case 0x10E3C7:
		cid = "Seohwa Telecom";
		break;
	case 0xE84040:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0C8112:
		cid = "Private";
		break;
	case 0x7C7D41:
		cid = "Jinmuyu Electronics Co., Ltd.";
		break;
	case 0x4C1480:
		cid = "NOREGON SYSTEMS, INC";
		break;
	case 0x60F673:
		cid = "TERUMO CORPORATION";
		break;
	case 0xE48AD5:
		cid = "RF WINDOW CO., LTD.";
		break;
	case 0x24F0FF:
		cid = "GHT Co., Ltd.";
		break;
	case 0x4C07C9:
		cid = "COMPUTER OFFICE Co.,Ltd.";
		break;
	case 0x40F4EC:
		cid = "Cisco Systems, Inc";
		break;
	case 0x2872F0:
		cid = "ATHENA";
		break;
	case 0x9C807D:
		cid = "SYSCABLE Korea Inc.";
		break;
	case 0x180B52:
		cid = "Nanotron Technologies GmbH";
		break;
	case 0x64DE1C:
		cid = "Kingnetic Pte Ltd";
		break;
	case 0x540496:
		cid = "Gigawave LTD";
		break;
	case 0xC8C126:
		cid = "ZPM Industria e Comercio Ltda";
		break;
	case 0x041D10:
		cid = "Dream Ware Inc.";
		break;
	case 0x88DD79:
		cid = "Voltaire";
		break;
	case 0x4468AB:
		cid = "JUIN COMPANY, LIMITED";
		break;
	case 0x902E87:
		cid = "LabJack";
		break;
	case 0xC8208E:
		cid = "Storagedata";
		break;
	case 0x00B342:
		cid = "MacroSAN Technologies Co., Ltd.";
		break;
	case 0x4CB9C8:
		cid = "CONET CO., LTD.";
		break;
	case 0x0474A1:
		cid = "Aligera Equipamentos Digitais Ltda";
		break;
	case 0x1064E2:
		cid = "ADFweb.com s.r.l.";
		break;
	case 0xCC34D7:
		cid = "GEWISS S.P.A.";
		break;
	case 0xB4CFDB:
		cid = "Shenzhen Jiuzhou Electric Co.,LTD";
		break;
	case 0xC46354:
		cid = "U-Raku, Inc.";
		break;
	case 0x20FEDB:
		cid = "M2M Solution S.A.S.";
		break;
	case 0x405FBE:
		cid = "RIM";
		break;
	case 0xE05B70:
		cid = "Innovid, Co., Ltd.";
		break;
	case 0x043604:
		cid = "Gyeyoung I&T";
		break;
	case 0x34F968:
		cid = "ATEK Products, LLC";
		break;
	case 0xD0D0FD:
		cid = "Cisco Systems, Inc";
		break;
	case 0x706417:
		cid = "ORBIS TECNOLOGIA ELECTRICA S.A.";
		break;
	case 0x64FC8C:
		cid = "Zonar Systems";
		break;
	case 0x28ED58:
		cid = "JAG Jakob AG";
		break;
	case 0x9873C4:
		cid = "Sage Electronic Engineering LLC";
		break;
	case 0xB8797E:
		cid = "Secure Meters (UK) Limited";
		break;
	case 0x2005E8:
		cid = "OOO InProMedia";
		break;
	case 0xE0D10A:
		cid = "Katoudenkikougyousyo co ltd";
		break;
	case 0x1C0656:
		cid = "IDY Corporation";
		break;
	case 0xC44B44:
		cid = "Omniprint Inc.";
		break;
	case 0x6015C7:
		cid = "IdaTech";
		break;
	case 0x188ED5:
		cid = "TP Vision Belgium N.V. - innovation site Brugge";
		break;
	case 0x8CE7B3:
		cid = "Sonardyne International Ltd";
		break;
	case 0x0034F1:
		cid = "Radicom Research, Inc.";
		break;
	case 0xA8B0AE:
		cid = "LEONI";
		break;
	case 0x60893C:
		cid = "Thermo Fisher Scientific P.O.A.";
		break;
	case 0x5C17D3:
		cid = "LGE";
		break;
	case 0x70A191:
		cid = "Trendsetter Medical, LLC";
		break;
	case 0x58BC27:
		cid = "Cisco Systems, Inc";
		break;
	case 0x34D2C4:
		cid = "RENA GmbH Print Systeme";
		break;
	case 0xE0A670:
		cid = "Nokia Corporation";
		break;
	case 0xE061B2:
		cid = "HANGZHOU ZENOINTEL TECHNOLOGY CO., LTD";
		break;
	case 0x4491DB:
		cid = "Shanghai Huaqin Telecom Technology Co.,Ltd";
		break;
	case 0x14D76E:
		cid = "CONCH ELECTRONIC Co.,Ltd";
		break;
	case 0xCC6B98:
		cid = "Minetec Wireless Technologies";
		break;
	case 0xC4CD45:
		cid = "Beijing Boomsense Technology CO.,LTD.";
		break;
	case 0xD0BB80:
		cid = "SHL Telemedicine International Ltd.";
		break;
	case 0x1C83B0:
		cid = "Linked IP GmbH";
		break;
	case 0xF065DD:
		cid = "Primax Electronics Ltd.";
		break;
	case 0x706582:
		cid = "Suzhou Hanming Technologies Co., Ltd.";
		break;
	case 0x94C7AF:
		cid = "Raylios Technology";
		break;
	case 0x6854F5:
		cid = "enLighted Inc";
		break;
	case 0x008C10:
		cid = "Black Box Corp.";
		break;
	case 0x20A2E7:
		cid = "Lee-Dickens Ltd";
		break;
	case 0x8CDD8D:
		cid = "Wifly-City System Inc.";
		break;
	case 0xEC98C1:
		cid = "Beijing Risbo Network Technology Co.,Ltd";
		break;
	case 0xECC38A:
		cid = "Accuenergy (CANADA) Inc";
		break;
	case 0xD48FAA:
		cid = "Sogecam Industrial, S.A.";
		break;
	case 0x38A95F:
		cid = "Actifio Inc";
		break;
	case 0xA0DDE5:
		cid = "SHARP Corporation";
		break;
	case 0x94A7BC:
		cid = "BodyMedia, Inc.";
		break;
	case 0x6C9B02:
		cid = "Nokia Corporation";
		break;
	case 0x84DB2F:
		cid = "Sierra Wireless Inc";
		break;
	case 0xC89383:
		cid = "Embedded Automation, Inc.";
		break;
	case 0xD49E6D:
		cid = "Wuhan Zhongyuan Huadian Science & Technology Co.,";
		break;
	case 0x94F720:
		cid = "Tianjin Deviser Electronics Instrument Co., Ltd";
		break;
	case 0xEC2368:
		cid = "IntelliVoice Co.,Ltd.";
		break;
	case 0x04DD4C:
		cid = "Velocytech";
		break;
	case 0xB4C810:
		cid = "UMPI Elettronica";
		break;
	case 0x38580C:
		cid = "Panaccess Systems GmbH";
		break;
	case 0x24AF54:
		cid = "NEXGEN Mediatech Inc.";
		break;
	case 0xF0F9F7:
		cid = "IES GmbH & Co. KG";
		break;
	case 0xCC0CDA:
		cid = "Miljovakt AS";
		break;
	case 0xC01242:
		cid = "Alpha Security Products";
		break;
	case 0x90507B:
		cid = "Advanced PANMOBIL Systems GmbH & Co. KG";
		break;
	case 0x00B5D6:
		cid = "Omnibit Inc.";
		break;
	case 0xF893F3:
		cid = "VOLANS";
		break;
	case 0x7C3E9D:
		cid = "PATECH";
		break;
	case 0x4C60D5:
		cid = "airPointe of New Hampshire";
		break;
	case 0xD45297:
		cid = "nSTREAMS Technologies, Inc.";
		break;
	case 0x78EC22:
		cid = "Shanghai Qihui Telecom Technology Co., LTD";
		break;
	case 0xF8D756:
		cid = "Simm Tronic Limited";
		break;
	case 0xE087B1:
		cid = "Nata-Info Ltd.";
		break;
	case 0xA8B1D4:
		cid = "Cisco Systems, Inc";
		break;
	case 0x4CBAA3:
		cid = "Bison Electronics Inc.";
		break;
	case 0xEC7C74:
		cid = "Justone Technologies Co., Ltd.";
		break;
	case 0x3C1A79:
		cid = "Huayuan Technology CO.,LTD";
		break;
	case 0x30E48E:
		cid = "Vodafone UK";
		break;
	case 0x08512E:
		cid = "Orion Diagnostica Oy";
		break;
	case 0x9CF61A:
		cid = "UTC Fire and Security";
		break;
	case 0xC802A6:
		cid = "Beijing Newmine Technology";
		break;
	case 0xC84C75:
		cid = "Cisco Systems, Inc";
		break;
	case 0x284C53:
		cid = "Intune Networks";
		break;
	case 0x102D96:
		cid = "Looxcie Inc.";
		break;
	case 0x3037A6:
		cid = "Cisco Systems, Inc";
		break;
	case 0xACEA6A:
		cid = "GENIX INFOCOMM CO., LTD.";
		break;
	case 0x5C35DA:
		cid = "There Corporation Oy";
		break;
	case 0x005218:
		cid = "Wuxi Keboda Electron Co.Ltd";
		break;
	case 0x08F2F4:
		cid = "Net One Partners Co.,Ltd.";
		break;
	case 0x68EFBD:
		cid = "Cisco Systems, Inc";
		break;
	case 0x183BD2:
		cid = "BYD Precision Manufacture Company Ltd.";
		break;
	case 0xF45595:
		cid = "HENGBAO Corporation LTD.";
		break;
	case 0xC08B6F:
		cid = "S I Sistemas Inteligentes Eletrônicos Ltda";
		break;
	case 0xBCA9D6:
		cid = "Cyber-Rain, Inc.";
		break;
	case 0x0CDDEF:
		cid = "Nokia Corporation";
		break;
	case 0x80C63F:
		cid = "Remec Broadband Wireless , LLC";
		break;
	case 0xF09CBB:
		cid = "RaonThink Inc.";
		break;
	case 0xFCE23F:
		cid = "CLAY PAKY SPA";
		break;
	case 0xB0E39D:
		cid = "CAT SYSTEM CO.,LTD.";
		break;
	case 0x78A6BD:
		cid = "DAEYEON Control&Instrument Co,.Ltd";
		break;
	case 0x481249:
		cid = "Luxcom Technologies Inc.";
		break;
	case 0xB43DB2:
		cid = "Degreane Horizon";
		break;
	case 0xC4823F:
		cid = "Fujian Newland Auto-ID Tech. Co,.Ltd.";
		break;
	case 0xF4C795:
		cid = "WEY Elektronik AG";
		break;
	case 0x087695:
		cid = "Auto Industrial Co., Ltd.";
		break;
	case 0xACCE8F:
		cid = "HWA YAO TECHNOLOGIES CO., LTD";
		break;
	case 0x042F56:
		cid = "ATOCS (Shenzhen) LTD";
		break;
	case 0x084E1C:
		cid = "H2A Systems, LLC";
		break;
	case 0xA4B121:
		cid = "Arantia 2010 S.L.";
		break;
	case 0x9889ED:
		cid = "Anadem Information Inc.";
		break;
	case 0x147373:
		cid = "TUBITAK UEKAE";
		break;
	case 0x982D56:
		cid = "Resolution Audio";
		break;
	case 0x00A2DA:
		cid = "INAT GmbH";
		break;
	case 0x6C3E9C:
		cid = "KE Knestel Elektronik GmbH";
		break;
	case 0xF89D0D:
		cid = "Control Technology Inc.";
		break;
	case 0x1010B6:
		cid = "McCain Inc";
		break;
	case 0x081FF3:
		cid = "Cisco Systems, Inc";
		break;
	case 0x5CE286:
		cid = "Nortel Networks";
		break;
	case 0x2CCD27:
		cid = "Precor Inc";
		break;
	case 0x6C5E7A:
		cid = "Ubiquitous Internet Telecom Co., Ltd";
		break;
	case 0xD828C9:
		cid = "General Electric Consumer and Industrial";
		break;
	case 0xC86C1E:
		cid = "Display Systems Ltd";
		break;
	case 0xEC6C9F:
		cid = "Chengdu Volans Technology CO.,LTD";
		break;
	case 0xCCCC4E:
		cid = "Sun Fountainhead USA. Corp";
		break;
	case 0x60D30A:
		cid = "Quatius Limited";
		break;
	case 0xBC9DA5:
		cid = "DASCOM Europe GmbH";
		break;
	case 0x942E63:
		cid = "Finsécur";
		break;
	case 0xC8D2C1:
		cid = "Jetlun (Shenzhen) Corporation";
		break;
	case 0xF0BCC8:
		cid = "MaxID (Pty) Ltd";
		break;
	case 0x406186:
		cid = "MICRO-STAR INT'L CO.,LTD";
		break;
	case 0x74E537:
		cid = "RADSPIN";
		break;
	case 0x7C08D9:
		cid = "Shanghai B-Star Technology Co";
		break;
	case 0x448E81:
		cid = "VIG";
		break;
	case 0x2046F9:
		cid = "Advanced Network Devices (dba:AND)";
		break;
	case 0x0C8230:
		cid = "SHENZHEN MAGNUS TECHNOLOGIES CO.,LTD";
		break;
	case 0x50934F:
		cid = "Gradual Tecnologia Ltda.";
		break;
	case 0x34EF8B:
		cid = "NTT Communications Corporation";
		break;
	case 0x38E98C:
		cid = "Reco S.p.A.";
		break;
	case 0xF02408:
		cid = "Talaris (Sweden) AB";
		break;
	case 0xA06986:
		cid = "Wellav Technologies Ltd";
		break;
	case 0xF02FD8:
		cid = "Bi2-Vision";
		break;
	case 0xC86CB6:
		cid = "Optcom Co., Ltd.";
		break;
	case 0xC45976:
		cid = "Fugoo Coorporation";
		break;
	case 0xB0C8AD:
		cid = "People Power Company";
		break;
	case 0xA870A5:
		cid = "UniComm Inc.";
		break;
	case 0x80177D:
		cid = "Nortel Networks";
		break;
	case 0xE8DAAA:
		cid = "VideoHome Technology Corp.";
		break;
	case 0x647D81:
		cid = "YOKOTA INDUSTRIAL CO,.LTD";
		break;
	case 0x8891DD:
		cid = "Racktivity";
		break;
	case 0xC4198B:
		cid = "Dominion Voting Systems Corporation";
		break;
	case 0xC83A35:
		cid = "Tenda Technology Co., Ltd.";
		break;
	case 0xF4ACC1:
		cid = "Cisco Systems, Inc";
		break;
	case 0x584CEE:
		cid = "Digital One Technologies, Limited";
		break;
	case 0xE064BB:
		cid = "DigiView S.r.l.";
		break;
	case 0x4C63EB:
		cid = "Application Solutions (Electronics and Vision) Ltd";
		break;
	case 0xC01E9B:
		cid = "Pixavi AS";
		break;
	case 0x64168D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x24D2CC:
		cid = "SmartDrive Systems Inc.";
		break;
	case 0x7C6C8F:
		cid = "AMS NEVE LTD";
		break;
	case 0xC4E17C:
		cid = "U2S co.";
		break;
	case 0xA8C222:
		cid = "TM-Research Inc.";
		break;
	case 0x50252B:
		cid = "Nethra Imaging Incorporated";
		break;
	case 0xA4DA3F:
		cid = "Bionics Corp.";
		break;
	case 0x9C4E8E:
		cid = "ALT Systems Ltd";
		break;
	case 0x448312:
		cid = "Star-Net";
		break;
	case 0x687924:
		cid = "ELS-GmbH & Co. KG";
		break;
	case 0x38BB23:
		cid = "OzVision America LLC";
		break;
	case 0x003A99:
		cid = "Cisco Systems, Inc";
		break;
	case 0x04C05B:
		cid = "Tigo Energy";
		break;
	case 0x5C1437:
		cid = "Thyssenkrupp Aufzugswerke GmbH";
		break;
	case 0x9C55B4:
		cid = "I.S.E. S.r.l.";
		break;
	case 0xDC2C26:
		cid = "Iton Technology Limited";
		break;
	case 0x4CC452:
		cid = "Shang Hai Tyd. Electon Technology Ltd.";
		break;
	case 0xF0C24C:
		cid = "Zhejiang FeiYue Digital Technology Co., Ltd";
		break;
	case 0x08184C:
		cid = "A. S. Thomas, Inc.";
		break;
	case 0x5CE223:
		cid = "Delphin Technology AG";
		break;
	case 0xFC6198:
		cid = "NEC Personal Products, Ltd";
		break;
	case 0xF871FE:
		cid = "The Goldman Sachs Group, Inc.";
		break;
	case 0xD8C3FB:
		cid = "DETRACOM";
		break;
	case 0x201257:
		cid = "Most Lucky Trading Ltd";
		break;
	case 0xD49C28:
		cid = "JayBird LLC";
		break;
	case 0xA03A75:
		cid = "PSS Belgium N.V.";
		break;
	case 0x746B82:
		cid = "MOVEK";
		break;
	case 0x0C8411:
		cid = "A.O. Smith Water Products";
		break;
	case 0xF8E968:
		cid = "Egker Kft.";
		break;
	case 0xE8DFF2:
		cid = "PRF Co., Ltd.";
		break;
	case 0x006440:
		cid = "Cisco Systems, Inc";
		break;
	case 0xD0E40B:
		cid = "Wearable Inc.";
		break;
	case 0xAC867E:
		cid = "Create New Technology (HK) Limited Company";
		break;
	case 0x58F67B:
		cid = "Xia Men UnionCore Technology LTD.";
		break;
	case 0xA02EF3:
		cid = "United Integrated Services Co., Led.";
		break;
	case 0xA8CE90:
		cid = "CVC";
		break;
	case 0x00271F:
		cid = "MIPRO Electronics Co., Ltd";
		break;
	case 0x00271A:
		cid = "Geenovo Technology Ltd.";
		break;
	case 0x002714:
		cid = "Grainmustards, Co,ltd.";
		break;
	case 0x002717:
		cid = "CE Digital(Zhenjiang)Co.,Ltd";
		break;
	case 0x002708:
		cid = "Nordiag ASA";
		break;
	case 0x002701:
		cid = "INCOstartec GmbH";
		break;
	case 0x002702:
		cid = "SolarEdge Technologies";
		break;
	case 0x0026FB:
		cid = "AirDio Wireless, Inc.";
		break;
	case 0x0026F5:
		cid = "XRPLUS Inc.";
		break;
	case 0x002632:
		cid = "Instrumentation Technologies d.d.";
		break;
	case 0x00262C:
		cid = "IKT Advanced Technologies s.r.o.";
		break;
	case 0x002626:
		cid = "Geophysical Survey Systems, Inc.";
		break;
	case 0x00261F:
		cid = "SAE Magnetics (H.K.) Ltd.";
		break;
	case 0x002620:
		cid = "ISGUS GmbH";
		break;
	case 0x00261A:
		cid = "Femtocomm System Technology Corp.";
		break;
	case 0x002613:
		cid = "Engel Axil S.L.";
		break;
	case 0x00260D:
		cid = "Mercury Systems, Inc.";
		break;
	case 0x0025D8:
		cid = "KOREA MAINTENANCE";
		break;
	case 0x0025CC:
		cid = "Mobile Communications Korea Incorporated";
		break;
	case 0x0025C5:
		cid = "Star Link Communication Pvt. Ltd.";
		break;
	case 0x0025C6:
		cid = "kasercorp, ltd";
		break;
	case 0x0025C0:
		cid = "ZillionTV Corporation";
		break;
	case 0x0025B4:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0025B9:
		cid = "Cypress Solutions Inc";
		break;
	case 0x0025AD:
		cid = "Manufacturing Resources International";
		break;
	case 0x002600:
		cid = "TEAC Australia Pty Ltd.";
		break;
	case 0x002607:
		cid = "Enabling Technology Pty Ltd";
		break;
	case 0x0025FB:
		cid = "Tunstall Healthcare A/S";
		break;
	case 0x0025FA:
		cid = "J&M Analytik AG";
		break;
	case 0x0025F6:
		cid = "netTALK.com, Inc.";
		break;
	case 0x0025EF:
		cid = "I-TEC Co., Ltd.";
		break;
	case 0x0025E9:
		cid = "i-mate Development, Inc.";
		break;
	case 0x002690:
		cid = "I DO IT";
		break;
	case 0x00268A:
		cid = "Terrier SC Ltd";
		break;
	case 0x002689:
		cid = "General Dynamics Robotic Systems";
		break;
	case 0x002684:
		cid = "KISAN SYSTEM";
		break;
	case 0x002683:
		cid = "Ajoho Enterprise Co., Ltd.";
		break;
	case 0x00267D:
		cid = "A-Max Technology Macao Commercial Offshore Company Limited";
		break;
	case 0x002677:
		cid = "DEIF A/S";
		break;
	case 0x002671:
		cid = "AUTOVISION Co., Ltd";
		break;
	case 0x00266A:
		cid = "ESSENSIUM NV";
		break;
	case 0x0026EF:
		cid = "Technology Advancement Group, Inc.";
		break;
	case 0x0026E9:
		cid = "SP Corp";
		break;
	case 0x0026DC:
		cid = "Optical Systems Design";
		break;
	case 0x0026D6:
		cid = "Ningbo Andy Optoelectronic Co., Ltd.";
		break;
	case 0x0026CF:
		cid = "DEKA R&D";
		break;
	case 0x0026D0:
		cid = "Semihalf";
		break;
	case 0x0026CA:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0026C9:
		cid = "Proventix Systems, Inc.";
		break;
	case 0x0026C3:
		cid = "Insightek Corp.";
		break;
	case 0x002664:
		cid = "Core System Japan";
		break;
	case 0x002658:
		cid = "T-Platforms (Cyprus) Limited";
		break;
	case 0x002645:
		cid = "Circontrol S.A.";
		break;
	case 0x00263F:
		cid = "LIOS Technology GmbH";
		break;
	case 0x002639:
		cid = "T.M. Electronics, Inc.";
		break;
	case 0x0026B3:
		cid = "Thales Communications Inc";
		break;
	case 0x0026AD:
		cid = "Arada Systems, Inc.";
		break;
	case 0x0026A9:
		cid = "Strong Technologies Pty Ltd";
		break;
	case 0x0026A3:
		cid = "FQ Ingenieria Electronica S.A.";
		break;
	case 0x00269C:
		cid = "ITUS JAPAN CO. LTD";
		break;
	case 0x002696:
		cid = "NOOLIX Co., Ltd";
		break;
	case 0x002484:
		cid = "Bang and Olufsen Medicom a/s";
		break;
	case 0x002486:
		cid = "DesignArt Networks";
		break;
	case 0x00247F:
		cid = "Nortel Networks";
		break;
	case 0x002478:
		cid = "Mag Tech Electronics Co Limited";
		break;
	case 0x002471:
		cid = "Fusion MultiSystems dba Fusion-io";
		break;
	case 0x002473:
		cid = "3COM EUROPE LTD";
		break;
	case 0x002460:
		cid = "Giaval Science Development Co. Ltd.";
		break;
	case 0x00245B:
		cid = "RAIDON TECHNOLOGY, INC.";
		break;
	case 0x00244E:
		cid = "RadChips, Inc.";
		break;
	case 0x002447:
		cid = "Kaztek Systems";
		break;
	case 0x002442:
		cid = "Axona Limited";
		break;
	case 0x00243D:
		cid = "Emerson Appliance Motors and Controls";
		break;
	case 0x002528:
		cid = "Daido Signal Co., Ltd.";
		break;
	case 0x002523:
		cid = "OCP Inc.";
		break;
	case 0x00251E:
		cid = "ROTEL TECHNOLOGIES";
		break;
	case 0x002519:
		cid = "Viaas Inc";
		break;
	case 0x002514:
		cid = "PC Worth Int'l Co., Ltd.";
		break;
	case 0x00250D:
		cid = "GZT Telkom-Telmor sp. z o.o.";
		break;
	case 0x002506:
		cid = "A.I. ANTITACCHEGGIO ITALIA SRL";
		break;
	case 0x002508:
		cid = "Maquet Cardiopulmonary AG";
		break;
	case 0x00257A:
		cid = "CAMCO Produktions- und Vertriebs-GmbH für  Beschallungs- und Beleuchtungsanlagen";
		break;
	case 0x00257F:
		cid = "CallTechSolution Co.,Ltd";
		break;
	case 0x002573:
		cid = "ST Electronics (Info-Security) Pte Ltd";
		break;
	case 0x00256E:
		cid = "Van Breda B.V.";
		break;
	case 0x00256D:
		cid = "Broadband Forum";
		break;
	case 0x002560:
		cid = "Ibridge Networks & Communications Ltd.";
		break;
	case 0x00255B:
		cid = "CoachComm, LLC";
		break;
	case 0x0024E2:
		cid = "HASEGAWA ELECTRIC CO.,LTD.";
		break;
	case 0x0024DB:
		cid = "Alcohol Monitoring Systems";
		break;
	case 0x0024CF:
		cid = "Inscape Data Corporation";
		break;
	case 0x0024C8:
		cid = "Broadband Solutions Group";
		break;
	case 0x0024C3:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0024C0:
		cid = "NTI COMODO INC";
		break;
	case 0x0024B6:
		cid = "Seagate Technology";
		break;
	case 0x0024BB:
		cid = "CENTRAL Corporation";
		break;
	case 0x0024B1:
		cid = "Coulomb Technologies";
		break;
	case 0x0024AA:
		cid = "Dycor Technologies Ltd.";
		break;
	case 0x0024A3:
		cid = "Sonim Technologies Inc";
		break;
	case 0x00249E:
		cid = "ADC-Elektronik GmbH";
		break;
	case 0x00248B:
		cid = "HYBUS CO., LTD.";
		break;
	case 0x002492:
		cid = "Motorola, Broadband Solutions Group";
		break;
	case 0x002497:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002554:
		cid = "Pixel8 Networks";
		break;
	case 0x00254D:
		cid = "Singapore Technologies Electronics Limited";
		break;
	case 0x00254E:
		cid = "Vertex Wireless Co., Ltd.";
		break;
	case 0x002537:
		cid = "Runcom Technologies Ltd.";
		break;
	case 0x00253E:
		cid = "Sensus Metering Systems";
		break;
	case 0x002541:
		cid = "Maquet Critical Care AB";
		break;
	case 0x00252D:
		cid = "Kiryung Electronics";
		break;
	case 0x0025A6:
		cid = "Central Network Solution Co., Ltd.";
		break;
	case 0x0025A1:
		cid = "Enalasys";
		break;
	case 0x00259A:
		cid = "CEStronics GmbH";
		break;
	case 0x002593:
		cid = "DatNet Informatikai Kft.";
		break;
	case 0x002594:
		cid = "Eurodesign BG LTD";
		break;
	case 0x00258E:
		cid = "The Weather Channel";
		break;
	case 0x00258A:
		cid = "Pole/Zero Corporation";
		break;
	case 0x002589:
		cid = "Hills Industries Limited";
		break;
	case 0x002584:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002501:
		cid = "JSC Supertel";
		break;
	case 0x0024FA:
		cid = "Hilger u. Kern GMBH";
		break;
	case 0x0024F5:
		cid = "NDS Surgical Imaging";
		break;
	case 0x0024EE:
		cid = "Wynmax Inc.";
		break;
	case 0x0024E7:
		cid = "Plaster Networks";
		break;
	case 0x0023F2:
		cid = "TVLogic";
		break;
	case 0x0023E8:
		cid = "Demco Corp.";
		break;
	case 0x0023E1:
		cid = "Cavena Image Products AB";
		break;
	case 0x0023DC:
		cid = "Benein, Inc";
		break;
	case 0x0023DB:
		cid = "saxnet gmbh";
		break;
	case 0x0023C9:
		cid = "Sichuan Tianyi Information Science & Technology Stock CO.,LTD";
		break;
	case 0x0023CE:
		cid = "KITA DENSHI CORPORATION";
		break;
	case 0x0023D5:
		cid = "WAREMA electronic GmbH";
		break;
	case 0x002421:
		cid = "MICRO-STAR INT'L CO., LTD.";
		break;
	case 0x002414:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002415:
		cid = "Magnetic Autocontrol GmbH";
		break;
	case 0x00240F:
		cid = "Ishii Tool & Engineering Corporation";
		break;
	case 0x002408:
		cid = "Pacific Biosciences";
		break;
	case 0x002402:
		cid = "Op-Tection GmbH";
		break;
	case 0x0023FC:
		cid = "Ultra Stereo Labs, Inc";
		break;
	case 0x0023CF:
		cid = "CUMMINS-ALLISON CORP.";
		break;
	case 0x0023C2:
		cid = "SAMSUNG Electronics. Co. LTD";
		break;
	case 0x0023B6:
		cid = "SECURITE COMMUNICATIONS / HONEYWELL";
		break;
	case 0x0023BC:
		cid = "EQ-SYS GmbH";
		break;
	case 0x0023AA:
		cid = "HFR, Inc.";
		break;
	case 0x0023A9:
		cid = "Beijing Detianquan Electromechanical Equipment Co., Ltd";
		break;
	case 0x00233C:
		cid = "Alflex";
		break;
	case 0x00233B:
		cid = "C-Matic Systems Ltd";
		break;
	case 0x002335:
		cid = "Linkflex Co.,Ltd";
		break;
	case 0x00232D:
		cid = "SandForce";
		break;
	case 0x002328:
		cid = "ALCON TELECOMMUNICATIONS CO., LTD.";
		break;
	case 0x002321:
		cid = "Avitech International Corp";
		break;
	case 0x0022F8:
		cid = "PIMA Electronic Systems Ltd.";
		break;
	case 0x00231F:
		cid = "Guangda Electronic & Telecommunication Technology Development Co., Ltd.";
		break;
	case 0x0022E6:
		cid = "Intelligent Data";
		break;
	case 0x0022E0:
		cid = "Atlantic Software Technologies S.r.L.";
		break;
	case 0x0022DF:
		cid = "TAMUZ Monitors";
		break;
	case 0x0022DA:
		cid = "ANATEK, LLC";
		break;
	case 0x0022D3:
		cid = "Hub-Tech";
		break;
	case 0x0022CD:
		cid = "Ared Technology Co., Ltd.";
		break;
	case 0x0022C4:
		cid = "epro GmbH";
		break;
	case 0x0022C9:
		cid = "Lenord, Bauer & Co GmbH";
		break;
	case 0x0022BF:
		cid = "SieAmp Group of Companies";
		break;
	case 0x0022B9:
		cid = "Analogix Seminconductor, Inc";
		break;
	case 0x0022BA:
		cid = "HUTH Elektronik Systeme GmbH";
		break;
	case 0x00239D:
		cid = "Mapower Electronics Co., Ltd";
		break;
	case 0x002392:
		cid = "Proteus Industries Inc.";
		break;
	case 0x00238D:
		cid = "Techno Design Co., Ltd.";
		break;
	case 0x002388:
		cid = "V.T. Telematica S.p.a.";
		break;
	case 0x002383:
		cid = "InMage Systems Inc";
		break;
	case 0x00237C:
		cid = "NEOTION";
		break;
	case 0x002324:
		cid = "G-PRO COMPUTER";
		break;
	case 0x002431:
		cid = "Uni-v co.,ltd";
		break;
	case 0x00241B:
		cid = "iWOW Communications Pte Ltd";
		break;
	case 0x002422:
		cid = "Knapp Logistik Automation GmbH";
		break;
	case 0x002427:
		cid = "SSI COMPUTER CORP";
		break;
	case 0x002373:
		cid = "GridIron Systems, Inc.";
		break;
	case 0x002367:
		cid = "UniControls a.s.";
		break;
	case 0x00236E:
		cid = "Burster GmbH & Co KG";
		break;
	case 0x00236D:
		cid = "ResMed Ltd";
		break;
	case 0x002360:
		cid = "Lookit Technology Co., Ltd";
		break;
	case 0x00235B:
		cid = "Gulfstream";
		break;
	case 0x002316:
		cid = "KISAN ELECTRONICS CO";
		break;
	case 0x00230F:
		cid = "Hirsch Electronics Corporation";
		break;
	case 0x00230A:
		cid = "ARBURG GmbH & Co KG";
		break;
	case 0x002309:
		cid = "Janam Technologies LLC";
		break;
	case 0x002303:
		cid = "LITE-ON IT Corporation";
		break;
	case 0x0022F2:
		cid = "SunPower Corp";
		break;
	case 0x0022ED:
		cid = "TSI Power Corporation";
		break;
	case 0x00228D:
		cid = "GBS Laboratories LLC";
		break;
	case 0x002287:
		cid = "Titan Wireless LLC";
		break;
	case 0x002288:
		cid = "Sagrad, Inc.";
		break;
	case 0x002281:
		cid = "Daintree Networks Pty";
		break;
	case 0x00227A:
		cid = "Telecom Design";
		break;
	case 0x00226B:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x00225D:
		cid = "Digicable Network India Pvt. Ltd.";
		break;
	case 0x00225C:
		cid = "Multimedia & Communication Technology";
		break;
	case 0x00216F:
		cid = "SymCom, Inc.";
		break;
	case 0x002169:
		cid = "Prologix, LLC.";
		break;
	case 0x002156:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002150:
		cid = "EYEVIEW ELECTRONICS";
		break;
	case 0x00214A:
		cid = "Pixel Velocity, Inc";
		break;
	case 0x0021A3:
		cid = "Micromint";
		break;
	case 0x002199:
		cid = "Vacon Plc";
		break;
	case 0x002195:
		cid = "GWD Media Limited";
		break;
	case 0x00218F:
		cid = "Avantgarde Acoustic Lautsprechersysteme GmbH";
		break;
	case 0x002188:
		cid = "EMC Corporation";
		break;
	case 0x002182:
		cid = "SandLinks Systems, Ltd.";
		break;
	case 0x002175:
		cid = "Pacific Satellite International Ltd.";
		break;
	case 0x00222A:
		cid = "SoundEar A/S";
		break;
	case 0x00221E:
		cid = "Media Devices Co., Ltd.";
		break;
	case 0x002225:
		cid = "Thales Avionics Ltd";
		break;
	case 0x002212:
		cid = "CAI Networks, Inc.";
		break;
	case 0x00220B:
		cid = "National Source Coding Center";
		break;
	case 0x002205:
		cid = "WeLink Solutions, Inc.";
		break;
	case 0x002206:
		cid = "Cyberdyne Inc.";
		break;
	case 0x0022B3:
		cid = "Sei S.p.A.";
		break;
	case 0x0022AC:
		cid = "Hangzhou Siyuan Tech. Co., Ltd";
		break;
	case 0x0022A7:
		cid = "Tyco Electronics AMP GmbH";
		break;
	case 0x0022A0:
		cid = "Delphi Corporation";
		break;
	case 0x00229A:
		cid = "Lastar, Inc.";
		break;
	case 0x002299:
		cid = "SeaMicro Inc.";
		break;
	case 0x0021FA:
		cid = "A4SP Technologies Ltd.";
		break;
	case 0x0021F4:
		cid = "INRange Systems, Inc";
		break;
	case 0x0021ED:
		cid = "Telegesis";
		break;
	case 0x0021E7:
		cid = "Informatics Services Corporation";
		break;
	case 0x0021DB:
		cid = "Santachi Video Technology (Shenzhen) Co., Ltd.";
		break;
	case 0x0021E1:
		cid = "Nortel Networks";
		break;
	case 0x0021D5:
		cid = "X2E GmbH";
		break;
	case 0x0021DA:
		cid = "Automation Products Group Inc.";
		break;
	case 0x0021CE:
		cid = "NTC-Metrotek";
		break;
	case 0x0021C8:
		cid = "LOHUIS Networks";
		break;
	case 0x0021C2:
		cid = "GL Communications Inc";
		break;
	case 0x0021BB:
		cid = "Riken Keiki Co., Ltd.";
		break;
	case 0x0021B5:
		cid = "Galvanic Ltd";
		break;
	case 0x0021AF:
		cid = "Radio Frequency Systems";
		break;
	case 0x0021B6:
		cid = "Triacta Power Technologies Inc.";
		break;
	case 0x0021A9:
		cid = "Mobilink Telecom Co.,Ltd";
		break;
	case 0x0021A8:
		cid = "Telephonics Corporation";
		break;
	case 0x00210D:
		cid = "SAMSIN INNOTEC";
		break;
	case 0x002141:
		cid = "RADLIVE";
		break;
	case 0x002137:
		cid = "Bay Controls, LLC";
		break;
	case 0x00212D:
		cid = "SCIMOLEX CORPORATION";
		break;
	case 0x002133:
		cid = "Building B, Inc";
		break;
	case 0x002121:
		cid = "VRmagic GmbH";
		break;
	case 0x002126:
		cid = "Shenzhen Torch Equipment Co., Ltd.";
		break;
	case 0x002257:
		cid = "3COM EUROPE LTD";
		break;
	case 0x00224E:
		cid = "SEEnergy Corp.";
		break;
	case 0x002247:
		cid = "DAC ENGINEERING CO., LTD.";
		break;
	case 0x00223D:
		cid = "JumpGen Systems, LLC";
		break;
	case 0x002237:
		cid = "Shinhint Group";
		break;
	case 0x002238:
		cid = "LOGIPLUS";
		break;
	case 0x002231:
		cid = "SMT&C Co., Ltd.";
		break;
	case 0x00222B:
		cid = "Nucomm, Inc.";
		break;
	case 0x001EF6:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001EEA:
		cid = "Sensor Switch, Inc.";
		break;
	case 0x001EEF:
		cid = "Cantronic International Limited";
		break;
	case 0x001EDE:
		cid = "BYD COMPANY LIMITED";
		break;
	case 0x001EE3:
		cid = "T&W Electronics (ShenZhen) Co.,Ltd";
		break;
	case 0x001EDD:
		cid = "WASKO S.A.";
		break;
	case 0x001ED9:
		cid = "Mitsubishi Precision Co.,LTd.";
		break;
	case 0x001ED4:
		cid = "Doble Engineering";
		break;
	case 0x001ED3:
		cid = "Dot Technology Int'l Co., Ltd.";
		break;
	case 0x001ECD:
		cid = "KYLAND Technology Co. LTD";
		break;
	case 0x001EC6:
		cid = "Obvius Holdings LLC";
		break;
	case 0x001F9D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001FA2:
		cid = "Datron World Communications, Inc.";
		break;
	case 0x001F91:
		cid = "DBS Lodging Technologies, LLC";
		break;
	case 0x001F96:
		cid = "APROTECH CO.LTD";
		break;
	case 0x001F90:
		cid = "Actiontec Electronics, Inc";
		break;
	case 0x001F8F:
		cid = "Shanghai Bellmann Digital Source Co.,Ltd.";
		break;
	case 0x001F85:
		cid = "Apriva ISS, LLC";
		break;
	case 0x001F87:
		cid = "Skydigital Inc.";
		break;
	case 0x001F86:
		cid = "digEcor";
		break;
	case 0x001F80:
		cid = "Lucas Holding bv";
		break;
	case 0x001F3E:
		cid = "RP-Technik e.K.";
		break;
	case 0x001F42:
		cid = "Etherstack plc";
		break;
	case 0x001F39:
		cid = "Construcciones y Auxiliar de Ferrocarriles, S.A.";
		break;
	case 0x001F2B:
		cid = "Orange Logic";
		break;
	case 0x001F2C:
		cid = "Starbridge Networks";
		break;
	case 0x001F26:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001F1A:
		cid = "Prominvest";
		break;
	case 0x001EC1:
		cid = "3COM EUROPE LTD";
		break;
	case 0x001EBA:
		cid = "High Density Devices AS";
		break;
	case 0x001EB3:
		cid = "Primex Wireless";
		break;
	case 0x001EB4:
		cid = "UNIFAT TECHNOLOGY LTD.";
		break;
	case 0x001EA8:
		cid = "Datang Mobile Communications Equipment CO.,LTD";
		break;
	case 0x001E9C:
		cid = "Fidustron INC";
		break;
	case 0x001E95:
		cid = "SIGMALINK";
		break;
	case 0x001E96:
		cid = "Sepura Plc";
		break;
	case 0x001E8B:
		cid = "Infra Access Korea Co., Ltd.";
		break;
	case 0x001FEF:
		cid = "SHINSEI INDUSTRIES CO.,LTD";
		break;
	case 0x001FE8:
		cid = "KURUSUGAWA Electronics Industry Inc,.";
		break;
	case 0x001FDC:
		cid = "Mobile Safe Track Ltd";
		break;
	case 0x001FD7:
		cid = "TELERAD SA";
		break;
	case 0x001FCB:
		cid = "NIW Solutions";
		break;
	case 0x001F77:
		cid = "HEOL DESIGN";
		break;
	case 0x001F73:
		cid = "Teraview Technology Co., Ltd.";
		break;
	case 0x001F6D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001F61:
		cid = "Talent Communication Networks Inc.";
		break;
	case 0x001F66:
		cid = "PLANAR LLC";
		break;
	case 0x001F5A:
		cid = "Beckwith Electric Co.";
		break;
	case 0x001F53:
		cid = "GEMAC Gesellschaft für Mikroelektronikanwendung Chemnitz mbH";
		break;
	case 0x001F4E:
		cid = "ConMed Linvatec";
		break;
	case 0x001F54:
		cid = "Lorex Technology Inc.";
		break;
	case 0x001F47:
		cid = "MCS Logic Inc.";
		break;
	case 0x001FD2:
		cid = "COMMTECH TECHNOLOGY MACAO COMMERCIAL OFFSHORE LTD.";
		break;
	case 0x001FBF:
		cid = "Fulhua Microelectronics Corp. Taiwan Branch";
		break;
	case 0x001FAC:
		cid = "Goodmill Systems Ltd";
		break;
	case 0x00211A:
		cid = "LInTech Corporation";
		break;
	case 0x002113:
		cid = "Padtec S/A";
		break;
	case 0x002114:
		cid = "Hylab Technology Inc.";
		break;
	case 0x00210E:
		cid = "Orpak Systems L.T.D.";
		break;
	case 0x00210A:
		cid = "byd:sign Corporation";
		break;
	case 0x002104:
		cid = "Gigaset Communications GmbH";
		break;
	case 0x001FFB:
		cid = "Green Packet Bhd";
		break;
	case 0x001FF6:
		cid = "PS Audio International";
		break;
	case 0x001F19:
		cid = "BEN-RI ELECTRONICA S.A.";
		break;
	case 0x001F13:
		cid = "S.& A.S. Ltd.";
		break;
	case 0x001F0F:
		cid = "Select Engineered Systems";
		break;
	case 0x001EFD:
		cid = "Microbit 2.0 AB";
		break;
	case 0x001F02:
		cid = "Pixelmetrix Corporation Pte Ltd";
		break;
	case 0x001EF0:
		cid = "Gigafin Networks";
		break;
	case 0x001D2C:
		cid = "Wavetrend Technologies (Pty) Limited";
		break;
	case 0x001D27:
		cid = "NAC-INTERCOM";
		break;
	case 0x001D18:
		cid = "Power Innovation GmbH";
		break;
	case 0x001D13:
		cid = "NextGTV";
		break;
	case 0x001D0C:
		cid = "MobileCompia";
		break;
	case 0x001D06:
		cid = "HM Electronics, Inc.";
		break;
	case 0x001D05:
		cid = "Eaton Corporation";
		break;
	case 0x001E62:
		cid = "Siemon";
		break;
	case 0x001E5D:
		cid = "Holosys d.o.o.";
		break;
	case 0x001E56:
		cid = "Bally Wulff Entertainment GmbH";
		break;
	case 0x001E50:
		cid = "BATTISTONI RESEARCH";
		break;
	case 0x001E4A:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001D85:
		cid = "Call Direct Cellular Solutions";
		break;
	case 0x001D80:
		cid = "Beijing Huahuan Eletronics Co.,Ltd";
		break;
	case 0x001D68:
		cid = "Thomson Telecom Belgium";
		break;
	case 0x001D6F:
		cid = "Chainzone Technology Co., Ltd";
		break;
	case 0x001D76:
		cid = "Eyeheight Ltd.";
		break;
	case 0x001D7B:
		cid = "Ice Energy, Inc.";
		break;
	case 0x001D75:
		cid = "Radioscape PLC";
		break;
	case 0x001D63:
		cid = "Miele & Cie. KG";
		break;
	case 0x001D5C:
		cid = "Tom Communication Industrial Co.,Ltd.";
		break;
	case 0x001D55:
		cid = "ZANTAZ, Inc";
		break;
	case 0x001DC8:
		cid = "Navionics Research Inc., dba SCADAmetrics";
		break;
	case 0x001DC1:
		cid = "Audinate Pty L";
		break;
	case 0x001DBB:
		cid = "Dynamic System Electronics Corp.";
		break;
	case 0x001DAB:
		cid = "SwissQual License AG";
		break;
	case 0x001E86:
		cid = "MEL Co.,Ltd.";
		break;
	case 0x001E7F:
		cid = "CBM of America";
		break;
	case 0x001E7A:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001E79:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001E6F:
		cid = "Magna-Power Electronics, Inc.";
		break;
	case 0x001E70:
		cid = "Cobham Defence Communications Ltd";
		break;
	case 0x001E69:
		cid = "Thomson Inc.";
		break;
	case 0x001D56:
		cid = "Kramer Electronics Ltd.";
		break;
	case 0x001D50:
		cid = "SPINETIX SA";
		break;
	case 0x001D4B:
		cid = "Grid Connect Inc.";
		break;
	case 0x001D46:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001D3F:
		cid = "Mitron Pty Ltd";
		break;
	case 0x001D39:
		cid = "MOOHADIGITAL CO., LTD";
		break;
	case 0x001D3A:
		cid = "mh acoustics LLC";
		break;
	case 0x001D33:
		cid = "Maverick Systems Inc.";
		break;
	case 0x001E09:
		cid = "ZEFATEK Co.,LTD";
		break;
	case 0x001E04:
		cid = "Hanson Research Corporation";
		break;
	case 0x001DF7:
		cid = "R. STAHL Schaltgeräte GmbH";
		break;
	case 0x001DF8:
		cid = "Webpro Vision Technology Corporation";
		break;
	case 0x001DF1:
		cid = "Intego Systems, Inc.";
		break;
	case 0x001DEA:
		cid = "Commtest Instruments Ltd";
		break;
	case 0x001DDB:
		cid = "C-BEL Corporation";
		break;
	case 0x001DE5:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001DA4:
		cid = "Hangzhou System Technology CO., LTD";
		break;
	case 0x001D9F:
		cid = "MATT   R.P.Traczynscy Sp.J.";
		break;
	case 0x001D92:
		cid = "MICRO-STAR INT'L CO.,LTD.";
		break;
	case 0x001D91:
		cid = "Digitize, Inc";
		break;
	case 0x001D8C:
		cid = "La Crosse Technology LTD";
		break;
	case 0x001E39:
		cid = "Comsys Communication Ltd.";
		break;
	case 0x001E34:
		cid = "CryptoMetrics";
		break;
	case 0x001E2D:
		cid = "STIM";
		break;
	case 0x001E26:
		cid = "Digifriends Co. Ltd";
		break;
	case 0x001E1A:
		cid = "Best Source Taiwan Inc.";
		break;
	case 0x001E14:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001E0A:
		cid = "Syba Tech Limited";
		break;
	case 0x001C61:
		cid = "Galaxy  Microsystems LImited";
		break;
	case 0x001C55:
		cid = "Shenzhen Kaifa Technology Co.";
		break;
	case 0x001C5A:
		cid = "Advanced Relay Corporation";
		break;
	case 0x001C44:
		cid = "Bosch Security Systems BV";
		break;
	case 0x001C4B:
		cid = "Gener8, Inc.";
		break;
	case 0x001C38:
		cid = "Bio-Rad Laboratories, Inc.";
		break;
	case 0x001C3D:
		cid = "WaveStorm";
		break;
	case 0x001C3F:
		cid = "International Police Technologies, Inc.";
		break;
	case 0x001C3E:
		cid = "ECKey Corporation";
		break;
	case 0x001C31:
		cid = "Mobile XP Technology Co., LTD";
		break;
	case 0x001C2C:
		cid = "Synapse";
		break;
	case 0x001CF9:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001CF3:
		cid = "EVS BROADCAST EQUIPMENT";
		break;
	case 0x001CF4:
		cid = "Media Technology Systems Inc";
		break;
	case 0x001CED:
		cid = "ENVIRONNEMENT SA";
		break;
	case 0x001CE3:
		cid = "Optimedical Systems";
		break;
	case 0x001CDC:
		cid = "Custom Computer Services, Inc.";
		break;
	case 0x001CD0:
		cid = "Circleone Co.,Ltd.";
		break;
	case 0x001BF5:
		cid = "Tellink Sistemas de Telecomunicación S.L.";
		break;
	case 0x001BF0:
		cid = "Value Platforms Limited";
		break;
	case 0x001BE8:
		cid = "Ultratronik GmbH";
		break;
	case 0x001BE1:
		cid = "ViaLogy";
		break;
	case 0x001BDC:
		cid = "Vencer Co., Ltd.";
		break;
	case 0x001BD5:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001BCE:
		cid = "Measurement Devices Ltd";
		break;
	case 0x001C94:
		cid = "LI-COR Biosciences";
		break;
	case 0x001C8E:
		cid = "Alcatel-Lucent IPD";
		break;
	case 0x001C8D:
		cid = "Mesa Imaging";
		break;
	case 0x001C88:
		cid = "TRANSYSTEM INC.";
		break;
	case 0x001C83:
		cid = "New Level Telecom Co., Ltd.";
		break;
	case 0x001C7A:
		cid = "Perfectone Netware Company Ltd";
		break;
	case 0x001C7B:
		cid = "Castlenet Technology Inc.";
		break;
	case 0x001C79:
		cid = "Cohesive Financial Technologies LLC";
		break;
	case 0x001C74:
		cid = "Syswan Technologies Inc.";
		break;
	case 0x001C6D:
		cid = "KYOHRITSU ELECTRONIC INDUSTRY CO., LTD.";
		break;
	case 0x001C68:
		cid = "Anhui Sun Create Electronics Co., Ltd";
		break;
	case 0x001CC9:
		cid = "Kaise Electronic Technology Co., Ltd.";
		break;
	case 0x001CCA:
		cid = "Shanghai Gaozhi Science & Technology Development Co.";
		break;
	case 0x001CBD:
		cid = "Ezze Mobile Tech., Inc.";
		break;
	case 0x001CB8:
		cid = "CBC Co., Ltd";
		break;
	case 0x001CAD:
		cid = "Wuhan Telecommunication Devices Co.,Ltd";
		break;
	case 0x001CAE:
		cid = "WiChorus, Inc.";
		break;
	case 0x001CA7:
		cid = "International Quartz Limited";
		break;
	case 0x001CA0:
		cid = "Production Resource Group, LLC";
		break;
	case 0x001C9B:
		cid = "FEIG ELECTRONIC GmbH";
		break;
	case 0x001B69:
		cid = "Equaline Corporation";
		break;
	case 0x001B64:
		cid = "IsaacLandKorea Co., Ltd,";
		break;
	case 0x001B5D:
		cid = "Vololink Pty Ltd";
		break;
	case 0x001B56:
		cid = "Tehuti Networks Ltd.";
		break;
	case 0x001B51:
		cid = "Vector Technology Corp.";
		break;
	case 0x001B45:
		cid = "ABB AS, Division Automation Products";
		break;
	case 0x001B4A:
		cid = "W&W Communications, Inc.";
		break;
	case 0x001B43:
		cid = "Beijing DG Telecommunications equipment Co.,Ltd";
		break;
	case 0x001B3E:
		cid = "Curtis, Inc.";
		break;
	case 0x001B37:
		cid = "Computec Oy";
		break;
	case 0x001B2B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001BC9:
		cid = "FSN DISPLAY INC";
		break;
	case 0x001BC2:
		cid = "Integrated Control Technology Limitied";
		break;
	case 0x001BBC:
		cid = "Silver Peak Systems, Inc.";
		break;
	case 0x001BBD:
		cid = "FMC Kongsberg Subsea AS";
		break;
	case 0x001BB3:
		cid = "Condalo GmbH";
		break;
	case 0x001BB8:
		cid = "BLUEWAY ELECTRONIC CO;LTD";
		break;
	case 0x001BAC:
		cid = "Curtiss Wright Controls Embedded Computing";
		break;
	case 0x001BB2:
		cid = "Intellect International NV";
		break;
	case 0x001BA5:
		cid = "MyungMin Systems, Inc.";
		break;
	case 0x001BA0:
		cid = "Awox";
		break;
	case 0x001B99:
		cid = "KS System GmbH";
		break;
	case 0x001C1B:
		cid = "Hyperstone GmbH";
		break;
	case 0x001C0F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001C08:
		cid = "Echo360, Inc.";
		break;
	case 0x001C02:
		cid = "Pano Logic";
		break;
	case 0x001C01:
		cid = "ABB Oy Drives";
		break;
	case 0x001C03:
		cid = "Betty TV Technology AG";
		break;
	case 0x001B92:
		cid = "l-acoustics";
		break;
	case 0x001B8D:
		cid = "Electronic Computer Systems, Inc.";
		break;
	case 0x001B88:
		cid = "Divinet Access Technologies Ltd";
		break;
	case 0x001B83:
		cid = "Finsoft Ltd";
		break;
	case 0x001B7C:
		cid = "A & R Cambridge";
		break;
	case 0x001B76:
		cid = "Ripcode, Inc.";
		break;
	case 0x001B75:
		cid = "Hypermedia Systems";
		break;
	case 0x001B70:
		cid = "IRI Ubiteq, INC.";
		break;
	case 0x001A18:
		cid = "Advanced Simulation Technology inc.";
		break;
	case 0x001A0A:
		cid = "Adaptive Micro-Ware Inc.";
		break;
	case 0x001A05:
		cid = "OPTIBASE LTD";
		break;
	case 0x001A03:
		cid = "Angel Electronics Co., Ltd.";
		break;
	case 0x0019FE:
		cid = "SHENZHEN SEECOMM TECHNOLOGY CO.,LTD.";
		break;
	case 0x0019F9:
		cid = "TDK-Lambda";
		break;
	case 0x0019ED:
		cid = "Axesstel Inc.";
		break;
	case 0x0019F4:
		cid = "Convergens Oy Ltd";
		break;
	case 0x001A79:
		cid = "TELECOMUNICATION TECHNOLOGIES LTD.";
		break;
	case 0x001A99:
		cid = "Smarty (HZ) Information Electronics Co., Ltd";
		break;
	case 0x001A9B:
		cid = "ADEC & Parter AG";
		break;
	case 0x001A94:
		cid = "Votronic GmbH";
		break;
	case 0x001A83:
		cid = "Pegasus Technologies Inc.";
		break;
	case 0x001A7E:
		cid = "LN Srithai Comm Ltd.";
		break;
	case 0x001AF1:
		cid = "Embedded Artists AB";
		break;
	case 0x001AF6:
		cid = "Woven Systems, Inc.";
		break;
	case 0x001AEC:
		cid = "Keumbee Electronics Co.,Ltd.";
		break;
	case 0x001AE0:
		cid = "Mythology Tech Express Inc.";
		break;
	case 0x001AE5:
		cid = "Mvox Technologies Inc.";
		break;
	case 0x001AD2:
		cid = "Eletronica Nitron Ltda";
		break;
	case 0x001AD9:
		cid = "International Broadband Electric Communications, Inc.";
		break;
	case 0x001ACB:
		cid = "Autocom Products Ltd";
		break;
	case 0x001ACD:
		cid = "Tidel Engineering LP";
		break;
	case 0x001A46:
		cid = "Digital Multimedia Technology Co., Ltd";
		break;
	case 0x001A3A:
		cid = "Dongahelecomm";
		break;
	case 0x001A3F:
		cid = "intelbras";
		break;
	case 0x001A41:
		cid = "INOCOVA Co.,Ltd";
		break;
	case 0x001A2E:
		cid = "Ziova Coporation";
		break;
	case 0x001A33:
		cid = "ASI Communications, Inc.";
		break;
	case 0x001A1D:
		cid = "PChome Online Inc.";
		break;
	case 0x001A24:
		cid = "Galaxy Telecom Technologies Ltd";
		break;
	case 0x0019A5:
		cid = "RadarFind Corporation";
		break;
	case 0x0019AC:
		cid = "GSP SYSTEMS Inc.";
		break;
	case 0x0019B1:
		cid = "Arrow7 Corporation";
		break;
	case 0x00199E:
		cid = "Nifty";
		break;
	case 0x0019A0:
		cid = "NIHON DATA SYSTENS, INC.";
		break;
	case 0x001994:
		cid = "Jorjin Technologies Inc.";
		break;
	case 0x00198F:
		cid = "Alcatel Bell N.V.";
		break;
	case 0x0019E8:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0019DA:
		cid = "Welltrans O&E Technology Co. , Ltd.";
		break;
	case 0x0019DC:
		cid = "ENENSYS Technologies";
		break;
	case 0x0019C9:
		cid = "S&C ELECTRIC COMPANY";
		break;
	case 0x0019CE:
		cid = "Progressive Gaming International";
		break;
	case 0x0019D5:
		cid = "IP Innovations, Inc.";
		break;
	case 0x0019C4:
		cid = "Infocrypt Inc.";
		break;
	case 0x0019BF:
		cid = "Citiway technology Co.,ltd";
		break;
	case 0x0019BD:
		cid = "New Media Life";
		break;
	case 0x0019B8:
		cid = "Boundary Devices";
		break;
	case 0x001B26:
		cid = "RON-Telecom ZAO";
		break;
	case 0x001B1C:
		cid = "Coherent";
		break;
	case 0x001B1A:
		cid = "e-trees Japan, Inc.";
		break;
	case 0x001B15:
		cid = "Voxtel, Inc.";
		break;
	case 0x001B09:
		cid = "Matrix Telecom Pvt. Ltd.";
		break;
	case 0x001B0E:
		cid = "InoTec GmbH Organisationssysteme";
		break;
	case 0x001B07:
		cid = "Mendocino Software";
		break;
	case 0x001B02:
		cid = "ED Co.Ltd";
		break;
	case 0x001AFB:
		cid = "Joby Inc.";
		break;
	case 0x001A74:
		cid = "Procare International Co";
		break;
	case 0x001A6D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001A68:
		cid = "Weltec Enterprise Co., Ltd.";
		break;
	case 0x001A61:
		cid = "PacStar Corp.";
		break;
	case 0x001A54:
		cid = "Hip Shing Electronics Ltd.";
		break;
	case 0x001A59:
		cid = "Ircona";
		break;
	case 0x001A4D:
		cid = "GIGA-BYTE TECHNOLOGY CO.,LTD.";
		break;
	case 0x001A52:
		cid = "Meshlinx Wireless Inc.";
		break;
	case 0x001AC6:
		cid = "Micro Control Designs";
		break;
	case 0x001ABC:
		cid = "U4EA Technologies Ltd";
		break;
	case 0x001AC1:
		cid = "3Com Ltd";
		break;
	case 0x001AB0:
		cid = "Signal Networks Pvt. Ltd.,";
		break;
	case 0x001AB5:
		cid = "Home Network System";
		break;
	case 0x001AA9:
		cid = "FUJIAN STAR-NET COMMUNICATION CO.,LTD";
		break;
	case 0x00183C:
		cid = "Encore Software Limited";
		break;
	case 0x001841:
		cid = "High Tech Computer Corp";
		break;
	case 0x001843:
		cid = "Dawevision Ltd";
		break;
	case 0x001837:
		cid = "Universal ABIT Co., Ltd.";
		break;
	case 0x001826:
		cid = "Cale Access AB";
		break;
	case 0x00182B:
		cid = "Softier";
		break;
	case 0x001818:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00181A:
		cid = "AVerMedia Information Inc.";
		break;
	case 0x00181F:
		cid = "Palmmicro Communications";
		break;
	case 0x001804:
		cid = "E-TEK DIGITAL TECHNOLOGY LIMITED";
		break;
	case 0x001807:
		cid = "Fanstel Corp.";
		break;
	case 0x00180C:
		cid = "Optelian Access Networks";
		break;
	case 0x0017FF:
		cid = "PLAYLINE Co.,Ltd.";
		break;
	case 0x0017F1:
		cid = "Renu Electronics Pvt Ltd";
		break;
	case 0x0017F8:
		cid = "Motech Industries Inc.";
		break;
	case 0x0017D4:
		cid = "Monsoon Multimedia, Inc";
		break;
	case 0x0017D9:
		cid = "AAI Corporation";
		break;
	case 0x0017E0:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001920:
		cid = "KUME electric Co.,Ltd.";
		break;
	case 0x001925:
		cid = "Intelicis Corporation";
		break;
	case 0x001912:
		cid = "Welcat Inc";
		break;
	case 0x001914:
		cid = "Winix Co., Ltd";
		break;
	case 0x001919:
		cid = "ASTEL Inc.";
		break;
	case 0x00190D:
		cid = "IEEE 1394c";
		break;
	case 0x001901:
		cid = "F1MEDIA";
		break;
	case 0x001906:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0018F5:
		cid = "Shenzhen Streaming Video Technology Company Limited";
		break;
	case 0x0018F7:
		cid = "Kameleon Technologies";
		break;
	case 0x0018FC:
		cid = "Altec Electronic AG";
		break;
	case 0x001981:
		cid = "Vivox Inc";
		break;
	case 0x001983:
		cid = "CCT R&D Limited";
		break;
	case 0x001975:
		cid = "Beijing Huisen networks technology Inc";
		break;
	case 0x00197C:
		cid = "Riedel Communications GmbH";
		break;
	case 0x001970:
		cid = "Z-Com, Inc.";
		break;
	case 0x001964:
		cid = "Doorking Inc.";
		break;
	case 0x00195F:
		cid = "Valemount Networks Corporation";
		break;
	case 0x001953:
		cid = "Chainleader Communications Corp.";
		break;
	case 0x001958:
		cid = "Bluetooth SIG, Inc.";
		break;
	case 0x00195A:
		cid = "Jenaer Antriebstechnik GmbH";
		break;
	case 0x0018F0:
		cid = "JOYTOTO Co., Ltd.";
		break;
	case 0x0018E9:
		cid = "Numata Corporation";
		break;
	case 0x0018E4:
		cid = "YIGUANG";
		break;
	case 0x0018DD:
		cid = "Silicondust Engineering Ltd";
		break;
	case 0x0018D8:
		cid = "ARCH METER Corporation";
		break;
	case 0x0018D1:
		cid = "Siemens Home & Office Comm. Devices";
		break;
	case 0x0018D6:
		cid = "Swirlnet A/S";
		break;
	case 0x0018CC:
		cid = "AXIOHM SAS";
		break;
	case 0x0018C7:
		cid = "Real Time Automation";
		break;
	case 0x00186C:
		cid = "Neonode AB";
		break;
	case 0x001878:
		cid = "Mackware GmbH";
		break;
	case 0x001867:
		cid = "Datalogic ADC";
		break;
	case 0x00185B:
		cid = "Network Chemistry, Inc";
		break;
	case 0x00184F:
		cid = "8 Ways Technology Corp.";
		break;
	case 0x001854:
		cid = "Argard Co., Ltd";
		break;
	case 0x001856:
		cid = "EyeFi, Inc";
		break;
	case 0x001848:
		cid = "Vecima Networks Inc.";
		break;
	case 0x001945:
		cid = "RF COncepts, LLC";
		break;
	case 0x00194C:
		cid = "Fujian Stelcom information & Technology CO.,Ltd";
		break;
	case 0x001940:
		cid = "Rackable Systems";
		break;
	case 0x001934:
		cid = "TRENDON TOUCH TECHNOLOGY CORP.";
		break;
	case 0x001939:
		cid = "Gigamips";
		break;
	case 0x001931:
		cid = "Balluff GmbH";
		break;
	case 0x0018BB:
		cid = "Eliwell Controls srl";
		break;
	case 0x0018B9:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0018B4:
		cid = "Dawon Media Inc.";
		break;
	case 0x0018AD:
		cid = "NIDEC SANKYO CORPORATION";
		break;
	case 0x0018A8:
		cid = "AnNeal Technology Inc.";
		break;
	case 0x00189C:
		cid = "Weldex Corporation";
		break;
	case 0x0018A1:
		cid = "Tiqit Computers, Inc.";
		break;
	case 0x001897:
		cid = "JESS-LINK PRODUCTS Co., LTD";
		break;
	case 0x001892:
		cid = "ads-tec GmbH";
		break;
	case 0x001890:
		cid = "RadioCOM, s.r.o.";
		break;
	case 0x001884:
		cid = "Fon Technology S.L.";
		break;
	case 0x00187F:
		cid = "ZODIANET";
		break;
	case 0x0016D1:
		cid = "ZAT a.s.";
		break;
	case 0x0016C3:
		cid = "BA Systems Inc";
		break;
	case 0x0016BE:
		cid = "INFRANET, Inc.";
		break;
	case 0x0016B7:
		cid = "Seoul Commtech";
		break;
	case 0x0016B2:
		cid = "DriveCam Inc";
		break;
	case 0x0016B0:
		cid = "VK Corporation";
		break;
	case 0x0016AB:
		cid = "Dansensor A/S";
		break;
	case 0x0016A6:
		cid = "Dovado FZ-LLC";
		break;
	case 0x0017CF:
		cid = "iMCA-GmbH";
		break;
	case 0x0017C3:
		cid = "KTF Technologies Inc.";
		break;
	case 0x0017B7:
		cid = "Tonze Technology Co.";
		break;
	case 0x0017BC:
		cid = "Touchtunes Music Corporation";
		break;
	case 0x0017B5:
		cid = "Peerless Systems Corporation";
		break;
	case 0x001723:
		cid = "Summit Data Communications";
		break;
	case 0x00171C:
		cid = "NT MicroSystems, Inc.";
		break;
	case 0x001710:
		cid = "Casa Systems Inc.";
		break;
	case 0x001715:
		cid = "Qstik";
		break;
	case 0x001717:
		cid = "Leica Geosystems AG";
		break;
	case 0x00170B:
		cid = "Contela, Inc.";
		break;
	case 0x0016FF:
		cid = "Wamin Optocomm Mfg Corp";
		break;
	case 0x001774:
		cid = "Elesta GmbH";
		break;
	case 0x001779:
		cid = "QuickTel";
		break;
	case 0x00177B:
		cid = "Azalea Networks inc";
		break;
	case 0x001764:
		cid = "ATMedia GmbH";
		break;
	case 0x001766:
		cid = "Accense Technology, Inc.";
		break;
	case 0x00175F:
		cid = "XENOLINK Communications Co., Ltd.";
		break;
	case 0x001751:
		cid = "Online Corporation";
		break;
	case 0x001758:
		cid = "ThruVision Ltd";
		break;
	case 0x001745:
		cid = "INNOTZ CO., Ltd";
		break;
	case 0x00174C:
		cid = "Millipore";
		break;
	case 0x00179F:
		cid = "Apricorn";
		break;
	case 0x0017A9:
		cid = "Sentivision";
		break;
	case 0x001793:
		cid = "Tigi Corporation";
		break;
	case 0x00178C:
		cid = "Independent Witness, Inc";
		break;
	case 0x00178E:
		cid = "Gunnebo Cash Automation AB";
		break;
	case 0x001780:
		cid = "Applied Biosystems B.V.";
		break;
	case 0x001787:
		cid = "Brother, Brother & Sons ApS";
		break;
	case 0x00176B:
		cid = "Kiyon, Inc.";
		break;
	case 0x00BAC0:
		cid = "Biometric Access Company";
		break;
	case 0x001673:
		cid = "Bury GmbH & Co. KG";
		break;
	case 0x001671:
		cid = "Symphox Information Co.";
		break;
	case 0x001665:
		cid = "Cellon France";
		break;
	case 0x00166A:
		cid = "TPS";
		break;
	case 0x00165E:
		cid = "Precision I/O";
		break;
	case 0x001657:
		cid = "Aegate Ltd";
		break;
	case 0x001659:
		cid = "Z.M.P. RADWAG";
		break;
	case 0x001658:
		cid = "Fusiontech Technologies Inc.";
		break;
	case 0x001652:
		cid = "Hoatech Technologies, Inc.";
		break;
	case 0x001646:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00164B:
		cid = "Quorion Data Systems GmbH";
		break;
	case 0x001740:
		cid = "Bluberi Gaming Technologies Inc";
		break;
	case 0x001736:
		cid = "iiTron Inc.";
		break;
	case 0x00172F:
		cid = "NeuLion Incorporated";
		break;
	case 0x001728:
		cid = "Selex Communications";
		break;
	case 0x00172A:
		cid = "Proware Technology Corp.(By Unifosa)";
		break;
	case 0x00169A:
		cid = "Quadrics Ltd";
		break;
	case 0x0016A1:
		cid = "3Leaf Networks";
		break;
	case 0x001693:
		cid = "PowerLink Technology Inc.";
		break;
	case 0x001695:
		cid = "AVC Technology (International) Limited";
		break;
	case 0x00168E:
		cid = "Vimicro corporation";
		break;
	case 0x001682:
		cid = "Pro Dex, Inc";
		break;
	case 0x001687:
		cid = "Chubb CSC-Vendor AP";
		break;
	case 0x00167B:
		cid = "Haver&Boecker";
		break;
	case 0x0016F3:
		cid = "CAST Information Co., Ltd";
		break;
	case 0x0016EE:
		cid = "Royaldigital Inc.";
		break;
	case 0x0016E7:
		cid = "Dynamix Promotions Limited";
		break;
	case 0x0016E0:
		cid = "3Com Ltd";
		break;
	case 0x0016D6:
		cid = "TDA Tech Pty Ltd";
		break;
	case 0x001525:
		cid = "Chamberlain Access Solutions";
		break;
	case 0x001519:
		cid = "StoreAge Networking Technologies";
		break;
	case 0x001518:
		cid = "Shenzhen 10MOONS Technology Development CO.,Ltd";
		break;
	case 0x001514:
		cid = "Hu Zhou NAVA Networks&Electronics Ltd.";
		break;
	case 0x00150E:
		cid = "OPENBRAIN TECHNOLOGIES CO., LTD.";
		break;
	case 0x00150F:
		cid = "mingjong";
		break;
	case 0x00150D:
		cid = "Hoana Medical, Inc.";
		break;
	case 0x001508:
		cid = "Global Target Enterprise Inc";
		break;
	case 0x0014FC:
		cid = "Extandon, Inc.";
		break;
	case 0x001501:
		cid = "LexBox";
		break;
	case 0x0014F5:
		cid = "OSI Security Devices";
		break;
	case 0x0014E9:
		cid = "Nortech International";
		break;
	case 0x0014EE:
		cid = "Western Digital Technologies, Inc.";
		break;
	case 0x0014DF:
		cid = "HI-P Tech Corporation";
		break;
	case 0x0014E4:
		cid = "infinias, LLC";
		break;
	case 0x0014D3:
		cid = "SEPSA";
		break;
	case 0x0014D8:
		cid = "bio-logic SA";
		break;
	case 0x0014D2:
		cid = "Kyuden Technosystems Corporation";
		break;
	case 0x0015E0:
		cid = "Ericsson";
		break;
	case 0x0015DC:
		cid = "KT&C Co., Ltd.";
		break;
	case 0x0015D5:
		cid = "NICEVT";
		break;
	case 0x0015D7:
		cid = "Reti Corporation";
		break;
	case 0x0015D6:
		cid = "OSLiNK Sp. z o.o.";
		break;
	case 0x0015C9:
		cid = "Gumstix, Inc";
		break;
	case 0x0015BD:
		cid = "Group 4 Technology Ltd";
		break;
	case 0x0015B6:
		cid = "ShinMaywa Industries, Ltd.";
		break;
	case 0x001581:
		cid = "MAKUS Inc.";
		break;
	case 0x00156B:
		cid = "Perfisans Networks Corp.";
		break;
	case 0x001570:
		cid = "Zebra Technologies Inc";
		break;
	case 0x00155D:
		cid = "Microsoft Corporation";
		break;
	case 0x00155F:
		cid = "GreenPeak Technologies";
		break;
	case 0x001564:
		cid = "BEHRINGER Spezielle Studiotechnik GmbH";
		break;
	case 0x00155E:
		cid = "Morgan Stanley";
		break;
	case 0x001558:
		cid = "FOXCONN";
		break;
	case 0x001551:
		cid = "RadioPulse Inc.";
		break;
	case 0x001549:
		cid = "Dixtal Biomedica Ind. Com. Ltda";
		break;
	case 0x00154C:
		cid = "Saunders Electronics";
		break;
	case 0x00154A:
		cid = "WANSHIH ELECTRONIC CO., LTD";
		break;
	case 0x00153D:
		cid = "ELIM PRODUCT CO.";
		break;
	case 0x001544:
		cid = "coM.s.a.t. AG";
		break;
	case 0x001531:
		cid = "KOCOM";
		break;
	case 0x001538:
		cid = "RFID, Inc.";
		break;
	case 0x00161D:
		cid = "Innovative Wireless Technologies, Inc.";
		break;
	case 0x00161C:
		cid = "e:cue";
		break;
	case 0x00160C:
		cid = "LPL  DEVELOPMENT S.A. DE C.V";
		break;
	case 0x001611:
		cid = "Altecon Srl";
		break;
	case 0x001612:
		cid = "Otsuka Electronics Co., Ltd.";
		break;
	case 0x001605:
		cid = "YORKVILLE SOUND INC.";
		break;
	case 0x0015F9:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001600:
		cid = "CelleBrite Mobile Synchronization";
		break;
	case 0x0015ED:
		cid = "Fulcrum Microsystems, Inc.";
		break;
	case 0x0015E1:
		cid = "Picochip Ltd";
		break;
	case 0x0015E6:
		cid = "MOBILE TECHNIKA Inc.";
		break;
	case 0x0015B1:
		cid = "Ambient Corporation";
		break;
	case 0x0015AC:
		cid = "Capelon AB";
		break;
	case 0x0015A7:
		cid = "Robatech AG";
		break;
	case 0x001594:
		cid = "BIXOLON CO.,LTD";
		break;
	case 0x00158D:
		cid = "Jennic Ltd";
		break;
	case 0x001588:
		cid = "Salutica Allied Solutions Sdn Bhd";
		break;
	case 0x0014CC:
		cid = "Zetec, Inc.";
		break;
	case 0x0014C0:
		cid = "Symstream Technology Group Ltd";
		break;
	case 0x0014C5:
		cid = "Alive Technologies Pty Ltd";
		break;
	case 0x0014B9:
		cid = "MSTAR SEMICONDUCTOR";
		break;
	case 0x0014AF:
		cid = "Datasym POS Inc.";
		break;
	case 0x0014A8:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00163C:
		cid = "Rebox B.V.";
		break;
	case 0x00162E:
		cid = "Space Shuttle Hi-Tech Co., Ltd.";
		break;
	case 0x001629:
		cid = "Nivus GmbH";
		break;
	case 0x001622:
		cid = "BBH SYSTEMS GMBH";
		break;
	case 0x001616:
		cid = "BROWAN COMMUNICATION INC.";
		break;
	case 0x00161B:
		cid = "Micronet Corporation";
		break;
	case 0x00135B:
		cid = "PanelLink Cinema, LLC";
		break;
	case 0x001362:
		cid = "ShinHeung Precision Co., Ltd.";
		break;
	case 0x001351:
		cid = "Niles Audio Corporation";
		break;
	case 0x001345:
		cid = "Eaton Corporation";
		break;
	case 0x00134A:
		cid = "Engim, Inc.";
		break;
	case 0x00133E:
		cid = "MetaSwitch";
		break;
	case 0x00132B:
		cid = "Phoenix Digital";
		break;
	case 0x001332:
		cid = "Beijing Topsec Network Security Technology Co., Ltd.";
		break;
	case 0x001337:
		cid = "Orient Power Home Network Ltd.";
		break;
	case 0x001338:
		cid = "FRESENIUS-VIAL";
		break;
	case 0x00137A:
		cid = "Netvox Technology Co., Ltd.";
		break;
	case 0x001381:
		cid = "CHIPS & Systems, Inc.";
		break;
	case 0x001374:
		cid = "Atheros Communications, Inc.";
		break;
	case 0x00136E:
		cid = "Techmetro Corp.";
		break;
	case 0x001373:
		cid = "BLwave Electronics Co., Ltd";
		break;
	case 0x001367:
		cid = "Narayon. Co., Ltd.";
		break;
	case 0x001361:
		cid = "Biospace Co., Ltd.";
		break;
	case 0x001357:
		cid = "Soyal Technology Co., Ltd.";
		break;
	case 0x001326:
		cid = "ECM Systems Ltd";
		break;
	case 0x001325:
		cid = "Cortina Systems Inc";
		break;
	case 0x00131B:
		cid = "BeCell Innovations Corp.";
		break;
	case 0x00131C:
		cid = "LiteTouch, Inc.";
		break;
	case 0x001309:
		cid = "Ocean Broadband Networks";
		break;
	case 0x00130E:
		cid = "Focusrite Audio Engineering Limited";
		break;
	case 0x0012FC:
		cid = "PLANET System Co.,LTD";
		break;
	case 0x0012F6:
		cid = "MDK CO.,LTD.";
		break;
	case 0x0012F1:
		cid = "IFOTEC";
		break;
	case 0x00143E:
		cid = "AirLink Communications, Inc.";
		break;
	case 0x001437:
		cid = "GSTeletech Co.,Ltd.";
		break;
	case 0x001430:
		cid = "ViPowER, Inc";
		break;
	case 0x00142B:
		cid = "Edata Communication Inc.";
		break;
	case 0x001424:
		cid = "Merry Electrics CO., LTD.";
		break;
	case 0x00141F:
		cid = "SunKwang Electronics Co., Ltd";
		break;
	case 0x00141A:
		cid = "DEICY CORPORATION";
		break;
	case 0x001413:
		cid = "Trebing & Himstedt Prozeßautomation GmbH & Co. KG";
		break;
	case 0x001415:
		cid = "Intec Automation inc.";
		break;
	case 0x001414:
		cid = "Jumpnode Systems LLC.";
		break;
	case 0x001405:
		cid = "OpenIB, Inc.";
		break;
	case 0x00140B:
		cid = "FIRST INTERNATIONAL COMPUTER, INC.";
		break;
	case 0x0013FE:
		cid = "GRANDTEC ELECTRONIC CORP.";
		break;
	case 0x0013F9:
		cid = "Cavera Systems";
		break;
	case 0x0013F2:
		cid = "Klas Ltd";
		break;
	case 0x0013EC:
		cid = "Netsnapper Technologies SARL";
		break;
	case 0x0013E1:
		cid = "Iprobe AB";
		break;
	case 0x0013E2:
		cid = "GeoVision Inc.";
		break;
	case 0x0013D5:
		cid = "RuggedCom";
		break;
	case 0x0013DC:
		cid = "IBTEK INC.";
		break;
	case 0x0013D0:
		cid = "t+ Medical Ltd";
		break;
	case 0x0013CB:
		cid = "Zenitel Norway AS";
		break;
	case 0x0013C6:
		cid = "OpenGear, Inc";
		break;
	case 0x0013C5:
		cid = "LIGHTRON FIBER-OPTIC DEVICES INC.";
		break;
	case 0x0013BB:
		cid = "Smartvue Corporation";
		break;
	case 0x0013BF:
		cid = "Media System Planning Corp.";
		break;
	case 0x0013B5:
		cid = "Wavesat";
		break;
	case 0x0013AE:
		cid = "Radiance Technologies, Inc.";
		break;
	case 0x0013A2:
		cid = "MaxStream, Inc";
		break;
	case 0x00139B:
		cid = "ioIMAGE Ltd.";
		break;
	case 0x00139C:
		cid = "Exavera Technologies, Inc.";
		break;
	case 0x001396:
		cid = "Acbel Polytech Inc.";
		break;
	case 0x001389:
		cid = "Redes de Telefonía Móvil S.A.";
		break;
	case 0x00149C:
		cid = "HF Company";
		break;
	case 0x0014A3:
		cid = "Vitelec BV";
		break;
	case 0x001497:
		cid = "ZHIYUAN Eletronics co.,ltd.";
		break;
	case 0x001496:
		cid = "Phonic Corp.";
		break;
	case 0x001490:
		cid = "ASP Corporation";
		break;
	case 0x001489:
		cid = "B15402100 - JANDEI, S.L.";
		break;
	case 0x001484:
		cid = "Cermate Technologies Inc.";
		break;
	case 0x00147F:
		cid = "Thomson Telecom Belgium";
		break;
	case 0x00147A:
		cid = "Eubus GmbH";
		break;
	case 0x001473:
		cid = "Bookham Inc";
		break;
	case 0x001467:
		cid = "ArrowSpan Inc.";
		break;
	case 0x001460:
		cid = "Kyocera Wireless Corp.";
		break;
	case 0x00145B:
		cid = "SeekerNet Inc.";
		break;
	case 0x00145A:
		cid = "Neratec Solutions AG";
		break;
	case 0x001459:
		cid = "Moram Co., Ltd.";
		break;
	case 0x001454:
		cid = "Symwave";
		break;
	case 0x001443:
		cid = "Consultronics Europe Ltd";
		break;
	case 0x00144A:
		cid = "Taiwan Thick-Film Ind. Corp.";
		break;
	case 0x0011C4:
		cid = "Terminales de Telecomunicacion Terrestre, S.L.";
		break;
	case 0x0011C9:
		cid = "MTT Corporation";
		break;
	case 0x0011BF:
		cid = "AESYS S.p.A.";
		break;
	case 0x0011B8:
		cid = "Liebherr - Elektronik GmbH";
		break;
	case 0x0011AC:
		cid = "Simtec Electronics";
		break;
	case 0x0011B1:
		cid = "BlueExpert Technology Corp.";
		break;
	case 0x0011B2:
		cid = "2001 Technology Inc.";
		break;
	case 0x0011A0:
		cid = "Vtech Engineering Canada Ltd";
		break;
	case 0x0011A5:
		cid = "Fortuna Electronic Corp.";
		break;
	case 0x001276:
		cid = "CG Power Systems Ireland Limited";
		break;
	case 0x00126F:
		cid = "Rayson Technology Co., Ltd.";
		break;
	case 0x001270:
		cid = "NGES Denro Systems";
		break;
	case 0x00126A:
		cid = "OPTOELECTRONICS Co., Ltd.";
		break;
	case 0x001263:
		cid = "Data Voice Technologies GmbH";
		break;
	case 0x00125E:
		cid = "CAEN";
		break;
	case 0x00125D:
		cid = "CyberNet Inc.";
		break;
	case 0x001259:
		cid = "THERMO ELECTRON KARLSRUHE";
		break;
	case 0x001254:
		cid = "Spectra Technologies Holdings Company Ltd";
		break;
	case 0x001253:
		cid = "AudioDev AB";
		break;
	case 0x00129D:
		cid = "First International Computer do Brasil";
		break;
	case 0x001291:
		cid = "KWS Computersysteme GmbH";
		break;
	case 0x001296:
		cid = "Addlogix";
		break;
	case 0x00128F:
		cid = "Montilio";
		break;
	case 0x001282:
		cid = "Qovia";
		break;
	case 0x001289:
		cid = "Advance Sterilization Products";
		break;
	case 0x00127D:
		cid = "MobileAria";
		break;
	case 0x0011F4:
		cid = "woori-net";
		break;
	case 0x0011EE:
		cid = "Estari, Inc.";
		break;
	case 0x0011ED:
		cid = "802 Global";
		break;
	case 0x0011E8:
		cid = "Tixi.Com";
		break;
	case 0x0011DB:
		cid = "Land-Cellular Corporation";
		break;
	case 0x0011DC:
		cid = "Glunz & Jensen";
		break;
	case 0x0011E1:
		cid = "Arcelik A.S";
		break;
	case 0x0011CE:
		cid = "Ubisense Limited";
		break;
	case 0x0011D5:
		cid = "Hangzhou Sunyard System Engineering Co.,Ltd.";
		break;
	case 0x001246:
		cid = "T.O.M TECHNOLOGY INC..";
		break;
	case 0x00124D:
		cid = "Inducon BV";
		break;
	case 0x001241:
		cid = "a2i marketing center";
		break;
	case 0x00123A:
		cid = "Posystech Inc., Co.";
		break;
	case 0x001234:
		cid = "Camille Bauer";
		break;
	case 0x00122A:
		cid = "VTech Telecommunications Ltd.";
		break;
	case 0x00122E:
		cid = "Signal Technology - AISD";
		break;
	case 0x001233:
		cid = "JRC TOKKI Co.,Ltd.";
		break;
	case 0x001199:
		cid = "2wcom Systems GmbH";
		break;
	case 0x00118F:
		cid = "EUTECH INSTRUMENTS PTE. LTD.";
		break;
	case 0x001183:
		cid = "Datalogic ADC, Inc.";
		break;
	case 0x00117C:
		cid = "e-zy.net";
		break;
	case 0x001176:
		cid = "Intellambda Systems, Inc.";
		break;
	case 0x0012C0:
		cid = "HotLava Systems, Inc.";
		break;
	case 0x0012B5:
		cid = "Vialta, Inc.";
		break;
	case 0x0012BC:
		cid = "Echolab LLC";
		break;
	case 0x0012B6:
		cid = "Santa Barbara Infrared, Inc.";
		break;
	case 0x0012B0:
		cid = "Efore Oyj   (Plc)";
		break;
	case 0x0012A4:
		cid = "ThingMagic, LLC";
		break;
	case 0x0012A9:
		cid = "3Com Ltd";
		break;
	case 0x0012A3:
		cid = "Trust International B.V.";
		break;
	case 0x001224:
		cid = "NexQL Corporation";
		break;
	case 0x001229:
		cid = "BroadEasy Technologies Co.,Ltd";
		break;
	case 0x00121D:
		cid = "Netfabric Corporation";
		break;
	case 0x001211:
		cid = "Protechna Herbst GmbH & Co. KG";
		break;
	case 0x001218:
		cid = "ARUZE Corporation";
		break;
	case 0x001205:
		cid = "Terrasat Communications, Inc.";
		break;
	case 0x00120A:
		cid = "Emerson Climate Technologies GmbH";
		break;
	case 0x0011FE:
		cid = "Keiyo System Research, Inc.";
		break;
	case 0x0011F8:
		cid = "AIRAYA Corp";
		break;
	case 0x0012EC:
		cid = "Movacolor b.v.";
		break;
	case 0x0012E5:
		cid = "Time America, Inc.";
		break;
	case 0x0012E0:
		cid = "Codan Limited";
		break;
	case 0x0012DF:
		cid = "Novomatic AG";
		break;
	case 0x0012D9:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0012C6:
		cid = "TGC America, Inc";
		break;
	case 0x0012CD:
		cid = "ASEM SpA";
		break;
	case 0x000FE9:
		cid = "GW TECHNOLOGIES CO.,LTD.";
		break;
	case 0x000FDD:
		cid = "SORDIN AB";
		break;
	case 0x000FD6:
		cid = "Sarotech Co., Ltd";
		break;
	case 0x000FD0:
		cid = "ASTRI";
		break;
	case 0x000FCF:
		cid = "DataWind Research";
		break;
	case 0x000FC3:
		cid = "PalmPalm Technology, Inc.";
		break;
	case 0x001144:
		cid = "Assurance Technology Corp";
		break;
	case 0x00113E:
		cid = "JL Corporation";
		break;
	case 0x001131:
		cid = "UNATECH. CO.,LTD";
		break;
	case 0x001137:
		cid = "AICHI ELECTRIC CO., LTD.";
		break;
	case 0x00112D:
		cid = "iPulse Systems";
		break;
	case 0x001123:
		cid = "Appointech, Inc.";
		break;
	case 0x00111D:
		cid = "Hectrix Limited";
		break;
	case 0x000F6C:
		cid = "ADDI-DATA GmbH";
		break;
	case 0x000F6B:
		cid = "GateWare Communications GmbH";
		break;
	case 0x000F5F:
		cid = "Nicety Technologies Inc. (NTS)";
		break;
	case 0x000F5A:
		cid = "Peribit Networks";
		break;
	case 0x000F53:
		cid = "Solarflare Communications Inc";
		break;
	case 0x000F47:
		cid = "ROBOX SPA";
		break;
	case 0x000F4C:
		cid = "Elextech INC";
		break;
	case 0x001170:
		cid = "GSC SRL";
		break;
	case 0x001169:
		cid = "EMS Satcom";
		break;
	case 0x001164:
		cid = "ACARD Technology Corp.";
		break;
	case 0x00115F:
		cid = "ITX Security Co., Ltd.";
		break;
	case 0x00115A:
		cid = "Ivoclar Vivadent AG";
		break;
	case 0x001159:
		cid = "MATISSE NETWORKS INC";
		break;
	case 0x001153:
		cid = "Trident Tek, Inc.";
		break;
	case 0x001150:
		cid = "Belkin Corporation";
		break;
	case 0x001151:
		cid = "Mykotronx";
		break;
	case 0x00114A:
		cid = "KAYABA INDUSTRY Co,.Ltd.";
		break;
	case 0x001110:
		cid = "Maxanna Technology Co., Ltd.";
		break;
	case 0x001117:
		cid = "CESNET";
		break;
	case 0x001104:
		cid = "TELEXY";
		break;
	case 0x00110B:
		cid = "Franklin Technology Systems";
		break;
	case 0x001100:
		cid = "Schneider Electric";
		break;
	case 0x000FFE:
		cid = "G-PRO COMPUTER";
		break;
	case 0x000FEF:
		cid = "Thales e-Transactions GmbH";
		break;
	case 0x000FF0:
		cid = "Sunray Co. Ltd.";
		break;
	case 0x000FF5:
		cid = "GN&S company";
		break;
	case 0x000FCA:
		cid = "A-JIN TECHLINE CO, LTD";
		break;
	case 0x000FBD:
		cid = "MRV Communications (Networks) LTD";
		break;
	case 0x000FBE:
		cid = "e-w/you Inc.";
		break;
	case 0x000FB7:
		cid = "Cavium";
		break;
	case 0x000FA4:
		cid = "Sprecher Automation GmbH";
		break;
	case 0x000FAB:
		cid = "Kyushu Electronics Systems Inc.";
		break;
	case 0x000F9D:
		cid = "DisplayLink (UK) Ltd";
		break;
	case 0x000F98:
		cid = "Avamax Co. Ltd.";
		break;
	case 0x000F8B:
		cid = "Orion MultiSystems Inc";
		break;
	case 0x000F8C:
		cid = "Gigawavetech Pte Ltd";
		break;
	case 0x000F91:
		cid = "Aerotelecom Co.,Ltd.";
		break;
	case 0x000F7E:
		cid = "Ablerex Electronics Co., LTD";
		break;
	case 0x000F85:
		cid = "ADDO-Japan Corporation";
		break;
	case 0x000F72:
		cid = "Sandburst";
		break;
	case 0x000F79:
		cid = "Bluetooth Interest Group Inc.";
		break;
	case 0x000F19:
		cid = "Boston Scientific";
		break;
	case 0x000F0D:
		cid = "Hunt Electronic Co., Ltd.";
		break;
	case 0x000F01:
		cid = "DIGITALKS INC";
		break;
	case 0x000EFA:
		cid = "Optoway Technology Incorporation";
		break;
	case 0x000EF3:
		cid = "Smarthome";
		break;
	case 0x000EEE:
		cid = "Muco Industrie BV";
		break;
	case 0x000EE7:
		cid = "AAC ELECTRONICS CORP.";
		break;
	case 0x000F38:
		cid = "Netstar";
		break;
	case 0x000F40:
		cid = "Optical Internetworking Forum";
		break;
	case 0x000F33:
		cid = "DUALi Inc.";
		break;
	case 0x000F2C:
		cid = "Uplogix, Inc.";
		break;
	case 0x000F26:
		cid = "WorldAccxx  LLC";
		break;
	case 0x000F25:
		cid = "AimValley B.V.";
		break;
	case 0x000F13:
		cid = "Nisca corporation";
		break;
	case 0x000F14:
		cid = "Mindray Co., Ltd.";
		break;
	case 0x000EE1:
		cid = "ExtremeSpeed Inc.";
		break;
	case 0x000EDB:
		cid = "XiNCOM Corp.";
		break;
	case 0x000EE2:
		cid = "Custom Engineering";
		break;
	case 0x000ED5:
		cid = "COPAN Systems Inc.";
		break;
	case 0x000EC9:
		cid = "YOKO Technology Corp.";
		break;
	case 0x000ED0:
		cid = "Privaris, Inc.";
		break;
	case 0x000ED7:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000EC4:
		cid = "Iskra Transmission d.d.";
		break;
	case 0x000EC3:
		cid = "Logic Controls, Inc.";
		break;
	case 0x000EBD:
		cid = "Burdick, a Quinton Compny";
		break;
	case 0x000EB1:
		cid = "Newcotech,Ltd";
		break;
	case 0x000DAA:
		cid = "S.A.Tehnology co.,Ltd.";
		break;
	case 0x000DA0:
		cid = "NEDAP N.V.";
		break;
	case 0x000D9F:
		cid = "RF Micro Devices";
		break;
	case 0x000D9A:
		cid = "INFOTEC LTD";
		break;
	case 0x000D8D:
		cid = "Prosoft Technology, Inc";
		break;
	case 0x000D8E:
		cid = "Koden Electronics Co., Ltd.";
		break;
	case 0x000D84:
		cid = "Makus Inc.";
		break;
	case 0x000D83:
		cid = "Sanmina-SCI Hungary  Ltd.";
		break;
	case 0x000D76:
		cid = "Hokuto Denshi Co,. Ltd.";
		break;
	case 0x000D7D:
		cid = "Afco Systems";
		break;
	case 0x000E51:
		cid = "tecna elettronica srl";
		break;
	case 0x000E4C:
		cid = "Bermai Inc.";
		break;
	case 0x000E4B:
		cid = "atrium c and i";
		break;
	case 0x000E3E:
		cid = "Sun Optronics Inc";
		break;
	case 0x000E45:
		cid = "Beijing Newtry Electronic Technology Ltd";
		break;
	case 0x000E39:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000E32:
		cid = "Kontron Medical";
		break;
	case 0x000E2B:
		cid = "Safari Technologies";
		break;
	case 0x000E2C:
		cid = "Netcodec co.";
		break;
	case 0x000E1F:
		cid = "TCL Networks Equipment Co., Ltd.";
		break;
	case 0x000E26:
		cid = "Gincom Technology Corp.";
		break;
	case 0x000E1A:
		cid = "JPS Communications";
		break;
	case 0x000E19:
		cid = "LogicaCMG Pty Ltd";
		break;
	case 0x000E13:
		cid = "Accu-Sort Systems inc.";
		break;
	case 0x000E0F:
		cid = "ERMME";
		break;
	case 0x000E05:
		cid = "WIRELESS MATRIX CORP.";
		break;
	case 0x000E06:
		cid = "Team Simoco Ltd";
		break;
	case 0x000E0B:
		cid = "Netac Technology Co., Ltd.";
		break;
	case 0x000DF8:
		cid = "ORGA Kartensysteme GmbH";
		break;
	case 0x000DFF:
		cid = "CHENMING MOLD INDUSTRY CORP.";
		break;
	case 0x000DEC:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000DF3:
		cid = "Asmax Solutions";
		break;
	case 0x000DE6:
		cid = "YOUNGBO ENGINEERING CO.,LTD";
		break;
	case 0x000DE5:
		cid = "Samsung Thales";
		break;
	case 0x000DE0:
		cid = "ICPDAS Co.,LTD";
		break;
	case 0x000DD3:
		cid = "SAMWOO Telecommunication Co.,Ltd.";
		break;
	case 0x000DD4:
		cid = "Symantec Corporation";
		break;
	case 0x000DD9:
		cid = "Anton Paar GmbH";
		break;
	case 0x000DCD:
		cid = "GROUPE TXCOM";
		break;
	case 0x000EAA:
		cid = "Scalent Systems, Inc.";
		break;
	case 0x000E9E:
		cid = "Topfield Co., Ltd";
		break;
	case 0x000EA3:
		cid = "CNCR-IT CO.,LTD,HangZhou P.R.CHINA";
		break;
	case 0x000EA4:
		cid = "Certance Inc.";
		break;
	case 0x000E92:
		cid = "Open Telecom";
		break;
	case 0x000E97:
		cid = "Ultracker Technology CO., Inc";
		break;
	case 0x000E91:
		cid = "Navico Auckland Ltd";
		break;
	case 0x000E8B:
		cid = "Astarte Technology Co, Ltd.";
		break;
	case 0x000E84:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000D6A:
		cid = "Redwood Technologies LTD";
		break;
	case 0x000D71:
		cid = "boca systems";
		break;
	case 0x000D5E:
		cid = "NEC Personal Products";
		break;
	case 0x000D63:
		cid = "DENT Instruments, Inc.";
		break;
	case 0x000D64:
		cid = "COMAG Handels AG";
		break;
	case 0x000D57:
		cid = "Fujitsu I-Network Systems Limited.";
		break;
	case 0x000D52:
		cid = "Comart system";
		break;
	case 0x000D51:
		cid = "DIVR Systems, Inc.";
		break;
	case 0x000D47:
		cid = "Collex";
		break;
	case 0x000DC1:
		cid = "SafeWeb Inc";
		break;
	case 0x000DC6:
		cid = "DigiRose Technology Co., Ltd.";
		break;
	case 0x000DBA:
		cid = "Océ Document Technologies GmbH";
		break;
	case 0x000DB4:
		cid = "NETASQ";
		break;
	case 0x000DB3:
		cid = "SDO Communication Corperation";
		break;
	case 0x000DAE:
		cid = "SAMSUNG HEAVY INDUSTRIES CO., LTD.";
		break;
	case 0x000DA6:
		cid = "Universal Switching Corporation";
		break;
	case 0x000E78:
		cid = "Amtelco";
		break;
	case 0x000E70:
		cid = "in2 Networks";
		break;
	case 0x000E6B:
		cid = "Janitza electronics GmbH";
		break;
	case 0x000E64:
		cid = "Elphel, Inc";
		break;
	case 0x000E5D:
		cid = "Triple Play Technologies A/S";
		break;
	case 0x000E5E:
		cid = "Raisecom Technology";
		break;
	case 0x000BE2:
		cid = "Lumenera Corporation";
		break;
	case 0x000BE7:
		cid = "COMFLUX TECHNOLOGY INC.";
		break;
	case 0x000BD6:
		cid = "Paxton Access Ltd";
		break;
	case 0x000BD2:
		cid = "Remopro Technology Inc.";
		break;
	case 0x000BC6:
		cid = "ISAC, Inc.";
		break;
	case 0x000BCB:
		cid = "Fagor Automation , S. Coop";
		break;
	case 0x000BBF:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000BBA:
		cid = "Harmonic, Inc";
		break;
	case 0x000BB3:
		cid = "RiT technologies Ltd.";
		break;
	case 0x000C38:
		cid = "TelcoBridges Inc.";
		break;
	case 0x000C3F:
		cid = "Cogent Defence & Security Networks,";
		break;
	case 0x000C30:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000C26:
		cid = "Weintek Labs. Inc.";
		break;
	case 0x000C2E:
		cid = "Openet information technology(shenzhen) Co., Ltd.";
		break;
	case 0x000C25:
		cid = "Allied Telesis Labs, Inc.";
		break;
	case 0x000C1F:
		cid = "Glimmerglass Networks";
		break;
	case 0x000C24:
		cid = "ANATOR";
		break;
	case 0x000C1B:
		cid = "ORACOM Co, Ltd.";
		break;
	case 0x000C19:
		cid = "Telio Communications GmbH";
		break;
	case 0x000C7A:
		cid = "DaTARIUS Technologies GmbH";
		break;
	case 0x000C67:
		cid = "OYO ELECTRIC CO.,LTD";
		break;
	case 0x000C4F:
		cid = "UDTech Japan Corporation";
		break;
	case 0x000C54:
		cid = "Pedestal Networks, Inc";
		break;
	case 0x000C5B:
		cid = "HANWANG TECHNOLOGY CO.,LTD";
		break;
	case 0x000C60:
		cid = "ACM Systems";
		break;
	case 0x000C62:
		cid = "ABB AB, Cewe-Control";
		break;
	case 0x000C48:
		cid = "QoStek Corporation";
		break;
	case 0x000C4D:
		cid = "Curtiss-Wright Controls Avionics & Electronics";
		break;
	case 0x000C14:
		cid = "Diagnostic Instruments, Inc.";
		break;
	case 0x000C07:
		cid = "Iftest AG";
		break;
	case 0x000C06:
		cid = "Nixvue Systems  Pte Ltd";
		break;
	case 0x000C08:
		cid = "HUMEX Technologies Corp.";
		break;
	case 0x000C0D:
		cid = "Communications & Power Industries / Satcom Division";
		break;
	case 0x000BF5:
		cid = "Shanghai Sibo Telecom Technology Co.,Ltd";
		break;
	case 0x000BFA:
		cid = "EXEMYS SRL";
		break;
	case 0x000C01:
		cid = "Abatron AG";
		break;
	case 0x000BEE:
		cid = "inc.jet, Incorporated";
		break;
	case 0x000CE6:
		cid = "Meru Networks Inc";
		break;
	case 0x000CEB:
		cid = "CNMP Networks, Inc.";
		break;
	case 0x000CE2:
		cid = "Rolls-Royce";
		break;
	case 0x000CEC:
		cid = "Spectracom Corp.";
		break;
	case 0x000CD7:
		cid = "Nallatech Ltd";
		break;
	case 0x000CDE:
		cid = "ABB STOTZ-KONTAKT GmbH";
		break;
	case 0x000CD2:
		cid = "Schaffner EMV AG";
		break;
	case 0x000CD8:
		cid = "M. K. Juchheim GmbH & Co";
		break;
	case 0x000CC6:
		cid = "Ka-Ro electronics GmbH";
		break;
	case 0x000CCB:
		cid = "Design Combus Ltd";
		break;
	case 0x000CC5:
		cid = "Nextlink Co., Ltd.";
		break;
	case 0x000CB3:
		cid = "ROUND Co.,Ltd.";
		break;
	case 0x000CB8:
		cid = "MEDION AG";
		break;
	case 0x000CBF:
		cid = "Holy Stone Ent. Co., Ltd.";
		break;
	case 0x000A07:
		cid = "WebWayOne Ltd";
		break;
	case 0x000CA1:
		cid = "SIGMACOM Co., LTD.";
		break;
	case 0x000CA6:
		cid = "Mintera Corporation";
		break;
	case 0x000CA8:
		cid = "Garuda Networks Corporation";
		break;
	case 0x000CAD:
		cid = "BTU International";
		break;
	case 0x000C95:
		cid = "PrimeNet";
		break;
	case 0x000C9A:
		cid = "Hitech Electronics Corp.";
		break;
	case 0x000C8E:
		cid = "Mentor Engineering Inc";
		break;
	case 0x000C93:
		cid = "Xeline Co., Ltd.";
		break;
	case 0x000C7F:
		cid = "synertronixx GmbH";
		break;
	case 0x000C82:
		cid = "NETWORK TECHNOLOGIES INC";
		break;
	case 0x000C87:
		cid = "AMD";
		break;
	case 0x000C73:
		cid = "TELSON ELECTRONICS CO., LTD";
		break;
	case 0x000D1D:
		cid = "HIGH-TEK HARNESS ENT. CO., LTD.";
		break;
	case 0x000D1E:
		cid = "Control Techniques";
		break;
	case 0x000D0C:
		cid = "MDI Security Systems";
		break;
	case 0x000D11:
		cid = "DENTSPLY - Gendex";
		break;
	case 0x000D05:
		cid = "cybernet manufacturing inc.";
		break;
	case 0x000CF9:
		cid = "Xylem Water Solutions";
		break;
	case 0x000CFE:
		cid = "Grand Electronic Co., Ltd";
		break;
	case 0x000CF2:
		cid = "GAMESA Eólica";
		break;
	case 0x000D43:
		cid = "DRS Tactical Systems Inc.";
		break;
	case 0x000D37:
		cid = "WIPLUG";
		break;
	case 0x000D3E:
		cid = "APLUX Communications Ltd.";
		break;
	case 0x000D3D:
		cid = "Hammerhead Systems, Inc.";
		break;
	case 0x000D30:
		cid = "IceFyre Semiconductor";
		break;
	case 0x000D2B:
		cid = "Racal Instruments";
		break;
	case 0x000D24:
		cid = "SENTEC E&E CO., LTD.";
		break;
	case 0x000D18:
		cid = "Mega-Trend Electronics CO., LTD.";
		break;
	case 0x000BA4:
		cid = "Shiron Satellite Communications Ltd. (1996)";
		break;
	case 0x000BA9:
		cid = "CloudShield Technologies, Inc.";
		break;
	case 0x000B91:
		cid = "Aglaia Gesellschaft für Bildverarbeitung und Kommunikation mbH";
		break;
	case 0x000B96:
		cid = "Innotrac Diagnostics Oy";
		break;
	case 0x000B9D:
		cid = "TwinMOS Technologies Inc.";
		break;
	case 0x000B8A:
		cid = "MITEQ Inc.";
		break;
	case 0x000B7E:
		cid = "SAGINOMIYA Seisakusho Inc.";
		break;
	case 0x000B83:
		cid = "DATAWATT B.V.";
		break;
	case 0x000AAD:
		cid = "Stargames Corporation";
		break;
	case 0x000AB2:
		cid = "Fresnel Wireless Systems";
		break;
	case 0x000AB4:
		cid = "ETIC Telecommunications";
		break;
	case 0x000AB9:
		cid = "Astera Technologies Corp.";
		break;
	case 0x000AA1:
		cid = "V V S Limited";
		break;
	case 0x000AA6:
		cid = "Hochiki Corporation";
		break;
	case 0x000A8E:
		cid = "Invacom Ltd";
		break;
	case 0x000A9F:
		cid = "Pannaway Technologies, Inc.";
		break;
	case 0x000A99:
		cid = "Calamp Wireless Networks Inc";
		break;
	case 0x000A93:
		cid = "W2 Networks, Inc.";
		break;
	case 0x000A7F:
		cid = "Teradon Industries, Inc";
		break;
	case 0x000A86:
		cid = "Lenze";
		break;
	case 0x000A8B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000B15:
		cid = "Platypus Technology";
		break;
	case 0x000B10:
		cid = "11wave Technonlogy Co.,Ltd";
		break;
	case 0x000B09:
		cid = "Ifoundry Systems Singapore";
		break;
	case 0x000B04:
		cid = "Volktek Corporation";
		break;
	case 0x000AFD:
		cid = "Kentec Electronics";
		break;
	case 0x000B02:
		cid = "Dallmeier electronic";
		break;
	case 0x000AF1:
		cid = "Clarity Design, Inc.";
		break;
	case 0x000AF6:
		cid = "Emerson Climate Technologies Retail Solutions, Inc.";
		break;
	case 0x000A0E:
		cid = "Invivo Research Inc.";
		break;
	case 0x000A13:
		cid = "Honeywell Video Systems";
		break;
	case 0x000A04:
		cid = "3Com Ltd";
		break;
	case 0x0009FD:
		cid = "Ubinetics Limited";
		break;
	case 0x0009F4:
		cid = "Alcon Laboratories, Inc.";
		break;
	case 0x0009E7:
		cid = "ADC Techonology";
		break;
	case 0x0009EE:
		cid = "MEIKYO ELECTRIC CO.,LTD";
		break;
	case 0x0009F3:
		cid = "WELL Communication Corp.";
		break;
	case 0x0009E2:
		cid = "Sinbon Electronics Co., Ltd.";
		break;
	case 0x0009DB:
		cid = "eSpace";
		break;
	case 0x000B70:
		cid = "Load Technology, Inc.";
		break;
	case 0x000B72:
		cid = "Lawo AG";
		break;
	case 0x000B77:
		cid = "Cogent Systems, Inc.";
		break;
	case 0x000B71:
		cid = "Litchfield Communications Inc.";
		break;
	case 0x000B5F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000B64:
		cid = "Kieback & Peter GmbH & Co KG";
		break;
	case 0x000B5B:
		cid = "Rincon Research Corporation";
		break;
	case 0x000B56:
		cid = "Cybernetics";
		break;
	case 0x000B4E:
		cid = "VertexRSI, General Dynamics SatCOM Technologies, Inc.";
		break;
	case 0x000B53:
		cid = "INITIUM Co., Ltd.";
		break;
	case 0x000A35:
		cid = "Xilinx";
		break;
	case 0x000A3A:
		cid = "J-THREE INTERNATIONAL Holding Co., Ltd.";
		break;
	case 0x000A3C:
		cid = "Enerpoint Ltd.";
		break;
	case 0x000A41:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000A48:
		cid = "Albatron Technology";
		break;
	case 0x000A2E:
		cid = "MAPLE NETWORKS CO., LTD";
		break;
	case 0x000A26:
		cid = "CEIA S.p.A.";
		break;
	case 0x000A28:
		cid = "Motorola";
		break;
	case 0x000A21:
		cid = "Integra Telecom Co. Ltd";
		break;
	case 0x000A1A:
		cid = "Imerge Ltd";
		break;
	case 0x000A15:
		cid = "Silicon Data, Inc";
		break;
	case 0x000B42:
		cid = "commax Co., Ltd.";
		break;
	case 0x000B47:
		cid = "Advanced Energy";
		break;
	case 0x000B36:
		cid = "Productivity Systems, Inc.";
		break;
	case 0x000B28:
		cid = "Quatech Inc.";
		break;
	case 0x000B2F:
		cid = "bplan GmbH";
		break;
	case 0x000B1C:
		cid = "SIBCO bv";
		break;
	case 0x000B21:
		cid = "G-Star Communications Inc.";
		break;
	case 0x000A7A:
		cid = "Kyoritsu Electric Co., Ltd.";
		break;
	case 0x000A6E:
		cid = "Harmonic, Inc";
		break;
	case 0x000A73:
		cid = "Scientific Atlanta";
		break;
	case 0x000A60:
		cid = "Autostar Technology Pte Ltd";
		break;
	case 0x000A67:
		cid = "OngCorp";
		break;
	case 0x000A6C:
		cid = "Walchem Corporation";
		break;
	case 0x000A5B:
		cid = "Power-One as";
		break;
	case 0x000A59:
		cid = "HW server";
		break;
	case 0x000A54:
		cid = "Laguna Hills, Inc.";
		break;
	case 0x000A4D:
		cid = "Noritz Corporation";
		break;
	case 0x000ADF:
		cid = "Gennum Corporation";
		break;
	case 0x000AD8:
		cid = "IPCserv Technology Corp.";
		break;
	case 0x000ACC:
		cid = "Winnow Networks, Inc.";
		break;
	case 0x000AD1:
		cid = "MWS";
		break;
	case 0x000AD3:
		cid = "INITECH Co., Ltd";
		break;
	case 0x000AC0:
		cid = "Fuyoh Video Industry CO., LTD.";
		break;
	case 0x000AC5:
		cid = "Color Kinetics";
		break;
	case 0x00097B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000982:
		cid = "Loewe Opta GmbH";
		break;
	case 0x000976:
		cid = "Datasoft ISDN Systems GmbH";
		break;
	case 0x000969:
		cid = "Meret Optical Communications";
		break;
	case 0x000963:
		cid = "Dominion Lasercom Inc.";
		break;
	case 0x00096A:
		cid = "Cloverleaf Communications Inc.";
		break;
	case 0x00096F:
		cid = "Beijing Zhongqing Elegant Tech. Corp.,Limited";
		break;
	case 0x00095D:
		cid = "Dialogue Technology Corp.";
		break;
	case 0x00095F:
		cid = "Telebyte, Inc.";
		break;
	case 0x000958:
		cid = "INTELNET S.A.";
		break;
	case 0x00094C:
		cid = "Communication Weaver Co.,Ltd.";
		break;
	case 0x000951:
		cid = "Apogee Imaging Systems";
		break;
	case 0x00094B:
		cid = "FillFactory NV";
		break;
	case 0x0009AE:
		cid = "OKANO ELECTRIC CO.,LTD";
		break;
	case 0x0009AD:
		cid = "HYUNDAI SYSCOMM, INC.";
		break;
	case 0x0009B4:
		cid = "KISAN TELECOM CO., LTD.";
		break;
	case 0x0009A8:
		cid = "Eastmode Pte Ltd";
		break;
	case 0x00099B:
		cid = "Western Telematic Inc.";
		break;
	case 0x00099C:
		cid = "Naval Research Laboratory";
		break;
	case 0x0009A1:
		cid = "Telewise Communications, Inc.";
		break;
	case 0x000995:
		cid = "Castle Technology Ltd";
		break;
	case 0x000989:
		cid = "VividLogic Inc.";
		break;
	case 0x00098E:
		cid = "ipcas GmbH";
		break;
	case 0x00097C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0009C8:
		cid = "SINAGAWA TSUSHIN KEISOU SERVICE";
		break;
	case 0x0009CF:
		cid = "iAd GmbH";
		break;
	case 0x0009D4:
		cid = "Transtech Networks";
		break;
	case 0x0009BB:
		cid = "MathStar, Inc.";
		break;
	case 0x0009C0:
		cid = "6WIND";
		break;
	case 0x000807:
		cid = "Access Devices Limited";
		break;
	case 0x000801:
		cid = "HighSpeed Surfing Inc.";
		break;
	case 0x000808:
		cid = "PPT Vision, Inc.";
		break;
	case 0x0007F7:
		cid = "Galtronics";
		break;
	case 0x0007FE:
		cid = "Rigaku Corporation";
		break;
	case 0x0007F8:
		cid = "ITDevices, Inc.";
		break;
	case 0x0007EB:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0007F1:
		cid = "TeraBurst Networks Inc.";
		break;
	case 0x0007E5:
		cid = "Coup Corporation";
		break;
	case 0x0007DF:
		cid = "Vbrick Systems Inc.";
		break;
	case 0x0007DE:
		cid = "eCopilt AB";
		break;
	case 0x0007CF:
		cid = "Anoto AB";
		break;
	case 0x0007D2:
		cid = "Logopak Systeme GmbH & Co. KG";
		break;
	case 0x0008AA:
		cid = "KARAM";
		break;
	case 0x0008A4:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000898:
		cid = "Gigabit Optics Corporation";
		break;
	case 0x00089D:
		cid = "UHD-Elektronik";
		break;
	case 0x000890:
		cid = "AVILINKS SA";
		break;
	case 0x000884:
		cid = "Index Braille AB";
		break;
	case 0x000877:
		cid = "Liebert-Hiross Spa";
		break;
	case 0x08006B:
		cid = "ACCEL TECHNOLOGIES INC.";
		break;
	case 0x000871:
		cid = "NORTHDATA Co., Ltd.";
		break;
	case 0x00087D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000876:
		cid = "SDSystem";
		break;
	case 0x0008E6:
		cid = "Littlefeet";
		break;
	case 0x0008D9:
		cid = "Mitadenshi Co.,LTD";
		break;
	case 0x0008D4:
		cid = "IneoQuest Technologies, Inc";
		break;
	case 0x0008CD:
		cid = "With-Net Inc";
		break;
	case 0x0008D3:
		cid = "Hercules Technologies S.A.S.";
		break;
	case 0x0008C3:
		cid = "Contex A/S";
		break;
	case 0x0008BD:
		cid = "TEPG-US";
		break;
	case 0x0008BC:
		cid = "Ilevo AB";
		break;
	case 0x0008B7:
		cid = "HIT Incorporated";
		break;
	case 0x0008B0:
		cid = "BKtel communications GmbH";
		break;
	case 0x00086A:
		cid = "Securiton Gmbh";
		break;
	case 0x000864:
		cid = "Fasy S.p.A.";
		break;
	case 0x00085E:
		cid = "PCO AG";
		break;
	case 0x000851:
		cid = "Canadian Bank Note Company, Ltd.";
		break;
	case 0x000852:
		cid = "Davolink Co. Inc.";
		break;
	case 0x000857:
		cid = "Polaris Networks, Inc.";
		break;
	case 0x00081B:
		cid = "Windigo Systems";
		break;
	case 0x000822:
		cid = "InPro Comm";
		break;
	case 0x00082E:
		cid = "Multitone Electronics PLC";
		break;
	case 0x00081C:
		cid = "@pos.com";
		break;
	case 0x000828:
		cid = "Koei Engineering Ltd.";
		break;
	case 0x000816:
		cid = "Bluelon ApS";
		break;
	case 0x000815:
		cid = "CATS Co., Ltd.";
		break;
	case 0x00091A:
		cid = "Macat Optics & Electronics Co., Ltd.";
		break;
	case 0x000919:
		cid = "MDS Gateways";
		break;
	case 0x000913:
		cid = "SystemK Corporation";
		break;
	case 0x00090C:
		cid = "Mayekawa Mfg. Co. Ltd.";
		break;
	case 0x000907:
		cid = "Chrysalis Development";
		break;
	case 0x000900:
		cid = "TMT";
		break;
	case 0x0008F8:
		cid = "UTC CCS";
		break;
	case 0x0008F3:
		cid = "WANY";
		break;
	case 0x0008EC:
		cid = "Optical Zonu Corporation";
		break;
	case 0x0008E0:
		cid = "ATO Technology Ltd.";
		break;
	case 0x0008E5:
		cid = "IDK Corporation";
		break;
	case 0x000945:
		cid = "Palmmicro Communications Inc";
		break;
	case 0x00093E:
		cid = "C&I Technologies";
		break;
	case 0x000932:
		cid = "Omnilux";
		break;
	case 0x000939:
		cid = "ShibaSoku Co.,Ltd.";
		break;
	case 0x000926:
		cid = "YODA COMMUNICATIONS, INC.";
		break;
	case 0x00092B:
		cid = "iQstor Networks, Inc.";
		break;
	case 0x00092C:
		cid = "Hitpoint Inc.";
		break;
	case 0x00091F:
		cid = "A&D Co., Ltd.";
		break;
	case 0x000751:
		cid = "m-u-t AG";
		break;
	case 0x000750:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000746:
		cid = "TURCK, Inc.";
		break;
	case 0x00074A:
		cid = "Carl Valentin GmbH";
		break;
	case 0x000734:
		cid = "ONStor, Inc.";
		break;
	case 0x000739:
		cid = "Scotty Group Austria Gmbh";
		break;
	case 0x00072D:
		cid = "CNSystems";
		break;
	case 0x000727:
		cid = "Zi Corporation (HK) Ltd.";
		break;
	case 0x000717:
		cid = "Wieland Electric GmbH";
		break;
	case 0x00071E:
		cid = "Tri-M Engineering / Nupak Dev. Corp.";
		break;
	case 0x000723:
		cid = "ELCON Systemtechnik GmbH";
		break;
	case 0x00071D:
		cid = "Satelsa Sistemas Y Aplicaciones De Telecomunicaciones, S.A.";
		break;
	case 0x000632:
		cid = "Mesco Engineering GmbH";
		break;
	case 0x000625:
		cid = "The Linksys Group, Inc.";
		break;
	case 0x00062C:
		cid = "Bivio Networks";
		break;
	case 0x000624:
		cid = "Gentner Communications Corp.";
		break;
	case 0x00061B:
		cid = "Notebook Development Lab.  Lenovo Japan Ltd.";
		break;
	case 0x000622:
		cid = "Chung Fu Chen Yeh Enterprise Corp.";
		break;
	case 0x00061C:
		cid = "Hoshino Metal Industries, Ltd.";
		break;
	case 0x000621:
		cid = "Hinox, Co., Ltd.";
		break;
	case 0x00060B:
		cid = "Artesyn Embedded Technologies";
		break;
	case 0x000611:
		cid = "Zeus Wireless, Inc.";
		break;
	case 0x000615:
		cid = "Kimoto Electric Co., Ltd.";
		break;
	case 0x000605:
		cid = "Inncom International, Inc.";
		break;
	case 0x0005E3:
		cid = "LightSand Communications, Inc.";
		break;
	case 0x0005EF:
		cid = "ADOIR Digital Technology";
		break;
	case 0x0005F6:
		cid = "Young Chang Co. Ltd.";
		break;
	case 0x0005E9:
		cid = "Unicess Network, Inc.";
		break;
	case 0x0005F0:
		cid = "SATEC";
		break;
	case 0x0005FC:
		cid = "Schenck Pegasus Corp.";
		break;
	case 0x0005E0:
		cid = "Empirix Corp.";
		break;
	case 0x0005D6:
		cid = "L-3 Linkabit";
		break;
	case 0x0005C4:
		cid = "Telect, Inc.";
		break;
	case 0x0005D0:
		cid = "Solinet Systems";
		break;
	case 0x0005CA:
		cid = "Hitron Technology, Inc.";
		break;
	case 0x0005BD:
		cid = "ROAX BV";
		break;
	case 0x0005BE:
		cid = "Kongsberg Seatex AS";
		break;
	case 0x0005C3:
		cid = "Pacific Instruments, Inc.";
		break;
	case 0x00059D:
		cid = "Daniel Computing Systems, Inc.";
		break;
	case 0x000796:
		cid = "LSI Systems, Inc.";
		break;
	case 0x000790:
		cid = "Tri-M Technologies (s) Limited";
		break;
	case 0x000784:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000789:
		cid = "DONGWON SYSTEMS";
		break;
	case 0x000783:
		cid = "SynCom Network, Inc.";
		break;
	case 0x00078A:
		cid = "Mentor Data System Inc.";
		break;
	case 0x00077A:
		cid = "Infoware System Co., Ltd.";
		break;
	case 0x00076D:
		cid = "Flexlight Networks";
		break;
	case 0x000769:
		cid = "Italiana Macchi SpA";
		break;
	case 0x000773:
		cid = "Ascom Powerline Communications Ltd.";
		break;
	case 0x00075D:
		cid = "Celleritas Inc.";
		break;
	case 0x000763:
		cid = "Sunniwell Cyber Tech. Co., Ltd.";
		break;
	case 0x000756:
		cid = "Juyoung Telecom";
		break;
	case 0x0007C9:
		cid = "Technol Seven Co., Ltd.";
		break;
	case 0x00047B:
		cid = "Schlumberger";
		break;
	case 0x0007C3:
		cid = "Thomson";
		break;
	case 0x0007BD:
		cid = "Radionet Ltd.";
		break;
	case 0x0007B0:
		cid = "Office Details, Inc.";
		break;
	case 0x0007B7:
		cid = "Samurai Ind. Prods Eletronicos Ltda";
		break;
	case 0x0007B6:
		cid = "Telecom Technology Ltd.";
		break;
	case 0x0007A3:
		cid = "Ositis Software, Inc.";
		break;
	case 0x0007A9:
		cid = "Novasonics";
		break;
	case 0x0007AC:
		cid = "Eolring";
		break;
	case 0x00079C:
		cid = "Golden Electronics Technology Co., Ltd.";
		break;
	case 0x0006AB:
		cid = "W-Link Systems, Inc.";
		break;
	case 0x0006A5:
		cid = "PINON Corp.";
		break;
	case 0x0006A1:
		cid = "Celsian Technologies, Inc.";
		break;
	case 0x000694:
		cid = "Mobillian Corporation";
		break;
	case 0x00069B:
		cid = "AVT Audio Video Technologies GmbH";
		break;
	case 0x00068E:
		cid = "HID Corporation";
		break;
	case 0x000688:
		cid = "Telways Communication Co., Ltd.";
		break;
	case 0x000682:
		cid = "Convedia";
		break;
	case 0x000681:
		cid = "Goepel Electronic GmbH";
		break;
	case 0x000655:
		cid = "Yipee, Inc.";
		break;
	case 0x00D05F:
		cid = "VALCOM, INC.";
		break;
	case 0x000674:
		cid = "Spectrum Control, Inc.";
		break;
	case 0x000661:
		cid = "NIA Home Technologies Corp.";
		break;
	case 0x000668:
		cid = "Vicon Industries Inc.";
		break;
	case 0x000667:
		cid = "Tripp Lite";
		break;
	case 0x00066E:
		cid = "Delta Electronics, Inc.";
		break;
	case 0x00064E:
		cid = "Broad Net Technology Inc.";
		break;
	case 0x00064F:
		cid = "PRO-NETS Technology Corporation";
		break;
	case 0x000642:
		cid = "Genetel Systems Inc.";
		break;
	case 0x00063E:
		cid = "Opthos Inc.";
		break;
	case 0x000648:
		cid = "Seedsware, Inc.";
		break;
	case 0x000638:
		cid = "Sungjin C&C Co., Ltd.";
		break;
	case 0x00070B:
		cid = "Novabase SGPS, SA";
		break;
	case 0x000710:
		cid = "Adax, Inc.";
		break;
	case 0x000700:
		cid = "Zettamedia Korea";
		break;
	case 0x0006F9:
		cid = "Mitsui Zosen Systems Research Inc.";
		break;
	case 0x000703:
		cid = "CSEE Transport";
		break;
	case 0x000706:
		cid = "Sanritz Corporation";
		break;
	case 0x0006E8:
		cid = "Optical Network Testing, Inc.";
		break;
	case 0x0006EE:
		cid = "Shenyang Neu-era Information & Technology Stock Co., Ltd";
		break;
	case 0x0006E2:
		cid = "Ceemax Technology Co., Ltd.";
		break;
	case 0x0006D8:
		cid = "Maple Optical Systems";
		break;
	case 0x0006D4:
		cid = "Interactive Objects, Inc.";
		break;
	case 0x0006CE:
		cid = "DATENO";
		break;
	case 0x0006B7:
		cid = "TELEM GmbH";
		break;
	case 0x0006BE:
		cid = "Baumer Optronic GmbH";
		break;
	case 0x0006B8:
		cid = "Bandspeed Pty Ltd";
		break;
	case 0x0006BD:
		cid = "BNTECHNOLOGY Co., Ltd.";
		break;
	case 0x0006C2:
		cid = "Smartmatic Corporation";
		break;
	case 0x0006C7:
		cid = "RFNET Technologies Pte Ltd (S)";
		break;
	case 0x0006B1:
		cid = "Sonicwall";
		break;
	case 0x00046F:
		cid = "Digitel S/A Industria Eletronica";
		break;
	case 0x000468:
		cid = "Vivity, Inc.";
		break;
	case 0x00045C:
		cid = "Mobiwave Pte Ltd";
		break;
	case 0x000463:
		cid = "Bosch Security Systems";
		break;
	case 0x000462:
		cid = "DAKOS Data & Communication Co., Ltd.";
		break;
	case 0x000455:
		cid = "ANTARA.net";
		break;
	case 0x000456:
		cid = "Cambium Networks Limited";
		break;
	case 0x000450:
		cid = "DMD Computers SRL";
		break;
	case 0x000446:
		cid = "CYZENTECH Co., Ltd.";
		break;
	case 0x00044B:
		cid = "NVIDIA";
		break;
	case 0x0005AD:
		cid = "Topspin Communications, Inc.";
		break;
	case 0x0005B1:
		cid = "ASB Technology BV";
		break;
	case 0x0005B7:
		cid = "Arbor Technology Corp.";
		break;
	case 0x0005A3:
		cid = "QEI, Inc.";
		break;
	case 0x000597:
		cid = "Eagle Traffic Control Systems";
		break;
	case 0x000591:
		cid = "Active Silicon Ltd";
		break;
	case 0x00058A:
		cid = "Netcom Co., Ltd.";
		break;
	case 0x000590:
		cid = "Swissvoice Ltd.";
		break;
	case 0x00057E:
		cid = "Eckelmann Steuerungstechnik GmbH";
		break;
	case 0x000578:
		cid = "Private";
		break;
	case 0x000584:
		cid = "AbsoluteValue Systems, Inc.";
		break;
	case 0x00052E:
		cid = "Cinta Networks";
		break;
	case 0x00053A:
		cid = "Willowglen Services Pte Ltd";
		break;
	case 0x000528:
		cid = "New Focus, Inc.";
		break;
	case 0x000527:
		cid = "SJ Tek Co. Ltd";
		break;
	case 0x000521:
		cid = "Control Microsystems";
		break;
	case 0x000515:
		cid = "Nuark Co., Ltd.";
		break;
	case 0x00051B:
		cid = "Magic Control Technology Corporation";
		break;
	case 0x000511:
		cid = "Complementary Technologies Ltd";
		break;
	case 0x00050B:
		cid = "SICOM Systems, Inc.";
		break;
	case 0x000501:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000505:
		cid = "Systems Integration Solutions, Inc.";
		break;
	case 0x000504:
		cid = "Naray Information & Communication Enterprise";
		break;
	case 0x0004FB:
		cid = "Commtech, Inc.";
		break;
	case 0x000574:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000567:
		cid = "Etymonic Design, Inc.";
		break;
	case 0x00056E:
		cid = "National Enhance Technology, Inc.";
		break;
	case 0x00056D:
		cid = "Pacific Corporation";
		break;
	case 0x000561:
		cid = "nac Image Technology, Inc.";
		break;
	case 0x00055B:
		cid = "Charles Industries, Ltd.";
		break;
	case 0x000554:
		cid = "Rangestar Wireless";
		break;
	case 0x000555:
		cid = "Japan Cash Machine Co., Ltd.";
		break;
	case 0x000547:
		cid = "Starent Networks";
		break;
	case 0x00054E:
		cid = "Philips";
		break;
	case 0x000540:
		cid = "FAST Corporation";
		break;
	case 0x000541:
		cid = "Advanced Systems Co., Ltd.";
		break;
	case 0x000534:
		cid = "Northstar Engineering Ltd.";
		break;
	case 0x0004F4:
		cid = "Infinite Electronics Inc.";
		break;
	case 0x0004EE:
		cid = "Lincoln Electric Company";
		break;
	case 0x0004E8:
		cid = "IER, Inc.";
		break;
	case 0x008086:
		cid = "COMPUTER GENERATION INC.";
		break;
	case 0x0004DE:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0004E4:
		cid = "Daeryung Ind., Inc.";
		break;
	case 0x0004D7:
		cid = "Omitec Instrumentation Ltd.";
		break;
	case 0x0004D8:
		cid = "IPWireless, Inc.";
		break;
	case 0x0004D2:
		cid = "Adcon Telemetry GmbH";
		break;
	case 0x0004D1:
		cid = "Drew Technologies, Inc.";
		break;
	case 0x0004CB:
		cid = "Tdsoft Communication, Ltd.";
		break;
	case 0x0004C5:
		cid = "ASE Technologies, USA";
		break;
	case 0x00043F:
		cid = "ESTeem Wireless Modems, Inc";
		break;
	case 0x000439:
		cid = "Rosco Entertainment Technology, Inc.";
		break;
	case 0x000433:
		cid = "Cyberboard A/S";
		break;
	case 0x00042C:
		cid = "Minet, Inc.";
		break;
	case 0x000427:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000426:
		cid = "Autosys";
		break;
	case 0x000420:
		cid = "Slim Devices, Inc.";
		break;
	case 0x000418:
		cid = "Teltronic S.A.U.";
		break;
	case 0x000412:
		cid = "WaveSmith Networks, Inc.";
		break;
	case 0x00040C:
		cid = "Kanno Works, Ltd.";
		break;
	case 0x000370:
		cid = "NXTV, Inc.";
		break;
	case 0x000405:
		cid = "ACN Technologies";
		break;
	case 0x000406:
		cid = "Fa. Metabox AG";
		break;
	case 0x0003FB:
		cid = "ENEGATE Co.,Ltd.";
		break;
	case 0x0003FC:
		cid = "Intertex Data AB";
		break;
	case 0x0003EF:
		cid = "Oneline AG";
		break;
	case 0x0003F6:
		cid = "Allegro Networks, Inc.";
		break;
	case 0x0003EA:
		cid = "Mega System Technologies, Inc.";
		break;
	case 0x0003E9:
		cid = "Akara Canada, Inc.";
		break;
	case 0x0003E4:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0003D8:
		cid = "iMPath Networks, Inc.";
		break;
	case 0x0003D5:
		cid = "Advanced Communications Co., Ltd.";
		break;
	case 0x0003CC:
		cid = "Momentum Computer, Inc.";
		break;
	case 0x0003D1:
		cid = "Takaya Corporation";
		break;
	case 0x0003C5:
		cid = "Mobotix AG";
		break;
	case 0x0003BE:
		cid = "Netility";
		break;
	case 0x0003B9:
		cid = "Hualong Telecom Co., Ltd.";
		break;
	case 0x0003B7:
		cid = "ZACCESS Systems";
		break;
	case 0x0003B3:
		cid = "IA Link Systems Co., Ltd.";
		break;
	case 0x0003A7:
		cid = "Unixtar Technology, Inc.";
		break;
	case 0x0003AE:
		cid = "Allied Advanced Manufacturing Pte, Ltd.";
		break;
	case 0x0003A0:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000398:
		cid = "WISI";
		break;
	case 0x00039B:
		cid = "NetChip Technology, Inc.";
		break;
	case 0x000394:
		cid = "Connect One";
		break;
	case 0x00038D:
		cid = "PCS Revenue Control Systems, Inc.";
		break;
	case 0x000385:
		cid = "Actelis Networks, Inc.";
		break;
	case 0x000388:
		cid = "Fastfame Technology Co., Ltd.";
		break;
	case 0x00037F:
		cid = "Atheros Communications, Inc.";
		break;
	case 0x0004B8:
		cid = "Kumahira Co., Ltd.";
		break;
	case 0x0004B2:
		cid = "ESSEGI SRL";
		break;
	case 0x0004AB:
		cid = "Comverse Network Systems, Inc.";
		break;
	case 0x0004A4:
		cid = "NetEnabled, Inc.";
		break;
	case 0x00049E:
		cid = "Wirelink Co., Ltd.";
		break;
	case 0x000498:
		cid = "Mahi Networks";
		break;
	case 0x000491:
		cid = "Technovision, Inc.";
		break;
	case 0x00048C:
		cid = "Nayna Networks, Inc.";
		break;
	case 0x000492:
		cid = "Hive Internet, Ltd.";
		break;
	case 0x000485:
		cid = "PicoLight";
		break;
	case 0x000307:
		cid = "Secure Works, Inc.";
		break;
	case 0x000300:
		cid = "Barracuda Networks, Inc.";
		break;
	case 0x0002F8:
		cid = "SEAKR Engineering, Inc.";
		break;
	case 0x00D024:
		cid = "Cognex Corporation";
		break;
	case 0x0002F4:
		cid = "PCTEL, Inc.";
		break;
	case 0x0002FB:
		cid = "Baumuller Aulugen-Systemtechnik GmbH";
		break;
	case 0x0002E9:
		cid = "CS Systemes De Securite - C3S";
		break;
	case 0x0002DD:
		cid = "Bromax Communications, Ltd.";
		break;
	case 0x0002E2:
		cid = "NDC Infared Engineering";
		break;
	case 0x0002DA:
		cid = "ExiO Communications, Inc.";
		break;
	case 0x0002D6:
		cid = "NICE Systems";
		break;
	case 0x0002CA:
		cid = "EndPoints, Inc.";
		break;
	case 0x0002CF:
		cid = "ZyGate Communications, Inc.";
		break;
	case 0x0001CD:
		cid = "ARtem";
		break;
	case 0x0001D2:
		cid = "inXtron, Inc.";
		break;
	case 0x0001C9:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0001C7:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0001C2:
		cid = "ARK Research Corp.";
		break;
	case 0x0001BE:
		cid = "Gigalink Co., Ltd.";
		break;
	case 0x0001BC:
		cid = "Brains Corporation";
		break;
	case 0x0001AC:
		cid = "Sitara Networks, Inc.";
		break;
	case 0x0001A9:
		cid = "BMW AG";
		break;
	case 0x0001B0:
		cid = "Fulltek Technology Co., Ltd.";
		break;
	case 0x000179:
		cid = "WIRELESS TECHNOLOGY, INC.";
		break;
	case 0x000185:
		cid = "Hitachi Aloka Medical, Ltd.";
		break;
	case 0x00018C:
		cid = "Mega Vision";
		break;
	case 0x000192:
		cid = "Texas Digital Systems";
		break;
	case 0x00019E:
		cid = "ESS Technology, Inc.";
		break;
	case 0x001095:
		cid = "Thomson Inc.";
		break;
	case 0x00025A:
		cid = "Catena Networks";
		break;
	case 0x000271:
		cid = "Zhone Technologies";
		break;
	case 0x00026C:
		cid = "Philips CFT";
		break;
	case 0x00026A:
		cid = "Cocess Telecom Co., Ltd.";
		break;
	case 0x000266:
		cid = "Thermalogic Corporation";
		break;
	case 0x00025F:
		cid = "Nortel Networks";
		break;
	case 0x000256:
		cid = "Alpha Processor, Inc.";
		break;
	case 0x000251:
		cid = "Soma Networks, Inc.";
		break;
	case 0x00024A:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00024D:
		cid = "Mannesman Dematic Colby Pty. Ltd.";
		break;
	case 0x000245:
		cid = "Lampus Co, Ltd.";
		break;
	case 0x00023E:
		cid = "Selta Telematica S.p.a";
		break;
	case 0x00023B:
		cid = "Ericsson";
		break;
	case 0x000237:
		cid = "Cosmo Research Corp.";
		break;
	case 0x000234:
		cid = "Imperial Technology, Inc.";
		break;
	case 0x000228:
		cid = "Necsom, Ltd.";
		break;
	case 0x000224:
		cid = "C-COR";
		break;
	case 0x00020D:
		cid = "Micronpc.com";
		break;
	case 0x000220:
		cid = "CANON FINETECH INC.";
		break;
	case 0x000378:
		cid = "HUMAX Co., Ltd.";
		break;
	case 0x00036C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000373:
		cid = "Aselsan A.S";
		break;
	case 0x000368:
		cid = "Embedone Co., Ltd.";
		break;
	case 0x000366:
		cid = "ASM Pacific Technology";
		break;
	case 0x000365:
		cid = "Kira Information & Communications, Ltd.";
		break;
	case 0x000360:
		cid = "PAC Interactive Technology, Inc.";
		break;
	case 0x00035D:
		cid = "Bosung Hi-Net Co., Ltd.";
		break;
	case 0x00031A:
		cid = "Beijing Broad Telecom Ltd., China";
		break;
	case 0x000359:
		cid = "DigitalSis";
		break;
	case 0x000354:
		cid = "Fiber Logic Communications";
		break;
	case 0x000352:
		cid = "Colubris Networks";
		break;
	case 0x00034E:
		cid = "Pos Data Company, Ltd.";
		break;
	case 0x0002C3:
		cid = "Arelnet Ltd.";
		break;
	case 0x0002BE:
		cid = "Totsu Engineering, Inc.";
		break;
	case 0x0002BA:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0002B2:
		cid = "Cablevision";
		break;
	case 0x0002B5:
		cid = "Avnet, Inc.";
		break;
	case 0x0002AE:
		cid = "Scannex Electronics Ltd.";
		break;
	case 0x0002A7:
		cid = "Vivace Networks";
		break;
	case 0x0002A2:
		cid = "Hilscher GmbH";
		break;
	case 0x000297:
		cid = "C-COR.net";
		break;
	case 0x00028E:
		cid = "Rapid 5 Networks, Inc.";
		break;
	case 0x000293:
		cid = "Solid Data Systems";
		break;
	case 0x0001FA:
		cid = "HOROSCAS";
		break;
	case 0x00027D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00033F:
		cid = "BigBand Networks, Ltd.";
		break;
	case 0x000336:
		cid = "Zetes Technologies";
		break;
	case 0x00033B:
		cid = "TAMI Tech Co., Ltd.";
		break;
	case 0x000328:
		cid = "Mace Group, Inc.";
		break;
	case 0x00032F:
		cid = "Global Sun Technology, Inc.";
		break;
	case 0x000320:
		cid = "Xpeed, Inc.";
		break;
	case 0x000323:
		cid = "Cornet Technology, Inc.";
		break;
	case 0x00029F:
		cid = "L-3 Communication Aviation Recorders";
		break;
	case 0x00031F:
		cid = "Condev Ltd.";
		break;
	case 0x000317:
		cid = "Merlin Systems, Inc.";
		break;
	case 0x00030E:
		cid = "Core Communications Co., Ltd.";
		break;
	case 0x000313:
		cid = "Access Media SPA";
		break;
	case 0x0001A5:
		cid = "Nextcomm, Inc.";
		break;
	case 0x0001A1:
		cid = "Mag-Tek, Inc.";
		break;
	case 0x000195:
		cid = "Sena Technologies, Inc.";
		break;
	case 0x00017D:
		cid = "ThermoQuest";
		break;
	case 0x000189:
		cid = "Refraction Technology, Inc.";
		break;
	case 0x00308B:
		cid = "Brix Networks";
		break;
	case 0x00015A:
		cid = "Digital Video Broadcasting";
		break;
	case 0x000166:
		cid = "TC GROUP A/S";
		break;
	case 0x00015F:
		cid = "DIGITAL DESIGN GmbH";
		break;
	case 0x000214:
		cid = "DTVRO";
		break;
	case 0x000210:
		cid = "Fenecom";
		break;
	case 0x000208:
		cid = "Unify Networks, Inc.";
		break;
	case 0x000201:
		cid = "IFM Electronic gmbh";
		break;
	case 0x0001F5:
		cid = "ERIM S.A.";
		break;
	case 0x0001FD:
		cid = "Digital Voice Systems, Inc.";
		break;
	case 0x0001E5:
		cid = "Supernet, Inc.";
		break;
	case 0x0001E8:
		cid = "Force10 Networks, Inc.";
		break;
	case 0x0001D9:
		cid = "Sigma, Inc.";
		break;
	case 0x0001E0:
		cid = "Fast Systems, Inc.";
		break;
	case 0x0001D5:
		cid = "HAEDONG INFO & COMM CO., LTD";
		break;
	case 0x000118:
		cid = "EZ Digital Co., Ltd.";
		break;
	case 0x000124:
		cid = "Acer Incorporated";
		break;
	case 0x000101:
		cid = "Private";
		break;
	case 0x000114:
		cid = "KANDA TSUSHIN KOGYO CO., LTD.";
		break;
	case 0x000111:
		cid = "iDigm Inc.";
		break;
	case 0x000105:
		cid = "Beckhoff Automation GmbH";
		break;
	case 0x00029C:
		cid = "3COM";
		break;
	case 0x00B009:
		cid = "Grass Valley, A Belden Brand";
		break;
	case 0x00B09D:
		cid = "Point Grey Research Inc.";
		break;
	case 0x00B094:
		cid = "Alaris, Inc.";
		break;
	case 0x00B048:
		cid = "Marconi Communications Inc.";
		break;
	case 0x00B0C7:
		cid = "Tellabs Operations, Inc.";
		break;
	case 0x003060:
		cid = "Powerfile, Inc.";
		break;
	case 0x00301C:
		cid = "ALTVATER AIRDATA SYSTEMS";
		break;
	case 0x003015:
		cid = "CP CLARE CORP.";
		break;
	case 0x0030E6:
		cid = "Draeger Medical Systems, Inc.";
		break;
	case 0x003091:
		cid = "TAIWAN FIRST LINE ELEC. CORP.";
		break;
	case 0x003080:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0030AD:
		cid = "SHANGHAI COMMUNICATION";
		break;
	case 0x00305B:
		cid = "Toko Inc.";
		break;
	case 0x003024:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00301F:
		cid = "OPTICAL NETWORKS, INC.";
		break;
	case 0x0030D9:
		cid = "DATACORE SOFTWARE CORP.";
		break;
	case 0x00D0FF:
		cid = "Cisco Systems, Inc";
		break;
	case 0x003058:
		cid = "API MOTION";
		break;
	case 0x0030C6:
		cid = "CONTROL SOLUTIONS, INC.";
		break;
	case 0x003036:
		cid = "RMP ELEKTRONIKSYSTEME GMBH";
		break;
	case 0x00308A:
		cid = "NICOTRA SISTEMI S.P.A";
		break;
	case 0x00302C:
		cid = "SYLANTRO SYSTEMS CORPORATION";
		break;
	case 0x003006:
		cid = "SUPERPOWER COMPUTER";
		break;
	case 0x003079:
		cid = "CQOS, INC.";
		break;
	case 0x003059:
		cid = "KONTRON COMPACT COMPUTERS AG";
		break;
	case 0x0030B9:
		cid = "ECTEL";
		break;
	case 0x00303A:
		cid = "MAATEL";
		break;
	case 0x0030A3:
		cid = "Cisco Systems, Inc";
		break;
	case 0x003040:
		cid = "Cisco Systems, Inc";
		break;
	case 0x003064:
		cid = "ADLINK TECHNOLOGY, INC.";
		break;
	case 0x003097:
		cid = "AB Regin";
		break;
	case 0x0030EB:
		cid = "TURBONET COMMUNICATIONS, INC.";
		break;
	case 0x0030C8:
		cid = "GAD LINE, LTD.";
		break;
	case 0x0030C9:
		cid = "LuxN, N";
		break;
	case 0x00B01E:
		cid = "Rantic Labs, Inc.";
		break;
	case 0x00B064:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0030A2:
		cid = "Lightner Engineering";
		break;
	case 0x0030DE:
		cid = "WAGO Kontakttechnik GmbH";
		break;
	case 0x00309E:
		cid = "WORKBIT CORPORATION.";
		break;
	case 0x003057:
		cid = "QTelNet, Inc.";
		break;
	case 0x00305C:
		cid = "SMAR Laboratories Corp.";
		break;
	case 0x003082:
		cid = "TAIHAN ELECTRIC WIRE CO., LTD.";
		break;
	case 0x0030AE:
		cid = "Times N System, Inc.";
		break;
	case 0x00300D:
		cid = "MMC Technology, Inc.";
		break;
	case 0x003075:
		cid = "ADTECH";
		break;
	case 0x0030E7:
		cid = "CNF MOBILE SOLUTIONS, INC.";
		break;
	case 0x003019:
		cid = "Cisco Systems, Inc";
		break;
	case 0x003052:
		cid = "ELASTIC NETWORKS";
		break;
	case 0x003011:
		cid = "HMS Industrial Networks  ";
		break;
	case 0x00304A:
		cid = "Fraunhofer IPMS";
		break;
	case 0x003014:
		cid = "DIVIO, INC.";
		break;
	case 0x003029:
		cid = "OPICOM";
		break;
	case 0x0030BD:
		cid = "BELKIN COMPONENTS";
		break;
	case 0x0030BA:
		cid = "AC&T SYSTEM CO., LTD.";
		break;
	case 0x00301D:
		cid = "SKYSTREAM, INC.";
		break;
	case 0x003049:
		cid = "BRYANT TECHNOLOGY, LTD.";
		break;
	case 0x003041:
		cid = "SAEJIN T & M CO., LTD.";
		break;
	case 0x00308C:
		cid = "Quantum Corporation";
		break;
	case 0x00D04F:
		cid = "BITRONICS, INC.";
		break;
	case 0x00D0EF:
		cid = "IGT";
		break;
	case 0x00D022:
		cid = "INCREDIBLE TECHNOLOGIES, INC.";
		break;
	case 0x00D0C8:
		cid = "Prevas A/S";
		break;
	case 0x00D052:
		cid = "ASCEND COMMUNICATIONS, INC.";
		break;
	case 0x00D0B1:
		cid = "OMEGA ELECTRONICS SA";
		break;
	case 0x00D0C1:
		cid = "HARMONIC DATA SYSTEMS, LTD.";
		break;
	case 0x00D0F0:
		cid = "CONVISION TECHNOLOGY GMBH";
		break;
	case 0x00D00E:
		cid = "PLURIS, INC.";
		break;
	case 0x00D055:
		cid = "KATHREIN-WERKE KG";
		break;
	case 0x00D000:
		cid = "FERRAN SCIENTIFIC, INC.";
		break;
	case 0x00D005:
		cid = "ZHS ZEITMANAGEMENTSYSTEME";
		break;
	case 0x00D019:
		cid = "DAINIPPON SCREEN CORPORATE";
		break;
	case 0x00D053:
		cid = "CONNECTED SYSTEMS";
		break;
	case 0x00D097:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00016A:
		cid = "ALITEC";
		break;
	case 0x000176:
		cid = "Orient Silver Enterprises";
		break;
	case 0x000158:
		cid = "Electro Industries/Gauge Tech";
		break;
	case 0x00012D:
		cid = "Komodo Technology";
		break;
	case 0x000139:
		cid = "Point Multimedia Systems";
		break;
	case 0x000140:
		cid = "Sendtek Corporation";
		break;
	case 0x00014C:
		cid = "Berkeley Process Control";
		break;
	case 0x000135:
		cid = "KDC Corp.";
		break;
	case 0x00013C:
		cid = "TIW SYSTEMS";
		break;
	case 0x000148:
		cid = "X-traWeb Inc.";
		break;
	case 0x000120:
		cid = "OSCILLOQUARTZ S.A.";
		break;
	case 0x000127:
		cid = "OPEN Networks Pty Ltd";
		break;
	case 0x00309C:
		cid = "Timing Applications, Inc.";
		break;
	case 0x003086:
		cid = "Transistor Devices, Inc.";
		break;
	case 0x0030B5:
		cid = "Tadiran Microwave Networks";
		break;
	case 0x003070:
		cid = "1Net Corporation";
		break;
	case 0x003044:
		cid = "CradlePoint, Inc";
		break;
	case 0x00307E:
		cid = "Redflex Communication Systems";
		break;
	case 0x00307A:
		cid = "Advanced Technology & Systems";
		break;
	case 0x0030B7:
		cid = "Teletrol Systems, Inc.";
		break;
	case 0x0030B3:
		cid = "San Valley Systems, Inc.";
		break;
	case 0x00303B:
		cid = "PowerCom Technology";
		break;
	case 0x0030BC:
		cid = "Optronic AG";
		break;
	case 0x003071:
		cid = "Cisco Systems, Inc";
		break;
	case 0x009003:
		cid = "APLIO";
		break;
	case 0x0090D7:
		cid = "NetBoost Corp.";
		break;
	case 0x0090B4:
		cid = "WILLOWBROOK TECHNOLOGIES";
		break;
	case 0x009083:
		cid = "TURBO COMMUNICATION, INC.";
		break;
	case 0x0090BD:
		cid = "OMNIA COMMUNICATIONS, INC.";
		break;
	case 0x009094:
		cid = "OSPREY TECHNOLOGIES, INC.";
		break;
	case 0x0090DD:
		cid = "MIHARU COMMUNICATIONS Inc";
		break;
	case 0x009028:
		cid = "NIPPON SIGNAL CO., LTD.";
		break;
	case 0x00908C:
		cid = "ETREND ELECTRONICS, INC.";
		break;
	case 0x00905D:
		cid = "NETCOM SICHERHEITSTECHNIK GMBH";
		break;
	case 0x009068:
		cid = "DVT CORP.";
		break;
	case 0x009030:
		cid = "HONEYWELL-DATING";
		break;
	case 0x0090D3:
		cid = "GIESECKE & DEVRIENT GmbH";
		break;
	case 0x005081:
		cid = "MURATA MACHINERY, LTD.";
		break;
	case 0x0050CB:
		cid = "JETTER";
		break;
	case 0x00500E:
		cid = "CHROMATIS NETWORKS, INC.";
		break;
	case 0x0050FD:
		cid = "VISIONCOMM CO., LTD.";
		break;
	case 0x0050FE:
		cid = "PCTVnet ASA";
		break;
	case 0x0050AB:
		cid = "NALTEC, Inc.";
		break;
	case 0x005006:
		cid = "TAC AB";
		break;
	case 0x0050BF:
		cid = "Metalligence Technology Corp.";
		break;
	case 0x005066:
		cid = "AtecoM GmbH advanced telecomunication modules";
		break;
	case 0x0050D9:
		cid = "ENGETRON-ENGENHARIA ELETRONICA IND. e COM. LTDA";
		break;
	case 0x005043:
		cid = "MARVELL SEMICONDUCTOR, INC.";
		break;
	case 0x005018:
		cid = "AMIT, Inc.";
		break;
	case 0x005059:
		cid = "iBAHN";
		break;
	case 0x00506A:
		cid = "EDEVA, INC.";
		break;
	case 0x00502E:
		cid = "CAMBEX CORPORATION";
		break;
	case 0x005070:
		cid = "CHAINTECH COMPUTER CO., LTD.";
		break;
	case 0x00503B:
		cid = "MEDIAFIRE CORPORATION";
		break;
	case 0x005084:
		cid = "ATL PRODUCTS";
		break;
	case 0x005055:
		cid = "DOMS A/S";
		break;
	case 0x00504B:
		cid = "BARCONET N.V.";
		break;
	case 0x005046:
		cid = "MENICX INTERNATIONAL CO., LTD.";
		break;
	case 0x00502C:
		cid = "SOYO COMPUTER, INC.";
		break;
	case 0x005060:
		cid = "TANDBERG TELECOM AS";
		break;
	case 0x0050DD:
		cid = "SERRA SOLDADURA, S.A.";
		break;
	case 0x00503F:
		cid = "ANCHOR GAMES";
		break;
	case 0x0050EE:
		cid = "TEK DIGITEL CORPORATION";
		break;
	case 0x005072:
		cid = "CORVIS CORPORATION";
		break;
	case 0x005012:
		cid = "CBL - GMBH";
		break;
	case 0x0050E8:
		cid = "NOMADIX INC.";
		break;
	case 0x0050F2:
		cid = "MICROSOFT CORP.";
		break;
	case 0x005052:
		cid = "TIARA NETWORKS, INC.";
		break;
	case 0x005064:
		cid = "CAE ELECTRONICS";
		break;
	case 0x0050B4:
		cid = "SATCHWELL CONTROL SYSTEMS, LTD";
		break;
	case 0x0050B2:
		cid = "BRODEL GmbH";
		break;
	case 0x00D081:
		cid = "RTD Embedded Technologies, Inc.";
		break;
	case 0x00D011:
		cid = "PRISM VIDEO, INC.";
		break;
	case 0x00D09B:
		cid = "SPECTEL LTD.";
		break;
	case 0x00D031:
		cid = "INDUSTRIAL LOGIC CORPORATION";
		break;
	case 0x00D021:
		cid = "REGENT ELECTRONICS CORP.";
		break;
	case 0x00D0DF:
		cid = "KUZUMI ELECTRONICS, INC.";
		break;
	case 0x00D0B4:
		cid = "KATSUJIMA CO., LTD.";
		break;
	case 0x00D079:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00D0E2:
		cid = "MRT MICRO, INC.";
		break;
	case 0x00D039:
		cid = "UTILICOM, INC.";
		break;
	case 0x00504F:
		cid = "OLENCOM ELECTRONICS";
		break;
	case 0x0050A0:
		cid = "DELTA COMPUTER SYSTEMS, INC.";
		break;
	case 0x005007:
		cid = "SIEMENS TELECOMMUNICATION SYSTEMS LIMITED";
		break;
	case 0x005015:
		cid = "BRIGHT STAR ENGINEERING";
		break;
	case 0x005031:
		cid = "AEROFLEX LABORATORIES, INC.";
		break;
	case 0x0050DF:
		cid = "AirFiber, Inc.";
		break;
	case 0x0050F3:
		cid = "GLOBAL NET INFORMATION CO., Ltd.";
		break;
	case 0x005038:
		cid = "DAIN TELECOM CO., LTD.";
		break;
	case 0x00D0E1:
		cid = "AVIONITEK ISRAEL INC.";
		break;
	case 0x00D01B:
		cid = "MIMAKI ENGINEERING CO., LTD.";
		break;
	case 0x00D06E:
		cid = "TRENDVIEW RECORDERS LTD.";
		break;
	case 0x00D075:
		cid = "ALARIS MEDICAL SYSTEMS, INC.";
		break;
	case 0x00509D:
		cid = "THE INDUSTREE B.V.";
		break;
	case 0x00501E:
		cid = "Grass Valley, A Belden Brand";
		break;
	case 0x00502B:
		cid = "GENRAD LTD.";
		break;
	case 0x00500A:
		cid = "IRIS TECHNOLOGIES, INC.";
		break;
	case 0x00D027:
		cid = "APPLIED AUTOMATION, INC.";
		break;
	case 0x00D0F1:
		cid = "SEGA ENTERPRISES, LTD.";
		break;
	case 0x00D009:
		cid = "HSING TECH. ENTERPRISE CO. LTD";
		break;
	case 0x00D080:
		cid = "EXABYTE CORPORATION";
		break;
	case 0x00D084:
		cid = "NEXCOMM SYSTEMS, INC.";
		break;
	case 0x00D0E6:
		cid = "IBOND INC.";
		break;
	case 0x00D099:
		cid = "Elcard Wireless Systems Oy";
		break;
	case 0x0090AF:
		cid = "J. MORITA MFG. CORP.";
		break;
	case 0x009088:
		cid = "BAXALL SECURITY LTD.";
		break;
	case 0x0090E0:
		cid = "SYSTRAN CORP.";
		break;
	case 0x00903E:
		cid = "N.V. PHILIPS INDUSTRIAL ACTIVITIES";
		break;
	case 0x0090B9:
		cid = "BERAN INSTRUMENTS LTD.";
		break;
	case 0x00901A:
		cid = "UNISPHERE SOLUTIONS";
		break;
	case 0x009082:
		cid = "FORCE INSTITUTE";
		break;
	case 0x00906A:
		cid = "TURNSTONE SYSTEMS, INC.";
		break;
	case 0x0001FE:
		cid = "DIGITAL EQUIPMENT CORPORATION";
		break;
	case 0x009077:
		cid = "ADVANCED FIBRE COMMUNICATIONS";
		break;
	case 0x0090B2:
		cid = "AVICI SYSTEMS INC.";
		break;
	case 0x009095:
		cid = "UNIVERSAL AVIONICS";
		break;
	case 0x009012:
		cid = "GLOBESPAN SEMICONDUCTOR, INC.";
		break;
	case 0x0090B6:
		cid = "FIBEX SYSTEMS";
		break;
	case 0x0090F4:
		cid = "LIGHTNING INSTRUMENTATION";
		break;
	case 0x00904F:
		cid = "ABB POWER T&D COMPANY, INC.";
		break;
	case 0x00905A:
		cid = "DEARBORN GROUP, INC.";
		break;
	case 0x009066:
		cid = "Troika Networks, Inc.";
		break;
	case 0x00907A:
		cid = "Spectralink, Inc";
		break;
	case 0x0090F0:
		cid = "Harmonic Video Systems Ltd.";
		break;
	case 0x001047:
		cid = "ECHO ELETRIC CO. LTD.";
		break;
	case 0x00100C:
		cid = "ITO CO., LTD.";
		break;
	case 0x0010D0:
		cid = "WITCOM, LTD.";
		break;
	case 0x001006:
		cid = "Thales Contact Solutions Ltd.";
		break;
	case 0x0010D6:
		cid = "Exelis";
		break;
	case 0x001076:
		cid = "EUREM GmbH";
		break;
	case 0x00103F:
		cid = "TOLLGRADE COMMUNICATIONS, INC.";
		break;
	case 0x001034:
		cid = "GNP Computers";
		break;
	case 0x001012:
		cid = "PROCESSOR SYSTEMS (I) PVT LTD";
		break;
	case 0x0010C8:
		cid = "COMMUNICATIONS ELECTRONICS SECURITY GROUP";
		break;
	case 0x0010D1:
		cid = "Top Layer Networks, Inc.";
		break;
	case 0x0010F0:
		cid = "RITTAL-WERK RUDOLF LOH GmbH & Co.";
		break;
	case 0x00106A:
		cid = "DIGITAL MICROWAVE CORPORATION";
		break;
	case 0x001030:
		cid = "EION Inc.";
		break;
	case 0x0010A4:
		cid = "XIRCOM";
		break;
	case 0x001050:
		cid = "RION CO., LTD.";
		break;
	case 0x00109C:
		cid = "M-SYSTEM CO., LTD.";
		break;
	case 0x001064:
		cid = "DNPG, LLC";
		break;
	case 0x001020:
		cid = "Hand Held Products Inc";
		break;
	case 0x00106E:
		cid = "TADIRAN COM. LTD.";
		break;
	case 0x00105B:
		cid = "NET INSIGHT AB";
		break;
	case 0x001002:
		cid = "ACTIA";
		break;
	case 0x0010A0:
		cid = "INNOVEX TECHNOLOGIES, INC.";
		break;
	case 0x001074:
		cid = "ATEN INTERNATIONAL CO., LTD.";
		break;
	case 0x001057:
		cid = "Rebel.com, Inc.";
		break;
	case 0x0010BC:
		cid = "Aastra Telecom";
		break;
	case 0x001033:
		cid = "ACCESSLAN COMMUNICATIONS, INC.";
		break;
	case 0x0004AC:
		cid = "IBM Corp";
		break;
	case 0x0010B4:
		cid = "ATMOSPHERE NETWORKS";
		break;
	case 0x0010F9:
		cid = "UNIQUE SYSTEMS, INC.";
		break;
	case 0x001038:
		cid = "MICRO RESEARCH INSTITUTE, INC.";
		break;
	case 0x00100A:
		cid = "WILLIAMS COMMUNICATIONS GROUP";
		break;
	case 0x001080:
		cid = "METAWAVE COMMUNICATIONS";
		break;
	case 0x0010AB:
		cid = "KOITO ELECTRIC INDUSTRIES, LTD.";
		break;
	case 0x00903C:
		cid = "ATLANTIC NETWORK SYSTEMS";
		break;
	case 0x0090E3:
		cid = "AVEX ELECTRONICS INC.";
		break;
	case 0x00900B:
		cid = "LANNER ELECTRONICS, INC.";
		break;
	case 0x0090C8:
		cid = "WAVERIDER COMMUNICATIONS (CANADA) INC.";
		break;
	case 0x0090B7:
		cid = "DIGITAL LIGHTWAVE, INC.";
		break;
	case 0x009037:
		cid = "ACUCOMM, INC.";
		break;
	case 0x009059:
		cid = "TELECOM DEVICE K.K.";
		break;
	case 0x00E003:
		cid = "NOKIA WIRELESS BUSINESS COMMUN";
		break;
	case 0x00E0F3:
		cid = "WebSprint Communications, Inc.";
		break;
	case 0x00E013:
		cid = "EASTERN ELECTRONIC CO., LTD.";
		break;
	case 0x001063:
		cid = "STARGUIDE DIGITAL NETWORKS";
		break;
	case 0x0010A7:
		cid = "UNEX TECHNOLOGY CORPORATION";
		break;
	case 0x001039:
		cid = "Vectron Systems AG";
		break;
	case 0x0010C3:
		cid = "CSI-CONTROL SYSTEMS";
		break;
	case 0x00107F:
		cid = "CRESTRON ELECTRONICS, INC.";
		break;
	case 0x00102C:
		cid = "Lasat Networks A/S";
		break;
	case 0x0010B7:
		cid = "COYOTE TECHNOLOGIES, LLC";
		break;
	case 0x006064:
		cid = "NETCOMM LIMITED";
		break;
	case 0x0060CB:
		cid = "HITACHI ZOSEN CORPORATION";
		break;
	case 0x006090:
		cid = "Artiza Networks Inc";
		break;
	case 0x0060A9:
		cid = "GESYTEC MBH";
		break;
	case 0x0060F2:
		cid = "LASERGRAPHICS, INC.";
		break;
	case 0x006031:
		cid = "HRK SYSTEMS";
		break;
	case 0x0060A6:
		cid = "PARTICLE MEASURING SYSTEMS";
		break;
	case 0x006082:
		cid = "NOVALINK TECHNOLOGIES, INC.";
		break;
	case 0x006012:
		cid = "POWER COMPUTING CORPORATION";
		break;
	case 0x00604D:
		cid = "MMC NETWORKS, INC.";
		break;
	case 0x0060E5:
		cid = "FUJI AUTOMATION CO., LTD.";
		break;
	case 0x006010:
		cid = "NETWORK MACHINES, INC.";
		break;
	case 0x006044:
		cid = "LITTON/POLY-SCIENTIFIC";
		break;
	case 0x0060BE:
		cid = "WEBTRONICS";
		break;
	case 0x006052:
		cid = "PERIPHERALS ENTERPRISE CO., Ltd.";
		break;
	case 0x00E03F:
		cid = "JATON CORPORATION";
		break;
	case 0x00E0EB:
		cid = "DIGICOM SYSTEMS, INCORPORATED";
		break;
	case 0x00E00E:
		cid = "AVALON IMAGING SYSTEMS, INC.";
		break;
	case 0x00E0CD:
		cid = "SAAB SENSIS CORPORATION";
		break;
	case 0x00E0CB:
		cid = "RESON, INC.";
		break;
	case 0x00E048:
		cid = "SDL COMMUNICATIONS, INC.";
		break;
	case 0x00E083:
		cid = "JATO TECHNOLOGIES, INC.";
		break;
	case 0x00E03D:
		cid = "FOCON ELECTRONIC SYSTEMS A/S";
		break;
	case 0x00E0FA:
		cid = "TRL TECHNOLOGY, LTD.";
		break;
	case 0x00E02C:
		cid = "AST COMPUTER";
		break;
	case 0x00E00B:
		cid = "ROOFTOP COMMUNICATIONS CORP.";
		break;
	case 0x00E067:
		cid = "eac AUTOMATION-CONSULTING GmbH";
		break;
	case 0x00E058:
		cid = "PHASE ONE DENMARK A/S";
		break;
	case 0x00E089:
		cid = "ION Networks, Inc.";
		break;
	case 0x00E03B:
		cid = "PROMINET CORPORATION";
		break;
	case 0x006017:
		cid = "TOKIMEC INC.";
		break;
	case 0x0060E6:
		cid = "SHOMITI SYSTEMS INCORPORATED";
		break;
	case 0x006053:
		cid = "TOYODA MACHINE WORKS, LTD.";
		break;
	case 0x0060A0:
		cid = "SWITCHED NETWORK TECHNOLOGIES, INC.";
		break;
	case 0x006019:
		cid = "Roche Diagnostics";
		break;
	case 0x006033:
		cid = "ACUITY IMAGING, INC.";
		break;
	case 0x0060EE:
		cid = "APOLLO";
		break;
	case 0x006022:
		cid = "VICOM SYSTEMS, INC.";
		break;
	case 0x006013:
		cid = "NETSTAL MASCHINEN AG";
		break;
	case 0x0060F4:
		cid = "ADVANCED COMPUTER SOLUTIONS, Inc.";
		break;
	case 0x006011:
		cid = "CRYSTAL SEMICONDUCTOR CORP.";
		break;
	case 0x00600E:
		cid = "WAVENET INTERNATIONAL, INC.";
		break;
	case 0x0060C0:
		cid = "Nera Networks AS";
		break;
	case 0x00E062:
		cid = "HOST ENGINEERING";
		break;
	case 0x00E033:
		cid = "E.E.P.D. GmbH";
		break;
	case 0x00E079:
		cid = "A.T.N.R.";
		break;
	case 0x00E09C:
		cid = "MII";
		break;
	case 0x00E075:
		cid = "Verilink Corporation";
		break;
	case 0x00E07A:
		cid = "MIKRODIDAKT AB";
		break;
	case 0x00E03E:
		cid = "ALFATECH, INC.";
		break;
	case 0x00E09A:
		cid = "Positron Inc.";
		break;
	case 0x0060D7:
		cid = "ECOLE POLYTECHNIQUE FEDERALE DE LAUSANNE (EPFL)";
		break;
	case 0x006087:
		cid = "KANSAI ELECTRIC CO., LTD.";
		break;
	case 0x00E029:
		cid = "STANDARD MICROSYSTEMS CORP.";
		break;
	case 0x00606B:
		cid = "Synclayer Inc.";
		break;
	case 0x006073:
		cid = "REDCREEK COMMUNICATIONS, INC.";
		break;
	case 0x006039:
		cid = "SanCom Technology, Inc.";
		break;
	case 0x0060A5:
		cid = "PERFORMANCE TELECOM CORP.";
		break;
	case 0x0060B3:
		cid = "Z-COM, INC.";
		break;
	case 0x006089:
		cid = "XATA";
		break;
	case 0x00603C:
		cid = "HAGIWARA SYS-COM CO., LTD.";
		break;
	case 0x00602E:
		cid = "CYCLADES CORPORATION";
		break;
	case 0x006075:
		cid = "PENTEK, INC.";
		break;
	case 0x00601C:
		cid = "TELXON CORPORATION";
		break;
	case 0x006016:
		cid = "CLARIION";
		break;
	case 0x0060AD:
		cid = "MegaChips Corporation";
		break;
	case 0x0060B6:
		cid = "LAND COMPUTER CO., LTD.";
		break;
	case 0x006055:
		cid = "CORNELL UNIVERSITY";
		break;
	case 0x006015:
		cid = "NET2NET CORPORATION";
		break;
	case 0x00A01D:
		cid = "Red Lion Controls, LP";
		break;
	case 0x00A071:
		cid = "VIDEO LOTTERY TECHNOLOGIES,INC";
		break;
	case 0x00A052:
		cid = "STANILITE ELECTRONICS PTY. LTD";
		break;
	case 0x00A0EA:
		cid = "ETHERCOM CORP.";
		break;
	case 0x00A02E:
		cid = "BRAND COMMUNICATIONS, LTD.";
		break;
	case 0x00A0E2:
		cid = "Keisokugiken Corporation";
		break;
	case 0x00A058:
		cid = "GLORY, LTD.";
		break;
	case 0x00E093:
		cid = "ACKFIN NETWORKS";
		break;
	case 0x00E0E3:
		cid = "SK-ELEKTRONIK GMBH";
		break;
	case 0x00E066:
		cid = "ProMax Systems, Inc.";
		break;
	case 0x00E0DB:
		cid = "ViaVideo Communications, Inc.";
		break;
	case 0x00E0DF:
		cid = "KEYMILE GmbH";
		break;
	case 0x00E00D:
		cid = "RADIANT SYSTEMS";
		break;
	case 0x00E008:
		cid = "AMAZING CONTROLS! INC.";
		break;
	case 0x00E086:
		cid = "Emerson Network Power, Avocent Division";
		break;
	case 0x00E0E1:
		cid = "G2 NETWORKS, INC.";
		break;
	case 0x00E042:
		cid = "Pacom Systems Ltd.";
		break;
	case 0x00E08E:
		cid = "UTSTARCOM";
		break;
	case 0x00E095:
		cid = "ADVANCED-VISION TECHNOLGIES CORP.";
		break;
	case 0x006006:
		cid = "SOTEC CO., LTD";
		break;
	case 0x00603D:
		cid = "3CX";
		break;
	case 0x006029:
		cid = "CARY PERIPHERALS INC.";
		break;
	case 0x006043:
		cid = "iDirect, INC.";
		break;
	case 0x0060D1:
		cid = "CASCADE COMMUNICATIONS";
		break;
	case 0x0060CD:
		cid = "VideoServer, Inc.";
		break;
	case 0x006094:
		cid = "IBM Corp";
		break;
	case 0x0060D9:
		cid = "TRANSYS NETWORKS INC.";
		break;
	case 0x0060AA:
		cid = "INTELLIGENT DEVICES INC. (IDI)";
		break;
	case 0x00605A:
		cid = "CELCORE, INC.";
		break;
	case 0x006065:
		cid = "BERNECKER & RAINER INDUSTRIE-ELEKTRONIC GmbH";
		break;
	case 0x00E07B:
		cid = "BAY NETWORKS";
		break;
	case 0x00E077:
		cid = "WEBGEAR, INC.";
		break;
	case 0x00E0D2:
		cid = "VERSANET COMMUNICATIONS, INC.";
		break;
	case 0x00E04E:
		cid = "SANYO DENKI CO., LTD.";
		break;
	case 0x00E0D0:
		cid = "NETSPEED, INC.";
		break;
	case 0x00E02A:
		cid = "TANDBERG TELEVISION AS";
		break;
	case 0x00E05B:
		cid = "WEST END SYSTEMS CORP.";
		break;
	case 0x00E051:
		cid = "TALX CORPORATION";
		break;
	case 0x00A0F0:
		cid = "TORONTO MICROELECTRONICS INC.";
		break;
	case 0x00A049:
		cid = "DIGITECH INDUSTRIES, INC.";
		break;
	case 0x00A027:
		cid = "FIREPOWER SYSTEMS, INC.";
		break;
	case 0x00A0FF:
		cid = "TELLABS OPERATIONS, INC.";
		break;
	case 0x00A001:
		cid = "DRS Signal Solutions";
		break;
	case 0x00A0F1:
		cid = "MTI";
		break;
	case 0x00A046:
		cid = "SCITEX CORP. LTD.";
		break;
	case 0x00A0D9:
		cid = "CONVEX COMPUTER CORPORATION";
		break;
	case 0x00A0B5:
		cid = "3H TECHNOLOGY";
		break;
	case 0x00A0AC:
		cid = "GILAT SATELLITE NETWORKS, LTD.";
		break;
	case 0x00A057:
		cid = "LANCOM Systems GmbH";
		break;
	case 0x00A086:
		cid = "AMBER WAVE SYSTEMS, INC.";
		break;
	case 0x00A083:
		cid = "ASIMMPHONY TURKEY";
		break;
	case 0x00A091:
		cid = "APPLICOM INTERNATIONAL";
		break;
	case 0x00A004:
		cid = "NETPOWER, INC.";
		break;
	case 0x00A081:
		cid = "ALCATEL DATA NETWORKS";
		break;
	case 0x00200F:
		cid = "EBRAINS Inc";
		break;
	case 0x0020C7:
		cid = "AKAI Professional M.I. Corp.";
		break;
	case 0x0020EB:
		cid = "CINCINNATI MICROWAVE, INC.";
		break;
	case 0x0020E3:
		cid = "MCD KENCOM CORPORATION";
		break;
	case 0x002013:
		cid = "DIVERSIFIED TECHNOLOGY, INC.";
		break;
	case 0x0020C1:
		cid = "SAXA, Inc.";
		break;
	case 0x002087:
		cid = "MEMOTEC, INC.";
		break;
	case 0x0020F9:
		cid = "PARALINK NETWORKS, INC.";
		break;
	case 0x00A0F9:
		cid = "BINTEC COMMUNICATIONS GMBH";
		break;
	case 0x00A0BC:
		cid = "VIASAT, INCORPORATED";
		break;
	case 0x00A003:
		cid = "Siemens Switzerland Ltd., I B T HVP";
		break;
	case 0x00A09E:
		cid = "ICTV";
		break;
	case 0x00A026:
		cid = "TELDAT, S.A.";
		break;
	case 0x00201A:
		cid = "MRV Communications, Inc.";
		break;
	case 0x002023:
		cid = "T.C. TECHNOLOGIES PTY. LTD";
		break;
	case 0x0020F3:
		cid = "RAYNET CORPORATION";
		break;
	case 0x002039:
		cid = "SCINETS";
		break;
	case 0x002038:
		cid = "VME MICROSYSTEMS INTERNATIONAL CORPORATION";
		break;
	case 0x00203E:
		cid = "LogiCan Technologies, Inc.";
		break;
	case 0x002055:
		cid = "ALTECH CO., LTD.";
		break;
	case 0x0020D9:
		cid = "PANASONIC TECHNOLOGIES, INC./MIECO-US";
		break;
	case 0x002080:
		cid = "SYNERGY (UK) LTD.";
		break;
	case 0x002026:
		cid = "AMKLY SYSTEMS, INC.";
		break;
	case 0x002019:
		cid = "OHLER GMBH";
		break;
	case 0x002057:
		cid = "TITZE DATENTECHNIK GmbH";
		break;
	case 0x0020BE:
		cid = "LAN ACCESS CORP.";
		break;
	case 0x002022:
		cid = "NMS Communications";
		break;
	case 0x0020AA:
		cid = "Ericsson Television Limited";
		break;
	case 0x00208E:
		cid = "CHEVIN SOFTWARE ENG. LTD.";
		break;
	case 0x00203B:
		cid = "WISDM LTD.";
		break;
	case 0x002044:
		cid = "GENITECH PTY LTD";
		break;
	case 0x0020F5:
		cid = "PANDATEL AG";
		break;
	case 0x002021:
		cid = "ALGORITHMS SOFTWARE PVT. LTD.";
		break;
	case 0x002074:
		cid = "SUNGWOON SYSTEMS";
		break;
	case 0x0020CE:
		cid = "LOGICAL DESIGN GROUP, INC.";
		break;
	case 0x002082:
		cid = "ONEAC CORPORATION";
		break;
	case 0x0020BF:
		cid = "AEHR TEST SYSTEMS";
		break;
	case 0x0020F1:
		cid = "ALTOS INDIA LIMITED";
		break;
	case 0x00205D:
		cid = "NANOMATIC OY";
		break;
	case 0x0020E1:
		cid = "ALAMAR ELECTRONICS";
		break;
	case 0x0020CC:
		cid = "DIGITAL SERVICES, LTD.";
		break;
	case 0x00202C:
		cid = "WELLTRONIX CO., LTD.";
		break;
	case 0x0020B3:
		cid = "Tattile SRL";
		break;
	case 0x00A048:
		cid = "QUESTECH, LTD.";
		break;
	case 0x00A0C4:
		cid = "CRISTIE ELECTRONICS LTD.";
		break;
	case 0x00A089:
		cid = "XPOINT TECHNOLOGIES, INC.";
		break;
	case 0x00A0AE:
		cid = "NUCOM SYSTEMS, INC.";
		break;
	case 0x00A02B:
		cid = "TRANSITIONS RESEARCH CORP.";
		break;
	case 0x00A0A1:
		cid = "EPIC DATA INC.";
		break;
	case 0x00A0C3:
		cid = "UNICOMPUTER GMBH";
		break;
	case 0x00A042:
		cid = "SPUR PRODUCTS CORP.";
		break;
	case 0x00C007:
		cid = "PINNACLE DATA SYSTEMS, INC.";
		break;
	case 0x00C0F8:
		cid = "ABOUT COMPUTING INC.";
		break;
	case 0x00C06F:
		cid = "KOMATSU LTD.";
		break;
	case 0x00C08E:
		cid = "NETWORK INFORMATION TECHNOLOGY";
		break;
	case 0x00C05A:
		cid = "SEMAPHORE COMMUNICATIONS CORP.";
		break;
	case 0x00C0EB:
		cid = "SEH COMPUTERTECHNIK GMBH";
		break;
	case 0x00C0C7:
		cid = "SPARKTRUM MICROSYSTEMS, INC.";
		break;
	case 0x00C0D8:
		cid = "UNIVERSAL DATA SYSTEMS";
		break;
	case 0x00C068:
		cid = "HME Clear-Com LTD.";
		break;
	case 0x0040DB:
		cid = "ADVANCED TECHNICAL SOLUTIONS";
		break;
	case 0x00405B:
		cid = "FUNASSET LIMITED";
		break;
	case 0x00401B:
		cid = "PRINTER SYSTEMS CORP.";
		break;
	case 0x0040EB:
		cid = "MARTIN MARIETTA CORPORATION";
		break;
	case 0x0040CD:
		cid = "TERA MICROSYSTEMS, INC.";
		break;
	case 0x0040E5:
		cid = "SYBUS CORPORATION";
		break;
	case 0x0040F9:
		cid = "COMBINET";
		break;
	case 0x004039:
		cid = "OPTEC DAIICHI DENKO CO., LTD.";
		break;
	case 0x0040FE:
		cid = "SYMPLEX COMMUNICATIONS";
		break;
	case 0x0020F0:
		cid = "UNIVERSAL MICROELECTRONICS CO.";
		break;
	case 0x0020EF:
		cid = "USC CORPORATION";
		break;
	case 0x002016:
		cid = "SHOWA ELECTRIC WIRE & CABLE CO";
		break;
	case 0x00201F:
		cid = "BEST POWER TECHNOLOGY, INC.";
		break;
	case 0x002045:
		cid = "ION Networks, Inc.";
		break;
	case 0x0020B6:
		cid = "AGILE NETWORKS, INC.";
		break;
	case 0x00208A:
		cid = "SONIX COMMUNICATIONS, LTD.";
		break;
	case 0x00204C:
		cid = "MITRON COMPUTER PTE LTD.";
		break;
	case 0x002002:
		cid = "SERITECH ENTERPRISE CO., LTD.";
		break;
	case 0x00204B:
		cid = "AUTOCOMPUTER CO., LTD.";
		break;
	case 0x002048:
		cid = "Marconi Communications";
		break;
	case 0x002008:
		cid = "CABLE & COMPUTER TECHNOLOGY";
		break;
	case 0x00C023:
		cid = "TUTANKHAMON ELECTRONICS";
		break;
	case 0x00C0F3:
		cid = "NETWORK COMMUNICATIONS CORP.";
		break;
	case 0x00C043:
		cid = "STRATACOM";
		break;
	case 0x00C0B3:
		cid = "COMSTAT DATACOMM CORPORATION";
		break;
	case 0x00C0B5:
		cid = "CORPORATE NETWORK SYSTEMS,INC.";
		break;
	case 0x00403E:
		cid = "RASTER OPS CORPORATION";
		break;
	case 0x0040AE:
		cid = "DELTA CONTROLS, INC.";
		break;
	case 0x0040C6:
		cid = "FIBERNET RESEARCH, INC.";
		break;
	case 0x004092:
		cid = "ASP COMPUTER PRODUCTS, INC.";
		break;
	case 0x004054:
		cid = "CONNECTION MACHINES SERVICES";
		break;
	case 0x0040D8:
		cid = "OCEAN OFFICE AUTOMATION LTD.";
		break;
	case 0x0040C0:
		cid = "VISTA CONTROLS CORPORATION";
		break;
	case 0x004088:
		cid = "MOBIUS TECHNOLOGIES, INC.";
		break;
	case 0x00803B:
		cid = "APT COMMUNICATIONS, INC.";
		break;
	case 0x0080BA:
		cid = "SPECIALIX (ASIA) PTE, LTD";
		break;
	case 0x00BB01:
		cid = "OCTOTHORPE CORP.";
		break;
	case 0x00C01F:
		cid = "S.E.R.C.E.L.";
		break;
	case 0x00C094:
		cid = "VMX INC.";
		break;
	case 0x00C075:
		cid = "XANTE CORPORATION";
		break;
	case 0x00C0F9:
		cid = "Artesyn Embedded Technologies";
		break;
	case 0x00C039:
		cid = "Teridian Semiconductor Corporation";
		break;
	case 0x00C077:
		cid = "DAEWOO TELECOM LTD.";
		break;
	case 0x00C02F:
		cid = "OKUMA CORPORATION";
		break;
	case 0x00C0F1:
		cid = "SHINKO ELECTRIC CO., LTD.";
		break;
	case 0x00C0DE:
		cid = "ZCOMM, INC.";
		break;
	case 0x0040AF:
		cid = "DIGITAL PRODUCTS, INC.";
		break;
	case 0x00404F:
		cid = "SPACE & NAVAL WARFARE SYSTEMS";
		break;
	case 0x00407B:
		cid = "SCIENTIFIC ATLANTA";
		break;
	case 0x00404E:
		cid = "FLUENT, INC.";
		break;
	case 0x00C0F7:
		cid = "ENGAGE COMMUNICATION, INC.";
		break;
	case 0x00C030:
		cid = "INTEGRATED ENGINEERING B. V.";
		break;
	case 0x00C04A:
		cid = "GROUP 2000 AG";
		break;
	case 0x00C0A6:
		cid = "EXICOM AUSTRALIA PTY. LTD";
		break;
	case 0x00C053:
		cid = "Aspect Software Inc.";
		break;
	case 0x00C0CF:
		cid = "IMATRAN VOIMA OY";
		break;
	case 0x00C029:
		cid = "Nexans Deutschland GmbH - ANS";
		break;
	case 0x00C0A4:
		cid = "UNIGRAF OY";
		break;
	case 0x00C060:
		cid = "ID SCANDINAVIA AS";
		break;
	case 0x00C082:
		cid = "MOORE PRODUCTS CO.";
		break;
	case 0x00C008:
		cid = "SECO SRL";
		break;
	case 0x00C0BB:
		cid = "FORVAL CREATIVE, INC.";
		break;
	case 0x00C0E0:
		cid = "DSC COMMUNICATION CORP.";
		break;
	case 0x00C05E:
		cid = "VARI-LITE, INC.";
		break;
	case 0x00C031:
		cid = "DESIGN RESEARCH SYSTEMS, INC.";
		break;
	case 0x00C07C:
		cid = "HIGHTECH INFORMATION";
		break;
	case 0x00C0AE:
		cid = "TOWERCOM CO. INC. DBA PC HOUSE";
		break;
	case 0x00C0D6:
		cid = "J1 SYSTEMS, INC.";
		break;
	case 0x00C0AA:
		cid = "SILICON VALLEY COMPUTER";
		break;
	case 0x00C04E:
		cid = "COMTROL CORPORATION";
		break;
	case 0x00C00A:
		cid = "MICRO CRAFT";
		break;
	case 0x00C02A:
		cid = "OHKURA ELECTRIC CO., LTD.";
		break;
	case 0x00C0F2:
		cid = "TRANSITION NETWORKS";
		break;
	case 0x00C01D:
		cid = "GRAND JUNCTION NETWORKS, INC.";
		break;
	case 0x00C0AD:
		cid = "MARBEN COMMUNICATION SYSTEMS";
		break;
	case 0x00C024:
		cid = "EDEN SISTEMAS DE COMPUTACAO SA";
		break;
	case 0x00C0E9:
		cid = "OAK SOLUTIONS, LTD.";
		break;
	case 0x00C0C5:
		cid = "SID INFORMATICA";
		break;
	case 0x00C001:
		cid = "DIATEK PATIENT MANAGMENT";
		break;
	case 0x00C07E:
		cid = "KUBOTA CORPORATION ELECTRONIC";
		break;
	case 0x008012:
		cid = "INTEGRATED MEASUREMENT SYSTEMS";
		break;
	case 0x008039:
		cid = "ALCATEL STC AUSTRALIA";
		break;
	case 0x008023:
		cid = "INTEGRATED BUSINESS NETWORKS";
		break;
	case 0x0080CA:
		cid = "NETCOM RESEARCH INCORPORATED";
		break;
	case 0x00804D:
		cid = "CYCLONE MICROSYSTEMS, INC.";
		break;
	case 0x0080D6:
		cid = "NUVOTECH, INC.";
		break;
	case 0x0080ED:
		cid = "IQ TECHNOLOGIES, INC.";
		break;
	case 0x0080C1:
		cid = "LANEX CORPORATION";
		break;
	case 0x008049:
		cid = "NISSIN ELECTRIC CO., LTD.";
		break;
	case 0x00807C:
		cid = "FIBERCOM, INC.";
		break;
	case 0x008079:
		cid = "MICROBUS DESIGNS LTD.";
		break;
	case 0x0080DE:
		cid = "GIPSI S.A.";
		break;
	case 0x008004:
		cid = "ANTLOW COMMUNICATIONS, LTD.";
		break;
	case 0x008078:
		cid = "PRACTICAL PERIPHERALS, INC.";
		break;
	case 0x008040:
		cid = "JOHN FLUKE MANUFACTURING CO.";
		break;
	case 0x0000F8:
		cid = "DIGITAL EQUIPMENT CORPORATION";
		break;
	case 0x0080CE:
		cid = "BROADCAST TELEVISION SYSTEMS";
		break;
	case 0x00801A:
		cid = "BELL ATLANTIC";
		break;
	case 0x00803F:
		cid = "TATUNG COMPANY";
		break;
	case 0x0080D4:
		cid = "CHASE RESEARCH LTD.";
		break;
	case 0x0080CB:
		cid = "FALCO DATA PRODUCTS";
		break;
	case 0x008075:
		cid = "PARSYTEC GMBH";
		break;
	case 0x0080EB:
		cid = "COMPCONTROL B.V.";
		break;
	case 0x008099:
		cid = "Eaton Industries GmbH";
		break;
	case 0x0080E4:
		cid = "NORTHWEST DIGITAL SYSTEMS, INC";
		break;
	case 0x008041:
		cid = "VEB KOMBINAT ROBOTRON";
		break;
	case 0x0080C8:
		cid = "D-LINK SYSTEMS, INC.";
		break;
	case 0x008036:
		cid = "REFLEX MANUFACTURING SYSTEMS";
		break;
	case 0x0040F0:
		cid = "MicroBrain,Inc.";
		break;
	case 0x0040A7:
		cid = "ITAUTEC PHILCO S.A.";
		break;
	case 0x0040D3:
		cid = "KIMPSION INTERNATIONAL CORP.";
		break;
	case 0x004065:
		cid = "GTE SPACENET";
		break;
	case 0x0040CB:
		cid = "LANWAN TECHNOLOGIES";
		break;
	case 0x004041:
		cid = "FUJIKURA LTD.";
		break;
	case 0x004053:
		cid = "AMPRO COMPUTERS";
		break;
	case 0x008032:
		cid = "ACCESS CO., LTD.";
		break;
	case 0x0080CF:
		cid = "EMBEDDED PERFORMANCE INC.";
		break;
	case 0x008031:
		cid = "BASYS, CORP.";
		break;
	case 0x00803A:
		cid = "VARITYPER, INC.";
		break;
	case 0x00807E:
		cid = "SOUTHERN PACIFIC LTD.";
		break;
	case 0x008029:
		cid = "EAGLE TECHNOLOGY, INC.";
		break;
	case 0x00802F:
		cid = "NATIONAL INSTRUMENTS CORP.";
		break;
	case 0x008051:
		cid = "FIBERMUX";
		break;
	case 0x0080FD:
		cid = "EXSCEED CORPRATION";
		break;
	case 0x004008:
		cid = "A PLUS INFO CORPORATION";
		break;
	case 0x0040E9:
		cid = "ACCORD SYSTEMS, INC.";
		break;
	case 0x0040B5:
		cid = "VIDEO TECHNOLOGY COMPUTERS LTD";
		break;
	case 0x004012:
		cid = "WINDATA, INC.";
		break;
	case 0x00401C:
		cid = "AST RESEARCH, INC.";
		break;
	case 0x004067:
		cid = "OMNIBYTE CORPORATION";
		break;
	case 0x004035:
		cid = "OPCOM";
		break;
	case 0x0040EA:
		cid = "PLAIN TREE SYSTEMS INC";
		break;
	case 0x0040EF:
		cid = "HYPERCOM, INC.";
		break;
	case 0x004093:
		cid = "PAXDATA NETWORKS LTD.";
		break;
	case 0x0040EC:
		cid = "MIKASA SYSTEM ENGINEERING";
		break;
	case 0x0080B9:
		cid = "ARCHE TECHNOLIGIES INC.";
		break;
	case 0x0080A7:
		cid = "Honeywell International Inc";
		break;
	case 0x0040DA:
		cid = "TELSPEC LTD";
		break;
	case 0x004083:
		cid = "TDA INDUSTRIA DE PRODUTOS";
		break;
	case 0x0040C8:
		cid = "MILAN TECHNOLOGY CORPORATION";
		break;
	case 0x0040BC:
		cid = "ALGORITHMICS LTD.";
		break;
	case 0x00402F:
		cid = "XLNT DESIGNS INC.";
		break;
	case 0x00405D:
		cid = "STAR-TEK, INC.";
		break;
	case 0x00405F:
		cid = "AFE COMPUTERS LTD.";
		break;
	case 0x004043:
		cid = "Nokia Siemens Networks GmbH & Co. KG.";
		break;
	case 0x00800D:
		cid = "VOSSWINKEL F.U.";
		break;
	case 0x0080D1:
		cid = "KIMTRON CORPORATION";
		break;
	case 0x00805D:
		cid = "CANSTAR";
		break;
	case 0x008094:
		cid = "ALFA LAVAL AUTOMATION AB";
		break;
	case 0x008047:
		cid = "IN-NET CORP.";
		break;
	case 0x008064:
		cid = "WYSE TECHNOLOGY LLC";
		break;
	case 0x0080C5:
		cid = "NOVELLCO DE MEXICO";
		break;
	case 0x0080AC:
		cid = "IMLOGIX, DIVISION OF GENESYS";
		break;
	case 0x000052:
		cid = "Intrusion.com, Inc.";
		break;
	case 0x0000BD:
		cid = "MITSUBISHI CABLE COMPANY";
		break;
	case 0x000037:
		cid = "OXFORD METRICS LIMITED";
		break;
	case 0x00003F:
		cid = "SYNTREX, INC.";
		break;
	case 0x08007C:
		cid = "VITALINK COMMUNICATIONS CORP.";
		break;
	case 0x080076:
		cid = "PC LAN TECHNOLOGIES";
		break;
	case 0x080072:
		cid = "XEROX CORP UNIV GRANT PROGRAM";
		break;
	case 0x080068:
		cid = "RIDGE COMPUTERS";
		break;
	case 0x080062:
		cid = "General Dynamics";
		break;
	case 0x080057:
		cid = "Evans & Sutherland";
		break;
	case 0x000010:
		cid = "SYTEK INC.";
		break;
	case 0x000033:
		cid = "EGAN MACHINERY COMPANY";
		break;
	case 0x000080:
		cid = "CRAY COMMUNICATIONS A/S";
		break;
	case 0x0000FD:
		cid = "HIGH LEVEL HARDWARE";
		break;
	case 0x08008C:
		cid = "NETWORK RESEARCH CORPORATION";
		break;
	case 0x080089:
		cid = "Kinetics";
		break;
	case 0x080084:
		cid = "TOMEN ELECTRONICS CORP.";
		break;
	case 0x00000D:
		cid = "FIBRONICS LTD.";
		break;
	case 0x00004F:
		cid = "LOGICRAFT, INC.";
		break;
	case 0x000015:
		cid = "DATAPOINT CORPORATION";
		break;
	case 0x0000C7:
		cid = "ARIX CORPORATION";
		break;
	case 0x00001C:
		cid = "BELL TECHNOLOGIES";
		break;
	case 0x00001A:
		cid = "ADVANCED MICRO DEVICES";
		break;
	case 0x000082:
		cid = "LECTRA SYSTEMES SA";
		break;
	case 0x0000DA:
		cid = "ATEX";
		break;
	case 0x0000DB:
		cid = "British Telecommunications plc";
		break;
	case 0x0000C1:
		cid = "Madge Ltd.";
		break;
	case 0x0000F6:
		cid = "APPLIED MICROSYSTEMS CORP.";
		break;
	case 0x080023:
		cid = "Panasonic Communications Co., Ltd.";
		break;
	case 0x080022:
		cid = "NBI INC.";
		break;
	case 0x080019:
		cid = "GENERAL ELECTRIC CORPORATION";
		break;
	case 0x08004D:
		cid = "CORVUS SYSTEMS INC.";
		break;
	case 0x08003E:
		cid = "CODEX CORPORATION";
		break;
	case 0x080033:
		cid = "BAUSCH & LOMB";
		break;
	case 0x08002F:
		cid = "PRIME COMPUTER INC.";
		break;
	case 0x080032:
		cid = "TIGAN INCORPORATED";
		break;
	case 0x08002E:
		cid = "METAPHOR COMPUTER SYSTEMS";
		break;
	case 0x0000D2:
		cid = "SBE, INC.";
		break;
	case 0x00006B:
		cid = "SILICON GRAPHICS INC./MIPS";
		break;
	case 0x0000CC:
		cid = "DENSAN CO., LTD.";
		break;
	case 0x0000CE:
		cid = "MEGADATA CORP.";
		break;
	case 0x0000EF:
		cid = "KTI";
		break;
	case 0x00000F:
		cid = "NEXT, INC.";
		break;
	case 0x0000C6:
		cid = "EON SYSTEMS";
		break;
	case 0x0000D5:
		cid = "MICROGNOSIS INTERNATIONAL";
		break;
	case 0x000078:
		cid = "LABTAM LIMITED";
		break;
	case 0x0000EB:
		cid = "MATSUSHITA COMM. IND. CO. LTD.";
		break;
	case 0x00009C:
		cid = "ROLM MIL-SPEC COMPUTERS";
		break;
	case 0x000032:
		cid = "Marconi plc";
		break;
	case 0x000069:
		cid = "CONCORD COMMUNICATIONS INC";
		break;
	case 0x00008B:
		cid = "INFOTRON";
		break;
	case 0x0000BE:
		cid = "THE NTI GROUP";
		break;
	case 0x00004C:
		cid = "NEC CORPORATION";
		break;
	case 0x00003B:
		cid = "i Controls, Inc.";
		break;
	case 0x080013:
		cid = "Exxon";
		break;
	case 0x02BB01:
		cid = "OCTOTHORPE CORP.";
		break;
	case 0x0000A6:
		cid = "NETWORK GENERAL CORPORATION";
		break;
	case 0x00DD06:
		cid = "UNGERMANN-BASS INC.";
		break;
	case 0x00DD0B:
		cid = "UNGERMANN-BASS INC.";
		break;
	case 0x000007:
		cid = "XEROX CORPORATION";
		break;
	case 0x080014:
		cid = "EXCELAN";
		break;
	case 0x08000F:
		cid = "MITEL CORPORATION";
		break;
	case 0x0000D7:
		cid = "DARTMOUTH COLLEGE";
		break;
	case 0x00DD00:
		cid = "UNGERMANN-BASS INC.";
		break;
	case 0x08000A:
		cid = "NESTAR SYSTEMS INCORPORATED";
		break;
	case 0x08001C:
		cid = "KDD-KOKUSAI DEBNSIN DENWA CO.";
		break;
	case 0x02AA3C:
		cid = "OLIVETTI TELECOMM SPA (OLTECO)";
		break;
	case 0x08001D:
		cid = "ABLE COMMUNICATIONS INC.";
		break;
	case 0x080018:
		cid = "PIRELLI FOCOM NETWORKS";
		break;
	case 0x080015:
		cid = "STC BUSINESS SYSTEMS";
		break;
	case 0x00DD03:
		cid = "UNGERMANN-BASS INC.";
		break;
	case 0x00801F:
		cid = "KRUPP ATLAS ELECTRONIK GMBH";
		break;
	case 0x00408E:
		cid = "Tattile SRL";
		break;
	case 0x00800F:
		cid = "STANDARD MICROSYSTEMS";
		break;
	case 0x080065:
		cid = "GENRAD INC.";
		break;
	case 0x002275:
		cid = "Belkin International Inc.";
		break;
	case 0x149182:
		cid = "Belkin International Inc.";
		break;
	case 0x70106F:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0x988B5D:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x94FEF4:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xC8CD72:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xE8BE81:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xC4282D:
		cid = "Embedded Intellect Pty Ltd";
		break;
	case 0x002348:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x3829DD:
		cid = "ONvocal Inc";
		break;
	case 0xF81897:
		cid = "2Wire Inc";
		break;
	case 0xECF4BB:
		cid = "Dell Inc.";
		break;
	case 0xD067E5:
		cid = "Dell Inc.";
		break;
	case 0x18A99B:
		cid = "Dell Inc.";
		break;
	case 0xF8DB88:
		cid = "Dell Inc.";
		break;
	case 0x18FB7B:
		cid = "Dell Inc.";
		break;
	case 0x001495:
		cid = "2Wire Inc";
		break;
	case 0x74E6E2:
		cid = "Dell Inc.";
		break;
	case 0x109836:
		cid = "Dell Inc.";
		break;
	case 0x44A842:
		cid = "Dell Inc.";
		break;
	case 0x34E6D7:
		cid = "Dell Inc.";
		break;
	case 0x000BDB:
		cid = "Dell Inc.";
		break;
	case 0x001143:
		cid = "Dell Inc.";
		break;
	case 0x00188B:
		cid = "Dell Inc.";
		break;
	case 0xD4BED9:
		cid = "Dell Inc.";
		break;
	case 0x002650:
		cid = "2Wire Inc";
		break;
	case 0x00217C:
		cid = "2Wire Inc";
		break;
	case 0x001FB3:
		cid = "2Wire Inc";
		break;
	case 0x640F28:
		cid = "2Wire Inc";
		break;
	case 0x001AA0:
		cid = "Dell Inc.";
		break;
	case 0x002170:
		cid = "Dell Inc.";
		break;
	case 0x0026B9:
		cid = "Dell Inc.";
		break;
	case 0xA4BADB:
		cid = "Dell Inc.";
		break;
	case 0x001E4F:
		cid = "Dell Inc.";
		break;
	case 0x5CF9DD:
		cid = "Dell Inc.";
		break;
	case 0x907AF1:
		cid = "Wally";
		break;
	case 0x28101B:
		cid = "MagnaCom";
		break;
	case 0x00065B:
		cid = "Dell Inc.";
		break;
	case 0x448723:
		cid = "HOYA SERVICE CORPORATION";
		break;
	case 0x806C1B:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0xA470D6:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x001B21:
		cid = "Intel Corporate";
		break;
	case 0x001B77:
		cid = "Intel Corporate";
		break;
	case 0x18FF0F:
		cid = "Intel Corporate";
		break;
	case 0x58A839:
		cid = "Intel Corporate";
		break;
	case 0xA434D9:
		cid = "Intel Corporate";
		break;
	case 0x00215D:
		cid = "Intel Corporate";
		break;
	case 0x001676:
		cid = "Intel Corporate";
		break;
	case 0x984FEE:
		cid = "Intel Corporate";
		break;
	case 0xE82AEA:
		cid = "Intel Corporate";
		break;
	case 0x605718:
		cid = "Intel Corporate";
		break;
	case 0xC4D987:
		cid = "Intel Corporate";
		break;
	case 0xB4B676:
		cid = "Intel Corporate";
		break;
	case 0x8C705A:
		cid = "Intel Corporate";
		break;
	case 0x9C4E36:
		cid = "Intel Corporate";
		break;
	case 0x541473:
		cid = " Wingtech Group (HongKong）Limited";
		break;
	case 0x001C50:
		cid = "TCL Technoly Electronics (Huizhou) Co., Ltd.";
		break;
	case 0x00AA01:
		cid = "Intel Corporation";
		break;
	case 0x5C36B8:
		cid = "TCL King Electrical Appliances (Huizhou) Co., Ltd";
		break;
	case 0x009027:
		cid = "Intel Corporation";
		break;
	case 0xA08869:
		cid = "Intel Corporate";
		break;
	case 0x00C2C6:
		cid = "Intel Corporate";
		break;
	case 0xB88A60:
		cid = "Intel Corporate";
		break;
	case 0x00A0C9:
		cid = "Intel Corporation";
		break;
	case 0x7C7A91:
		cid = "Intel Corporate";
		break;
	case 0xAC7BA1:
		cid = "Intel Corporate";
		break;
	case 0xAC7289:
		cid = "Intel Corporate";
		break;
	case 0x606C66:
		cid = "Intel Corporate";
		break;
	case 0x4C8093:
		cid = "Intel Corporate";
		break;
	case 0xBC7737:
		cid = "Intel Corporate";
		break;
	case 0xA088B4:
		cid = "Intel Corporate";
		break;
	case 0x00270E:
		cid = "Intel Corporate";
		break;
	case 0x001DE0:
		cid = "Intel Corporate";
		break;
	case 0x0024D6:
		cid = "Intel Corporate";
		break;
	case 0xD8FC93:
		cid = "Intel Corporate";
		break;
	case 0xE8B1FC:
		cid = "Intel Corporate";
		break;
	case 0x186472:
		cid = "Aruba Networks";
		break;
	case 0x00246C:
		cid = "Aruba Networks";
		break;
	case 0x64D954:
		cid = "Taicang T&W Electronics";
		break;
	case 0x74C63B:
		cid = "AzureWave Technology Inc.";
		break;
	case 0xCC1FC4:
		cid = "InVue";
		break;
	case 0xA0D37A:
		cid = "Intel Corporate";
		break;
	case 0x985FD3:
		cid = "Microsoft Corporation";
		break;
	case 0x00D0AC:
		cid = "Commscope, Inc";
		break;
	case 0x0025D3:
		cid = "AzureWave Technology Inc.";
		break;
	case 0x742F68:
		cid = "AzureWave Technology Inc.";
		break;
	case 0xDC85DE:
		cid = "AzureWave Technology Inc.";
		break;
	case 0xE0B9A5:
		cid = "AzureWave Technology Inc.";
		break;
	case 0xE04136:
		cid = "MitraStar Technology Corp.";
		break;
	case 0xE0B2F1:
		cid = "FN-LINK TECHNOLOGY LIMITED";
		break;
	case 0x0026FC:
		cid = "AcSiP Technology Corp.";
		break;
	case 0xB8616F:
		cid = "Accton Technology Corp";
		break;
	case 0x0010B5:
		cid = "Accton Technology Corp";
		break;
	case 0x00A02F:
		cid = "ADB Broadband Italia";
		break;
	case 0x6487D7:
		cid = "ADB Broadband Italia";
		break;
	case 0x00E098:
		cid = "AboCom";
		break;
	case 0x0000B1:
		cid = "Alpha Micro";
		break;
	case 0x001577:
		cid = "Allied Telesis, Inc.";
		break;
	case 0xACE010:
		cid = "Liteon Technology Corporation";
		break;
	case 0xEC086B:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xB00594:
		cid = "Liteon Technology Corporation";
		break;
	case 0x40F02F:
		cid = "Liteon Technology Corporation";
		break;
	case 0xE8617E:
		cid = "Liteon Technology Corporation";
		break;
	case 0x28E347:
		cid = "Liteon Technology Corporation";
		break;
	case 0x18CF5E:
		cid = "Liteon Technology Corporation";
		break;
	case 0xD0DF9A:
		cid = "Liteon Technology Corporation";
		break;
	case 0x0013A9:
		cid = "Sony Corporation";
		break;
	case 0x002163:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0xE839DF:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0x00138F:
		cid = "Asiarock Technology Limited";
		break;
	case 0x1C69A5:
		cid = "BlackBerry RTS";
		break;
	case 0x003067:
		cid = "BIOSTAR Microtech Int'l Corp.";
		break;
	case 0x246511:
		cid = "AVM GmbH";
		break;
	case 0x002308:
		cid = "Arcadyan Technology Corporation";
		break;
	case 0x880355:
		cid = "Arcadyan Technology Corporation";
		break;
	case 0x5CDC96:
		cid = "Arcadyan Technology Corporation";
		break;
	case 0xD0D04B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x001D00:
		cid = "Brivo Systems, LLC";
		break;
	case 0x0010E7:
		cid = "Breezecom, Ltd.";
		break;
	case 0x5C9656:
		cid = "AzureWave Technology Inc.";
		break;
	case 0x7C4CA5:
		cid = "BSkyB Ltd";
		break;
	case 0x902106:
		cid = "BSkyB Ltd";
		break;
	case 0xA4C7DE:
		cid = "Cambridge Industries(Group) Co.,Ltd.";
		break;
	case 0x343759:
		cid = "zte corporation";
		break;
	case 0x00402A:
		cid = "Canoga Perkins Corporation";
		break;
	case 0x382DE8:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD087E2:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x205531:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x5440AD:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x842E27:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x50F0D3:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x84119E:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x08ECA9:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x10D38A:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x382DD1:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE0CBEE:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x64B853:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xF4428F:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x188331:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x8455A5:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xA87C01:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xC01173:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xBCE63F:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xB857D8:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x94B10A:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE458B8:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x088C2C:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xB86CE8:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x9C65B0:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xC8A823:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xC44202:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD059E4:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x64B310:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x001D20:
		cid = "Comtrend Corporation";
		break;
	case 0x140C76:
		cid = "FREEBOX SAS";
		break;
	case 0x0024D4:
		cid = "FREEBOX SAS";
		break;
	case 0xA089E4:
		cid = "Skyworth Digital Technology(Shenzhen) Co.,Ltd";
		break;
	case 0x001A9A:
		cid = "Skyworth Digital Technology(Shenzhen) Co.,Ltd";
		break;
	case 0xAC3A7A:
		cid = "Roku, Inc.";
		break;
	case 0xCC6DA0:
		cid = "Roku, Inc.";
		break;
	case 0x000D4B:
		cid = "Roku, Inc.";
		break;
	case 0x001999:
		cid = "Fujitsu Technology Solutions GmbH";
		break;
	case 0x0009E1:
		cid = "Gemtek Technology Co., Ltd.";
		break;
	case 0xC477AB:
		cid = "Beijing ASU Tech Co.,Ltd";
		break;
	case 0x182A7B:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x0024F3:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0xA45C27:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x001DBC:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x001F32:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0xD8FB5E:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0x544408:
		cid = "Nokia Corporation";
		break;
	case 0x0017B0:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001BEE:
		cid = "Nokia Danmark A/S";
		break;
	case 0x1886AC:
		cid = "Nokia Danmark A/S";
		break;
	case 0x0021FE:
		cid = "Nokia Danmark A/S";
		break;
	case 0x002266:
		cid = "Nokia Danmark A/S";
		break;
	case 0xDCB3B4:
		cid = "Honeywell Environmental & Combustion Controls (Tianjin) Co., Ltd.";
		break;
	case 0xC8D10B:
		cid = "Nokia Corporation";
		break;
	case 0xC8979F:
		cid = "Nokia Corporation";
		break;
	case 0xF4F5A5:
		cid = "Nokia Corporation";
		break;
	case 0x3CC243:
		cid = "Nokia Corporation";
		break;
	case 0x0015A0:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001A16:
		cid = "Nokia Danmark A/S";
		break;
	case 0x0022FC:
		cid = "Nokia Danmark A/S";
		break;
	case 0x002548:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001DFD:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001EA3:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001D98:
		cid = "Nokia Danmark A/S";
		break;
	case 0x00119F:
		cid = "Nokia Danmark A/S";
		break;
	case 0x18A6F7:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x246968:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x8CA2FD:
		cid = "Starry, Inc.";
		break;
	case 0x90A62F:
		cid = "NAVER";
		break;
	case 0xF4ED5F:
		cid = "SHENZHEN KTC TECHNOLOGY GROUP";
		break;
	case 0x9476B7:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x8C1ABF:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xB47443:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x000BA2:
		cid = "Sumitomo Electric Industries,Ltd";
		break;
	case 0x30CBF8:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x40D357:
		cid = "Ison Technology Co., Ltd.";
		break;
	case 0x00351A:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00A0B8:
		cid = "NetApp";
		break;
	case 0x9CD48B:
		cid = "Innolux Technology Europe BV";
		break;
	case 0x545AA6:
		cid = "Espressif Inc.";
		break;
	case 0xDCE838:
		cid = "CK Telecom (Shenzhen) Limited";
		break;
	case 0x00CCFC:
		cid = "Cisco Systems, Inc";
		break;
	case 0x2C9662:
		cid = "Invenit BV";
		break;
	case 0xDC2DCB:
		cid = "Beijing Unis HengYue Technology Co., Ltd.";
		break;
	case 0x3810D5:
		cid = "AVM Audiovisuelles Marketing und Computersysteme GmbH";
		break;
	case 0x1C5F2B:
		cid = "D-Link International";
		break;
	case 0xD8803C:
		cid = "Anhui Huami Information Technology Company Limited";
		break;
	case 0x703C03:
		cid = "RadiAnt Co.,Ltd";
		break;
	case 0x583277:
		cid = "Reliance Communications LLC";
		break;
	case 0xCCD3E2:
		cid = "Jiangsu Yinhe  Electronics Co.,Ltd.";
		break;
	case 0x182195:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xA88195:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x88ADD2:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x008E73:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB805AB:
		cid = "zte corporation";
		break;
	case 0x9C52F8:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x900325:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xDC094C:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xDCEE06:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xAC44F2:
		cid = "YAMAHA CORPORATION";
		break;
	case 0x508965:
		cid = "SHENZHEN MERCURY COMMUNICATION TECHNOLOGIES CO.,LTD.";
		break;
	case 0x808C97:
		cid = "Kaonmedia CO., LTD.";
		break;
	case 0x30B49E:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x349971:
		cid = "Quanta Storage Inc.";
		break;
	case 0x24615A:
		cid = "China Mobile Group Device Co.,Ltd.";
		break;
	case 0xA0043E:
		cid = "Parker Hannifin Manufacturing Germany GmbH & Co. KG";
		break;
	case 0x5CC7D7:
		cid = "AZROAD TECHNOLOGY COMPANY LIMITED";
		break;
	case 0x001706:
		cid = "Techfaithwireless Communication Technology Limited.";
		break;
	case 0x30F6B9:
		cid = "Ecocentric Energy";
		break;
	case 0x004268:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00BD82:
		cid = "Shenzhen YOUHUA Technology Co., Ltd";
		break;
	case 0x603ECA:
		cid = "Cambridge Medical Robotics Ltd";
		break;
	case 0x54489C:
		cid = "CDOUBLES ELECTRONICS CO. LTD.";
		break;
	case 0x54BEF7:
		cid = "PEGATRON CORPORATION";
		break;
	case 0x0C54A5:
		cid = "PEGATRON CORPORATION";
		break;
	case 0x202564:
		cid = "PEGATRON CORPORATION";
		break;
	case 0x600292:
		cid = "PEGATRON CORPORATION";
		break;
	case 0x84002D:
		cid = "PEGATRON CORPORATION";
		break;
	case 0x8019FE:
		cid = "JianLing Technology CO., LTD";
		break;
	case 0x58605F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x001188:
		cid = "Enterasys";
		break;
	case 0x1078D2:
		cid = "Elitegroup Computer Systems Co.,Ltd.";
		break;
	case 0x001E90:
		cid = "Elitegroup Computer Systems Co.,Ltd.";
		break;
	case 0x002465:
		cid = "Elentec";
		break;
	case 0x001CD7:
		cid = "Harman/Becker Automotive Systems GmbH";
		break;
	case 0x0016EC:
		cid = "Elitegroup Computer Systems Co.,Ltd.";
		break;
	case 0x000D87:
		cid = "Elitegroup Computer Systems Co.,Ltd.";
		break;
	case 0x000AE6:
		cid = "Elitegroup Computer Systems Co.,Ltd.";
		break;
	case 0x945089:
		cid = "SimonsVoss Technologies GmbH";
		break;
	case 0x0016FA:
		cid = "ECI Telecom Ltd.";
		break;
	case 0x003A7D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x844076:
		cid = "Drivenets";
		break;
	case 0x0010E0:
		cid = "Oracle Corporation";
		break;
	case 0x00144F:
		cid = "Oracle Corporation";
		break;
	case 0xE80959:
		cid = "Guoguang Electric Co.,Ltd";
		break;
	case 0x0090AE:
		cid = "ITALTEL S.p.A/RF-UP-I";
		break;
	case 0x001A29:
		cid = "Johnson Outdoors Marine Electronics d/b/a Minnkota";
		break;
	case 0x001F09:
		cid = "Jastec";
		break;
	case 0xD0A4B1:
		cid = "Sonifex Ltd.";
		break;
	case 0x001DB5:
		cid = "Juniper Networks";
		break;
	case 0x00239C:
		cid = "Juniper Networks";
		break;
	case 0x80711F:
		cid = "Juniper Networks";
		break;
	case 0x28C0DA:
		cid = "Juniper Networks";
		break;
	case 0xBCAD28:
		cid = "Hangzhou Hikvision Digital Technology Co.,Ltd.";
		break;
	case 0x28F366:
		cid = "Shenzhen Bilian electronic CO.,LTD";
		break;
	case 0x8828B3:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xC4F081:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x801382:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x648788:
		cid = "Juniper Networks";
		break;
	case 0xA8D0E5:
		cid = "Juniper Networks";
		break;
	case 0x0881F4:
		cid = "Juniper Networks";
		break;
	case 0x6C3B6B:
		cid = "Routerboard.com";
		break;
	case 0x7C738B:
		cid = "Cocoon Alarm Ltd";
		break;
	case 0x000FE2:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x002389:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x3822D6:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x80F62E:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x5866BA:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x0CDA41:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x586AB1:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x741F4A:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x3CCB7C:
		cid = "TCT mobile ltd";
		break;
	case 0xF03404:
		cid = "TCT mobile ltd";
		break;
	case 0xD8E56D:
		cid = "TCT mobile ltd";
		break;
	case 0x442C05:
		cid = "AMPAK Technology, Inc.";
		break;
	case 0x10BEF5:
		cid = "D-Link International";
		break;
	case 0x7C6AF3:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0xC41CFF:
		cid = "Vizio, Inc";
		break;
	case 0x444450:
		cid = "OttoQ";
		break;
	case 0xFC55DC:
		cid = "Baltic Latvian Universal Electronics LLC";
		break;
	case 0x941882:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0x000EB6:
		cid = "Riverbed Technology, Inc.";
		break;
	case 0xD0FCCC:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x045604:
		cid = "Gionee Communication Equipment Co.,Ltd.";
		break;
	case 0x10BD55:
		cid = "Q-Lab Corporation";
		break;
	case 0x8C6D50:
		cid = "SHENZHEN MTC CO LTD";
		break;
	case 0x3C6816:
		cid = "VXi Corporation";
		break;
	case 0xC0A1A2:
		cid = "MarqMetrix";
		break;
	case 0x00F663:
		cid = "Cisco Systems, Inc";
		break;
	case 0x341290:
		cid = "Treeview Co.,Ltd.";
		break;
	case 0xF40A4A:
		cid = "INDUSNET Communication Technology Co.,LTD";
		break;
	case 0xC0C976:
		cid = "Shenzhen TINNO Mobile Technology Corp.";
		break;
	case 0x14C913:
		cid = "LG Electronics";
		break;
	case 0x680715:
		cid = "Intel Corporate";
		break;
	case 0xA09E1A:
		cid = "Polar Electro Oy";
		break;
	case 0xD84A87:
		cid = "OI ELECTRIC CO.,LTD";
		break;
	case 0xBC307D:
		cid = "Wistron Neweb Corporation";
		break;
	case 0x5410EC:
		cid = "Microchip Technology Inc.";
		break;
	case 0x309BAD:
		cid = "BBK EDUCATIONAL ELECTRONICS CORP.,LTD.";
		break;
	case 0x001BB1:
		cid = "Wistron Neweb Corporation";
		break;
	case 0x000B6B:
		cid = "Wistron Neweb Corporation";
		break;
	case 0xAC9B0A:
		cid = "Sony Corporation";
		break;
	case 0x4813F3:
		cid = "BBK EDUCATIONAL ELECTRONICS CORP.,LTD.";
		break;
	case 0x74B472:
		cid = "CIESSE";
		break;
	case 0x483C0C:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x4C6641:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0xC8755B:
		cid = "Quantify Technology Pty. Ltd.";
		break;
	case 0x1C57D8:
		cid = "Kraftway Corporation PLC";
		break;
	case 0x002397:
		cid = "Westell Technologies Inc.";
		break;
	case 0x00600F:
		cid = "Westell Technologies Inc.";
		break;
	case 0x00E0DD:
		cid = "Zenith Electronics Corporation";
		break;
	case 0x50CE75:
		cid = "Measy Electronics Co., Ltd.";
		break;
	case 0x047D7B:
		cid = "QUANTA COMPUTER INC.";
		break;
	case 0x88124E:
		cid = "Qualcomm Inc.";
		break;
	case 0x649C81:
		cid = "Qualcomm Inc.";
		break;
	case 0x001B32:
		cid = "QLogic Corporation";
		break;
	case 0x001E21:
		cid = "Qisda Corporation";
		break;
	case 0x0017CA:
		cid = "Qisda Corporation";
		break;
	case 0x0014D1:
		cid = "TRENDnet, Inc.";
		break;
	case 0x001C7E:
		cid = "Toshiba";
		break;
	case 0x001C14:
		cid = "VMware, Inc.";
		break;
	case 0x90A210:
		cid = "United Telecoms Ltd";
		break;
	case 0xE02A82:
		cid = "Universal Global Scientific Industrial Co., Ltd.";
		break;
	case 0x001641:
		cid = "Universal Global Scientific Industrial Co., Ltd.";
		break;
	case 0x4C334E:
		cid = "HIGHTECH";
		break;
	case 0x001315:
		cid = "Sony Interactive Entertainment Inc.";
		break;
	case 0x001FA7:
		cid = "Sony Interactive Entertainment Inc.";
		break;
	case 0xA8E3EE:
		cid = "Sony Interactive Entertainment Inc.";
		break;
	case 0x709E29:
		cid = "Sony Interactive Entertainment Inc.";
		break;
	case 0xFC0FE6:
		cid = "Sony Interactive Entertainment Inc.";
		break;
	case 0x0050C2:
		cid = "IEEE Registration Authority";
		break;
	case 0xCC79CF:
		cid = "SHENZHEN RF-LINK TECHNOLOGY CO.,LTD.";
		break;
	case 0x141FBA:
		cid = "IEEE Registration Authority";
		break;
	case 0x800A80:
		cid = "IEEE Registration Authority";
		break;
	case 0xA44F29:
		cid = "IEEE Registration Authority";
		break;
	case 0x5CF286:
		cid = "IEEE Registration Authority";
		break;
	case 0x64FB81:
		cid = "IEEE Registration Authority";
		break;
	case 0xE4956E:
		cid = "IEEE Registration Authority";
		break;
	case 0xC88ED1:
		cid = "IEEE Registration Authority";
		break;
	case 0x78C2C0:
		cid = "IEEE Registration Authority";
		break;
	case 0x885D90:
		cid = "IEEE Registration Authority";
		break;
	case 0x3C39E7:
		cid = "IEEE Registration Authority";
		break;
	case 0xA0BB3E:
		cid = "IEEE Registration Authority";
		break;
	case 0x6CB9C5:
		cid = "Delta Networks, Inc.";
		break;
	case 0x7CFC3C:
		cid = "Visteon Corporation";
		break;
	case 0x58BC8F:
		cid = "Cognitive Systems Corp.";
		break;
	case 0x54DC1D:
		cid = "Yulong Computer Telecommunication Scientific (Shenzhen) Co.,Ltd";
		break;
	case 0x3CBDD8:
		cid = "LG ELECTRONICS INC";
		break;
	case 0x4888CA:
		cid = "Motorola (Wuhan) Mobility Technologies Communication Co., Ltd.";
		break;
	case 0x74B57E:
		cid = "zte corporation";
		break;
	case 0x540955:
		cid = "zte corporation";
		break;
	case 0x88A6C6:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x000F59:
		cid = "Phonak AG";
		break;
	case 0x000EF4:
		cid = "Kasda Networks Inc";
		break;
	case 0x000AEB:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x2C3731:
		cid = "SHENZHEN YIFANG DIGITAL TECHNOLOGY CO.,LTD.";
		break;
	case 0x001FBA:
		cid = "Boyoung Tech";
		break;
	case 0xC4047B:
		cid = "Shenzhen YOUHUA Technology Co., Ltd";
		break;
	case 0xA42940:
		cid = "Shenzhen YOUHUA Technology Co., Ltd";
		break;
	case 0x3C3300:
		cid = "Shenzhen Bilian electronic CO.,LTD";
		break;
	case 0x20F41B:
		cid = "Shenzhen Bilian electronic CO.,LTD";
		break;
	case 0x3092F6:
		cid = "SHANGHAI SUNMON COMMUNICATION TECHNOGY CO.,LTD";
		break;
	case 0x7C2064:
		cid = "Alcatel-Lucent IPD";
		break;
	case 0xE4A1E6:
		cid = "Alcatel-Lucent Shanghai Bell Co., Ltd";
		break;
	case 0x000B34:
		cid = "ShangHai Broadband Technologies CO.LTD";
		break;
	case 0x38256B:
		cid = "Microsoft Mobile Oy";
		break;
	case 0x203AEF:
		cid = "Sivantos GmbH";
		break;
	case 0x001E40:
		cid = "Shanghai DareGlobal Technologies Co.,Ltd";
		break;
	case 0x80A1D7:
		cid = "Shanghai DareGlobal Technologies Co.,Ltd";
		break;
	case 0xD8FB68:
		cid = "Cloud Corner Ltd.";
		break;
	case 0xC09134:
		cid = "ProCurve Networking by HP";
		break;
	case 0x4CB21C:
		cid = "Maxphotonics Co.,Ltd";
		break;
	case 0xD8C46A:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x849866:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x002162:
		cid = "Nortel Networks";
		break;
	case 0x000F06:
		cid = "Nortel Networks";
		break;
	case 0x000342:
		cid = "Nortel Networks";
		break;
	case 0x00159B:
		cid = "Nortel Networks";
		break;
	case 0x00140E:
		cid = "Nortel Networks";
		break;
	case 0x0016CA:
		cid = "Nortel Networks";
		break;
	case 0x001969:
		cid = "Nortel Networks";
		break;
	case 0x0019E1:
		cid = "Nortel Networks";
		break;
	case 0x001A8F:
		cid = "Nortel Networks";
		break;
	case 0xE89309:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x001988:
		cid = "Wi2Wi, Inc";
		break;
	case 0x4CFACA:
		cid = "Cambridge Industries(Group) Co.,Ltd.";
		break;
	case 0x2C9D1E:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xC88D83:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x080087:
		cid = "Xyplex, Inc.";
		break;
	case 0x00B0B3:
		cid = "XSTREAMIS PLC";
		break;
	case 0x14825B:
		cid = "Hefei Radio Communication Technology Co., Ltd";
		break;
	case 0x00562B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x24F57E:
		cid = "HWH CO., LTD.";
		break;
	case 0x943DC9:
		cid = "Asahi Net, Inc.";
		break;
	case 0x080028:
		cid = "Texas Instruments";
		break;
	case 0x0012D2:
		cid = "Texas Instruments";
		break;
	case 0xD494A1:
		cid = "Texas Instruments";
		break;
	case 0x78C5E5:
		cid = "Texas Instruments";
		break;
	case 0x847E40:
		cid = "Texas Instruments";
		break;
	case 0x001832:
		cid = "Texas Instruments";
		break;
	case 0x90D7EB:
		cid = "Texas Instruments";
		break;
	case 0xBC0DA5:
		cid = "Texas Instruments";
		break;
	case 0x7C8EE4:
		cid = "Texas Instruments";
		break;
	case 0xD8543A:
		cid = "Texas Instruments";
		break;
	case 0x884AEA:
		cid = "Texas Instruments";
		break;
	case 0xB09122:
		cid = "Texas Instruments";
		break;
	case 0x209148:
		cid = "Texas Instruments";
		break;
	case 0xA0F6FD:
		cid = "Texas Instruments";
		break;
	case 0xD4F513:
		cid = "Texas Instruments";
		break;
	case 0x0017EC:
		cid = "Texas Instruments";
		break;
	case 0x0017E5:
		cid = "Texas Instruments";
		break;
	case 0xC83E99:
		cid = "Texas Instruments";
		break;
	case 0x8C8B83:
		cid = "Texas Instruments";
		break;
	case 0xD0B5C2:
		cid = "Texas Instruments";
		break;
	case 0x84EB18:
		cid = "Texas Instruments";
		break;
	case 0x6CECEB:
		cid = "Texas Instruments";
		break;
	case 0x985DAD:
		cid = "Texas Instruments";
		break;
	case 0xE8EB11:
		cid = "Texas Instruments";
		break;
	case 0xD43639:
		cid = "Texas Instruments";
		break;
	case 0xA043DB:
		cid = "Sitael S.p.A.";
		break;
	case 0xE4BEED:
		cid = "Netcore Technology Inc.";
		break;
	case 0x84EF18:
		cid = "Intel Corporate";
		break;
	case 0x84C1C1:
		cid = "Juniper Networks";
		break;
	case 0xA8A648:
		cid = "Qingdao Hisense Communications Co.,Ltd.";
		break;
	case 0x305890:
		cid = "Frontier Silicon Ltd";
		break;
	case 0x002261:
		cid = "Frontier Silicon Ltd";
		break;
	case 0x049F81:
		cid = "NetScout Systems, Inc.";
		break;
	case 0x00808C:
		cid = "NetScout Systems, Inc.";
		break;
	case 0xC4F5A5:
		cid = "Kumalift Co., Ltd.";
		break;
	case 0x98F058:
		cid = "Lynxspring, Incl.";
		break;
	case 0x24E43F:
		cid = "Wenzhou Kunmei Communication Technology Co.,Ltd.";
		break;
	case 0x240AC4:
		cid = "Espressif Inc.";
		break;
	case 0xE4C1F1:
		cid = "SHENZHEN SPOTMAU INFORMATION TECHNOLIGY CO., Ltd ";
		break;
	case 0x240DC2:
		cid = "TCT mobile ltd";
		break;
	case 0x14DDE5:
		cid = "MPMKVVCL";
		break;
	case 0x0016DB:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x5C3C27:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x10D542:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xA0821F:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xC45006:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x88329B:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0xBC8CCD:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0x400E85:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0xEC9BF3:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0xF8042E:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0x843838:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0x54880E:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0xBC79AD:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x30D6C9:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xB0DF3A:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x805719:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x78A873:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x041BBA:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x08FD0E:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x08D42B:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x00E3B2:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xC81479:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xF0728C:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x94350A:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x001FCD:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD0DFC7:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x1C62B8:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x18E2C2:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xF04347:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x9CB2B2:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x84BE52:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x001A8A:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x002567:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xA8F274:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xB07870:
		cid = "Wi-NEXT, Inc.";
		break;
	case 0x001599:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x0012FB:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x7CF854:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x8CC8CD:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE81132:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xA02195:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x840B2D:
		cid = "SAMSUNG ELECTRO MECHANICS CO., LTD.";
		break;
	case 0x000278:
		cid = "SAMSUNG ELECTRO MECHANICS CO., LTD.";
		break;
	case 0xF07BCB:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x4C0F6E:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x5C6D20:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x90004E:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xC0F8DA:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x485AB6:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x083E8E:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xF4B7E2:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x4437E6:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x0016CF:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x001C25:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xC48E8F:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x184F32:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x441CA8:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xA8474A:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x08EDB9:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x7CE9D3:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xE4D53D:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xC417FE:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x38B1DB:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x00234D:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x00234E:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x00265E:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x541379:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x1008B1:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x701DC4:
		cid = "NorthStar Battery Company, LLC";
		break;
	case 0x801844:
		cid = "Dell Inc.";
		break;
	case 0xC80E14:
		cid = "AVM Audiovisuelles Marketing und Computersysteme GmbH";
		break;
	case 0xE0686D:
		cid = "Raybased AB";
		break;
	case 0x98B039:
		cid = "Nokia";
		break;
	case 0x84262B:
		cid = "Nokia";
		break;
	case 0x94E98C:
		cid = "Nokia";
		break;
	case 0xE48184:
		cid = "Nokia";
		break;
	case 0xBC8D0E:
		cid = "Nokia";
		break;
	case 0xB0754D:
		cid = "Nokia";
		break;
	case 0xBC6B4D:
		cid = "Nokia";
		break;
	case 0xA47B2C:
		cid = "Nokia";
		break;
	case 0x00D0F6:
		cid = "Nokia";
		break;
	case 0x48F8E1:
		cid = "Nokia";
		break;
	case 0x002341:
		cid = "Vanderbilt International (SWE) AB";
		break;
	case 0x981333:
		cid = "zte corporation";
		break;
	case 0x8C71F8:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x04180F:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x9463D1:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x0CDFA4:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xCC051B:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x68EBAE:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x60D0A9:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x60A10A:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xA07591:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD814D6:
		cid = "SURE SYSTEM Co Ltd";
		break;
	case 0x646184:
		cid = "VELUX";
		break;
	case 0x001FCC:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xEC01E2:
		cid = "FOXCONN INTERCONNECT TECHNOLOGY";
		break;
	case 0x00F22C:
		cid = "Shanghai B-star Technology Co.,Ltd.";
		break;
	case 0xD03DC3:
		cid = "AQ Corporation";
		break;
	case 0xFCCAC4:
		cid = "LifeHealth, LLC";
		break;
	case 0x04BA36:
		cid = "Li Seng Technology Ltd";
		break;
	case 0x4409B8:
		cid = "Salcomp (Shenzhen) CO., LTD.";
		break;
	case 0x78888A:
		cid = "CDR Sp. z o.o. Sp. k.";
		break;
	case 0xF09838:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x18DED7:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xEC107B:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xA01081:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x001EAE:
		cid = "Continental Automotive Systems Inc.";
		break;
	case 0x8048A5:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO.,LTD";
		break;
	case 0x645D92:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO.,LTD";
		break;
	case 0xD44165:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO.,LTD";
		break;
	case 0x643AB1:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO.,LTD";
		break;
	case 0xAC64DD:
		cid = "IEEE Registration Authority";
		break;
	case 0x00010D:
		cid = "Teledyne DALSA Inc.";
		break;
	case 0xF09FC2:
		cid = "Ubiquiti Networks Inc.";
		break;
	case 0x0418D6:
		cid = "Ubiquiti Networks Inc.";
		break;
	case 0x44D9E7:
		cid = "Ubiquiti Networks Inc.";
		break;
	case 0x48DA96:
		cid = "Eddy Smart Home Solutions Inc.";
		break;
	case 0x503AA0:
		cid = "SHENZHEN MERCURY COMMUNICATION TECHNOLOGIES CO.,LTD.";
		break;
	case 0xC025E9:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x50B363:
		cid = "Digitron da Amazonia S/A";
		break;
	case 0x94B819:
		cid = "Nokia";
		break;
	case 0xA4D9A4:
		cid = "neXus ID Solutions AB";
		break;
	case 0x484D7E:
		cid = "Dell Inc.";
		break;
	case 0xF4B549:
		cid = "Xiamen Yeastar Information Technology Co., Ltd.";
		break;
	case 0x28EED3:
		cid = "Shenzhen Super D Technology Co., Ltd";
		break;
	case 0x18F292:
		cid = "Shannon Systems";
		break;
	case 0x3C3F51:
		cid = "2CRSI";
		break;
	case 0xF4F524:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x50584F:
		cid = "waytotec,Inc.";
		break;
	case 0x00A2EE:
		cid = "Cisco Systems, Inc";
		break;
	case 0x98E476:
		cid = "Zentan";
		break;
	case 0x18F76B:
		cid = "Zhejiang Winsight Technology CO.,LTD";
		break;
	case 0x00609B:
		cid = "AstroNova, Inc";
		break;
	case 0xB87CF2:
		cid = "Aerohive Networks Inc.";
		break;
	case 0xC413E2:
		cid = "Aerohive Networks Inc.";
		break;
	case 0xF09CE9:
		cid = "Aerohive Networks Inc.";
		break;
	case 0xCCC5EF:
		cid = "Co-Comm Servicios Telecomunicaciones S.L.";
		break;
	case 0x5C6B4F:
		cid = "Hello Inc.";
		break;
	case 0xC09C04:
		cid = "Shaanxi GuoLian Digital TV Technology Co.,Ltd.";
		break;
	case 0xD0F73B:
		cid = "Helmut Mauell GmbH Werk Weida";
		break;
	case 0xD00AAB:
		cid = "Yokogawa Digital Computer Corporation";
		break;
	case 0xAC233F:
		cid = "Shenzhen Minew Technologies Co., Ltd.";
		break;
	case 0xE0508B:
		cid = "Zhejiang Dahua Technology Co., Ltd.";
		break;
	case 0x2C6FC9:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x9C99A0:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x185936:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x98FAE3:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x640980:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x8CBEBE:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0xF8A45F:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x508A0F:
		cid = "SHENZHEN FISE TECHNOLOGY HOLDING CO.,LTD.";
		break;
	case 0xE4B005:
		cid = "Beijing IQIYI Science & Technology Co., Ltd.";
		break;
	case 0xC83B45:
		cid = "JRI";
		break;
	case 0x1CEEC9:
		cid = "Elo touch solutions";
		break;
	case 0x4CB81C:
		cid = "SAM Electronics GmbH";
		break;
	case 0x2CDCAD:
		cid = "Wistron Neweb Corporation";
		break;
	case 0x704D7B:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x7CF95C:
		cid = "U.I. Lapp GmbH";
		break;
	case 0x743A65:
		cid = "NEC Corporation";
		break;
	case 0xC80CC8:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x0425C5:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xA4EE57:
		cid = "Seiko Epson Corporation";
		break;
	case 0x14B31F:
		cid = "Dell Inc.";
		break;
	case 0xBC8385:
		cid = "Microsoft Corporation";
		break;
	case 0xA03D6F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x40605A:
		cid = "Hawkeye Tech Co. Ltd";
		break;
	case 0xC0210D:
		cid = "SHENZHEN RF-LINK TECHNOLOGY CO.,LTD.";
		break;
	case 0x000678:
		cid = "D&M Holdings Inc.";
		break;
	case 0x886B44:
		cid = "Sunnovo International Limited";
		break;
	case 0xA408F5:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x54FA96:
		cid = "Nokia";
		break;
	case 0x1840A4:
		cid = "Shenzhen Trylong Smart Science and Technology Co., Ltd.";
		break;
	case 0x9C50EE:
		cid = "Cambridge Industries(Group) Co.,Ltd.";
		break;
	case 0xF015B9:
		cid = "PlayFusion Limited";
		break;
	case 0x24A7DC:
		cid = "BSkyB Ltd";
		break;
	case 0x2CD02D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x3478D7:
		cid = "Gionee Communication Equipment Co.,Ltd.";
		break;
	case 0x1CEFCE:
		cid = "bebro electronic GmbH";
		break;
	case 0xCCB8A8:
		cid = "AMPAK Technology, Inc.";
		break;
	case 0x5CFF35:
		cid = "Wistron Corporation";
		break;
	case 0x78F29E:
		cid = "PEGATRON CORPORATION";
		break;
	case 0x00D0B2:
		cid = "Xiotech Corporation";
		break;
	case 0x000AE4:
		cid = "Wistron Corporation";
		break;
	case 0x00262D:
		cid = "Wistron Corporation";
		break;
	case 0x908674:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO., LTD";
		break;
	case 0xF49651:
		cid = "NAKAYO Inc";
		break;
	case 0x681FD8:
		cid = "Siemens Industry, Inc.";
		break;
	case 0xC43018:
		cid = "MCS Logic Inc.";
		break;
	case 0xFCB58A:
		cid = "Wapice Ltd.";
		break;
	case 0xDCEFCA:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0xE865D4:
		cid = "Tenda Technology Co.,Ltd.Dongguan branch";
		break;
	case 0x285261:
		cid = "Cisco Systems, Inc";
		break;
	case 0x286F7F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x089E08:
		cid = "Google, Inc.";
		break;
	case 0x00014F:
		cid = "Adtran Inc";
		break;
	case 0x045D4B:
		cid = "Sony Corporation";
		break;
	case 0xA80CCA:
		cid = "Shenzhen Sundray Technologies Company Limited";
		break;
	case 0x94652D:
		cid = "OnePlus Technology (Shenzhen) Co., Ltd";
		break;
	case 0xF8A34F:
		cid = "zte corporation";
		break;
	case 0x845A81:
		cid = "ffly4u";
		break;
	case 0x347877:
		cid = "O-Net Communications (Shenzhen) Limited";
		break;
	case 0xF483E1:
		cid = "Shanghai Clouder Semiconductor Co.,Ltd";
		break;
	case 0x8CC8F4:
		cid = "IEEE Registration Authority";
		break;
	case 0x08CCA7:
		cid = "Cisco Systems, Inc";
		break;
	case 0x7868F7:
		cid = "YSTen Technology Co.,Ltd";
		break;
	case 0x704F57:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x3407FB:
		cid = "Ericsson AB";
		break;
	case 0x6CB4A7:
		cid = "Landauer, Inc.";
		break;
	case 0xF8A5C5:
		cid = "Cisco Systems, Inc";
		break;
	case 0xA49B13:
		cid = "Digital Check";
		break;
	case 0x542F8A:
		cid = "TELLESCOM INDUSTRIA E COMERCIO EM TELECOMUNICACAO";
		break;
	case 0xDCC64B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x043389:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xA0A33B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x6854C1:
		cid = "ColorTokens, Inc.";
		break;
	case 0x887873:
		cid = "Intel Corporate";
		break;
	case 0x6C750D:
		cid = "WiFiSONG";
		break;
	case 0xE45D51:
		cid = "SFR";
		break;
	case 0x346E9D:
		cid = "Ericsson AB";
		break;
	case 0xB816DB:
		cid = "CHANT SINCERE CO.,LTD";
		break;
	case 0xD461FE:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x54E1AD:
		cid = "LCFC(HeFei) Electronics Technology co., ltd";
		break;
	case 0x94F551:
		cid = "Cadi Scientific Pte Ltd";
		break;
	case 0xBC452E:
		cid = "Knowledge Development for POF S.L.";
		break;
	case 0xE8D11B:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0x44032C:
		cid = "Intel Corporate";
		break;
	case 0xD4CF37:
		cid = "Symbolic IO";
		break;
	case 0xF0D2F1:
		cid = "Amazon Technologies Inc.";
		break;
	case 0x8871E5:
		cid = "Amazon Technologies Inc.";
		break;
	case 0xF0A225:
		cid = "Private";
		break;
	case 0xE048AF:
		cid = "Premietech Limited";
		break;
	case 0x2C3311:
		cid = "Cisco Systems, Inc";
		break;
	case 0x503A7D:
		cid = "AlphaTech PLC Int’l Co., Ltd.";
		break;
	case 0x9CFCD1:
		cid = "Aetheris Technology (Shanghai) Co., Ltd.";
		break;
	case 0x949901:
		cid = "Shenzhen YITOA Digital Appliance CO.,LTD";
		break;
	case 0xD8A105:
		cid = "Syslane, Co., Ltd.";
		break;
	case 0xC4B9CD:
		cid = "Cisco Systems, Inc";
		break;
	case 0x10954B:
		cid = "Megabyte Ltd.";
		break;
	case 0x900628:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xC4700B:
		cid = "GUANGZHOU CHIP TECHNOLOGIES CO.,LTD";
		break;
	case 0xD4AE05:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x3C0518:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x04946B:
		cid = "TECNO MOBILE LIMITED";
		break;
	case 0xA04C5B:
		cid = "Shenzhen TINNO Mobile Technology Corp.";
		break;
	case 0x98DDEA:
		cid = "Infinix mobility limited";
		break;
	case 0x2C029F:
		cid = "3ALogics";
		break;
	case 0x58D9D5:
		cid = "Tenda Technology Co.,Ltd.Dongguan branch";
		break;
	case 0x60E78A:
		cid = "UNISEM";
		break;
	case 0x6C5976:
		cid = "Shanghai Tricheer Technology Co.,Ltd.";
		break;
	case 0xF4A739:
		cid = "Juniper Networks";
		break;
	case 0x2CFAA2:
		cid = "Alcatel-Lucent Enterprise";
		break;
	case 0x00D095:
		cid = "Alcatel-Lucent Enterprise";
		break;
	case 0x4095BD:
		cid = "NTmore.Co.,Ltd";
		break;
	case 0x2CABEB:
		cid = "Cisco Systems, Inc";
		break;
	case 0xBC66DE:
		cid = "Shadow Creator Information Technology Co.,Ltd.";
		break;
	case 0xA0086F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xC4FF1F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x7C7B8B:
		cid = "Control Concepts, Inc.";
		break;
	case 0xC40BCB:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0xD8C06A:
		cid = "Hunantv.com Interactive Entertainment Media Co.,Ltd.";
		break;
	case 0x9C32A9:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO., LTD";
		break;
	case 0x601466:
		cid = "zte corporation";
		break;
	case 0x30D386:
		cid = "zte corporation";
		break;
	case 0x900E83:
		cid = "Monico Monitoring, Inc.";
		break;
	case 0xE8BBA8:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0xBC3AEA:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x8C0EE3:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x6C5C14:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0xF894C2:
		cid = "Intel Corporate";
		break;
	case 0x7CB960:
		cid = "Shanghai X-Cheng telecom LTD";
		break;
	case 0xA8D579:
		cid = "Beijing Chushang Science and Technology Co.,Ltd";
		break;
	case 0x28C63F:
		cid = "Intel Corporate";
		break;
	case 0x600837:
		cid = "ivvi Scientific(Nanchang)Co.Ltd";
		break;
	case 0xD860B3:
		cid = "Guangdong Global Electronic Technology CO.，LTD";
		break;
	case 0x3C9509:
		cid = "Liteon Technology Corporation";
		break;
	case 0x44B412:
		cid = "SIUS AG";
		break;
	case 0x3CA308:
		cid = "Texas Instruments";
		break;
	case 0x60D7E3:
		cid = "IEEE Registration Authority";
		break;
	case 0x00F82C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00C1B1:
		cid = "Cisco Systems, Inc";
		break;
	case 0xD0F88C:
		cid = "Motorola (Wuhan) Mobility Technologies Communication Co., Ltd.";
		break;
	case 0x2CB115:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0x78ABBB:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x1816C9:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xFC8F90:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x244B03:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x988389:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x14BB6E:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x1C3ADE:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xF83F51:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD8E0E1:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x50FF20:
		cid = "Keenetic Limited";
		break;
	case 0xECF342:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0xD4C1C8:
		cid = "zte corporation";
		break;
	case 0xEC237B:
		cid = "zte corporation";
		break;
	case 0x881544:
		cid = "Cisco Meraki";
		break;
	case 0xF44156:
		cid = "Arrikto Inc.";
		break;
	case 0xD4258B:
		cid = "Intel Corporate";
		break;
	case 0x00E18C:
		cid = "Intel Corporate";
		break;
	case 0x145E45:
		cid = "Kaleao Limited";
		break;
	case 0x88D7F6:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x1C1FD4:
		cid = "LifeBEAM Technologies LTD";
		break;
	case 0x88BD78:
		cid = "Flaircomm Microelectronics,Inc.";
		break;
	case 0x5092B9:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xB4BFF6:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xC8D7B0:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x60720B:
		cid = "BLU Products Inc";
		break;
	case 0xF4A997:
		cid = "CANON INC.";
		break;
	case 0x3C4CD0:
		cid = "CERAGON NETWORKS";
		break;
	case 0xB04E26:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xFC06ED:
		cid = "M2Motive Technology Inc.";
		break;
	case 0x54C9DF:
		cid = "FN-LINK TECHNOLOGY LIMITED";
		break;
	case 0x30C3D9:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0xFC4D8C:
		cid = "SHENZHEN PANTE ELECTRONICS TECHNOLOGY CO., LTD";
		break;
	case 0xB01F29:
		cid = "Helvetia INC.";
		break;
	case 0x8C147D:
		cid = "IEEE Registration Authority";
		break;
	case 0x28070D:
		cid = "GUANGZHOU WINSOUND INFORMATION TECHNOLOGY CO.,LTD.";
		break;
	case 0x7038EE:
		cid = "Avaya Inc";
		break;
	case 0x2CF4C5:
		cid = "Avaya Inc";
		break;
	case 0xC8F406:
		cid = "Avaya Inc";
		break;
	case 0x3CB15B:
		cid = "Avaya Inc";
		break;
	case 0xFCA841:
		cid = "Avaya Inc";
		break;
	case 0x50CD22:
		cid = "Avaya Inc";
		break;
	case 0x10CDAE:
		cid = "Avaya Inc";
		break;
	case 0xB0ADAA:
		cid = "Avaya Inc";
		break;
	case 0x00549F:
		cid = "Avaya Inc";
		break;
	case 0x6049C1:
		cid = "Avaya Inc";
		break;
	case 0xE0D848:
		cid = "Dell Inc.";
		break;
	case 0x00187D:
		cid = "Armorlink Co .Ltd";
		break;
	case 0xF42981:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x3CA348:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0xA40E2B:
		cid = "Facebook Inc";
		break;
	case 0x28FAA0:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x3CB6B7:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x5419C8:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0xF4B7B3:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0xA0C5F2:
		cid = "IEEE Registration Authority";
		break;
	case 0x1C4D70:
		cid = "Intel Corporate";
		break;
	case 0xE43A6E:
		cid = "Shenzhen Zeroone Technology CO.,LTD";
		break;
	case 0x60DA83:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x2C5731:
		cid = " Wingtech Group (HongKong）Limited";
		break;
	case 0xF46BEF:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x085114:
		cid = "QINGDAO TOPSCOMM COMMUNICATION CO., LTD";
		break;
	case 0x70F11C:
		cid = "Shenzhen Ogemray Technology Co.,Ltd";
		break;
	case 0x14144B:
		cid = "Ruijie Networks Co.,LTD";
		break;
	case 0x70DF2F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x6447E0:
		cid = "Feitian Technologies Co., Ltd";
		break;
	case 0x001753:
		cid = "nFore Technology Inc.";
		break;
	case 0xF88A3C:
		cid = "IEEE Registration Authority";
		break;
	case 0x58C583:
		cid = "ITEL MOBILE LIMITED";
		break;
	case 0xE86D65:
		cid = "AUDIO MOBIL Elektronik GmbH";
		break;
	case 0xE86FF2:
		cid = "Actiontec Electronics, Inc";
		break;
	case 0x00016D:
		cid = "CarrierComm Inc.";
		break;
	case 0xF0B052:
		cid = "Ruckus Wireless";
		break;
	case 0x84183A:
		cid = "Ruckus Wireless";
		break;
	case 0x6CAAB3:
		cid = "Ruckus Wireless";
		break;
	case 0xC4017C:
		cid = "Ruckus Wireless";
		break;
	case 0x70DEF9:
		cid = "FAI WAH INTERNATIONAL (HONG KONG) LIMITED";
		break;
	case 0x001F41:
		cid = "Ruckus Wireless";
		break;
	case 0xC08ADE:
		cid = "Ruckus Wireless";
		break;
	case 0x50A733:
		cid = "Ruckus Wireless";
		break;
	case 0x24C9A1:
		cid = "Ruckus Wireless";
		break;
	case 0x245880:
		cid = "VIZEO";
		break;
	case 0x7CBACC:
		cid = "IEEE Registration Authority";
		break;
	case 0x000726:
		cid = "SHENZHEN GONGJIN ELECTRONICS CO.,LT";
		break;
	case 0xBC9680:
		cid = "SHENZHEN GONGJIN ELECTRONICS CO.,LT";
		break;
	case 0x1CA532:
		cid = "SHENZHEN GONGJIN ELECTRONICS CO.,LT";
		break;
	case 0x0000FE:
		cid = "Annapolis Micro Systems, Inc.";
		break;
	case 0x188090:
		cid = "Cisco Systems, Inc";
		break;
	case 0xBC024A:
		cid = "HMD Global Oy";
		break;
	case 0x90A365:
		cid = "HMD Global Oy";
		break;
	case 0xC444A0:
		cid = "Cisco Systems, Inc";
		break;
	case 0xF83441:
		cid = "Intel Corporate";
		break;
	case 0x5C0339:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x044F4C:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x1C151F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xDCEB53:
		cid = "Wuhan QianXiao Elecronic Technology CO.,LTD";
		break;
	case 0x94E36D:
		cid = "Texas Instruments";
		break;
	case 0x74819A:
		cid = "PT. Hartono Istana Teknologi";
		break;
	case 0x0835B2:
		cid = "CoreEdge Networks Co., Ltd";
		break;
	case 0x6C38A1:
		cid = "Ubee Interactive Co., Limited";
		break;
	case 0xB40F3B:
		cid = "Tenda Technology Co.,Ltd.Dongguan branch";
		break;
	case 0x7802B1:
		cid = "Cisco Systems, Inc";
		break;
	case 0x309935:
		cid = "zte corporation";
		break;
	case 0x94D9B3:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x409BCD:
		cid = "D-Link International";
		break;
	case 0x005C86:
		cid = "SHENZHEN FAST TECHNOLOGIES CO.,LTD";
		break;
	case 0x1CAB34:
		cid = "New H3C Technologies Co., Ltd";
		break;
	case 0x5C0979:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x002EC7:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x488EEF:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x002438:
		cid = "Brocade Communications Systems, Inc.";
		break;
	case 0x001BED:
		cid = "Brocade Communications Systems, Inc.";
		break;
	case 0x0012F2:
		cid = "Brocade Communications Systems, Inc.";
		break;
	case 0x04A151:
		cid = "NETGEAR";
		break;
	case 0xA42B8C:
		cid = "NETGEAR";
		break;
	case 0xA00460:
		cid = "NETGEAR";
		break;
	case 0x9C3DCF:
		cid = "NETGEAR";
		break;
	case 0x2CB05D:
		cid = "NETGEAR";
		break;
	case 0x504A6E:
		cid = "NETGEAR";
		break;
	case 0x28C68E:
		cid = "NETGEAR";
		break;
	case 0x2C3033:
		cid = "NETGEAR";
		break;
	case 0x00146C:
		cid = "NETGEAR";
		break;
	case 0x741C27:
		cid = "ITEL MOBILE LIMITED";
		break;
	case 0x2830AC:
		cid = "Frontiir Co. Ltd.";
		break;
	case 0x9050CA:
		cid = "Hitron Technologies. Inc";
		break;
	case 0x0004BF:
		cid = "VersaLogic Corp.";
		break;
	case 0xD8B12A:
		cid = "Panasonic Mobile Communications Co.,Ltd.";
		break;
	case 0x64B5C6:
		cid = "Nintendo Co.,Ltd";
		break;
	case 0xA41115:
		cid = "Robert Bosch Engineering and Business Solutions pvt. Ltd.";
		break;
	case 0xEC0441:
		cid = "ShenZhen TIGO Semiconductor Co., Ltd.";
		break;
	case 0xBC88C3:
		cid = "Ningbo Dooya Mechanic & Electronic Technology Co., Ltd";
		break;
	case 0x681F40:
		cid = "Blu Wireless Technology Ltd";
		break;
	case 0x48C58D:
		cid = "Lear Corporation GmbH";
		break;
	case 0x90ADF7:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x982D68:
		cid = "Samsung Electronics Co., Ltd";
		break;
	case 0x2CD2E7:
		cid = "Nokia Corporation";
		break;
	case 0x00152A:
		cid = "Nokia Corporation";
		break;
	case 0x5CEA1D:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xA43412:
		cid = "Thales Alenia Space";
		break;
	case 0xECD09F:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x9C65EE:
		cid = "DASAN Network Solutions";
		break;
	case 0x80739F:
		cid = "KYOCERA CORPORATION";
		break;
	case 0x3889DC:
		cid = "Opticon Sensors Europe B.V.";
		break;
	case 0x38E2DD:
		cid = "zte corporation";
		break;
	case 0x74E5F9:
		cid = "Intel Corporate";
		break;
	case 0x0017C8:
		cid = "KYOCERA Display Corporation";
		break;
	case 0x002294:
		cid = "KYOCERA CORPORATION";
		break;
	case 0x3C11B2:
		cid = "Fraunhofer FIT";
		break;
	case 0x080070:
		cid = "Mitsubishi Precision Co.,LTd.";
		break;
	case 0xDCF090:
		cid = "Nubia Technology Co.,Ltd.";
		break;
	case 0xDC6AEA:
		cid = "Infinix mobility limited";
		break;
	case 0x0025DF:
		cid = "Private";
		break;
	case 0xD8A01D:
		cid = "Espressif Inc.";
		break;
	case 0x8CE38E:
		cid = "Toshiba Memory Corporation";
		break;
	case 0x74EAC8:
		cid = "New H3C Technologies Co., Ltd";
		break;
	case 0xA434F1:
		cid = "Texas Instruments";
		break;
	case 0xC4F312:
		cid = "Texas Instruments";
		break;
	case 0x44EAD8:
		cid = "Texas Instruments";
		break;
	case 0x8C5F48:
		cid = "Continental Intelligent Transportation Systems LLC";
		break;
	case 0xA0D86F:
		cid = "Private";
		break;
	case 0x3890A5:
		cid = "Cisco Systems, Inc";
		break;
	case 0x4C1365:
		cid = "Emplus Technologies";
		break;
	case 0x2054FA:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x989C57:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xE4A7C5:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x104400:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x88DA1A:
		cid = "Redpine Signals, Inc.";
		break;
	case 0x14CF8D:
		cid = "OHSUNG";
		break;
	case 0x48D35D:
		cid = "Private";
		break;
	case 0xE446DA:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x500F80:
		cid = "Cisco Systems, Inc";
		break;
	case 0xF4F5DB:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x38A6CE:
		cid = "BSkyB Ltd";
		break;
	case 0xF0AB54:
		cid = "MITSUMI ELECTRIC CO.,LTD.";
		break;
	case 0xC449BB:
		cid = "MITSUMI ELECTRIC CO.,LTD.";
		break;
	case 0xB430C0:
		cid = "York Instruments Ltd";
		break;
	case 0xC468D0:
		cid = "VTech Telecommunications Ltd.";
		break;
	case 0x48D6D5:
		cid = "Google, Inc.";
		break;
	case 0xF0BD2E:
		cid = "H+S Polatis Ltd";
		break;
	case 0x842C80:
		cid = "Sichuan Changhong Electric Ltd.";
		break;
	case 0x182D98:
		cid = "Jinwoo Industrial system";
		break;
	case 0x0C1C20:
		cid = "Kakao Corp";
		break;
	case 0x40498A:
		cid = "Synapticon GmbH";
		break;
	case 0xD80831:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x24F27F:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0x00B69F:
		cid = "Latch";
		break;
	case 0xA88200:
		cid = "Hisense Electric Co.,Ltd";
		break;
	case 0xF449EF:
		cid = "EMSTONE";
		break;
	case 0x2856C1:
		cid = "Harman International";
		break;
	case 0x68A682:
		cid = "Shenzhen YOUHUA Technology Co., Ltd";
		break;
	case 0x406A8E:
		cid = "Hangzhou Puwell OE Tech Ltd.";
		break;
	case 0xDC5583:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x001F1F:
		cid = "Edimax Technology Co. Ltd.";
		break;
	case 0x248BE0:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO., LTD";
		break;
	case 0xECB5FA:
		cid = "Philips Lighting BV";
		break;
	case 0x547A52:
		cid = "CTE International srl";
		break;
	case 0x649A08:
		cid = "Shenzhen SuperElectron Technology Co.,LTD";
		break;
	case 0xACA667:
		cid = "Electronic Systems Protection, Inc.";
		break;
	case 0x006048:
		cid = "Dell EMC";
		break;
	case 0x7CC95A:
		cid = "Dell EMC";
		break;
	case 0xCC2DE0:
		cid = "Routerboard.com";
		break;
	case 0xECFABC:
		cid = "Espressif Inc.";
		break;
	case 0xB0FC36:
		cid = "CyberTAN Technology Inc.";
		break;
	case 0x7846C4:
		cid = "DAEHAP HYPER-TECH";
		break;
	case 0x58C935:
		cid = "Chiun Mai Communication Systems, Inc";
		break;
	case 0x28C13C:
		cid = "Hon Hai Precision Ind. Co., Ltd.";
		break;
	case 0x0C5203:
		cid = "AGM GROUP LIMITED";
		break;
	case 0x3C18A0:
		cid = "Luxshare Precision Industry Company Limited";
		break;
	case 0xBCF292:
		cid = "PLANTRONICS, INC.";
		break;
	case 0x2C54CF:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x001FE3:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x0026E2:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x001E75:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x6CD68A:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x2021A5:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x0C4885:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0xDC0B34:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0xAC0D1B:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x60E3AC:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0xF895C7:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0xC4438F:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0xA816B2:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0xE892A4:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x700514:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x88C9D0:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x2C598A:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x547DCD:
		cid = "Texas Instruments";
		break;
	case 0x1CDF52:
		cid = "Texas Instruments";
		break;
	case 0x18F0E4:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x803BF6:
		cid = "LOOK EASY INTERNATIONAL LIMITED";
		break;
	case 0xF417B8:
		cid = "AirTies Wireless Networks";
		break;
	case 0x5CAD76:
		cid = "Shenzhen TCL New Technology Co., Ltd";
		break;
	case 0x4C5262:
		cid = "Fujitsu Technology Solutions GmbH";
		break;
	case 0xEC8350:
		cid = "Microsoft Corporation";
		break;
	case 0x3873EA:
		cid = "IEEE Registration Authority";
		break;
	case 0x0CCEF6:
		cid = "Guizhou Fortuneship Technology Co., Ltd";
		break;
	case 0x549A4C:
		cid = "GUANGDONG HOMECARE TECHNOLOGY CO.,LTD.";
		break;
	case 0x00A0C5:
		cid = "Zyxel Communications Corporation";
		break;
	case 0x04BF6D:
		cid = "Zyxel Communications Corporation";
		break;
	case 0xE8377A:
		cid = "Zyxel Communications Corporation";
		break;
	case 0x107BEF:
		cid = "Zyxel Communications Corporation";
		break;
	case 0xD07FC4:
		cid = "Ou Wei Technology Co.，Ltd. of Shenzhen City";
		break;
	case 0x6CB2AE:
		cid = "Cisco Systems, Inc";
		break;
	case 0x6C4E86:
		cid = "Third Millennium Systems Ltd.";
		break;
	case 0x30C507:
		cid = "ECI Telecom Ltd.";
		break;
	case 0x145BE1:
		cid = "nyantec GmbH";
		break;
	case 0xB8CA04:
		cid = "Holtek Semiconductor Inc.";
		break;
	case 0xB8C8EB:
		cid = "ITEL MOBILE LIMITED";
		break;
	case 0x001862:
		cid = "Seagate Technology";
		break;
	case 0xB45253:
		cid = "Seagate Technology";
		break;
	case 0x7047E9:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x88D171:
		cid = "BEGHELLI S.P.A";
		break;
	case 0x74EACB:
		cid = "New H3C Technologies Co., Ltd";
		break;
	case 0xD8B122:
		cid = "Juniper Networks";
		break;
	case 0xF045DA:
		cid = "Texas Instruments";
		break;
	case 0xA43E51:
		cid = "ANOV FRANCE";
		break;
	case 0xD88466:
		cid = "Extreme Networks, Inc.";
		break;
	case 0x588D64:
		cid = "Xi'an Clevbee Technology Co.,Ltd";
		break;
	case 0x34415D:
		cid = "Intel Corporate";
		break;
	case 0x8CEC4B:
		cid = "Dell Inc.";
		break;
	case 0x6C2ACB:
		cid = "Paxton Access Ltd";
		break;
	case 0x002790:
		cid = "Cisco Systems, Inc";
		break;
	case 0xFCA183:
		cid = "Amazon Technologies Inc.";
		break;
	case 0xB89F09:
		cid = "Wistron Neweb Corporation";
		break;
	case 0x94290C:
		cid = "Shenyang wisdom Foundation Technology Development Co., Ltd.";
		break;
	case 0x4064A4:
		cid = "THE FURUKAWA ELECTRIC CO., LTD";
		break;
	case 0xDCA266:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xD89C67:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x802BF9:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x4CDD31:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x28BF89:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0xC84029:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0xCC0677:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0xB0E2E5:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x88947E:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0xF4573E:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x1C398A:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x1077B0:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0xE43022:
		cid = "Hanwha Techwin Security Vietnam";
		break;
	case 0xB4E62D:
		cid = "Espressif Inc.";
		break;
	case 0xF0B5B7:
		cid = "Disruptive Technologies Research AS";
		break;
	case 0x80CE62:
		cid = "Hewlett Packard";
		break;
	case 0x801F12:
		cid = "Microchip Technology Inc.";
		break;
	case 0x506CBE:
		cid = "InnosiliconTechnology Ltd";
		break;
	case 0x04C241:
		cid = "Nokia";
		break;
	case 0x307BAC:
		cid = "New H3C Technologies Co., Ltd";
		break;
	case 0x804126:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x0CC6CC:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x705AAC:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xFC643A:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD4E6B7:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x2802D8:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x6084BD:
		cid = "BUFFALO.INC";
		break;
	case 0x10F9EB:
		cid = "Industria Fueguina de Relojería Electrónica s.a.";
		break;
	case 0x347ECA:
		cid = "NEXTWILL";
		break;
	case 0x5C5AEA:
		cid = "FORD";
		break;
	case 0x5CAAFD:
		cid = "Sonos, Inc.";
		break;
	case 0x000E58:
		cid = "Sonos, Inc.";
		break;
	case 0x882950:
		cid = "Netmoon Technology Co., Ltd";
		break;
	case 0x7CFF4D:
		cid = "AVM Audiovisuelles Marketing und Computersysteme GmbH";
		break;
	case 0x7470FD:
		cid = "Intel Corporate";
		break;
	case 0x689861:
		cid = "Beacon Inc";
		break;
	case 0x88B362:
		cid = "Nokia Shanghai Bell Co. Ltd.�?";
		break;
	case 0x1CA0B8:
		cid = "Hon Hai Precision Ind. Co., Ltd.";
		break;
	case 0x3C479B:
		cid = "Theissen Training Systems, Inc.";
		break;
	case 0x8CF773:
		cid = "Nokia";
		break;
	case 0xC464E3:
		cid = "Texas Instruments";
		break;
	case 0xF4844C:
		cid = "Texas Instruments";
		break;
	case 0x10A4B9:
		cid = "Baidu Online Network Technology (Beijing) Co., Ltd";
		break;
	case 0x1CB044:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0x900372:
		cid = "Longnan Junya Digital Technology Co. Ltd.";
		break;
	case 0x501479:
		cid = "iRobot Corporation";
		break;
	case 0x909497:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xEC8914:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xDC729B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xB89436:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xF8DF15:
		cid = "Sunitec Enterprise Co.,Ltd";
		break;
	case 0xA8DA01:
		cid = "Shenzhen NUOLIJIA Digital Technology Co.,Ltd";
		break;
	case 0x002194:
		cid = "Ping Communication";
		break;
	case 0xA438CC:
		cid = "Nintendo Co.,Ltd";
		break;
	case 0x946AB0:
		cid = "Arcadyan Corporation";
		break;
	case 0x5821E9:
		cid = "TWPI";
		break;
	case 0x64CB5D:
		cid = "SIA TeleSet";
		break;
	case 0x70695A:
		cid = "Cisco Systems, Inc";
		break;
	case 0xA06610:
		cid = "FUJITSU LIMITED";
		break;
	case 0x68D482:
		cid = "SHENZHEN GONGJIN ELECTRONICS CO.,LT";
		break;
	case 0x301F9A:
		cid = "IEEE Registration Authority";
		break;
	case 0x907910:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0x00A0D5:
		cid = "Sierra Wireless Inc";
		break;
	case 0x6C3838:
		cid = "Marking System Technology Co., Ltd.";
		break;
	case 0x24C848:
		cid = "mywerk Portal GmbH";
		break;
	case 0x0C2C54:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x00BE3B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x7C7668:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x242E02:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x2CB8ED:
		cid = "SonicWall";
		break;
	case 0x9C2EA1:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0xAC35EE:
		cid = "FN-LINK TECHNOLOGY LIMITED";
		break;
	case 0x007278:
		cid = "Cisco Systems, Inc";
		break;
	case 0xE44E76:
		cid = "CHAMPIONTECH  ENTERPRISE (SHENZHEN) INC";
		break;
	case 0x000889:
		cid = "Dish Technologies Corp";
		break;
	case 0x6CC4D5:
		cid = "HMD Global Oy";
		break;
	case 0xE8C1B8:
		cid = " Nanjing Bangzhong Electronic Commerce Limited";
		break;
	case 0xB4DE31:
		cid = "Cisco Systems, Inc";
		break;
	case 0x70169F:
		cid = "EtherCAT Technology Group";
		break;
	case 0x649829:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0x081DC4:
		cid = "Thermo Fisher Scientific Messtechnik GmbH";
		break;
	case 0x90CC24:
		cid = "Synaptics, Inc";
		break;
	case 0xCC9916:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0xF041C8:
		cid = "IEEE Registration Authority";
		break;
	case 0x001386:
		cid = "ABB Inc/Totalflow";
		break;
	case 0xA45055:
		cid = "BUSWARE.DE";
		break;
	case 0x48605F:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x0015C4:
		cid = "FLOVEL CO., LTD.";
		break;
	case 0x3CEAF9:
		cid = "JUBIXCOLTD";
		break;
	case 0xC0EEB5:
		cid = "Enice Network.";
		break;
	case 0xDCDE4F:
		cid = "Gionee Communication Equipment Co Ltd";
		break;
	case 0x60DEF3:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x58F987:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x501D93:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xD47226:
		cid = "zte corporation";
		break;
	case 0xE482CC:
		cid = "Jumptronic GmbH";
		break;
	case 0x2016B9:
		cid = "Intel Corporate";
		break;
	case 0x781D4A:
		cid = "zte corporation";
		break;
	case 0xF0766F:
		cid = "Apple, Inc.";
		break;
	case 0x40CBC0:
		cid = "Apple, Inc.";
		break;
	case 0x4098AD:
		cid = "Apple, Inc.";
		break;
	case 0x6C4D73:
		cid = "Apple, Inc.";
		break;
	case 0xC48466:
		cid = "Apple, Inc.";
		break;
	case 0xB8634D:
		cid = "Apple, Inc.";
		break;
	case 0x503237:
		cid = "Apple, Inc.";
		break;
	case 0xD4619D:
		cid = "Apple, Inc.";
		break;
	case 0xB0481A:
		cid = "Apple, Inc.";
		break;
	case 0x989E63:
		cid = "Apple, Inc.";
		break;
	case 0xDCA904:
		cid = "Apple, Inc.";
		break;
	case 0x48A195:
		cid = "Apple, Inc.";
		break;
	case 0x6CAB31:
		cid = "Apple, Inc.";
		break;
	case 0x7C5049:
		cid = "Apple, Inc.";
		break;
	case 0xE42B34:
		cid = "Apple, Inc.";
		break;
	case 0x1C36BB:
		cid = "Apple, Inc.";
		break;
	case 0x3C2EFF:
		cid = "Apple, Inc.";
		break;
	case 0x6C96CF:
		cid = "Apple, Inc.";
		break;
	case 0x3035AD:
		cid = "Apple, Inc.";
		break;
	case 0xA8BE27:
		cid = "Apple, Inc.";
		break;
	case 0x70A2B3:
		cid = "Apple, Inc.";
		break;
	case 0x4C57CA:
		cid = "Apple, Inc.";
		break;
	case 0x68FB7E:
		cid = "Apple, Inc.";
		break;
	case 0x90C1C6:
		cid = "Apple, Inc.";
		break;
	case 0xA4F1E8:
		cid = "Apple, Inc.";
		break;
	case 0xAC61EA:
		cid = "Apple, Inc.";
		break;
	case 0x38B54D:
		cid = "Apple, Inc.";
		break;
	case 0x00CDFE:
		cid = "Apple, Inc.";
		break;
	case 0x18AF61:
		cid = "Apple, Inc.";
		break;
	case 0xCC4463:
		cid = "Apple, Inc.";
		break;
	case 0x34159E:
		cid = "Apple, Inc.";
		break;
	case 0x58B035:
		cid = "Apple, Inc.";
		break;
	case 0xF0B479:
		cid = "Apple, Inc.";
		break;
	case 0x109ADD:
		cid = "Apple, Inc.";
		break;
	case 0x40A6D9:
		cid = "Apple, Inc.";
		break;
	case 0x7CF05F:
		cid = "Apple, Inc.";
		break;
	case 0xA4B197:
		cid = "Apple, Inc.";
		break;
	case 0x0C74C2:
		cid = "Apple, Inc.";
		break;
	case 0x403004:
		cid = "Apple, Inc.";
		break;
	case 0x4860BC:
		cid = "Apple, Inc.";
		break;
	case 0xD02B20:
		cid = "Apple, Inc.";
		break;
	case 0x9CE33F:
		cid = "Apple, Inc.";
		break;
	case 0xF0989D:
		cid = "Apple, Inc.";
		break;
	case 0xACE4B5:
		cid = "Apple, Inc.";
		break;
	case 0x6C72E7:
		cid = "Apple, Inc.";
		break;
	case 0x60FEC5:
		cid = "Apple, Inc.";
		break;
	case 0x00A040:
		cid = "Apple, Inc.";
		break;
	case 0x000D93:
		cid = "Apple, Inc.";
		break;
	case 0xACBC32:
		cid = "Apple, Inc.";
		break;
	case 0x30D9D9:
		cid = "Apple, Inc.";
		break;
	case 0x6030D4:
		cid = "Apple, Inc.";
		break;
	case 0x94BF2D:
		cid = "Apple, Inc.";
		break;
	case 0xC49880:
		cid = "Apple, Inc.";
		break;
	case 0xE0338E:
		cid = "Apple, Inc.";
		break;
	case 0x68FEF7:
		cid = "Apple, Inc.";
		break;
	case 0xBCE143:
		cid = "Apple, Inc.";
		break;
	case 0x645AED:
		cid = "Apple, Inc.";
		break;
	case 0xC0B658:
		cid = "Apple, Inc.";
		break;
	case 0x881908:
		cid = "Apple, Inc.";
		break;
	case 0xFC2A9C:
		cid = "Apple, Inc.";
		break;
	case 0x44D884:
		cid = "Apple, Inc.";
		break;
	case 0xEC852F:
		cid = "Apple, Inc.";
		break;
	case 0x286ABA:
		cid = "Apple, Inc.";
		break;
	case 0x705681:
		cid = "Apple, Inc.";
		break;
	case 0x7CD1C3:
		cid = "Apple, Inc.";
		break;
	case 0xF0DCE2:
		cid = "Apple, Inc.";
		break;
	case 0xB065BD:
		cid = "Apple, Inc.";
		break;
	case 0xA82066:
		cid = "Apple, Inc.";
		break;
	case 0xBC6778:
		cid = "Apple, Inc.";
		break;
	case 0x68967B:
		cid = "Apple, Inc.";
		break;
	case 0x848506:
		cid = "Apple, Inc.";
		break;
	case 0x54AE27:
		cid = "Apple, Inc.";
		break;
	case 0x6476BA:
		cid = "Apple, Inc.";
		break;
	case 0x84B153:
		cid = "Apple, Inc.";
		break;
	case 0x783A84:
		cid = "Apple, Inc.";
		break;
	case 0x2CBE08:
		cid = "Apple, Inc.";
		break;
	case 0x24E314:
		cid = "Apple, Inc.";
		break;
	case 0x68D93C:
		cid = "Apple, Inc.";
		break;
	case 0x2CF0EE:
		cid = "Apple, Inc.";
		break;
	case 0x84788B:
		cid = "Apple, Inc.";
		break;
	case 0x6C94F8:
		cid = "Apple, Inc.";
		break;
	case 0x703EAC:
		cid = "Apple, Inc.";
		break;
	case 0xB4F0AB:
		cid = "Apple, Inc.";
		break;
	case 0x10DDB1:
		cid = "Apple, Inc.";
		break;
	case 0x04F7E4:
		cid = "Apple, Inc.";
		break;
	case 0x34C059:
		cid = "Apple, Inc.";
		break;
	case 0xF0D1A9:
		cid = "Apple, Inc.";
		break;
	case 0xBC3BAF:
		cid = "Apple, Inc.";
		break;
	case 0x786C1C:
		cid = "Apple, Inc.";
		break;
	case 0x041552:
		cid = "Apple, Inc.";
		break;
	case 0x38484C:
		cid = "Apple, Inc.";
		break;
	case 0x701124:
		cid = "Apple, Inc.";
		break;
	case 0xC86F1D:
		cid = "Apple, Inc.";
		break;
	case 0x685B35:
		cid = "Apple, Inc.";
		break;
	case 0x380F4A:
		cid = "Apple, Inc.";
		break;
	case 0x3010E4:
		cid = "Apple, Inc.";
		break;
	case 0x04DB56:
		cid = "Apple, Inc.";
		break;
	case 0x881FA1:
		cid = "Apple, Inc.";
		break;
	case 0x04E536:
		cid = "Apple, Inc.";
		break;
	case 0xF82793:
		cid = "Apple, Inc.";
		break;
	case 0xACFDEC:
		cid = "Apple, Inc.";
		break;
	case 0xD0E140:
		cid = "Apple, Inc.";
		break;
	case 0x8C7C92:
		cid = "Apple, Inc.";
		break;
	case 0x7831C1:
		cid = "Apple, Inc.";
		break;
	case 0xF437B7:
		cid = "Apple, Inc.";
		break;
	case 0x50EAD6:
		cid = "Apple, Inc.";
		break;
	case 0x28E02C:
		cid = "Apple, Inc.";
		break;
	case 0x60C547:
		cid = "Apple, Inc.";
		break;
	case 0x7C11BE:
		cid = "Apple, Inc.";
		break;
	case 0x003EE1:
		cid = "Apple, Inc.";
		break;
	case 0xC01ADA:
		cid = "Apple, Inc.";
		break;
	case 0x34363B:
		cid = "Apple, Inc.";
		break;
	case 0xC81EE7:
		cid = "Apple, Inc.";
		break;
	case 0x9CFC01:
		cid = "Apple, Inc.";
		break;
	case 0xCCC760:
		cid = "Apple, Inc.";
		break;
	case 0x087402:
		cid = "Apple, Inc.";
		break;
	case 0x285AEB:
		cid = "Apple, Inc.";
		break;
	case 0x28F076:
		cid = "Apple, Inc.";
		break;
	case 0x3C36E4:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0000C5:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xD039B3:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x8C7F3B:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x946269:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xD40598:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x78719C:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x9CFEA1:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x48D343:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xD40AA9:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x384C90:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x00ACE0:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x70700D:
		cid = "Apple, Inc.";
		break;
	case 0x9CF48E:
		cid = "Apple, Inc.";
		break;
	case 0xFCD848:
		cid = "Apple, Inc.";
		break;
	case 0xE45740:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xE02202:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001CB3:
		cid = "Apple, Inc.";
		break;
	case 0x64B9E8:
		cid = "Apple, Inc.";
		break;
	case 0x2C1DB8:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x949D57:
		cid = "Panasonic do Brasil Limitada";
		break;
	case 0x005089:
		cid = "SAFETY MANAGEMENT SYSTEMS";
		break;
	case 0x48DD9D:
		cid = "ITEL MOBILE LIMITED";
		break;
	case 0xE48F65:
		cid = "Yelatma Instrument Making Enterprise, JSC";
		break;
	case 0x9C2F73:
		cid = "Universal Tiancheng Technology (Beijing) Co., Ltd.";
		break;
	case 0x54B203:
		cid = "PEGATRON CORPORATION";
		break;
	case 0xE4EA83:
		cid = "SHENZHEN GONGJIN ELECTRONICS CO.,LT";
		break;
	case 0x0015D0:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xE86D52:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x3C438E:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x90B134:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x20E564:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x40B7F3:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x94CCB9:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0050E3:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xEC7097:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xC0A00D:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x3C0461:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x88964E:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xF8F532:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xB083D6:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x44AAF5:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x7085C6:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xD0E54D:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xB4F2E8:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xFC8E7E:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x005094:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xE0B70A:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xC83FB4:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x207355:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x900DCB:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x14CFE2:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x903EAB:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x002143:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0023EE:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x64ED57:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0023A3:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xF87B7A:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0025F1:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001A66:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0018C0:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001E46:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001ADE:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0023AF:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xCCA462:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001DCD:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001DD4:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001DCE:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x00080E:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x00159A:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x00192C:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x5856E8:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x5050CE:
		cid = "Hangzhou Dianyixia Communication Technology Co. Ltd.";
		break;
	case 0x50A009:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x2C28B7:
		cid = "Hangzhou Ruiying technology co., LTD";
		break;
	case 0x9CE82B:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x002218:
		cid = "AKAMAI TECHNOLOGIES INC";
		break;
	case 0x544810:
		cid = "Dell Inc.";
		break;
	case 0x000413:
		cid = "snom technology GmbH";
		break;
	case 0x8CE748:
		cid = "Private";
		break;
	case 0xC0D2F3:
		cid = "Hui Zhou Gaoshengda Technology Co.,LTD";
		break;
	case 0xC42456:
		cid = "Palo Alto Networks";
		break;
	case 0xB88303:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0xE4CA12:
		cid = "zte corporation";
		break;
	case 0xB4B686:
		cid = "Hewlett Packard";
		break;
	case 0xC8B1EE:
		cid = "Qorvo";
		break;
	case 0x482AE3:
		cid = "Wistron InfoComm(Kunshan)Co.,Ltd.";
		break;
	case 0xB0EB57:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x8C15C7:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xA4BE2B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x60FA9D:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xDC9914:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x2C97B1:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x7089CC:
		cid = "China Mobile Group Device Co.,Ltd.";
		break;
	case 0x7C96D2:
		cid = "Fihonest communication co.,Ltd";
		break;
	case 0x904C81:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0x8C3579:
		cid = "QDIQO Sp. z o.o.";
		break;
	case 0x34E12D:
		cid = "Intel Corporate";
		break;
	case 0x8C8126:
		cid = "ARCOM";
		break;
	case 0x303926:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x205476:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0xB8F934:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x58170C:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x6C23B9:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x2421AB:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x001813:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0xA0E453:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0xBC6E64:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x00EB2D:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x1C7B21:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x0CB6D2:
		cid = "D-Link International";
		break;
	case 0xB8B7F1:
		cid = "Wistron Neweb Corporation";
		break;
	case 0x44EFCF:
		cid = "UGENE SOLUTION inc.";
		break;
	case 0xA45385:
		cid = "WEIFANG GOERTEK ELECTRONICS CO.,LTD";
		break;
	case 0xACFD93:
		cid = "WEIFANG GOERTEK ELECTRONICS CO.,LTD";
		break;
	case 0xD42122:
		cid = "Sercomm Corporation.";
		break;
	case 0x00138A:
		cid = "Qingdao GoerTek Technology Co., Ltd.";
		break;
	case 0x841766:
		cid = "WEIFANG GOERTEK ELECTRONICS CO.,LTD";
		break;
	case 0x2C4D79:
		cid = "WEIFANG GOERTEK ELECTRONICS CO.,LTD";
		break;
	case 0xA8D498:
		cid = "Avira Operations GmbH & Co. KG";
		break;
	case 0x98A404:
		cid = "Ericsson AB";
		break;
	case 0x00CC3F:
		cid = "Universal Electronics, Inc.";
		break;
	case 0x108EE0:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x68E7C2:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x3C576C:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x0CE0DC:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x6C5940:
		cid = "MERCURY COMMUNICATION TECHNOLOGIES CO.,LTD.";
		break;
	case 0x1C60DE:
		cid = "MERCURY COMMUNICATION TECHNOLOGIES CO.,LTD.";
		break;
	case 0xF4EE14:
		cid = "MERCURY COMMUNICATION TECHNOLOGIES CO.,LTD.";
		break;
	case 0x20A60C:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x5061BF:
		cid = "Cisco Systems, Inc";
		break;
	case 0x04AB18:
		cid = "ELECOM CO.,LTD.";
		break;
	case 0x4C5E0C:
		cid = "Routerboard.com";
		break;
	case 0x0026BD:
		cid = "JTEC Card &amp; Communication Co., Ltd";
		break;
	case 0x00151E:
		cid = "ETHERNET Powerlink Standarization Group (EPSG)";
		break;
	case 0x641C67:
		cid = "DIGIBRAS INDUSTRIA DO BRASILS/A";
		break;
	case 0x000284:
		cid = "UK Grid Solutions Limited";
		break;
	case 0xFC94E3:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0xD0B2C4:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0x480033:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0x14987D:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0xD05A00:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0x1062D0:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0x3C9A77:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0xD08A91:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0xFC528D:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0x40C3C6:
		cid = "SnapRoute";
		break;
	case 0xE89E0C:
		cid = "Private";
		break;
	case 0x544E45:
		cid = "Private";
		break;
	case 0x0090CE:
		cid = " avateramedical Mechatronics GmbH";
		break;
	case 0x300EE3:
		cid = "Aquantia Corporation";
		break;
	case 0x7487BB:
		cid = "Ciena Corporation";
		break;
	case 0xEC3873:
		cid = "Juniper Networks";
		break;
	case 0x001E45:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x00219E:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x283F69:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0xE8C57A:
		cid = "Ufispace Co., LTD.";
		break;
	case 0xC4B8B4:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xF89910:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0x50E0EF:
		cid = "Nokia";
		break;
	case 0x111111:
		cid = "Private";
		break;
	case 0x2C1875:
		cid = "Skyworth Digital Technology(Shenzhen) Co.,Ltd";
		break;
	case 0x289EFC:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x84C9C6:
		cid = "SHENZHEN GONGJIN ELECTRONICS CO.,LT";
		break;
	case 0x20163D:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0x702AD5:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x68DD26:
		cid = "Shanghai Focus Vision Security Technology Co.,Ltd";
		break;
	case 0xD8912A:
		cid = "Zyxel Communications Corporation";
		break;
	case 0x8CB0E9:
		cid = "Samsung Electronics.,LTD";
		break;
	case 0x000BA3:
		cid = "Siemens AG";
		break;
	case 0x000B23:
		cid = "Siemens Home & Office Comm. Devices";
		break;
	case 0xC4FEE2:
		cid = "AMICCOM Electronics Corporation";
		break;
	case 0xB44BD6:
		cid = "IEEE Registration Authority";
		break;
	case 0x486834:
		cid = "Silicon Motion, Inc.";
		break;
	case 0xEC58EA:
		cid = "Ruckus Wireless";
		break;
	case 0x745933:
		cid = "Danal Entertainment";
		break;
	case 0x009D6B:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0xB0B867:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0x20F77C:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x0004AE:
		cid = "Sullair Corporation";
		break;
	case 0xF06130:
		cid = "Advantage Pharmacy Services, LLC";
		break;
	case 0xFCB10D:
		cid = "Shenzhen Tian Kun Technology Co.,LTD.";
		break;
	case 0xF8A963:
		cid = "COMPAL INFORMATION (KUNSHAN) CO., LTD.";
		break;
	case 0xB870F4:
		cid = "COMPAL INFORMATION (KUNSHAN) CO., LTD.";
		break;
	case 0x1C7508:
		cid = "COMPAL INFORMATION (KUNSHAN) CO., LTD.";
		break;
	case 0xF0761C:
		cid = "COMPAL INFORMATION (KUNSHAN) CO., LTD.";
		break;
	case 0x88DF9E:
		cid = "New H3C Technologies Co., Ltd";
		break;
	case 0x2C7CE4:
		cid = "Wuhan Tianyu Information Industry Co., Ltd.";
		break;
	case 0x342792:
		cid = "FREEBOX SAS";
		break;
	case 0xEC6F0B:
		cid = "FADU, Inc.";
		break;
	case 0x1062E5:
		cid = "Hewlett Packard";
		break;
	case 0x0017F3:
		cid = "Harris Corporation";
		break;
	case 0x3C71BF:
		cid = "Espressif Inc.";
		break;
	case 0x14D169:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xBCE265:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xD016B4:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x00B338:
		cid = "Kontron Asia Pacific Design Sdn. Bhd";
		break;
	case 0x00B670:
		cid = "Cisco Systems, Inc";
		break;
	case 0x50DCFC:
		cid = "ECOCOM";
		break;
	case 0xC08359:
		cid = "IEEE Registration Authority";
		break;
	case 0x244CE3:
		cid = "Amazon Technologies Inc.";
		break;
	case 0x4898CA:
		cid = "Sichuan AI-Link Technology Co., Ltd.";
		break;
	case 0x20E882:
		cid = "zte corporation";
		break;
	case 0x00049F:
		cid = "Freescale Semiconductor";
		break;
	case 0x000FB0:
		cid = "Compal Electronics INC.";
		break;
	case 0x988ED4:
		cid = "ITEL MOBILE LIMITED";
		break;
	case 0xA456CC:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0x000B3B:
		cid = "devolo AG";
		break;
	case 0x889F6F:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x9CF6DD:
		cid = "IEEE Registration Authority";
		break;
	case 0x009093:
		cid = "EIZO Corporation";
		break;
	case 0xE049ED:
		cid = "Audeze LLC";
		break;
	case 0x4062EA:
		cid = "China Mobile Group Device Co.,Ltd.";
		break;
	case 0x2C15E1:
		cid = "Phicomm (Shanghai) Co., Ltd.";
		break;
	case 0x14E9B2:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0xD4741B:
		cid = "Beijing HuaDa ZhiBao Electronic System Co.,Ltd.";
		break;
	case 0xB4DDD0:
		cid = "Continental Automotive Hungary Kft";
		break;
	case 0xA43523:
		cid = "Guangdong Donyan Network Technologies Co.,Ltd.";
		break;
	case 0x3009F9:
		cid = "IEEE Registration Authority";
		break;
	case 0x0440A9:
		cid = "New H3C Technologies Co., Ltd";
		break;
	case 0xDC3979:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00203D:
		cid = "Honeywell Environmental & Combustion Controls";
		break;
	case 0x80B624:
		cid = "IVS";
		break;
	case 0xDCF505:
		cid = "AzureWave Technology Inc.";
		break;
	case 0xFCC233:
		cid = "Private";
		break;
	case 0x0CB527:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x8489EC:
		cid = "IEEE Registration Authority";
		break;
	case 0x5CFB7C:
		cid = "Shenzhen Jingxun Software Telecommunication Technology Co.,Ltd";
		break;
	case 0xCCEED9:
		cid = "VAHLE Automation GmbH";
		break;
	case 0xC8C2F5:
		cid = "FLEXTRONICS MANUFACTURING(ZHUHAI)CO.,LTD.";
		break;
	case 0x0415D9:
		cid = "Viwone";
		break;
	case 0x0020AF:
		cid = "3COM";
		break;
	case 0x000475:
		cid = "3COM";
		break;
	case 0x00073A:
		cid = "INVENTEL";
		break;
	case 0x00A0D1:
		cid = "INVENTEC CORPORATION";
		break;
	case 0x001E33:
		cid = "INVENTEC CORPORATION";
		break;
	case 0x002654:
		cid = "3COM";
		break;
	case 0x005004:
		cid = "3COM";
		break;
	case 0xCCC5E5:
		cid = "Dell Inc.";
		break;
	case 0x10A24E:
		cid = "GOLD3LINK ELECTRONICS CO., LTD";
		break;
	case 0xE86A64:
		cid = "LCFC(HeFei) Electronics Technology co., ltd";
		break;
	case 0x0C2A86:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x0409A5:
		cid = "HFR, Inc.";
		break;
	case 0xD87D7F:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xA4ED43:
		cid = "IEEE Registration Authority";
		break;
	case 0x485F99:
		cid = "Cloud Network Technology (Samoa) Limited";
		break;
	case 0xC04004:
		cid = "Medicaroid Corporation";
		break;
	case 0x8C61A3:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x704FB8:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x7C696B:
		cid = "Atmosic Technologies";
		break;
	case 0x78055F:
		cid = "Shenzhen WYC Technology Co., Ltd.";
		break;
	case 0xE063DA:
		cid = "Ubiquiti Networks Inc.";
		break;
	case 0x50579C:
		cid = "Seiko Epson Corporation";
		break;
	case 0xC8D9D2:
		cid = "Hewlett Packard";
		break;
	case 0x54278D:
		cid = "NXP (China) Management Ltd.";
		break;
	case 0xDC41E5:
		cid = "Shenzhen Zhixin Data Service Co., Ltd.";
		break;
	case 0xB0BE76:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xD80D17:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xCC08FB:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x541031:
		cid = "SMARTO";
		break;
	case 0x00B4F5:
		cid = "DongGuan Siyoto Electronics Co., Ltd      ";
		break;
	case 0xC474F8:
		cid = "Hot Pepper, Inc.";
		break;
	case 0x1C427D:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x5029F5:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0xBC3865:
		cid = "JWCNETWORKS";
		break;
	case 0x8CFCA0:
		cid = "Shenzhen Smart Device Technology Co., LTD.";
		break;
	case 0x0C6F9C:
		cid = "Shaw Communications Inc.";
		break;
	case 0x1801E3:
		cid = "Bittium Wireless Ltd";
		break;
	case 0xC0AC54:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x40F201:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xC891F9:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x4CFF12:
		cid = "Fuze Entertainment Co., ltd";
		break;
	case 0x0059AC:
		cid = "KPN. B.V.";
		break;
	case 0xAC9A22:
		cid = "NXP Semiconductors";
		break;
	case 0x006037:
		cid = "NXP Semiconductors";
		break;
	case 0x546009:
		cid = "Google, Inc.";
		break;
	case 0xA47733:
		cid = "Google, Inc.";
		break;
	case 0x94EB2C:
		cid = "Google, Inc.";
		break;
	case 0x28BC56:
		cid = "EMAC, Inc.";
		break;
	case 0x287CDB:
		cid = "Hefei  Toycloud Technology Co.,ltd";
		break;
	case 0xD0B33F:
		cid = "Shenzhen TINNO Mobile Technology Corp.";
		break;
	case 0x00738D:
		cid = "Shenzhen TINNO Mobile Technology Corp.";
		break;
	case 0xA8CA7B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xACCF85:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x2435CC:
		cid = "Zhongshan Scinan Internet of Things Co.,Ltd.";
		break;
	case 0x2C27D7:
		cid = "Hewlett Packard";
		break;
	case 0x000F3D:
		cid = "D-Link Corporation";
		break;
	case 0x001195:
		cid = "D-Link Corporation";
		break;
	case 0x0015E9:
		cid = "D-Link Corporation";
		break;
	case 0x0CFD37:
		cid = "SUSE Linux GmbH";
		break;
	case 0x2CFF65:
		cid = "Oki Electric Industry Co., Ltd.";
		break;
	case 0x001CF0:
		cid = "D-Link Corporation";
		break;
	case 0x00265A:
		cid = "D-Link Corporation";
		break;
	case 0xACF1DF:
		cid = "D-Link International";
		break;
	case 0xFC7516:
		cid = "D-Link International";
		break;
	case 0x7C18CD:
		cid = "E-TRON Co.,Ltd.";
		break;
	case 0x3897D6:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0xC8478C:
		cid = "Beken Corporation";
		break;
	case 0x8896B6:
		cid = "Global Fire Equipment S.A.";
		break;
	case 0x188796:
		cid = "HTC Corporation";
		break;
	case 0xAC2A0C:
		cid = "CSR ZHUZHOU INSTITUTE CO.,LTD.";
		break;
	case 0xF4CA24:
		cid = "FreeBit Co., Ltd.";
		break;
	case 0x000A57:
		cid = "Hewlett Packard";
		break;
	case 0x643150:
		cid = "Hewlett Packard";
		break;
	case 0x002376:
		cid = "HTC Corporation";
		break;
	case 0x0007E9:
		cid = "Intel Corporation";
		break;
	case 0xB46D83:
		cid = "Intel Corporate";
		break;
	case 0xE4FAFD:
		cid = "Intel Corporate";
		break;
	case 0xDC5360:
		cid = "Intel Corporate";
		break;
	case 0x780CB8:
		cid = "Intel Corporate";
		break;
	case 0x484520:
		cid = "Intel Corporate";
		break;
	case 0x004026:
		cid = "BUFFALO.INC";
		break;
	case 0x0002A5:
		cid = "Hewlett Packard";
		break;
	case 0xA02BB8:
		cid = "Hewlett Packard";
		break;
	case 0x6CC217:
		cid = "Hewlett Packard";
		break;
	case 0x3863BB:
		cid = "Hewlett Packard";
		break;
	case 0xCC3E5F:
		cid = "Hewlett Packard";
		break;
	case 0x7446A0:
		cid = "Hewlett Packard";
		break;
	case 0x443192:
		cid = "Hewlett Packard";
		break;
	case 0xFC15B4:
		cid = "Hewlett Packard";
		break;
	case 0xEC9A74:
		cid = "Hewlett Packard";
		break;
	case 0x80C16E:
		cid = "Hewlett Packard";
		break;
	case 0xD07E28:
		cid = "Hewlett Packard";
		break;
	case 0x7403BD:
		cid = "BUFFALO.INC";
		break;
	case 0x101F74:
		cid = "Hewlett Packard";
		break;
	case 0x001A4B:
		cid = "Hewlett Packard";
		break;
	case 0x001F29:
		cid = "Hewlett Packard";
		break;
	case 0x00215A:
		cid = "Hewlett Packard";
		break;
	case 0x000F61:
		cid = "Hewlett Packard";
		break;
	case 0x001185:
		cid = "Hewlett Packard";
		break;
	case 0x001279:
		cid = "Hewlett Packard";
		break;
	case 0x001708:
		cid = "Hewlett Packard";
		break;
	case 0x2832C5:
		cid = "HUMAX Co., Ltd.";
		break;
	case 0xEC4D47:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x88CF98:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x6CE3B6:
		cid = "Nera Telecommunications Ltd.";
		break;
	case 0x942CB3:
		cid = "HUMAX Co., Ltd.";
		break;
	case 0xC87B5B:
		cid = "zte corporation";
		break;
	case 0x98F537:
		cid = "zte corporation";
		break;
	case 0x001E73:
		cid = "zte corporation";
		break;
	case 0x0019C6:
		cid = "zte corporation";
		break;
	case 0x0015EB:
		cid = "zte corporation";
		break;
	case 0xF0EBD0:
		cid = "Shanghai Feixun Communication Co.,Ltd.";
		break;
	case 0xD8490B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x888603:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xF8E811:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xE09796:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xCCCC81:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x101B54:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x7054F5:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xD07AB5:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xC40528:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x3CDFBD:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x14B968:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x80717A:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xF49FF3:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x784B87:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x28A183:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x5CF8A1:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x6021C0:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x84DBAC:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xC07009:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xE0191D:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xB8BC1B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x241FA0:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x50A72B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xC85195:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x00F81C:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xF4559C:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x283CE4:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x001D0F:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x5C63BF:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xB0487A:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x388345:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x14E6E4:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x647002:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x6466B3:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x6CE873:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x08E84F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x04BD70:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x18C58A:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x04C06F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x5C4CA9:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x4C5499:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x00259E:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x001882:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x00906F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0090A6:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0090AB:
		cid = "Cisco Systems, Inc";
		break;
	case 0x7426AC:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB000B4:
		cid = "Cisco Systems, Inc";
		break;
	case 0x2834A2:
		cid = "Cisco Systems, Inc";
		break;
	case 0x641225:
		cid = "Cisco Systems, Inc";
		break;
	case 0x544A00:
		cid = "Cisco Systems, Inc";
		break;
	case 0x5067AE:
		cid = "Cisco Systems, Inc";
		break;
	case 0xBC16F5:
		cid = "Cisco Systems, Inc";
		break;
	case 0x6899CD:
		cid = "Cisco Systems, Inc";
		break;
	case 0xF44E05:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0CF5A4:
		cid = "Cisco Systems, Inc";
		break;
	case 0x5CFC66:
		cid = "Cisco Systems, Inc";
		break;
	case 0xD0A5A6:
		cid = "Cisco Systems, Inc";
		break;
	case 0x3C5EC3:
		cid = "Cisco Systems, Inc";
		break;
	case 0x64F69D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x74A2E6:
		cid = "Cisco Systems, Inc";
		break;
	case 0x204C9E:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00112F:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x0011D8:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x001731:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x0018F3:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x485B39:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0xF46D04:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x3085A9:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x00900C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001079:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00102F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000E08:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x00602F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x006070:
		cid = "Cisco Systems, Inc";
		break;
	case 0x006083:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00067C:
		cid = "Cisco Systems, Inc";
		break;
	case 0xC8D719:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x54781A:
		cid = "Cisco Systems, Inc";
		break;
	case 0x58971E:
		cid = "Cisco Systems, Inc";
		break;
	case 0xCCD539:
		cid = "Cisco Systems, Inc";
		break;
	case 0x20BBC0:
		cid = "Cisco Systems, Inc";
		break;
	case 0x4C4E35:
		cid = "Cisco Systems, Inc";
		break;
	case 0x7CAD74:
		cid = "Cisco Systems, Inc";
		break;
	case 0x10F311:
		cid = "Cisco Systems, Inc";
		break;
	case 0x08CC68:
		cid = "Cisco Systems, Inc";
		break;
	case 0xD0C789:
		cid = "Cisco Systems, Inc";
		break;
	case 0xF84F57:
		cid = "Cisco Systems, Inc";
		break;
	case 0x34DBFD:
		cid = "Cisco Systems, Inc";
		break;
	case 0x5CA48A:
		cid = "Cisco Systems, Inc";
		break;
	case 0xAC7A4D:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0xFC62B9:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x0010A6:
		cid = "Cisco Systems, Inc";
		break;
	case 0xE86549:
		cid = "Cisco Systems, Inc";
		break;
	case 0x84B517:
		cid = "Cisco Systems, Inc";
		break;
	case 0x046273:
		cid = "Cisco Systems, Inc";
		break;
	case 0x9C57AD:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00223A:
		cid = "Cisco SPVTG";
		break;
	case 0x001839:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x001EE5:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x38C85C:
		cid = "Cisco SPVTG";
		break;
	case 0xF45FD4:
		cid = "Cisco SPVTG";
		break;
	case 0x002306:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x001E3D:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x0019C1:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x847D50:
		cid = "Holley Metering Limited";
		break;
	case 0x6C4A39:
		cid = "BITA";
		break;
	case 0x04214C:
		cid = "Insight Energy Ventures LLC";
		break;
	case 0x4C8ECC:
		cid = "SILKAN SA";
		break;
	case 0x98F428:
		cid = "zte corporation";
		break;
	case 0x7C5A67:
		cid = "JNC Systems, Inc.";
		break;
	case 0xC4BBEA:
		cid = "Pakedge Device and Software Inc";
		break;
	case 0x84100D:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0xD88B4C:
		cid = "KingTing Tech.";
		break;
	case 0x6C9354:
		cid = "Yaojin Technology (Shenzhen) Co., LTD.";
		break;
	case 0x4054E4:
		cid = "Wearsafe Labs Inc";
		break;
	case 0x8CE2DA:
		cid = "Circle Media Inc";
		break;
	case 0x74D7CA:
		cid = "Panasonic Corporation Automotive";
		break;
	case 0x1CCDE5:
		cid = "Shanghai Wind Technologies Co.,Ltd";
		break;
	case 0xD494E8:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xB078F0:
		cid = "Beijing HuaqinWorld Technology Co.,Ltd.";
		break;
	case 0x3029BE:
		cid = "Shanghai MRDcom Co.,Ltd";
		break;
	case 0x7011AE:
		cid = "Music Life LTD";
		break;
	case 0xECB870:
		cid = "Beijing Heweinet Technology Co.,Ltd.";
		break;
	case 0x3095E3:
		cid = "SHANGHAI SIMCOM LIMITED";
		break;
	case 0x54BE53:
		cid = "zte corporation";
		break;
	case 0xA01E0B:
		cid = "MINIX Technology Limited";
		break;
	case 0xD48304:
		cid = "SHENZHEN FAST TECHNOLOGIES CO.,LTD";
		break;
	case 0x385F66:
		cid = "Cisco SPVTG";
		break;
	case 0x58FC73:
		cid = "Arria Live Media, Inc.";
		break;
	case 0x2C1BC8:
		cid = "Hunan Topview Network System CO.,LTD";
		break;
	case 0xD888CE:
		cid = "RF Technology Pty Ltd";
		break;
	case 0xD4F4BE:
		cid = "Palo Alto Networks";
		break;
	case 0xB88687:
		cid = "Liteon Technology Corporation";
		break;
	case 0x68F956:
		cid = "Objetivos y Servicio de Valor Añadido";
		break;
	case 0xF4E926:
		cid = "Tianjin Zanpu Technology Inc.";
		break;
	case 0x04C23E:
		cid = "HTC Corporation";
		break;
	case 0x2CFCE4:
		cid = "CTEK Sweden AB";
		break;
	case 0xC0B713:
		cid = "Beijing Xiaoyuer Technology Co. Ltd.";
		break;
	case 0xDCA3AC:
		cid = "RBcloudtech";
		break;
	case 0x44656A:
		cid = "Mega Video Electronic(HK) Industry Co., Ltd";
		break;
	case 0xECA9FA:
		cid = "GUANGDONG GENIUS TECHNOLOGY CO.,LTD.";
		break;
	case 0x300C23:
		cid = "zte corporation";
		break;
	case 0x445F8C:
		cid = "Intercel Group Limited";
		break;
	case 0xA48D3B:
		cid = "Vizio, Inc";
		break;
	case 0x0C756C:
		cid = "Anaren Microwave, Inc.";
		break;
	case 0x5C5188:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x689AB7:
		cid = "Atelier Vision Corporation";
		break;
	case 0x640DE6:
		cid = "Petra Systems";
		break;
	case 0x283713:
		cid = "Shenzhen 3Nod Digital Technology Co., Ltd.";
		break;
	case 0x7CAB25:
		cid = "MESMO TECHNOLOGY INC.";
		break;
	case 0x74042B:
		cid = "Lenovo Mobile Communication (Wuhan) Company Limited";
		break;
	case 0x4455B1:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xA45602:
		cid = "fenglian Technology Co.,Ltd.";
		break;
	case 0xD06A1F:
		cid = "BSE CO.,LTD.";
		break;
	case 0xA88038:
		cid = "ShenZhen MovingComm Technology Co., Limited";
		break;
	case 0x805067:
		cid = "W & D TECHNOLOGY CORPORATION";
		break;
	case 0x402814:
		cid = "RFI Engineering";
		break;
	case 0x102C83:
		cid = "XIMEA";
		break;
	case 0xD468BA:
		cid = "Shenzhen Sundray Technologies Company Limited";
		break;
	case 0xA47B85:
		cid = "ULTIMEDIA Co Ltd,";
		break;
	case 0xCC37AB:
		cid = "Edgecore Networks Corportation";
		break;
	case 0xF80D60:
		cid = "CANON INC.";
		break;
	case 0xE02CB2:
		cid = "Lenovo Mobile Communication (Wuhan) Company Limited";
		break;
	case 0xDC15DB:
		cid = "Ge Ruili Intelligent Technology ( Beijing ) Co., Ltd.";
		break;
	case 0x30F335:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xE89120:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x546172:
		cid = "ZODIAC AEROSPACE SAS";
		break;
	case 0x54CD10:
		cid = "Panasonic Mobile Communications Co.,Ltd.";
		break;
	case 0xA4A1E4:
		cid = "Innotube, Inc.";
		break;
	case 0x706879:
		cid = "Saijo Denki International Co., Ltd.";
		break;
	case 0x343D98:
		cid = "JinQianMao Technology Co.,Ltd.";
		break;
	case 0x5804CB:
		cid = "Tianjin Huisun Technology Co.,Ltd.";
		break;
	case 0x1CB72C:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x287610:
		cid = "IgniteNet";
		break;
	case 0x68A378:
		cid = "FREEBOX SAS";
		break;
	case 0x746A3A:
		cid = "Aperi Corporation";
		break;
	case 0x1844E6:
		cid = "zte corporation";
		break;
	case 0xA8D409:
		cid = "USA 111 Inc";
		break;
	case 0x3089D3:
		cid = "HONGKONG UCLOUDLINK NETWORK TECHNOLOGY LIMITED";
		break;
	case 0x4CB76D:
		cid = "Novi Security";
		break;
	case 0x906CAC:
		cid = "Fortinet, Inc.";
		break;
	case 0x00323A:
		cid = "so-logic";
		break;
	case 0x64DB81:
		cid = "Syszone Co., Ltd.";
		break;
	case 0xC4BAA3:
		cid = "Beijing Winicssec Technologies Co., Ltd.";
		break;
	case 0x20635F:
		cid = "Abeeway";
		break;
	case 0xE00370:
		cid = "ShenZhen Continental Wireless Technology Co., Ltd.";
		break;
	case 0x709C8F:
		cid = "Nero AG";
		break;
	case 0x807459:
		cid = "K's Co.,Ltd.";
		break;
	case 0xCC9635:
		cid = "LVS Co.,Ltd.";
		break;
	case 0x700136:
		cid = "FATEK Automation Corporation";
		break;
	case 0xE03560:
		cid = "Challenger Supply Holdings, LLC";
		break;
	case 0x0CB5DE:
		cid = "Alcatel Lucent";
		break;
	case 0xE4CE70:
		cid = "Health & Life co., Ltd.";
		break;
	case 0xEC5A86:
		cid = "Yulong Computer Telecommunication Scientific (Shenzhen) Co.,Ltd";
		break;
	case 0xF87AEF:
		cid = "Rosonix Technology, Inc.";
		break;
	case 0x18B169:
		cid = "Sonicwall";
		break;
	case 0x1CC72D:
		cid = "Shenzhen Huapu Digital CO.,Ltd";
		break;
	case 0x38D82F:
		cid = "zte corporation";
		break;
	case 0x2CA2B4:
		cid = "Fortify Technologies, LLC";
		break;
	case 0xD87495:
		cid = "zte corporation";
		break;
	case 0x8C873B:
		cid = "Leica Camera AG";
		break;
	case 0x28E476:
		cid = "Pi-Coral";
		break;
	case 0x9C685B:
		cid = "Octonion SA";
		break;
	case 0xACABBF:
		cid = "AthenTek Inc.";
		break;
	case 0x5C41E7:
		cid = "Wiatec International Ltd.";
		break;
	case 0xDC0914:
		cid = "Talk-A-Phone Co.";
		break;
	case 0x142971:
		cid = "NEMOA ELECTRONICS (HK) CO. LTD";
		break;
	case 0xB47356:
		cid = "Hangzhou Treebear Networking Co., Ltd.";
		break;
	case 0xD88D5C:
		cid = "Elentec";
		break;
	case 0x50ADD5:
		cid = "Dynalec Corporation";
		break;
	case 0x28D98A:
		cid = "Hangzhou Konke Technology Co.,Ltd.";
		break;
	case 0xBC4DFB:
		cid = "Hitron Technologies. Inc";
		break;
	case 0x40EACE:
		cid = "FOUNDER BROADBAND NETWORK SERVICE CO.,LTD";
		break;
	case 0x10C67E:
		cid = "SHENZHEN JUCHIN TECHNOLOGY CO., LTD";
		break;
	case 0x3C4937:
		cid = "ASSMANN Electronic GmbH";
		break;
	case 0x904506:
		cid = "Tokyo Boeki Medisys Inc.";
		break;
	case 0x80A85D:
		cid = "Osterhout Design Group";
		break;
	case 0x9C6C15:
		cid = "Microsoft Corporation";
		break;
	case 0xEC74BA:
		cid = "Hirschmann Automation and Control GmbH";
		break;
	case 0x683C7D:
		cid = "Magic Intelligence Technology Limited";
		break;
	case 0x60128B:
		cid = "CANON INC.";
		break;
	case 0xECBAFE:
		cid = "GIROPTIC";
		break;
	case 0xE8447E:
		cid = "Bitdefender SRL";
		break;
	case 0x84C3E8:
		cid = "Vaillant GmbH";
		break;
	case 0xB88EC6:
		cid = "Stateless Networks";
		break;
	case 0x146B72:
		cid = "Shenzhen Fortune Ship Technology Co., Ltd.";
		break;
	case 0x40A5EF:
		cid = "Shenzhen Four Seas Global Link Network Technology Co., Ltd.";
		break;
	case 0x7C7A53:
		cid = "Phytrex Technology Corp.";
		break;
	case 0x4886E8:
		cid = "Microsoft Corporation";
		break;
	case 0x88E161:
		cid = "Art Beijing Science and Technology Development Co., Ltd.";
		break;
	case 0xB4A9FE:
		cid = "GHIA Technology (Shenzhen) LTD";
		break;
	case 0x700FC7:
		cid = "SHENZHEN IKINLOOP TECHNOLOGY CO.,LTD.";
		break;
	case 0xEC8009:
		cid = "NovaSparks";
		break;
	case 0x64002D:
		cid = "Powerlinq Co., LTD";
		break;
	case 0x101218:
		cid = "Korins Inc.";
		break;
	case 0xB04515:
		cid = "mira fitness,LLC.";
		break;
	case 0xA49D49:
		cid = "Ketra, Inc.";
		break;
	case 0xC09879:
		cid = "Acer Inc.";
		break;
	case 0x1C9ECB:
		cid = "Beijing Nari Smartchip Microelectronics Company Limited";
		break;
	case 0xD48DD9:
		cid = "Meld Technology, Inc";
		break;
	case 0x2C3796:
		cid = "CYBO CO.,LTD.";
		break;
	case 0x9470D2:
		cid = "WINFIRM TECHNOLOGY";
		break;
	case 0x2C2997:
		cid = "Microsoft Corporation";
		break;
	case 0x4CE2F1:
		cid = "sclak srl";
		break;
	case 0x344DEA:
		cid = "zte corporation";
		break;
	case 0x908C09:
		cid = "Total Phase";
		break;
	case 0x1C7E51:
		cid = "3bumen.com";
		break;
	case 0x380E7B:
		cid = "V.P.S. Thai Co., Ltd";
		break;
	case 0x38F33F:
		cid = "TATSUNO CORPORATION";
		break;
	case 0x28A5EE:
		cid = "Shenzhen SDGI CATV Co., Ltd";
		break;
	case 0x94CE31:
		cid = "CTS Limited";
		break;
	case 0x4CBB58:
		cid = "Chicony Electronics Co., Ltd.";
		break;
	case 0xC40006:
		cid = "Lipi Data Systems Ltd.";
		break;
	case 0x789CE7:
		cid = "Shenzhen Aikede Technology Co., Ltd";
		break;
	case 0x5C2ED2:
		cid = "ABC(XiSheng) Electronics Co.,Ltd";
		break;
	case 0xD8F710:
		cid = "Libre Wireless Technologies Inc.";
		break;
	case 0x68F728:
		cid = "LCFC(HeFei) Electronics Technology co., ltd";
		break;
	case 0xDCEC06:
		cid = "Heimi Network Technology Co., Ltd.";
		break;
	case 0x8870EF:
		cid = "SC Professional Trading Co., Ltd.";
		break;
	case 0x102F6B:
		cid = "Microsoft Corporation";
		break;
	case 0xACB74F:
		cid = "METEL s.r.o.";
		break;
	case 0xCCF538:
		cid = "3isysnetworks";
		break;
	case 0x04DEDB:
		cid = "Rockport Networks Inc";
		break;
	case 0x68F06D:
		cid = "ALONG INDUSTRIAL CO., LIMITED";
		break;
	case 0x54F876:
		cid = "ABB AG";
		break;
	case 0x84930C:
		cid = "InCoax Networks Europe AB";
		break;
	case 0xD47B35:
		cid = "NEO Monitors AS";
		break;
	case 0xD8FB11:
		cid = "AXACORE";
		break;
	case 0xC8D019:
		cid = "Shanghai Tigercel Communication Technology Co.,Ltd";
		break;
	case 0x18A958:
		cid = "PROVISION THAI CO., LTD.";
		break;
	case 0xD8DECE:
		cid = "ISUNG CO.,LTD";
		break;
	case 0x2053CA:
		cid = "Risk Technology Ltd";
		break;
	case 0x142BD6:
		cid = "Guangdong Appscomm Co.,Ltd";
		break;
	case 0xB025AA:
		cid = "Private";
		break;
	case 0x408256:
		cid = "Continental Automotive GmbH";
		break;
	case 0xD866EE:
		cid = "BOXIN COMMUNICATION CO.,LTD.";
		break;
	case 0x3C189F:
		cid = "Nokia Corporation";
		break;
	case 0x2829CC:
		cid = "Corsa Technology Incorporated";
		break;
	case 0xFC790B:
		cid = "Hitachi High Technologies America, Inc.";
		break;
	case 0x28E6E9:
		cid = "SIS Sat Internet Services GmbH";
		break;
	case 0xBC4E5D:
		cid = "ZhongMiao Technology Co., Ltd.";
		break;
	case 0x08F728:
		cid = "GLOBO Multimedia Sp. z o.o. Sp.k.";
		break;
	case 0x70720D:
		cid = "Lenovo Mobile Communication Technology Ltd.";
		break;
	case 0x8401A7:
		cid = "Greyware Automation Products, Inc";
		break;
	case 0xC4C9EC:
		cid = "Gugaoo   HK Limited";
		break;
	case 0xF406A5:
		cid = "Hangzhou Bianfeng Networking Technology Co., Ltd.";
		break;
	case 0x4C3909:
		cid = "HPL Electric & Power Private Limited";
		break;
	case 0x7CFE4E:
		cid = "Shenzhen Safe vision Technology Co.,LTD";
		break;
	case 0x54EF92:
		cid = "Shenzhen Elink Technology Co., LTD";
		break;
	case 0x800E24:
		cid = "ForgetBox";
		break;
	case 0xFCE186:
		cid = "A3M Co., LTD";
		break;
	case 0xCCB691:
		cid = "NECMagnusCommunications";
		break;
	case 0x40167E:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0xC89F1D:
		cid = "SHENZHEN COMMUNICATION TECHNOLOGIES CO.,LTD";
		break;
	case 0x983713:
		cid = "PT.Navicom Indonesia";
		break;
	case 0xACA919:
		cid = "TrekStor GmbH";
		break;
	case 0x84850A:
		cid = "Hella Sonnen- und Wetterschutztechnik GmbH";
		break;
	case 0x183009:
		cid = "Woojin Industrial Systems Co., Ltd.";
		break;
	case 0x6081F9:
		cid = "Helium Systems, Inc";
		break;
	case 0x34C5D0:
		cid = "Hagleitner Hygiene International GmbH";
		break;
	case 0x74DBD1:
		cid = "Ebay Inc";
		break;
	case 0x3431C4:
		cid = "AVM GmbH";
		break;
	case 0xDC537C:
		cid = "Compal Broadband Networks, Inc.";
		break;
	case 0xA00627:
		cid = "NEXPA System";
		break;
	case 0x303335:
		cid = "Boosty";
		break;
	case 0x18D5B6:
		cid = "SMG Holdings LLC";
		break;
	case 0xC8FF77:
		cid = "Dyson Limited";
		break;
	case 0xDCF110:
		cid = "Nokia Corporation";
		break;
	case 0x54DF00:
		cid = "Ulterius Technologies, LLC";
		break;
	case 0xE01D38:
		cid = "Beijing HuaqinWorld Technology Co.,Ltd";
		break;
	case 0xD80CCF:
		cid = "C.G.V. S.A.S.";
		break;
	case 0x143DF2:
		cid = "Beijing Shidai Hongyuan Network Communication Co.,Ltd";
		break;
	case 0xB0D59D:
		cid = "Shenzhen Zowee Technology Co., Ltd";
		break;
	case 0xC4913A:
		cid = "Shenzhen Sanland Electronic Co., ltd.";
		break;
	case 0xA46032:
		cid = "MRV Communications (Networks) LTD";
		break;
	case 0x205A00:
		cid = "Coval";
		break;
	case 0x0C2026:
		cid = "noax Technologies AG";
		break;
	case 0x880FB6:
		cid = "Jabil Circuits India Pvt Ltd,-EHTP unit";
		break;
	case 0xC4626B:
		cid = "ZPT Vigantice";
		break;
	case 0x74F85D:
		cid = "Berkeley Nucleonics Corp";
		break;
	case 0x48EE07:
		cid = "Silver Palm Technologies LLC";
		break;
	case 0x9CFBF1:
		cid = "MESOMATIC GmbH & Co.KG";
		break;
	case 0x94C014:
		cid = "Sorter Sp. j. Konrad Grzeszczyk MichaA, Ziomek";
		break;
	case 0x1027BE:
		cid = "TVIP";
		break;
	case 0x2087AC:
		cid = "AES motomation";
		break;
	case 0xA824EB:
		cid = "ZAO NPO Introtest";
		break;
	case 0x447E76:
		cid = "Trek Technology (S) Pte Ltd";
		break;
	case 0xE8FC60:
		cid = "ELCOM Innovations Private Limited";
		break;
	case 0x1CFCBB:
		cid = "Realfiction ApS";
		break;
	case 0xB0EC8F:
		cid = "GMX SAS";
		break;
	case 0xC40E45:
		cid = "ACK Networks,Inc.";
		break;
	case 0x5C254C:
		cid = "Avire Global Pte Ltd";
		break;
	case 0x7C1A03:
		cid = "8Locations Co., Ltd.";
		break;
	case 0x481842:
		cid = "Shanghai Winaas Co. Equipment Co. Ltd.";
		break;
	case 0xD09C30:
		cid = "Foster Electric Company, Limited";
		break;
	case 0x78FEE2:
		cid = "Shanghai Diveo Technology Co., Ltd";
		break;
	case 0x386C9B:
		cid = "Ivy Biomedical";
		break;
	case 0xE44C6C:
		cid = "Shenzhen Guo Wei Electronic Co,. Ltd.";
		break;
	case 0x008B43:
		cid = "RFTECH";
		break;
	case 0x2C957F:
		cid = "zte corporation";
		break;
	case 0x242642:
		cid = "SHARP Corporation.";
		break;
	case 0x282246:
		cid = "Beijing Sinoix Communication Co., LTD";
		break;
	case 0xFC1607:
		cid = "Taian Technology(Wuxi) Co.,Ltd.";
		break;
	case 0xCC89FD:
		cid = "Nokia Corporation";
		break;
	case 0xE86183:
		cid = "Black Diamond Advanced Technology, LLC";
		break;
	case 0xC4824E:
		cid = "Changzhou Uchip Electronics Co., LTD.";
		break;
	case 0x24A87D:
		cid = "Panasonic Automotive Systems Asia Pacific(Thailand)Co.,Ltd.";
		break;
	case 0x78EC74:
		cid = "Kyland-USA";
		break;
	case 0x28C825:
		cid = "DellKing Industrial Co., Ltd";
		break;
	case 0x64E892:
		cid = "Morio Denki Co., Ltd.";
		break;
	case 0x086DF2:
		cid = "Shenzhen MIMOWAVE Technology Co.,Ltd";
		break;
	case 0x48D0CF:
		cid = "Universal Electronics, Inc.";
		break;
	case 0xDCC793:
		cid = "Nokia Corporation";
		break;
	case 0xE03F49:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0xD8EE78:
		cid = "Moog Protokraft";
		break;
	case 0xF4B6E5:
		cid = "TerraSem Co.,Ltd";
		break;
	case 0x28BB59:
		cid = "RNET Technologies, Inc.";
		break;
	case 0x7C8D91:
		cid = "Shanghai Hongzhuo Information Technology co.,LTD";
		break;
	case 0xA881F1:
		cid = "BMEYE B.V.";
		break;
	case 0x241148:
		cid = "Entropix, LLC";
		break;
	case 0x30B5C2:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xF85C45:
		cid = "IC Nexus Co. Ltd.";
		break;
	case 0x04DB8A:
		cid = "Suntech International Ltd.";
		break;
	case 0x083F76:
		cid = "Intellian Technologies, Inc.";
		break;
	case 0xD0634D:
		cid = "Meiko Maschinenbau GmbH &amp; Co. KG";
		break;
	case 0x889CA6:
		cid = "BTB Korea INC";
		break;
	case 0xB0DA00:
		cid = "CERA ELECTRONIQUE";
		break;
	case 0x447098:
		cid = "MING HONG TECHNOLOGY (SHEN ZHEN) LIMITED";
		break;
	case 0x00EEBD:
		cid = "HTC Corporation";
		break;
	case 0x48B5A7:
		cid = "Glory Horse Industries Ltd.";
		break;
	case 0xDC5E36:
		cid = "Paterson Technology";
		break;
	case 0x50E0C7:
		cid = "TurControlSystme AG";
		break;
	case 0x9CD643:
		cid = "D-Link International";
		break;
	case 0x28FC51:
		cid = "The Electric Controller and Manufacturing Co., LLC";
		break;
	case 0x34A5E1:
		cid = "Sensorist ApS";
		break;
	case 0xA4E9A3:
		cid = "Honest Technology Co., Ltd";
		break;
	case 0xC4E92F:
		cid = "AB Sciex";
		break;
	case 0x9C216A:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xF862AA:
		cid = "xn systems";
		break;
	case 0xA4059E:
		cid = "STA Infinity LLP";
		break;
	case 0x6C15F9:
		cid = "Nautronix Limited";
		break;
	case 0x680AD7:
		cid = "Yancheng Kecheng Optoelectronic Technology Co., Ltd";
		break;
	case 0xBC8893:
		cid = "VILLBAU Ltd.";
		break;
	case 0x643F5F:
		cid = "Exablaze";
		break;
	case 0xE8F226:
		cid = "MILLSON CUSTOM SOLUTIONS INC.";
		break;
	case 0x7060DE:
		cid = "LaVision GmbH";
		break;
	case 0xFCFE77:
		cid = "Hitachi Reftechno, Inc.";
		break;
	case 0x70533F:
		cid = "Alfa Instrumentos Eletronicos Ltda.";
		break;
	case 0x448A5B:
		cid = "Micro-Star INT'L CO., LTD.";
		break;
	case 0x68193F:
		cid = "Digital Airways";
		break;
	case 0x5CD61F:
		cid = "Qardio, Inc";
		break;
	case 0x902083:
		cid = "General Engine Management Systems Ltd.";
		break;
	case 0xC03580:
		cid = "A&R TECH";
		break;
	case 0x1446E4:
		cid = "AVISTEL";
		break;
	case 0x907990:
		cid = "Benchmark Electronics Romania SRL";
		break;
	case 0xC49380:
		cid = "Speedytel technology";
		break;
	case 0xB4A82B:
		cid = "Histar Digital Electronics Co., Ltd.";
		break;
	case 0x60A9B0:
		cid = "Merchandising Technologies, Inc";
		break;
	case 0x007DFA:
		cid = "Volkswagen Group of America";
		break;
	case 0x6024C1:
		cid = "Jiangsu Zhongxun Electronic Technology Co., Ltd";
		break;
	case 0x6C5AB5:
		cid = "TCL Technoly Electronics (Huizhou) Co., Ltd.";
		break;
	case 0x88789C:
		cid = "Game Technologies SA";
		break;
	case 0x18AA45:
		cid = "Fon Technology";
		break;
	case 0x549359:
		cid = "SHENZHEN TWOWING TECHNOLOGIES CO.,LTD.";
		break;
	case 0x284430:
		cid = "GenesisTechnical Systems (UK) Ltd";
		break;
	case 0x9843DA:
		cid = "INTERTECH";
		break;
	case 0xB07908:
		cid = "Cummings Engineering";
		break;
	case 0x04CB1D:
		cid = "Traka plc";
		break;
	case 0xB87AC9:
		cid = "Siemens Ltd.";
		break;
	case 0xB0989F:
		cid = "LG CNS";
		break;
	case 0x3C300C:
		cid = "Dewar Electronics Pty Ltd";
		break;
	case 0x78B5D2:
		cid = "Ever Treasure Industrial Limited";
		break;
	case 0xA409CB:
		cid = "Alfred Kaercher GmbH &amp; Co KG";
		break;
	case 0xC445EC:
		cid = "Shanghai Yali Electron Co.,LTD";
		break;
	case 0xE8611F:
		cid = "Dawning Information Industry Co.,Ltd";
		break;
	case 0x0CA694:
		cid = "Sunitec Enterprise Co.,Ltd";
		break;
	case 0x146080:
		cid = "zte corporation";
		break;
	case 0x986CF5:
		cid = "zte corporation";
		break;
	case 0x78491D:
		cid = "The Will-Burt Company";
		break;
	case 0x74D435:
		cid = "GIGA-BYTE TECHNOLOGY CO.,LTD.";
		break;
	case 0x840F45:
		cid = "Shanghai GMT Digital Technologies Co., Ltd";
		break;
	case 0xD8270C:
		cid = "MaxTronic International Co., Ltd.";
		break;
	case 0xE80410:
		cid = "Private";
		break;
	case 0x8C088B:
		cid = "Remote Solution";
		break;
	case 0xA47760:
		cid = "Nokia Corporation";
		break;
	case 0x24A495:
		cid = "Thales Canada Inc.";
		break;
	case 0x883612:
		cid = "SRC Computers, LLC";
		break;
	case 0xE0A198:
		cid = "NOJA Power Switchgear Pty Ltd";
		break;
	case 0xCC7B35:
		cid = "zte corporation";
		break;
	case 0x04D437:
		cid = "ZNV";
		break;
	case 0xCCF407:
		cid = "EUKREA ELECTROMATIQUE SARL";
		break;
	case 0xBC2BD7:
		cid = "Revogi Innovation Co., Ltd.";
		break;
	case 0x24ECD6:
		cid = "CSG Science & Technology Co.,Ltd.Hefei";
		break;
	case 0x102279:
		cid = "ZeroDesktop, Inc.";
		break;
	case 0xCC4AE1:
		cid = "fourtec -Fourier Technologies";
		break;
	case 0xA4895B:
		cid = "ARK INFOSOLUTIONS PVT LTD";
		break;
	case 0x38EC11:
		cid = "Novatek Microelectronics Corp.";
		break;
	case 0xA8CCC5:
		cid = "Saab AB (publ)";
		break;
	case 0x988E4A:
		cid = "NOXUS(BEIJING) TECHNOLOGY CO.,LTD";
		break;
	case 0x1C4158:
		cid = "Gemalto M2M GmbH";
		break;
	case 0x541B5D:
		cid = "Techno-Innov";
		break;
	case 0x78CB33:
		cid = "DHC Software Co.,Ltd";
		break;
	case 0x507691:
		cid = "Tekpea, Inc.";
		break;
	case 0xA4C0C7:
		cid = "ShenZhen Hitom Communication Technology Co..LTD";
		break;
	case 0xEC2257:
		cid = "JiangSu NanJing University Electronic Information Technology Co.,Ltd";
		break;
	case 0x341A4C:
		cid = "SHENZHEN WEIBU ELECTRONICS CO.,LTD.";
		break;
	case 0xA09BBD:
		cid = "Total Aviation Solutions Pty Ltd";
		break;
	case 0xE8481F:
		cid = "Advanced Automotive Antennas";
		break;
	case 0x18D6CF:
		cid = "Kurth Electronic GmbH";
		break;
	case 0xE07F88:
		cid = "EVIDENCE Network SIA";
		break;
	case 0x1C7CC7:
		cid = "Coriant GmbH";
		break;
	case 0x542CEA:
		cid = "PROTECTRON";
		break;
	case 0x00C5DB:
		cid = "Datatech Sistemas Digitales Avanzados SL";
		break;
	case 0x109AB9:
		cid = "Tosibox Oy";
		break;
	case 0xF842FB:
		cid = "Yasuda Joho Co.,ltd.";
		break;
	case 0x887398:
		cid = "K2E Tekpoint";
		break;
	case 0x68EE96:
		cid = "Cisco SPVTG";
		break;
	case 0xFC6018:
		cid = "Zhejiang Kangtai Electric Co., Ltd.";
		break;
	case 0x303EAD:
		cid = "Sonavox Canada Inc";
		break;
	case 0x444A65:
		cid = "Silverflare Ltd.";
		break;
	case 0x50A0BF:
		cid = "Alba Fiber Systems Inc.";
		break;
	case 0x3C977E:
		cid = "IPS Technology Limited";
		break;
	case 0xF02405:
		cid = "OPUS High Technology Corporation";
		break;
	case 0xD8B04C:
		cid = "Jinan USR IOT Technology Co., Ltd.";
		break;
	case 0x646EEA:
		cid = "Iskratel d.o.o.";
		break;
	case 0x043D98:
		cid = "ChongQing QingJia Electronics CO.,LTD";
		break;
	case 0xE8BB3D:
		cid = "Sino Prime-Tech Limited";
		break;
	case 0x98CDB4:
		cid = "Virident Systems, Inc.";
		break;
	case 0x54E3B0:
		cid = "JVL Industri Elektronik";
		break;
	case 0x640B4A:
		cid = "Digital Telecom Technology Limited";
		break;
	case 0xF42012:
		cid = "Cuciniale GmbH";
		break;
	case 0x18104E:
		cid = "CEDINT-UPM";
		break;
	case 0x2C7B84:
		cid = "OOO Petr Telegin";
		break;
	case 0x540536:
		cid = "Vivago Oy";
		break;
	case 0xE0FAEC:
		cid = "Platan sp. z o.o. sp. k.";
		break;
	case 0xF08EDB:
		cid = "VeloCloud Networks";
		break;
	case 0xB8DC87:
		cid = "IAI Corporation";
		break;
	case 0x7C6FF8:
		cid = "ShenZhen ACTO Digital Video Technology Co.,Ltd.";
		break;
	case 0x8C4B59:
		cid = "3D Imaging & Simulations Corp";
		break;
	case 0xA4FB8D:
		cid = "Hangzhou Dunchong Technology Co.Ltd";
		break;
	case 0x0075E1:
		cid = "Ampt, LLC";
		break;
	case 0xCC04B4:
		cid = "Select Comfort";
		break;
	case 0x284FCE:
		cid = "Liaoning Wontel Science and Technology Development Co.,Ltd.";
		break;
	case 0x0CC81F:
		cid = "Summer Infant, Inc.";
		break;
	case 0xD86960:
		cid = "Steinsvik";
		break;
	case 0x442AFF:
		cid = "E3 Technology, Inc.";
		break;
	case 0x0C9301:
		cid = "PT. Prasimax Inovasi Teknologi";
		break;
	case 0x60699B:
		cid = "isepos GmbH";
		break;
	case 0xB830A8:
		cid = "Road-Track Telematics Development";
		break;
	case 0x542160:
		cid = "Resolution Products";
		break;
	case 0x88462A:
		cid = "Telechips Inc.";
		break;
	case 0xA897DC:
		cid = "IBM";
		break;
	case 0xE8DE27:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xFC229C:
		cid = "Han Kyung I Net Co.,Ltd.";
		break;
	case 0x148692:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x1832A2:
		cid = "LAON TECHNOLOGY CO., LTD.";
		break;
	case 0x985C93:
		cid = "SBG Systems SAS";
		break;
	case 0x64E599:
		cid = "EFM Networks";
		break;
	case 0xF499AC:
		cid = "WEBER Schraubautomaten GmbH";
		break;
	case 0x8CC7D0:
		cid = "zhejiang ebang communication co.,ltd";
		break;
	case 0x70820E:
		cid = "as electronics GmbH";
		break;
	case 0xDC2BCA:
		cid = "Zera GmbH";
		break;
	case 0x508D6F:
		cid = "CHAHOO Limited";
		break;
	case 0x68831A:
		cid = "Pandora Mobility Corporation";
		break;
	case 0xD4223F:
		cid = "Lenovo Mobile Communication Technology Ltd.";
		break;
	case 0x0868D0:
		cid = "Japan System Design";
		break;
	case 0x103DEA:
		cid = "HFC Technology (Beijing) Ltd. Co.";
		break;
	case 0x2C7B5A:
		cid = "Milper Ltd";
		break;
	case 0x185AE8:
		cid = "Zenotech.Co.,Ltd";
		break;
	case 0xE0AEED:
		cid = "LOENK";
		break;
	case 0xD4EE07:
		cid = "HIWIFI Co., Ltd.";
		break;
	case 0x908260:
		cid = "IEEE 1904.1 Working Group";
		break;
	case 0xFCAD0F:
		cid = "QTS NETWORKS";
		break;
	case 0x984C04:
		cid = "Zhangzhou Keneng Electrical Equipment Co Ltd";
		break;
	case 0xCC047C:
		cid = "G-WAY Microwave";
		break;
	case 0x44F849:
		cid = "Union Pacific Railroad";
		break;
	case 0x1CFA68:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xD0BE2C:
		cid = "CNSLink Co., Ltd.";
		break;
	case 0x281878:
		cid = "Microsoft Corporation";
		break;
	case 0xE457A8:
		cid = "Stuart Manufacturing, Inc.";
		break;
	case 0x2481AA:
		cid = "KSH International Co., Ltd.";
		break;
	case 0x789966:
		cid = "Musilab Electronics (DongGuan)Co.,Ltd.";
		break;
	case 0xEC2C49:
		cid = "University of Tokyo";
		break;
	case 0xCC5D57:
		cid = "Information  System Research Institute,Inc.";
		break;
	case 0x1C37BF:
		cid = "Cloudium Systems Ltd.";
		break;
	case 0x249504:
		cid = "SFR";
		break;
	case 0x308999:
		cid = "Guangdong East Power Co.,";
		break;
	case 0xD4A499:
		cid = "InView Technology Corporation";
		break;
	case 0xAC4122:
		cid = "Eclipse Electronic Systems Inc.";
		break;
	case 0xA073FC:
		cid = "Rancore Technologies Private Limited";
		break;
	case 0x846223:
		cid = "Shenzhen Coship Electronics Co., Ltd.";
		break;
	case 0xA4E991:
		cid = "SISTEMAS AUDIOVISUALES ITELSIS S.L.";
		break;
	case 0x84F493:
		cid = "OMS spol. s.r.o.";
		break;
	case 0x386793:
		cid = "Asia Optical Co., Inc.";
		break;
	case 0xBCD177:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xC8B373:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x983071:
		cid = "DAIKYUNG VASCOM";
		break;
	case 0x0C0400:
		cid = "Jantar d.o.o.";
		break;
	case 0xC04301:
		cid = "Epec Oy";
		break;
	case 0x687CD5:
		cid = "Y Soft Corporation, a.s.";
		break;
	case 0xE07C62:
		cid = "Whistle Labs, Inc.";
		break;
	case 0xFC4499:
		cid = "Swarco LEA d.o.o.";
		break;
	case 0x0C8484:
		cid = "Zenovia Electronics Inc.";
		break;
	case 0x5CF370:
		cid = "CC&C Technologies, Inc";
		break;
	case 0xA01C05:
		cid = "NIMAX TELECOM CO.,LTD.";
		break;
	case 0xF80DEA:
		cid = "ZyCast Technology Inc.";
		break;
	case 0x1800DB:
		cid = "Fitbit Inc.";
		break;
	case 0x50A715:
		cid = "Aboundi, Inc.";
		break;
	case 0xFC35E6:
		cid = "Visteon corp";
		break;
	case 0xD866C6:
		cid = "Shenzhen Daystar Technology Co.,ltd";
		break;
	case 0x1836FC:
		cid = "Elecsys International Corporation";
		break;
	case 0xF48139:
		cid = "CANON INC.";
		break;
	case 0xD40BB9:
		cid = "Solid Semecs bv.";
		break;
	case 0x748E08:
		cid = "Bestek Corp.";
		break;
	case 0xB8C855:
		cid = "Shanghai GBCOM Communication Technology Co.,Ltd.";
		break;
	case 0xC47DFE:
		cid = "A.N. Solutions GmbH";
		break;
	case 0xE031D0:
		cid = "SZ Telstar CO., LTD";
		break;
	case 0x70C6AC:
		cid = "Bosch Automotive Aftermarket";
		break;
	case 0x2C69BA:
		cid = "RF Controls, LLC";
		break;
	case 0xDC5726:
		cid = "Power-One";
		break;
	case 0x2C245F:
		cid = "Babolat VS";
		break;
	case 0xD464F7:
		cid = "CHENGDU USEE DIGITAL TECHNOLOGY CO., LTD";
		break;
	case 0xA47ACF:
		cid = "VIBICOM COMMUNICATIONS INC.";
		break;
	case 0xCC3C3F:
		cid = "SA.S.S. Datentechnik AG";
		break;
	case 0x905692:
		cid = "Autotalks Ltd.";
		break;
	case 0x0C2AE7:
		cid = "Beijing General Research Institute of Mining and Metallurgy";
		break;
	case 0xDCD52A:
		cid = "Sunny Heart Limited";
		break;
	case 0xC4C755:
		cid = "Beijing HuaqinWorld Technology Co.,Ltd";
		break;
	case 0x9C79AC:
		cid = "Suntec Software(Shanghai) Co., Ltd.";
		break;
	case 0xF8DFA8:
		cid = "zte corporation";
		break;
	case 0xACA430:
		cid = "Peerless AV";
		break;
	case 0xB4AB2C:
		cid = "MtM Technology Corporation";
		break;
	case 0x74372F:
		cid = "Tongfang Shenzhen Cloudcomputing Technology Co.,Ltd";
		break;
	case 0xBC51FE:
		cid = "Swann communications Pty Ltd";
		break;
	case 0xD40FB2:
		cid = "Applied Micro Electronics AME bv";
		break;
	case 0x74FE48:
		cid = "ADVANTECH CO., LTD.";
		break;
	case 0xD0B498:
		cid = "Robert Bosch LLC Automotive Electronics";
		break;
	case 0x80B95C:
		cid = "ELFTECH Co., Ltd.";
		break;
	case 0xE85AA7:
		cid = "LLC Emzior";
		break;
	case 0x242FFA:
		cid = "Toshiba Global Commerce Solutions";
		break;
	case 0xA0BAB8:
		cid = "Pixon Imaging";
		break;
	case 0x9CE1D6:
		cid = "Junger Audio-Studiotechnik GmbH";
		break;
	case 0xE4E409:
		cid = "LEIFHEIT AG";
		break;
	case 0x004D32:
		cid = "Andon Health Co.,Ltd.";
		break;
	case 0xC46DF1:
		cid = "DataGravity";
		break;
	case 0x28D244:
		cid = "LCFC(HeFei) Electronics Technology Co., Ltd.";
		break;
	case 0xACE87E:
		cid = "Bytemark Computer Consulting Ltd";
		break;
	case 0x60CDC5:
		cid = "Taiwan Carol Electronics., Ltd";
		break;
	case 0x60C5A8:
		cid = "Beijing LT Honway Technology Co.,Ltd";
		break;
	case 0xB4DF3B:
		cid = "Chromlech";
		break;
	case 0xA46E79:
		cid = "DFT System Co.Ltd";
		break;
	case 0x94DE80:
		cid = "GIGA-BYTE TECHNOLOGY CO.,LTD.";
		break;
	case 0xC88A83:
		cid = "Dongguan HuaHong Electronics Co.,Ltd";
		break;
	case 0x0CC655:
		cid = "Wuxi YSTen Technology Co.,Ltd.";
		break;
	case 0xD410CF:
		cid = "Huanshun Network Science and Technology Co., Ltd.";
		break;
	case 0xB80415:
		cid = "Bayan Audio";
		break;
	case 0x84C8B1:
		cid = "Incognito Software Systems Inc.";
		break;
	case 0x645A04:
		cid = "Chicony Electronics Co., Ltd.";
		break;
	case 0x5C89D4:
		cid = "Beijing Banner Electric Co.,Ltd";
		break;
	case 0x984CD3:
		cid = "Mantis Deposition";
		break;
	case 0x8C4CDC:
		cid = "PLANEX COMMUNICATIONS INC.";
		break;
	case 0xD063B4:
		cid = "SolidRun Ltd.";
		break;
	case 0x2C3BFD:
		cid = "Netstor Technology Co., Ltd.";
		break;
	case 0xF073AE:
		cid = "PEAK-System Technik";
		break;
	case 0x684CA8:
		cid = "Shenzhen Herotel Tech. Co., Ltd.";
		break;
	case 0xF4472A:
		cid = "Nanjing Rousing Sci. and Tech. Industrial Co., Ltd";
		break;
	case 0x185253:
		cid = "Pixord Corporation";
		break;
	case 0xFCA9B0:
		cid = "MIARTECH (SHANGHAI),INC.";
		break;
	case 0x80D733:
		cid = "QSR Automations, Inc.";
		break;
	case 0x8C3330:
		cid = "EmFirst Co., Ltd.";
		break;
	case 0x08E5DA:
		cid = "NANJING FUJITSU COMPUTER PRODUCTS CO.,LTD.";
		break;
	case 0x5884E4:
		cid = "IP500 Alliance e.V.";
		break;
	case 0x04E9E5:
		cid = "PJRC.COM, LLC";
		break;
	case 0x703811:
		cid = "Invensys Rail";
		break;
	case 0xACE64B:
		cid = "Shenzhen Baojia Battery Technology Co., Ltd.";
		break;
	case 0x303294:
		cid = "W-IE-NE-R Plein & Baus GmbH";
		break;
	case 0xEC473C:
		cid = "Redwire, LLC";
		break;
	case 0x5481AD:
		cid = "Eagle Research Corporation";
		break;
	case 0x7C822D:
		cid = "Nortec";
		break;
	case 0x745FAE:
		cid = "TSL PPL";
		break;
	case 0x8462A6:
		cid = "EuroCB (Phils), Inc.";
		break;
	case 0x80FA5B:
		cid = "CLEVO CO.";
		break;
	case 0xE4F365:
		cid = "Time-O-Matic, Inc.";
		break;
	case 0x18550F:
		cid = "Cisco SPVTG";
		break;
	case 0x1C9179:
		cid = "Integrated System Technologies Ltd";
		break;
	case 0x38F597:
		cid = "home2net GmbH";
		break;
	case 0x386645:
		cid = "OOSIC Technology CO.,Ltd";
		break;
	case 0xD0DFB2:
		cid = "Genie Networks Limited";
		break;
	case 0x808B5C:
		cid = "Shenzhen Runhuicheng Technology Co., Ltd";
		break;
	case 0x04586F:
		cid = "Sichuan Whayer information industry Co.,LTD";
		break;
	case 0x449B78:
		cid = "The Now Factory";
		break;
	case 0xD052A8:
		cid = "Physical Graph Corporation";
		break;
	case 0x34F62D:
		cid = "SHARP Corporation";
		break;
	case 0xC4EBE3:
		cid = "RRCN SAS";
		break;
	case 0x4C1A95:
		cid = "Novakon Co., Ltd.";
		break;
	case 0xC04A00:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x9C3178:
		cid = "Foshan Huadian Intelligent Communications Teachnologies Co.,Ltd";
		break;
	case 0x48BE2D:
		cid = "Symanitron";
		break;
	case 0xB86091:
		cid = "Onnet Technologies and Innovations LLC";
		break;
	case 0xD4CA6E:
		cid = "u-blox AG";
		break;
	case 0xC011A6:
		cid = "Fort-Telecom ltd.";
		break;
	case 0xB8DAF1:
		cid = "Strahlenschutz- Entwicklungs- und Ausruestungsgesellschaft mbH";
		break;
	case 0x1C11E1:
		cid = "Wartsila Finland Oy";
		break;
	case 0x50465D:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x74BFA1:
		cid = "HYUNTECK";
		break;
	case 0xF8AA8A:
		cid = "Axview Technology (Shenzhen) Co.,Ltd";
		break;
	case 0x5894CF:
		cid = "Vertex Standard LMR, Inc.";
		break;
	case 0x2C5AA3:
		cid = "PROMATE ELECTRONIC CO.LTD";
		break;
	case 0xB4009C:
		cid = "CableWorld Ltd.";
		break;
	case 0x803FD6:
		cid = "bytes at work AG";
		break;
	case 0x645FFF:
		cid = "Nicolet Neuro";
		break;
	case 0x2829D9:
		cid = "GlobalBeiMing technology (Beijing)Co. Ltd";
		break;
	case 0x189A67:
		cid = "CSE-Servelec Limited";
		break;
	case 0x38A5B6:
		cid = "SHENZHEN MEGMEET ELECTRICAL CO.,LTD";
		break;
	case 0xE43FA2:
		cid = "Wuxi DSP Technologies Inc.";
		break;
	case 0x00FD4C:
		cid = "NEVATEC";
		break;
	case 0x6045BD:
		cid = "Microsoft";
		break;
	case 0x9C54CA:
		cid = "Zhengzhou VCOM Science and Technology Co.,Ltd";
		break;
	case 0x388AB7:
		cid = "ITC Networks";
		break;
	case 0xBCC23A:
		cid = "Thomson Video Networks";
		break;
	case 0x00BF15:
		cid = "Genetec Inc.";
		break;
	case 0x20F85E:
		cid = "Delta Electronics";
		break;
	case 0x68CE4E:
		cid = "L-3 Communications Infrared Products";
		break;
	case 0x68B6FC:
		cid = "Hitron Technologies. Inc";
		break;
	case 0x7C160D:
		cid = "Saia-Burgess Controls AG";
		break;
	case 0xA4D18F:
		cid = "Shenzhen Skyee Optical Fiber Communication Technology Ltd.";
		break;
	case 0x0C565C:
		cid = "HyBroad Vision (Hong Kong) Technology Co Ltd";
		break;
	case 0x649FF7:
		cid = "Kone OYj";
		break;
	case 0x4C068A:
		cid = "Basler Electric Company";
		break;
	case 0xE0A30F:
		cid = "Pevco";
		break;
	case 0x5C1737:
		cid = "I-View Now, LLC.";
		break;
	case 0x049C62:
		cid = "BMT Medical Technology s.r.o.";
		break;
	case 0xC4BA99:
		cid = "I+ME Actia Informatik und Mikro-Elektronik GmbH";
		break;
	case 0x0C2A69:
		cid = "electric imp, incorporated";
		break;
	case 0xBC811F:
		cid = "Ingate Systems";
		break;
	case 0x34E0CF:
		cid = "zte corporation";
		break;
	case 0x6C40C6:
		cid = "Nimbus Data Systems, Inc.";
		break;
	case 0x503F56:
		cid = "Syncmold Enterprise Corp";
		break;
	case 0xD04CC1:
		cid = "SINTRONES Technology Corp.";
		break;
	case 0xDC9FA4:
		cid = "Nokia Corporation";
		break;
	case 0x44C39B:
		cid = "OOO RUBEZH NPO";
		break;
	case 0x58C232:
		cid = "NEC Corporation";
		break;
	case 0xD8C691:
		cid = "Hichan Technology Corp.";
		break;
	case 0x7C02BC:
		cid = "Hansung Electronics Co. LTD";
		break;
	case 0x1848D8:
		cid = "Fastback Networks";
		break;
	case 0x702393:
		cid = "fos4X GmbH";
		break;
	case 0x58ECE1:
		cid = "Newport Corporation";
		break;
	case 0x14358B:
		cid = "Mediabridge Products, LLC.";
		break;
	case 0x34996F:
		cid = "VPI Engineering";
		break;
	case 0x241064:
		cid = "Shenzhen Ecsino Tecnical Co. Ltd";
		break;
	case 0x10D1DC:
		cid = "INSTAR Deutschland GmbH";
		break;
	case 0xD8160A:
		cid = "Nippon Electro-Sensory Devices";
		break;
	case 0xF45433:
		cid = "Rockwell Automation";
		break;
	case 0xEC9327:
		cid = "MEMMERT GmbH + Co. KG";
		break;
	case 0x1C43EC:
		cid = "JAPAN CIRCUIT CO.,LTD";
		break;
	case 0xBC28D6:
		cid = "Rowley Associates Limited";
		break;
	case 0xF05F5A:
		cid = "Getriebebau NORD GmbH and Co. KG";
		break;
	case 0x009569:
		cid = "LSD Science and Technology Co.,Ltd.";
		break;
	case 0x34C803:
		cid = "Nokia Corporation";
		break;
	case 0x5011EB:
		cid = "SilverNet Ltd";
		break;
	case 0x5CD41B:
		cid = "UCZOON Technology Co., LTD";
		break;
	case 0x783CE3:
		cid = "Kai-EE";
		break;
	case 0x0868EA:
		cid = "EITO ELECTRONICS CO., LTD.";
		break;
	case 0x5C4A26:
		cid = "Enguity Technology Corp";
		break;
	case 0x289EDF:
		cid = "Danfoss Turbocor Compressors, Inc";
		break;
	case 0x50053D:
		cid = "CyWee Group Ltd";
		break;
	case 0x4C64D9:
		cid = "Guangdong Leawin Group Co., Ltd";
		break;
	case 0x7CB03E:
		cid = "OSRAM GmbH";
		break;
	case 0x14B1C8:
		cid = "InfiniWing, Inc.";
		break;
	case 0xC0493D:
		cid = "MAITRISE TECHNOLOGIQUE";
		break;
	case 0x34A7BA:
		cid = "Fischer International Systems Corporation";
		break;
	case 0xACD364:
		cid = "ABB SPA, ABB SACE DIV.";
		break;
	case 0x38F8B7:
		cid = "V2COM PARTICIPACOES S.A.";
		break;
	case 0xB48255:
		cid = "Research Products Corporation";
		break;
	case 0x2C750F:
		cid = "Shanghai Dongzhou-Lawton Communication Technology Co. Ltd.";
		break;
	case 0xB40418:
		cid = "Smartchip Integrated Inc.";
		break;
	case 0xF4EA67:
		cid = "Cisco Systems, Inc";
		break;
	case 0xD0AEEC:
		cid = "Alpha Networks Inc.";
		break;
	case 0x3C98BF:
		cid = "Quest Controls, Inc.";
		break;
	case 0xD05785:
		cid = "Pantech Co., Ltd.";
		break;
	case 0x045C06:
		cid = "Zmodo Technology Corporation";
		break;
	case 0x504A5E:
		cid = "Masimo Corporation";
		break;
	case 0x38BF33:
		cid = "NEC CASIO Mobile Communications";
		break;
	case 0xA041A7:
		cid = "NL Ministry of Defense";
		break;
	case 0x342F6E:
		cid = "Anywire corporation";
		break;
	case 0xE86D6E:
		cid = "voestalpine SIGNALING Fareham Ltd.";
		break;
	case 0xF8D462:
		cid = "Pumatronix Equipamentos Eletronicos Ltda.";
		break;
	case 0x5453ED:
		cid = "Sony Corporation";
		break;
	case 0x940070:
		cid = "Nokia Corporation";
		break;
	case 0x6C3A84:
		cid = "Shenzhen Aero-Startech. Co.Ltd";
		break;
	case 0x442B03:
		cid = "Cisco Systems, Inc";
		break;
	case 0x781C5A:
		cid = "SHARP Corporation";
		break;
	case 0xE4C6E6:
		cid = "Mophie, LLC";
		break;
	case 0x502D1D:
		cid = "Nokia Corporation";
		break;
	case 0xBCEA2B:
		cid = "CityCom GmbH";
		break;
	case 0x944444:
		cid = "LG Innotek";
		break;
	case 0xE4C806:
		cid = "Ceiec Electric Technology Inc.";
		break;
	case 0x18B591:
		cid = "I-Storm";
		break;
	case 0xA45630:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002AAF:
		cid = "LARsys-Automation GmbH";
		break;
	case 0x60F3DA:
		cid = "Logic Way GmbH";
		break;
	case 0xA06D09:
		cid = "Intelcan Technosystems Inc.";
		break;
	case 0xBC1401:
		cid = "Hitron Technologies. Inc";
		break;
	case 0x68D925:
		cid = "ProSys Development Services";
		break;
	case 0xB41DEF:
		cid = "Internet Laboratories, Inc.";
		break;
	case 0x284121:
		cid = "OptiSense Network, LLC";
		break;
	case 0x5057A8:
		cid = "Cisco Systems, Inc";
		break;
	case 0x38458C:
		cid = "MyCloud Technology corporation";
		break;
	case 0x0C9D56:
		cid = "Consort Controls Ltd";
		break;
	case 0x3CCE73:
		cid = "Cisco Systems, Inc";
		break;
	case 0xA47C14:
		cid = "ChargeStorm AB";
		break;
	case 0xF4600D:
		cid = "Panoptic Technology, Inc";
		break;
	case 0xACCF23:
		cid = "Hi-flying electronics technology Co.,Ltd";
		break;
	case 0xC08170:
		cid = "Effigis GeoSolutions";
		break;
	case 0x78C4AB:
		cid = "Shenzhen Runsil Technology Co.,Ltd";
		break;
	case 0x709A0B:
		cid = "Italian Institute of Technology";
		break;
	case 0x240917:
		cid = "Devlin Electronics Limited";
		break;
	case 0xDC37D2:
		cid = "Hunan HKT Electronic Technology Co., Ltd";
		break;
	case 0x5076A6:
		cid = "Ecil Informatica Ind. Com. Ltda";
		break;
	case 0xB431B8:
		cid = "Aviwest";
		break;
	case 0x241125:
		cid = "Hutek Co., Ltd.";
		break;
	case 0x0036FE:
		cid = "SuperVision";
		break;
	case 0xCC187B:
		cid = "Manzanita Systems, Inc.";
		break;
	case 0x38B12D:
		cid = "Sonotronic Nagel GmbH";
		break;
	case 0x8020AF:
		cid = "Trade FIDES, a.s.";
		break;
	case 0x50D274:
		cid = "Steffes Corporation";
		break;
	case 0x48D54C:
		cid = "Jeda Networks";
		break;
	case 0x3497FB:
		cid = "ADVANCED RF TECHNOLOGIES INC";
		break;
	case 0xC46413:
		cid = "Cisco Systems, Inc";
		break;
	case 0x143AEA:
		cid = "Dynapower Company LLC";
		break;
	case 0x9CA134:
		cid = "Nike, Inc.";
		break;
	case 0xB4D8A9:
		cid = "BetterBots";
		break;
	case 0x7CC8D7:
		cid = "Damalisk";
		break;
	case 0x0091FA:
		cid = "Synapse Product Development";
		break;
	case 0xA05AA4:
		cid = "Grand Products Nevada, Inc.";
		break;
	case 0x24C0B3:
		cid = "RSF";
		break;
	case 0xE00B28:
		cid = "Inovonics";
		break;
	case 0x500B32:
		cid = "Foxda Technology Industrial(ShenZhen)Co.,LTD";
		break;
	case 0x302DE8:
		cid = "JDA, LLC (JDA Systems)";
		break;
	case 0x70CA9B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x2C3F38:
		cid = "Cisco Systems, Inc";
		break;
	case 0x803F5D:
		cid = "Winstars Technology Ltd";
		break;
	case 0x780738:
		cid = "Z.U.K. Elzab S.A.";
		break;
	case 0x640E36:
		cid = "TAZTAG";
		break;
	case 0x70EE50:
		cid = "Netatmo";
		break;
	case 0xEC63E5:
		cid = "ePBoard Design LLC";
		break;
	case 0x60B606:
		cid = "Phorus";
		break;
	case 0xF4E6D7:
		cid = "Solar Power Technologies, Inc.";
		break;
	case 0x78DDD6:
		cid = "c-scape";
		break;
	case 0x984A47:
		cid = "CHG Hospital Beds";
		break;
	case 0x3C6A7D:
		cid = "Niigata Power Systems Co., Ltd.";
		break;
	case 0xFC455F:
		cid = "JIANGXI SHANSHUI OPTOELECTRONIC TECHNOLOGY CO.,LTD";
		break;
	case 0x3C7059:
		cid = "MakerBot Industries";
		break;
	case 0xF8FE5C:
		cid = "Reciprocal Labs Corp";
		break;
	case 0x6C9CED:
		cid = "Cisco Systems, Inc";
		break;
	case 0x94E0D0:
		cid = "HealthStream Taiwan Inc.";
		break;
	case 0xDCF858:
		cid = "Lorent Networks, Inc.";
		break;
	case 0xA05E6B:
		cid = "MELPER Co., Ltd.";
		break;
	case 0x30B3A2:
		cid = "Shenzhen Heguang Measurement & Control Technology Co.,Ltd";
		break;
	case 0xF0007F:
		cid = "Janz - Contadores de Energia, SA";
		break;
	case 0xCC944A:
		cid = "Pfeiffer Vacuum GmbH";
		break;
	case 0x0C8525:
		cid = "Cisco Systems, Inc";
		break;
	case 0xBCE59F:
		cid = "WATERWORLD Technology Co.,LTD";
		break;
	case 0x1C5C55:
		cid = "PRIMA Cinema, Inc";
		break;
	case 0x082522:
		cid = "ADVANSEE";
		break;
	case 0x4C2F9D:
		cid = "ICM Controls";
		break;
	case 0xE467BA:
		cid = "Danish Interpretation Systems A/S";
		break;
	case 0xBCFE8C:
		cid = "Altronic, LLC";
		break;
	case 0x24BBC1:
		cid = "Absolute Analysis";
		break;
	case 0x7CDD11:
		cid = "Chongqing MAS SCI&TECH.Co.,Ltd";
		break;
	case 0xC43C3C:
		cid = "CYBELEC SA";
		break;
	case 0x00D632:
		cid = "GE Energy";
		break;
	case 0xC40ACB:
		cid = "Cisco Systems, Inc";
		break;
	case 0x7463DF:
		cid = "VTS GmbH";
		break;
	case 0x3828EA:
		cid = "Fujian Netcom Technology Co., LTD";
		break;
	case 0x2CEE26:
		cid = "Petroleum Geo-Services";
		break;
	case 0xDC3E51:
		cid = "Solberg & Andersen AS";
		break;
	case 0xD8B90E:
		cid = "Triple Domain Vision Co.,Ltd.";
		break;
	case 0x7C4B78:
		cid = "Red Sun Synthesis Pte Ltd";
		break;
	case 0x28D1AF:
		cid = "Nokia Corporation";
		break;
	case 0x68BC0C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x2C9EFC:
		cid = "CANON INC.";
		break;
	case 0x98C845:
		cid = "PacketAccess";
		break;
	case 0x988217:
		cid = "Disruptive Ltd";
		break;
	case 0x80FFA8:
		cid = "UNIDIS";
		break;
	case 0x489BE2:
		cid = "SCI Innovations Ltd";
		break;
	case 0xB0E50E:
		cid = "NRG SYSTEMS INC";
		break;
	case 0x4C5FD2:
		cid = "Alcatel-Lucent";
		break;
	case 0xE878A1:
		cid = "BEOVIEW INTERCOM DOO";
		break;
	case 0x3057AC:
		cid = "IRLAB LTD.";
		break;
	case 0x28AF0A:
		cid = "Sirius XM Radio Inc";
		break;
	case 0x2486F4:
		cid = "Ctek, Inc.";
		break;
	case 0x3CE5B4:
		cid = "KIDASEN INDUSTRIA E COMERCIO DE ANTENAS LTDA";
		break;
	case 0xA85BF3:
		cid = "Audivo GmbH";
		break;
	case 0x344F69:
		cid = "EKINOPS SAS";
		break;
	case 0xC02973:
		cid = "Audyssey Laboratories Inc.";
		break;
	case 0xB451F9:
		cid = "NB Software";
		break;
	case 0x30688C:
		cid = "Reach Technology Inc.";
		break;
	case 0x88F488:
		cid = "cellon communications technology(shenzhen)Co.,Ltd.";
		break;
	case 0x0041B4:
		cid = "Wuxi Zhongxing Optoelectronics Technology Co.,Ltd.";
		break;
	case 0xD453AF:
		cid = "VIGO System S.A.";
		break;
	case 0x1CE192:
		cid = "Qisda Corporation";
		break;
	case 0x20C8B3:
		cid = "SHENZHEN BUL-TECH CO.,LTD.";
		break;
	case 0x58B0D4:
		cid = "ZuniData Systems Inc.";
		break;
	case 0x64557F:
		cid = "NSFOCUS Information Technology Co., Ltd.";
		break;
	case 0x406AAB:
		cid = "RIM";
		break;
	case 0x248707:
		cid = "SEnergy Corporation";
		break;
	case 0xEC3F05:
		cid = "Institute 706, The Second Academy China Aerospace Science & Industry Corp";
		break;
	case 0xC4C19F:
		cid = "National Oilwell Varco Instrumentation, Monitoring, and Optimization (NOV IMO)";
		break;
	case 0x68CD0F:
		cid = "U Tek Company Limited";
		break;
	case 0xD4CEB8:
		cid = "Enatel LTD";
		break;
	case 0xECF236:
		cid = "NEOMONTANA ELECTRONICS";
		break;
	case 0xE4A5EF:
		cid = "TRON LINK ELECTRONICS CO., LTD.";
		break;
	case 0xAC4AFE:
		cid = "Hisense Broadband Multimedia Technology Co.,Ltd.";
		break;
	case 0x2C1EEA:
		cid = "AERODEV";
		break;
	case 0xFC6C31:
		cid = "LXinstruments GmbH";
		break;
	case 0x3C6F45:
		cid = "Fiberpro Inc.";
		break;
	case 0xB4FC75:
		cid = "SEMA Electronics(HK) CO.,LTD";
		break;
	case 0x5C16C7:
		cid = "Big Switch Networks";
		break;
	case 0xB0BF99:
		cid = "WIZITDONGDO";
		break;
	case 0x147DB3:
		cid = "JOA TELECOM.CO.,LTD";
		break;
	case 0x3CD16E:
		cid = "Telepower Communication Co., Ltd";
		break;
	case 0x00077D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x1045BE:
		cid = "Norphonic AS";
		break;
	case 0xA0E295:
		cid = "DAT System Co.,Ltd";
		break;
	case 0x40F14C:
		cid = "ISE Europe SPRL";
		break;
	case 0x98293F:
		cid = "Fujian Start Computer Equipment Co.,Ltd";
		break;
	case 0x70D4F2:
		cid = "RIM";
		break;
	case 0x9067F3:
		cid = "Alcatel Lucent";
		break;
	case 0x64D912:
		cid = "Solidica, Inc.";
		break;
	case 0x8C5CA1:
		cid = "d-broad,INC";
		break;
	case 0xC8F981:
		cid = "Seneca s.r.l.";
		break;
	case 0x703187:
		cid = "ACX GmbH";
		break;
	case 0x14307A:
		cid = "Avermetrics";
		break;
	case 0x8C7EB3:
		cid = "Lytro, Inc.";
		break;
	case 0x587675:
		cid = "Beijing ECHO Technologies Co.,Ltd";
		break;
	case 0x78EF4C:
		cid = "Unetconvergence Co., Ltd.";
		break;
	case 0xE8DA96:
		cid = "Zhuhai Tianrui Electrical Power Tech. Co., Ltd.";
		break;
	case 0x6CA780:
		cid = "Nokia Corporation";
		break;
	case 0x04888C:
		cid = "Eifelwerk Butler Systeme GmbH";
		break;
	case 0x1013EE:
		cid = "Justec International Technology INC.";
		break;
	case 0x704642:
		cid = "CHYNG HONG ELECTRONIC CO., LTD.";
		break;
	case 0x78BEB6:
		cid = "Enhanced Vision";
		break;
	case 0xECEA03:
		cid = "DARFON LIGHTING CORP";
		break;
	case 0xC8903E:
		cid = "Pakton Technologies";
		break;
	case 0x7465D1:
		cid = "Atlinks";
		break;
	case 0x301A28:
		cid = "Mako Networks Ltd";
		break;
	case 0xD4945A:
		cid = "COSMO CO., LTD";
		break;
	case 0x5CF207:
		cid = "Speco Technologies";
		break;
	case 0xB01B7C:
		cid = "Ontrol A.S.";
		break;
	case 0xD47B75:
		cid = "HARTING Electronics GmbH";
		break;
	case 0x70E843:
		cid = "Beijing C&W Optical Communication Technology Co.,Ltd.";
		break;
	case 0x08ACA5:
		cid = "Benu Video, Inc.";
		break;
	case 0xD89DB9:
		cid = "eMegatech International Corp.";
		break;
	case 0x405A9B:
		cid = "ANOVO";
		break;
	case 0xACCA54:
		cid = "Telldus Technologies AB";
		break;
	case 0xCC1EFF:
		cid = "Metrological Group BV";
		break;
	case 0x941673:
		cid = "Point Core SARL";
		break;
	case 0x6C5D63:
		cid = "ShenZhen Rapoo Technology Co., Ltd.";
		break;
	case 0xE4D71D:
		cid = "Oraya Therapeutics";
		break;
	case 0xC8FE30:
		cid = "Bejing DAYO Mobile Communication Technology Ltd.";
		break;
	case 0x64B64A:
		cid = "ViVOtech, Inc.";
		break;
	case 0xDCA7D9:
		cid = "Compressor Controls Corp";
		break;
	case 0xC455A6:
		cid = "Cadac Holdings Ltd";
		break;
	case 0xBCBBC9:
		cid = "Kellendonk Elektronik GmbH";
		break;
	case 0x781DFD:
		cid = "Jabil Inc";
		break;
	case 0x103711:
		cid = "Simlink AS";
		break;
	case 0x601199:
		cid = "Siama Systems Inc";
		break;
	case 0x300B9C:
		cid = "Delta Mobile Systems, Inc.";
		break;
	case 0x90EA60:
		cid = "SPI Lasers Ltd";
		break;
	case 0xD46F42:
		cid = "WAXESS USA Inc";
		break;
	case 0xB0A72A:
		cid = "Ensemble Designs, Inc.";
		break;
	case 0x50795B:
		cid = "Interexport Telecomunicaciones S.A.";
		break;
	case 0xE8C229:
		cid = "H-Displays (MSC) Bhd";
		break;
	case 0xB0BDA1:
		cid = "ZAKLAD ELEKTRONICZNY SIMS";
		break;
	case 0x8C4435:
		cid = "Shanghai BroadMobi Communication Technology Co., Ltd.";
		break;
	case 0x24B8D2:
		cid = "Opzoon Technology Co.,Ltd.";
		break;
	case 0x24CBE7:
		cid = "MYK, Inc.";
		break;
	case 0x88BFD5:
		cid = "Simple Audio Ltd";
		break;
	case 0x948B03:
		cid = "EAGET Innovation and Technology Co., Ltd.";
		break;
	case 0x802DE1:
		cid = "Solarbridge Technologies";
		break;
	case 0xF081AF:
		cid = "IRZ AUTOMATION TECHNOLOGIES LTD";
		break;
	case 0x14EB33:
		cid = "BSMediasoft Co., Ltd.";
		break;
	case 0x14A9E3:
		cid = "MST CORPORATION";
		break;
	case 0x589835:
		cid = "Technicolor";
		break;
	case 0x50D6D7:
		cid = "Takahata Precision";
		break;
	case 0xB4A5A9:
		cid = "MODI GmbH";
		break;
	case 0xD09B05:
		cid = "Emtronix";
		break;
	case 0x98EC65:
		cid = "Cosesy ApS";
		break;
	case 0x900917:
		cid = "Far-sighted mobile";
		break;
	case 0x88F077:
		cid = "Cisco Systems, Inc";
		break;
	case 0xAC4723:
		cid = "Genelec";
		break;
	case 0x20B7C0:
		cid = "OMICRON electronics GmbH";
		break;
	case 0xD42C3D:
		cid = "Sky Light Digital Limited";
		break;
	case 0x806CBC:
		cid = "NET New Electronic Technology GmbH";
		break;
	case 0x1C184A:
		cid = "ShenZhen RicherLink Technologies Co.,LTD";
		break;
	case 0x04E662:
		cid = "Acroname Inc.";
		break;
	case 0xF0BF97:
		cid = "Sony Corporation";
		break;
	case 0xC44AD0:
		cid = "FIREFLIES SYSTEMS";
		break;
	case 0x88E0A0:
		cid = "Shenzhen VisionSTOR Technologies Co., Ltd";
		break;
	case 0x6879ED:
		cid = "SHARP Corporation";
		break;
	case 0x9CC0D2:
		cid = "Conductix-Wampfler GmbH";
		break;
	case 0x447E95:
		cid = "Alpha and Omega, Inc";
		break;
	case 0xE8B748:
		cid = "Cisco Systems, Inc";
		break;
	case 0xDC16A2:
		cid = "Medtronic Diabetes";
		break;
	case 0x78CA04:
		cid = "Nokia Corporation";
		break;
	case 0x2C8BF2:
		cid = "Hitachi Metals America Ltd";
		break;
	case 0x58F98E:
		cid = "SECUDOS GmbH";
		break;
	case 0x2826A6:
		cid = "PBR electronics GmbH";
		break;
	case 0xCC7669:
		cid = "SEETECH";
		break;
	case 0xE437D7:
		cid = "HENRI DEPAEPE S.A.S.";
		break;
	case 0x582F42:
		cid = "Universal Electric Corporation";
		break;
	case 0xAC20AA:
		cid = "DMATEK Co., Ltd.";
		break;
	case 0xE0A1D7:
		cid = "SFR";
		break;
	case 0x28852D:
		cid = "Touch Networks";
		break;
	case 0xF02A61:
		cid = "Waldo Networks, Inc.";
		break;
	case 0xB8415F:
		cid = "ASP AG";
		break;
	case 0x2CB69D:
		cid = "RED Digital Cinema";
		break;
	case 0x988E34:
		cid = "ZHEJIANG BOXSAM ELECTRONIC CO.,LTD";
		break;
	case 0xD44C24:
		cid = "Vuppalamritha Magnetic Components LTD";
		break;
	case 0x4CB4EA:
		cid = "HRD (S) PTE., LTD.";
		break;
	case 0x34BDF9:
		cid = "Shanghai WDK Industrial Co.,Ltd.";
		break;
	case 0x74CE56:
		cid = "Packet Force Technology Limited Company";
		break;
	case 0xA89B10:
		cid = "inMotion Ltd.";
		break;
	case 0x888C19:
		cid = "Brady Corp Asia Pacific Ltd";
		break;
	case 0x747DB6:
		cid = "Aliwei Communications, Inc";
		break;
	case 0xB41489:
		cid = "Cisco Systems, Inc";
		break;
	case 0xAC6F4F:
		cid = "Enspert Inc";
		break;
	case 0x8886A0:
		cid = "Simton Technologies, Ltd.";
		break;
	case 0xF0C88C:
		cid = "LeddarTech Inc.";
		break;
	case 0x68EBC5:
		cid = "Angstrem Telecom";
		break;
	case 0x448C52:
		cid = "KTIS CO., Ltd";
		break;
	case 0x686359:
		cid = "Advanced Digital Broadcast SA";
		break;
	case 0x4018D7:
		cid = "Smartronix, Inc.";
		break;
	case 0x18922C:
		cid = "Virtual Instruments";
		break;
	case 0xF80F84:
		cid = "Natural Security SAS";
		break;
	case 0xEC9ECD:
		cid = "Artesyn Embedded Technologies";
		break;
	case 0x303955:
		cid = "Shenzhen Jinhengjia Electronic Co., Ltd.";
		break;
	case 0xFC5B24:
		cid = "Weibel Scientific A/S";
		break;
	case 0x34B571:
		cid = "PLDS";
		break;
	case 0xA862A2:
		cid = "JIWUMEDIA CO., LTD.";
		break;
	case 0x984E97:
		cid = "Starlight Marketing (H. K.) Ltd.";
		break;
	case 0x7C6ADB:
		cid = "SafeTone Technology Co.,Ltd";
		break;
	case 0xEC986C:
		cid = "Lufft Mess- und Regeltechnik GmbH";
		break;
	case 0xB0518E:
		cid = "Holl technology CO.Ltd.";
		break;
	case 0xDCDECA:
		cid = "Akyllor";
		break;
	case 0xA071A9:
		cid = "Nokia Corporation";
		break;
	case 0x8065E9:
		cid = "BenQ Corporation";
		break;
	case 0x845DD7:
		cid = "Shenzhen Netcom Electronics Co.,Ltd";
		break;
	case 0x447DA5:
		cid = "VTION INFORMATION TECHNOLOGY (FUJIAN) CO.,LTD";
		break;
	case 0x0CCDD3:
		cid = "EASTRIVER TECHNOLOGY CO., LTD.";
		break;
	case 0xB8E589:
		cid = "Payter BV";
		break;
	case 0xC89C1D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x503DE5:
		cid = "Cisco Systems, Inc";
		break;
	case 0x801440:
		cid = "Sunlit System Technology Corp";
		break;
	case 0x948D50:
		cid = "Beamex Oy Ab";
		break;
	case 0x94E226:
		cid = "D. ORtiz Consulting, LLC";
		break;
	case 0x386E21:
		cid = "Wasion Group Ltd.";
		break;
	case 0xD8C99D:
		cid = "EA DISPLAY LIMITED";
		break;
	case 0xCCFC6D:
		cid = "RIZ TRANSMITTERS";
		break;
	case 0xAC80D6:
		cid = "Hexatronic AB";
		break;
	case 0x9CF938:
		cid = "AREVA NP GmbH";
		break;
	case 0x500E6D:
		cid = "TrafficCast International";
		break;
	case 0x1CFEA7:
		cid = "IDentytech Solutins Ltd.";
		break;
	case 0xD0B53D:
		cid = "SEPRO ROBOTIQUE";
		break;
	case 0xA0DE05:
		cid = "JSC Irbis-T";
		break;
	case 0x8895B9:
		cid = "Unified Packet Systems Crop";
		break;
	case 0x78593E:
		cid = "RAFI GmbH & Co.KG";
		break;
	case 0x684352:
		cid = "Bhuu Limited";
		break;
	case 0x3CC0C6:
		cid = "d&b audiotechnik GmbH";
		break;
	case 0xF8DAF4:
		cid = "Taishan Online Technology Co., Ltd.";
		break;
	case 0xD8E3AE:
		cid = "CIRTEC MEDICAL SYSTEMS";
		break;
	case 0xA83944:
		cid = "Actiontec Electronics, Inc";
		break;
	case 0xFC1FC0:
		cid = "EURECAM";
		break;
	case 0x4891F6:
		cid = "Shenzhen Reach software technology CO.,LTD";
		break;
	case 0xEC14F6:
		cid = "BioControl AS";
		break;
	case 0xB8D06F:
		cid = "GUANGZHOU HKUST FOK YING TUNG RESEARCH INSTITUTE";
		break;
	case 0xB4C44E:
		cid = "VXL eTech Pvt Ltd";
		break;
	case 0xF0933A:
		cid = "NxtConect";
		break;
	case 0x6052D0:
		cid = "FACTS Engineering";
		break;
	case 0x8C278A:
		cid = "Vocollect Inc";
		break;
	case 0xFCAF6A:
		cid = "Qulsar Inc";
		break;
	case 0xECE555:
		cid = "Hirschmann Automation";
		break;
	case 0xDCD0F7:
		cid = "Bentek Systems Ltd.";
		break;
	case 0xD0574C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x8818AE:
		cid = "Tamron Co., Ltd";
		break;
	case 0x20D607:
		cid = "Nokia Corporation";
		break;
	case 0x58DB8D:
		cid = "Fast Co., Ltd.";
		break;
	case 0x18EF63:
		cid = "Cisco Systems, Inc";
		break;
	case 0xCCCE40:
		cid = "Janteq Corp";
		break;
	case 0x8C4DEA:
		cid = "Cerio Corporation";
		break;
	case 0xECFAAA:
		cid = "The IMS Company";
		break;
	case 0xCC55AD:
		cid = "RIM";
		break;
	case 0xF0F7B3:
		cid = "Phorm";
		break;
	case 0xE8757F:
		cid = "FIRS Technologies(Shenzhen) Co., Ltd";
		break;
	case 0xC83EA7:
		cid = "KUNBUS GmbH";
		break;
	case 0xE0CF2D:
		cid = "Gemintek Corporation";
		break;
	case 0x68BDAB:
		cid = "Cisco Systems, Inc";
		break;
	case 0x9CADEF:
		cid = "Obihai Technology, Inc.";
		break;
	case 0xD08999:
		cid = "APCON, Inc.";
		break;
	case 0x4454C0:
		cid = "Thompson Aerospace";
		break;
	case 0xB4A4E3:
		cid = "Cisco Systems, Inc";
		break;
	case 0x90903C:
		cid = "TRISON TECHNOLOGY CORPORATION";
		break;
	case 0x94DD3F:
		cid = "A+V Link Technologies, Corp.";
		break;
	case 0xC8EE08:
		cid = "TANGTOP TECHNOLOGY CO.,LTD";
		break;
	case 0x7472F2:
		cid = "Chipsip Technology Co., Ltd.";
		break;
	case 0x5CD998:
		cid = "D-Link Corporation";
		break;
	case 0xD46CDA:
		cid = "CSM GmbH";
		break;
	case 0xC4F464:
		cid = "Spica international";
		break;
	case 0x544A05:
		cid = "wenglor sensoric gmbh";
		break;
	case 0x5CCA32:
		cid = "Theben AG";
		break;
	case 0x84C7A9:
		cid = "C3PO S.A.";
		break;
	case 0xF8AC6D:
		cid = "Deltenna Ltd";
		break;
	case 0x641084:
		cid = "HEXIUM Technical Development Co., Ltd.";
		break;
	case 0xC416FA:
		cid = "Prysm Inc";
		break;
	case 0xE0C286:
		cid = "Aisai Communication Technology Co., Ltd.";
		break;
	case 0xD84B2A:
		cid = "Cognitas Technologies, Inc.";
		break;
	case 0x684B88:
		cid = "Galtronics Telemetry Inc.";
		break;
	case 0x842914:
		cid = "EMPORIA TELECOM Produktions- und VertriebsgesmbH & Co KG";
		break;
	case 0x4C8B55:
		cid = "Grupo Digicon";
		break;
	case 0x04A3F3:
		cid = "Emicon";
		break;
	case 0xF866F2:
		cid = "Cisco Systems, Inc";
		break;
	case 0x7C55E7:
		cid = "YSI, Inc.";
		break;
	case 0xC02BFC:
		cid = "iNES. applied informatics GmbH";
		break;
	case 0xAC34CB:
		cid = "Shanhai GBCOM Communication Technology Co. Ltd";
		break;
	case 0xD4A928:
		cid = "GreenWave Reality Inc";
		break;
	case 0x9CFFBE:
		cid = "OTSL Inc.";
		break;
	case 0x2CD1DA:
		cid = "Sanjole, Inc.";
		break;
	case 0x100E2B:
		cid = "NEC CASIO Mobile Communications";
		break;
	case 0x445EF3:
		cid = "Tonalite Holding B.V.";
		break;
	case 0x100C24:
		cid = "pomdevices, LLC";
		break;
	case 0x58F6BF:
		cid = "Kyoto University";
		break;
	case 0x7CED8D:
		cid = "Microsoft";
		break;
	case 0x54FDBF:
		cid = "Scheidt & Bachmann GmbH";
		break;
	case 0xB40EDC:
		cid = "LG-Ericsson Co.,Ltd.";
		break;
	case 0xA4D1D1:
		cid = "ECOtality North America";
		break;
	case 0xC8D5FE:
		cid = "Shenzhen Zowee Technology Co., Ltd";
		break;
	case 0xC49313:
		cid = "100fio networks technology llc";
		break;
	case 0xA4A80F:
		cid = "Shenzhen Coship Electronics Co., Ltd.";
		break;
	case 0xB8921D:
		cid = "BG T&A";
		break;
	case 0x48FCB8:
		cid = "Woodstream Corporation";
		break;
	case 0x548922:
		cid = "Zelfy Inc";
		break;
	case 0xF8C091:
		cid = "Highgates Technology";
		break;
	case 0x6C5CDE:
		cid = "SunReports, Inc.";
		break;
	case 0x241F2C:
		cid = "Calsys, Inc.";
		break;
	case 0x284846:
		cid = "GridCentric Inc.";
		break;
	case 0x58B9E1:
		cid = "Crystalfontz America, Inc.";
		break;
	case 0x646707:
		cid = "Beijing Omnific Technology, Ltd.";
		break;
	case 0xD4000D:
		cid = "Phoenix Broadband Technologies, LLC.";
		break;
	case 0xE87AF3:
		cid = "S5 Tech S.r.l.";
		break;
	case 0x40C7C9:
		cid = "Naviit Inc.";
		break;
	case 0xA0A763:
		cid = "Polytron Vertrieb GmbH";
		break;
	case 0xD496DF:
		cid = "SUNGJIN C&T CO.,LTD";
		break;
	case 0xD07DE5:
		cid = "Forward Pay Systems, Inc.";
		break;
	case 0x7CEF18:
		cid = "Creative Product Design Pty. Ltd.";
		break;
	case 0xFCD4F6:
		cid = "Messana Air.Ray Conditioning s.r.l.";
		break;
	case 0x0CD696:
		cid = "Amimon Ltd";
		break;
	case 0xB43741:
		cid = "Consert, Inc.";
		break;
	case 0xF8FB2F:
		cid = "Santur Corporation";
		break;
	case 0x2CCD43:
		cid = "Summit Technology Group";
		break;
	case 0x6C8D65:
		cid = "Wireless Glue Networks, Inc.";
		break;
	case 0xCCFCB1:
		cid = "Wireless Technology, Inc.";
		break;
	case 0xCC5C75:
		cid = "Weightech Com. Imp. Exp. Equip. Pesagem Ltda";
		break;
	case 0xA098ED:
		cid = "Shandong Intelligent Optical Communication Development Co., Ltd.";
		break;
	case 0x34C69A:
		cid = "Enecsys Ltd";
		break;
	case 0x502A8B:
		cid = "Telekom Research and Development Sdn Bhd";
		break;
	case 0xF88DEF:
		cid = "Tenebraex";
		break;
	case 0xEC43E6:
		cid = "AWCER Ltd.";
		break;
	case 0xF0EC39:
		cid = "Essec";
		break;
	case 0x5849BA:
		cid = "Chitai Electronic Corp.";
		break;
	case 0x181714:
		cid = "DAEWOOIS";
		break;
	case 0x80B289:
		cid = "Forworld Electronics Ltd.";
		break;
	case 0x14A62C:
		cid = "S.M. Dezac S.A.";
		break;
	case 0xA8F470:
		cid = "Fujian Newland Communication Science Technologies Co.,Ltd.";
		break;
	case 0xDC1D9F:
		cid = "U & B tech";
		break;
	case 0x081651:
		cid = "SHENZHEN SEA STAR TECHNOLOGY CO.,LTD";
		break;
	case 0xDC49C9:
		cid = "CASCO SIGNAL LTD";
		break;
	case 0xB09134:
		cid = "Taleo";
		break;
	case 0xA863DF:
		cid = "DISPLAIRE CORPORATION";
		break;
	case 0x104369:
		cid = "Soundmax Electronic Limited";
		break;
	case 0xC06C0F:
		cid = "Dobbs Stanford";
		break;
	case 0x5475D0:
		cid = "Cisco Systems, Inc";
		break;
	case 0xBC6A16:
		cid = "tdvine";
		break;
	case 0xC8EF2E:
		cid = "Beijing Gefei Tech. Co., Ltd";
		break;
	case 0x98DCD9:
		cid = "UNITEC Co., Ltd.";
		break;
	case 0x30525A:
		cid = "NST Co., LTD";
		break;
	case 0x6089B7:
		cid = "KAEL MÜHENDİSLİK ELEKTRONİK TİCARET SANAYİ LİMİTED ŞİRKETİ";
		break;
	case 0x2CA780:
		cid = "True Technologies Inc.";
		break;
	case 0x545FA9:
		cid = "Teracom Limited";
		break;
	case 0xECC882:
		cid = "Cisco Systems, Inc";
		break;
	case 0xA0B9ED:
		cid = "Skytap";
		break;
	case 0x502DF4:
		cid = "Phytec Messtechnik GmbH";
		break;
	case 0x38E8DF:
		cid = "b gmbh medien + datenbanken";
		break;
	case 0x10189E:
		cid = "Elmo Motion Control";
		break;
	case 0x88FD15:
		cid = "LINEEYE CO., LTD";
		break;
	case 0x10445A:
		cid = "Shaanxi Hitech Electronic Co., LTD";
		break;
	case 0x60B3C4:
		cid = "Elber Srl";
		break;
	case 0x04C880:
		cid = "Samtec Inc";
		break;
	case 0x884B39:
		cid = "Siemens AG, Healthcare Sector";
		break;
	case 0x44C233:
		cid = "Guangzhou Comet Technology Development Co.Ltd";
		break;
	case 0xB482FE:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0x307C30:
		cid = "RIM";
		break;
	case 0xBC4E3C:
		cid = "CORE STAFF CO., LTD.";
		break;
	case 0x80BAAC:
		cid = "TeleAdapt Ltd";
		break;
	case 0xFC4463:
		cid = "Universal Audio, Inc";
		break;
	case 0xF06853:
		cid = "Integrated Corporation";
		break;
	case 0x10E6AE:
		cid = "Source Technologies, LLC";
		break;
	case 0xA4ADB8:
		cid = "Vitec Group, Camera Dynamics Ltd";
		break;
	case 0x90A2DA:
		cid = "GHEO SA";
		break;
	case 0xC41ECE:
		cid = "HMI Sources Ltd.";
		break;
	case 0xBCD5B6:
		cid = "d2d technologies";
		break;
	case 0x1C8F8A:
		cid = "Phase Motion Control SpA";
		break;
	case 0xA4B1EE:
		cid = "H. ZANDER GmbH & Co. KG";
		break;
	case 0x486FD2:
		cid = "StorSimple Inc";
		break;
	case 0xD4F143:
		cid = "IPROAD.,Inc";
		break;
	case 0xCC5459:
		cid = "OnTime Networks AS";
		break;
	case 0x3CB17F:
		cid = "Wattwatchers Pty Ld";
		break;
	case 0x00DB45:
		cid = "THAMWAY CO.,LTD.";
		break;
	case 0xA0231B:
		cid = "TeleComp R&D Corp.";
		break;
	case 0x94C4E9:
		cid = "PowerLayer Microsystems HongKong Limited";
		break;
	case 0x8843E1:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB4ED19:
		cid = "Pie Digital, Inc.";
		break;
	case 0x888717:
		cid = "CANON INC.";
		break;
	case 0xE0271A:
		cid = "TTC Next-generation Home Network System WG";
		break;
	case 0x84C727:
		cid = "Gnodal Ltd";
		break;
	case 0xE4AB46:
		cid = "UAB Selteka";
		break;
	case 0xD479C3:
		cid = "Cameronet GmbH & Co. KG";
		break;
	case 0x945B7E:
		cid = "TRILOBIT LTDA.";
		break;
	case 0xE85B5B:
		cid = "LG ELECTRONICS INC";
		break;
	case 0x20D906:
		cid = "Iota, Inc.";
		break;
	case 0x404022:
		cid = "ZIV";
		break;
	case 0x74F726:
		cid = "Neuron Robotics";
		break;
	case 0x18FC9F:
		cid = "Changhe Electronics Co., Ltd.";
		break;
	case 0xA438FC:
		cid = "Plastic Logic";
		break;
	case 0x601D0F:
		cid = "Midnite Solar";
		break;
	case 0x50A6E3:
		cid = "David Clark Company";
		break;
	case 0x549A16:
		cid = "Uzushio Electric Co.,Ltd.";
		break;
	case 0x4001C6:
		cid = "3COM EUROPE LTD";
		break;
	case 0x608D17:
		cid = "Sentrus Government Systems Division, Inc";
		break;
	case 0x80912A:
		cid = "Lih Rong electronic Enterprise Co., Ltd.";
		break;
	case 0x8038FD:
		cid = "LeapFrog Enterprises, Inc.";
		break;
	case 0x7072CF:
		cid = "EdgeCore Networks";
		break;
	case 0x803B9A:
		cid = "ghe-ces electronic ag";
		break;
	case 0x9CCD82:
		cid = "CHENG UEI PRECISION INDUSTRY CO.,LTD";
		break;
	case 0xC8AACC:
		cid = "Private";
		break;
	case 0x003D41:
		cid = "Hatteland Computer AS";
		break;
	case 0x087618:
		cid = "ViE Technologies Sdn. Bhd.";
		break;
	case 0xA4AD00:
		cid = "Ragsdale Technology";
		break;
	case 0x2C1984:
		cid = "IDN Telecom, Inc.";
		break;
	case 0x3863F6:
		cid = "3NOD MULTIMEDIA(SHENZHEN)CO.,LTD";
		break;
	case 0xDCE2AC:
		cid = "Lumens Digital Optics Inc.";
		break;
	case 0x98D88C:
		cid = "Nortel Networks";
		break;
	case 0xC8873B:
		cid = "Net Optics";
		break;
	case 0xB0E97E:
		cid = "Advanced Micro Peripherals";
		break;
	case 0xD44CA7:
		cid = "Informtekhnika & Communication, LLC";
		break;
	case 0x202CB7:
		cid = "Kong Yue Electronics & Information Industry (Xinhui) Ltd.";
		break;
	case 0x68CC9C:
		cid = "Mine Site Technologies";
		break;
	case 0x04B466:
		cid = "BSP Co., Ltd.";
		break;
	case 0xE41F13:
		cid = "IBM Corp";
		break;
	case 0x00271B:
		cid = "Alec Sicherheitssysteme GmbH";
		break;
	case 0x002718:
		cid = "Suzhou NEW SEAUNION Video Technology Co.,Ltd";
		break;
	case 0x00270C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00270B:
		cid = "Adura Technologies";
		break;
	case 0x002705:
		cid = "Sectronic";
		break;
	case 0x002706:
		cid = "YOISYS";
		break;
	case 0x0026F9:
		cid = "S.E.M. srl";
		break;
	case 0x0026F3:
		cid = "SMC Networks";
		break;
	case 0x688540:
		cid = "IGI Mobile, Inc.";
		break;
	case 0x6465C0:
		cid = "Nuvon, Inc";
		break;
	case 0xF0DE71:
		cid = "Shanghai EDO Technologies Co.,Ltd.";
		break;
	case 0x28FBD3:
		cid = "Ragentek Technology Group";
		break;
	case 0x7C1EB3:
		cid = "2N TELEKOMUNIKACE a.s.";
		break;
	case 0x146E0A:
		cid = "Private";
		break;
	case 0x1045F8:
		cid = "LNT-Automation GmbH";
		break;
	case 0x644F74:
		cid = "LENUS Co., Ltd.";
		break;
	case 0x787F62:
		cid = "GiK mbH";
		break;
	case 0xD4AAFF:
		cid = "MICRO WORLD";
		break;
	case 0xC4FCE4:
		cid = "DishTV NZ Ltd";
		break;
	case 0x0CD7C2:
		cid = "Axium Technologies, Inc.";
		break;
	case 0x40F52E:
		cid = "Leica Microsystems (Schweiz) AG";
		break;
	case 0x64BC11:
		cid = "CombiQ AB";
		break;
	case 0x4097D1:
		cid = "BK Electronics cc";
		break;
	case 0x68AAD2:
		cid = "DATECS LTD.,";
		break;
	case 0x0026EC:
		cid = "Legrand Home Systems, Inc";
		break;
	case 0x0026E6:
		cid = "Visionhitech Co., Ltd.";
		break;
	case 0x0026E0:
		cid = "ASITEQ";
		break;
	case 0x0026DA:
		cid = "Universal Media Corporation /Slovakia/ s.r.o.";
		break;
	case 0x0026D3:
		cid = "Zeno Information System";
		break;
	case 0x0026D4:
		cid = "IRCA SpA";
		break;
	case 0x0026CD:
		cid = "PurpleComm, Inc.";
		break;
	case 0x10880F:
		cid = "Daruma Telecomunicações e Informática S.A.";
		break;
	case 0x4C4B68:
		cid = "Mobile Device, Inc.";
		break;
	case 0x94BA31:
		cid = "Visiontec da Amazônia Ltda.";
		break;
	case 0xF45FF7:
		cid = "DQ Technology Inc.";
		break;
	case 0x60F13D:
		cid = "JABLOCOM s.r.o.";
		break;
	case 0x0CEF7C:
		cid = "AnaCom Inc";
		break;
	case 0xE08FEC:
		cid = "REPOTEC CO., LTD.";
		break;
	case 0xD0D286:
		cid = "Beckman Coulter K.K.";
		break;
	case 0x1C0FCF:
		cid = "Sypro Optics GmbH";
		break;
	case 0x0025AB:
		cid = "AIO LCD PC BU / TPV";
		break;
	case 0x0025A4:
		cid = "EuroDesign embedded technologies GmbH";
		break;
	case 0x00259D:
		cid = "Private";
		break;
	case 0x002598:
		cid = "Zhong Shan City Litai Electronic Industrial Co. Ltd";
		break;
	case 0x002591:
		cid = "NEXTEK, Inc.";
		break;
	case 0x00258C:
		cid = "ESUS ELEKTRONIK SAN. VE DIS. TIC. LTD. STI.";
		break;
	case 0x002587:
		cid = "Vitality, Inc.";
		break;
	case 0x002581:
		cid = "x-star networks Inc.";
		break;
	case 0x002582:
		cid = "Maksat Technologies (P) Ltd";
		break;
	case 0x002578:
		cid = "JSC Concern Sozvezdie";
		break;
	case 0x00257D:
		cid = "PointRed Telecom Private Ltd.";
		break;
	case 0x002577:
		cid = "D-BOX Technologies";
		break;
	case 0x002571:
		cid = "Zhejiang Tianle Digital Electric Co.,Ltd";
		break;
	case 0x00256A:
		cid = "inIT - Institut Industrial IT";
		break;
	case 0x002565:
		cid = "Vizimax Inc.";
		break;
	case 0x00255E:
		cid = "Shanghai Dare Technologies Co.,Ltd.";
		break;
	case 0x002558:
		cid = "MPEDIA";
		break;
	case 0x002635:
		cid = "Bluetechnix GmbH";
		break;
	case 0x00262F:
		cid = "HAMAMATSU TOA ELECTRONICS";
		break;
	case 0x002623:
		cid = "JRD Communication Inc";
		break;
	case 0x002628:
		cid = "companytec automação e controle ltda.";
		break;
	case 0x00261C:
		cid = "NEOVIA INC.";
		break;
	case 0x002615:
		cid = "Teracom Limited";
		break;
	case 0x002616:
		cid = "Rosemount Inc.";
		break;
	case 0x002610:
		cid = "Apacewave Technologies";
		break;
	case 0x002609:
		cid = "Phyllis Co., Ltd.";
		break;
	case 0x00268C:
		cid = "StarLeaf Ltd.";
		break;
	case 0x002686:
		cid = "Quantenna Communcations, Inc.";
		break;
	case 0x002680:
		cid = "SIL3 Pty.Ltd";
		break;
	case 0x00267F:
		cid = "Zenterio AB";
		break;
	case 0x00267A:
		cid = "wuhan hongxin telecommunication technologies co.,ltd";
		break;
	case 0x002679:
		cid = "Euphonic Technologies, Inc.";
		break;
	case 0x002673:
		cid = "RICOH COMPANY,LTD.";
		break;
	case 0x00266D:
		cid = "MobileAccess Networks";
		break;
	case 0x0025D6:
		cid = "The Kroger Co.";
		break;
	case 0x0025CA:
		cid = "LS Research, LLC";
		break;
	case 0x0025BE:
		cid = "Tektrap Systems Inc.";
		break;
	case 0x0025BD:
		cid = "Italdata Ingegneria dell'Idea S.p.A.";
		break;
	case 0x0025B7:
		cid = "Costar  electronics, inc.,";
		break;
	case 0x0025B0:
		cid = "Schmartz Inc";
		break;
	case 0x002546:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002545:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002535:
		cid = "Minimax GmbH & Co KG";
		break;
	case 0x002532:
		cid = "Digital Recorders";
		break;
	case 0x00252B:
		cid = "Stirling Energy Systems";
		break;
	case 0x0025FD:
		cid = "OBR Centrum Techniki Morskiej S.A.";
		break;
	case 0x002603:
		cid = "Shenzhen Wistar Technology Co., Ltd";
		break;
	case 0x0025F3:
		cid = "Nordwestdeutsche Zählerrevision";
		break;
	case 0x0025EC:
		cid = "Humanware";
		break;
	case 0x0025E2:
		cid = "Everspring Industry Co., Ltd.";
		break;
	case 0x0025DD:
		cid = "SUNNYTEK INFORMATION CO., LTD.";
		break;
	case 0x002667:
		cid = "CARECOM CO.,LTD.";
		break;
	case 0x002660:
		cid = "Logiways";
		break;
	case 0x002656:
		cid = "Sansonic Electronics USA";
		break;
	case 0x002653:
		cid = "DaySequerra Corporation";
		break;
	case 0x00264C:
		cid = "Shanghai DigiVision Technology Co., Ltd.";
		break;
	case 0x002647:
		cid = "WFE TECHNOLOGY CORP.";
		break;
	case 0x00263B:
		cid = "Onbnetech";
		break;
	case 0x0026C1:
		cid = "ARTRAY CO., LTD.";
		break;
	case 0x0026B5:
		cid = "ICOMM Tele Ltd";
		break;
	case 0x0026AF:
		cid = "Duelco A/S";
		break;
	case 0x0026A5:
		cid = "MICROROBOT.CO.,LTD";
		break;
	case 0x00269F:
		cid = "Private";
		break;
	case 0x002699:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002489:
		cid = "Vodafone Omnitel N.V.";
		break;
	case 0x00248E:
		cid = "Infoware ZRt.";
		break;
	case 0x002476:
		cid = "TAP.tv";
		break;
	case 0x00246F:
		cid = "Onda Communication spa";
		break;
	case 0x00246A:
		cid = "Solid Year Co., Ltd.";
		break;
	case 0x0023FA:
		cid = "RG Nets, Inc.";
		break;
	case 0x0023FF:
		cid = "Beijing HTTC Technology Ltd.";
		break;
	case 0x0023F4:
		cid = "Masternaut";
		break;
	case 0x0023EA:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0023E4:
		cid = "IPnect co. ltd.";
		break;
	case 0x0023DE:
		cid = "Ansync Inc.";
		break;
	case 0x0023D1:
		cid = "TRG";
		break;
	case 0x0023CB:
		cid = "Shenzhen Full-join Technology Co.,Ltd";
		break;
	case 0x0023D2:
		cid = "Inhand Electronics, Inc.";
		break;
	case 0x0024B4:
		cid = "ESCATRONIC GmbH";
		break;
	case 0x0024AD:
		cid = "Adolf Thies Gmbh & Co. KG";
		break;
	case 0x00249C:
		cid = "Bimeng Comunication System Co. Ltd";
		break;
	case 0x002526:
		cid = "Genuine Technologies Co., Ltd.";
		break;
	case 0x002525:
		cid = "CTERA Networks Ltd.";
		break;
	case 0x002520:
		cid = "SMA Railway Technology GmbH";
		break;
	case 0x00251B:
		cid = "Philips CareServant";
		break;
	case 0x002516:
		cid = "Integrated Design Tools, Inc.";
		break;
	case 0x00250F:
		cid = "On-Ramp Wireless, Inc.";
		break;
	case 0x002503:
		cid = "IBM Corp";
		break;
	case 0x00250A:
		cid = "Security Expert Co. Ltd";
		break;
	case 0x0024DD:
		cid = "Centrak, Inc.";
		break;
	case 0x0024D8:
		cid = "IlSung Precision";
		break;
	case 0x0024CC:
		cid = "Fascinations Toys and Gifts, Inc.";
		break;
	case 0x0024D1:
		cid = "Thomson Inc.";
		break;
	case 0x0024CA:
		cid = "Tobii Technology AB";
		break;
	case 0x0024C5:
		cid = "Meridian Audio Limited";
		break;
	case 0x0024B9:
		cid = "Wuhan Higheasy Electronic Technology Development Co.Ltd";
		break;
	case 0x002425:
		cid = "Shenzhenshi chuangzhicheng Technology Co.,Ltd";
		break;
	case 0x002419:
		cid = "Private";
		break;
	case 0x002412:
		cid = "Benign Technologies Co, Ltd.";
		break;
	case 0x00240C:
		cid = "DELEC GmbH";
		break;
	case 0x002406:
		cid = "Pointmobile";
		break;
	case 0x0023F9:
		cid = "Double-Take Software, INC.";
		break;
	case 0x002463:
		cid = "Phybridge Inc";
		break;
	case 0x002459:
		cid = "ABB Automation products GmbH";
		break;
	case 0x00245E:
		cid = "Hivision Co.,ltd";
		break;
	case 0x002451:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00244C:
		cid = "Solartron Metrology Ltd";
		break;
	case 0x00243F:
		cid = "Storwize, Inc.";
		break;
	case 0x002440:
		cid = "Halo Monitoring, Inc.";
		break;
	case 0x00243B:
		cid = "CSSI (S) Pte Ltd";
		break;
	case 0x0024FC:
		cid = "QuoPin Co., Ltd.";
		break;
	case 0x0024F7:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0024F0:
		cid = "Seanodes";
		break;
	case 0x0024EB:
		cid = "ClearPath Networks, Inc.";
		break;
	case 0x0024E4:
		cid = "Withings";
		break;
	case 0x002435:
		cid = "WIDE CORPORATION";
		break;
	case 0x00242F:
		cid = "Micron";
		break;
	case 0x00241F:
		cid = "DCT-Delta GmbH";
		break;
	case 0x0023C5:
		cid = "Radiation Safety and Control Services Inc";
		break;
	case 0x0023C4:
		cid = "Lux Lumen";
		break;
	case 0x0023B8:
		cid = "Sichuan Jiuzhou Electronic Technology Co.,Ltd";
		break;
	case 0x0023BF:
		cid = "Mainpine, Inc.";
		break;
	case 0x0023B2:
		cid = "Intelligent Mechatronic Systems Inc";
		break;
	case 0x0023AC:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0023A0:
		cid = "Hana CNS Co., LTD.";
		break;
	case 0x0023A5:
		cid = "SageTV, LLC";
		break;
	case 0x0022B6:
		cid = "Superflow Technologies Group";
		break;
	case 0x0022A3:
		cid = "California Eastern Laboratories";
		break;
	case 0x00229E:
		cid = "Social Aid Research Co., Ltd.";
		break;
	case 0x002291:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002292:
		cid = "Cinetal";
		break;
	case 0x002297:
		cid = "XMOS Semiconductor";
		break;
	case 0x00228B:
		cid = "Kensington Computer Products Group";
		break;
	case 0x002284:
		cid = "DESAY A&V SCIENCE AND TECHNOLOGY CO.,LTD";
		break;
	case 0x002277:
		cid = "NEC Australia Pty Ltd";
		break;
	case 0x00226D:
		cid = "Shenzhen GIEC Electronics Co., Ltd.";
		break;
	case 0x002263:
		cid = "Koos Technical Services, Inc.";
		break;
	case 0x002267:
		cid = "Nortel Networks";
		break;
	case 0x002259:
		cid = "Guangzhou New Postcom Equipment Co.,Ltd.";
		break;
	case 0x0022E4:
		cid = "APASS TECHNOLOGY CO., LTD.";
		break;
	case 0x0022DD:
		cid = "Protecta Electronics Ltd";
		break;
	case 0x0022D8:
		cid = "Shenzhen GST Security and Safety Technology Limited";
		break;
	case 0x0022D1:
		cid = "Albrecht Jung GmbH & Co. KG";
		break;
	case 0x0022C3:
		cid = "Zeeport Technology Inc.";
		break;
	case 0x0022C7:
		cid = "SEGGER Microcontroller GmbH & Co. KG";
		break;
	case 0x0022BD:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002344:
		cid = "Objective Interface Systems, Inc.";
		break;
	case 0x002343:
		cid = "TEM AG";
		break;
	case 0x002337:
		cid = "Global Star Solutions ULC";
		break;
	case 0x00232B:
		cid = "IRD A/S";
		break;
	case 0x00231C:
		cid = "Fourier Systems Ltd.";
		break;
	case 0x00231B:
		cid = "Danaher Motion - Kollmorgen";
		break;
	case 0x00239F:
		cid = "Institut für Prüftechnik";
		break;
	case 0x002393:
		cid = "AJINEXTEK";
		break;
	case 0x00238F:
		cid = "NIDEC COPAL CORPORATION";
		break;
	case 0x002385:
		cid = "ANTIPODE";
		break;
	case 0x00237E:
		cid = "ELSTER GMBH";
		break;
	case 0x002379:
		cid = "Union Business Machines Co. Ltd.";
		break;
	case 0x002253:
		cid = "Entorian Technologies";
		break;
	case 0x002250:
		cid = "Point Six Wireless, LLC";
		break;
	case 0x002249:
		cid = "HOME MULTIENERGY SL";
		break;
	case 0x00224A:
		cid = "RAYLASE AG";
		break;
	case 0x002240:
		cid = "Universal Telecom S/A";
		break;
	case 0x00222D:
		cid = "SMC Networks Inc.";
		break;
	case 0x00222E:
		cid = "maintech GmbH";
		break;
	case 0x002364:
		cid = "Power Instruments Pte Ltd";
		break;
	case 0x002369:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x002370:
		cid = "Snell";
		break;
	case 0x00235D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002356:
		cid = "Packet Forensics LLC";
		break;
	case 0x002313:
		cid = "Qool Technologies Ltd.";
		break;
	case 0x00230D:
		cid = "Nortel Networks";
		break;
	case 0x002301:
		cid = "Witron Technology Limited";
		break;
	case 0x0022F7:
		cid = "Conceptronic";
		break;
	case 0x0022EA:
		cid = "Rustelcom Inc.";
		break;
	case 0x0022F0:
		cid = "3 Greens Aviation Limited";
		break;
	case 0x0022E9:
		cid = "ProVision Communications";
		break;
	case 0x00211C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002117:
		cid = "Tellord";
		break;
	case 0x002110:
		cid = "Clearbox Systems";
		break;
	case 0x001FFF:
		cid = "Respironics, Inc.";
		break;
	case 0x001FFE:
		cid = "HPN Supply Chain";
		break;
	case 0x001FF8:
		cid = "Siemens AG, Sector Industry, Drive Technologies, Motion Control Systems";
		break;
	case 0x001FFD:
		cid = "Indigo Mobile Technologies Corp.";
		break;
	case 0x002221:
		cid = "ITOH DENKI CO,LTD.";
		break;
	case 0x00221B:
		cid = "Morega Systems";
		break;
	case 0x002220:
		cid = "Mitac Technology Corp";
		break;
	case 0x002227:
		cid = "uv-electronic GmbH";
		break;
	case 0x002214:
		cid = "RINNAI KOREA";
		break;
	case 0x00220E:
		cid = "Indigo Security Co., Ltd.";
		break;
	case 0x002208:
		cid = "Certicom Corp";
		break;
	case 0x002201:
		cid = "Aksys Networks Inc";
		break;
	case 0x0021F7:
		cid = "HPN Supply Chain";
		break;
	case 0x0021A0:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00219C:
		cid = "Honeywld Technology Corp.";
		break;
	case 0x002192:
		cid = "Baoding Galaxy Electronic Technology  Co.,Ltd";
		break;
	case 0x00218C:
		cid = "TopControl GMBH";
		break;
	case 0x00217F:
		cid = "Intraco Technology Pte Ltd";
		break;
	case 0x00217A:
		cid = "Sejin Electron, Inc.";
		break;
	case 0x002179:
		cid = "IOGEAR, Inc.";
		break;
	case 0x002173:
		cid = "Ion Torrent Systems, Inc.";
		break;
	case 0x001FC3:
		cid = "SmartSynch, Inc";
		break;
	case 0x001FC8:
		cid = "Up-Today Industrial Co., Ltd.";
		break;
	case 0x001FC1:
		cid = "Hanlong Technology Co.,LTD";
		break;
	case 0x001FC2:
		cid = "Jow Tong Technology Co Ltd";
		break;
	case 0x001FBC:
		cid = "EVGA Corporation";
		break;
	case 0x001FB0:
		cid = "TimeIPS, Inc.";
		break;
	case 0x001FB5:
		cid = "I/O Interconnect Inc.";
		break;
	case 0x001FA9:
		cid = "Atlanta DTH, Inc.";
		break;
	case 0x0021F1:
		cid = "Tutus Data AB";
		break;
	case 0x0021F2:
		cid = "EASY3CALL Technology Limited";
		break;
	case 0x0021EB:
		cid = "ESP SYSTEMS, LLC";
		break;
	case 0x0021E5:
		cid = "Display Solution AG";
		break;
	case 0x0021E4:
		cid = "I-WIN";
		break;
	case 0x0021DF:
		cid = "Martin Christ GmbH";
		break;
	case 0x0021D8:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0021CC:
		cid = "Flextronics International";
		break;
	case 0x001FF1:
		cid = "Paradox Hellas S.A.";
		break;
	case 0x001FEC:
		cid = "Synapse Électronique";
		break;
	case 0x001FE5:
		cid = "In-Circuit GmbH";
		break;
	case 0x001FD9:
		cid = "RSD Communications Ltd";
		break;
	case 0x001FD4:
		cid = "4IPNET, INC.";
		break;
	case 0x001FCF:
		cid = "MSI Technology GmbH";
		break;
	case 0x00213F:
		cid = "A-Team Technology Ltd.";
		break;
	case 0x002139:
		cid = "Escherlogic Inc.";
		break;
	case 0x002134:
		cid = "Brandywine Communications";
		break;
	case 0x00212F:
		cid = "Phoebe Micro Inc.";
		break;
	case 0x002129:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x00212A:
		cid = "Audiovox Corporation";
		break;
	case 0x002123:
		cid = "Aerosat Avionics";
		break;
	case 0x00216D:
		cid = "Soltech Co., Ltd.";
		break;
	case 0x00216C:
		cid = "ODVA";
		break;
	case 0x002167:
		cid = "HWA JIN T&I Corp.";
		break;
	case 0x002160:
		cid = "Hidea Solutions Co. Ltd.";
		break;
	case 0x002154:
		cid = "D-TACQ Solutions Ltd";
		break;
	case 0x00214D:
		cid = "Guangzhou Skytone Transmission Technology Com. Ltd.";
		break;
	case 0x002148:
		cid = "Kaco Solar Korea";
		break;
	case 0x0021C5:
		cid = "3DSP Corp";
		break;
	case 0x0021BF:
		cid = "Hitachi High-Tech Control Systems Corporation";
		break;
	case 0x0021C0:
		cid = "Mobile Appliance, Inc.";
		break;
	case 0x0021B9:
		cid = "Universal Devices Inc.";
		break;
	case 0x0021B3:
		cid = "Ross Controls";
		break;
	case 0x0021B2:
		cid = "Fiberblaze A/S";
		break;
	case 0x0021AD:
		cid = "Nordic ID Oy";
		break;
	case 0x0021A6:
		cid = "Videotec Spa";
		break;
	case 0x001F11:
		cid = "OPENMOKO, INC.";
		break;
	case 0x001F0B:
		cid = "Federal State Unitary Enterprise Industrial UnionElectropribor";
		break;
	case 0x001EFF:
		cid = "Mueller-Elektronik GmbH & Co. KG";
		break;
	case 0x001F06:
		cid = "Integrated Dispatch Solutions";
		break;
	case 0x001F05:
		cid = "iTAS Technology Corp.";
		break;
	case 0x001EF3:
		cid = "From2";
		break;
	case 0x001EF8:
		cid = "Emfinity Inc.";
		break;
	case 0x001F7A:
		cid = "WiWide Inc.";
		break;
	case 0x001F70:
		cid = "Botik Technologies LTD";
		break;
	case 0x001F75:
		cid = "GiBahn Media";
		break;
	case 0x001F64:
		cid = "Beijing Autelan Technology Inc.";
		break;
	case 0x001F5E:
		cid = "Dyna Technology Co.,Ltd.";
		break;
	case 0x001F58:
		cid = "EMH Energiemesstechnik GmbH";
		break;
	case 0x001F4C:
		cid = "Roseman Engineering Ltd";
		break;
	case 0x001F51:
		cid = "HD Communications Corp";
		break;
	case 0x001F4B:
		cid = "Lineage Power";
		break;
	case 0x001F9F:
		cid = "Thomson Telecom Belgium";
		break;
	case 0x001F93:
		cid = "Xiotech Corporation";
		break;
	case 0x001F98:
		cid = "DAIICHI-DENTSU LTD.";
		break;
	case 0x001F8C:
		cid = "CCS Inc.";
		break;
	case 0x001F8A:
		cid = "Ellion Digital Inc.";
		break;
	case 0x001F83:
		cid = "Teleplan Technology Services Sdn Bhd";
		break;
	case 0x001E30:
		cid = "Shireen Inc";
		break;
	case 0x001E2B:
		cid = "Radio Systems Design, Inc.";
		break;
	case 0x001E24:
		cid = "Zhejiang Bell Technology Co.,ltd";
		break;
	case 0x001E18:
		cid = "Radio Activity srl";
		break;
	case 0x001E1D:
		cid = "East Coast Datacom, Inc.";
		break;
	case 0x001E1E:
		cid = "Honeywell Life Safety";
		break;
	case 0x001E13:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001E0E:
		cid = "MAXI VIEW HOLDINGS LIMITED";
		break;
	case 0x001E60:
		cid = "Digital Lighting Systems, Inc";
		break;
	case 0x001E59:
		cid = "Silicon Turnkey Express, LLC";
		break;
	case 0x001E54:
		cid = "TOYO ELECTRIC Corporation";
		break;
	case 0x001E4D:
		cid = "Welkin Sciences, LLC";
		break;
	case 0x001E48:
		cid = "Wi-Links";
		break;
	case 0x001E43:
		cid = "AISIN AW CO.,LTD.";
		break;
	case 0x001E3E:
		cid = "KMW Inc.";
		break;
	case 0x001EC3:
		cid = "Kozio, Inc.";
		break;
	case 0x001EBC:
		cid = "WINTECH AUTOMATION CO.,LTD.";
		break;
	case 0x001EB7:
		cid = "TBTech, Co., Ltd.";
		break;
	case 0x001EB0:
		cid = "ImesD Electronica S.L.";
		break;
	case 0x001EA5:
		cid = "ROBOTOUS, Inc.";
		break;
	case 0x001EAB:
		cid = "TeleWell Oy";
		break;
	case 0x001E9E:
		cid = "ddm hopt + schuler Gmbh + Co. KG";
		break;
	case 0x001E99:
		cid = "Vantanol Industrial Corporation";
		break;
	case 0x001F36:
		cid = "Bellwin Information Co. Ltd.,";
		break;
	case 0x001F35:
		cid = "AIR802 LLC";
		break;
	case 0x001F30:
		cid = "Travelping";
		break;
	case 0x001F23:
		cid = "Interacoustics";
		break;
	case 0x001F24:
		cid = "DIGITVIEW TECHNOLOGY CO., LTD.";
		break;
	case 0x001F1D:
		cid = "Atlas Material Testing Technology LLC";
		break;
	case 0x001E92:
		cid = "JEULIN S.A.";
		break;
	case 0x001E89:
		cid = "CRFS Limited";
		break;
	case 0x001E84:
		cid = "Pika Technologies Inc.";
		break;
	case 0x001E83:
		cid = "LAN/MAN Standards Association (LMSC)";
		break;
	case 0x001E6C:
		cid = "Opaque Systems";
		break;
	case 0x001EE6:
		cid = "Shenzhen Advanced Video Info-Tech Co., Ltd.";
		break;
	case 0x001EE0:
		cid = "Urmet Domus SpA";
		break;
	case 0x001EDB:
		cid = "Giken Trastem Co., Ltd.";
		break;
	case 0x001ED6:
		cid = "Alentec & Orion AB";
		break;
	case 0x001ECF:
		cid = "PHILIPS ELECTRONICS UK LTD";
		break;
	case 0x001C96:
		cid = "Linkwise Technology Pte Ltd";
		break;
	case 0x001C91:
		cid = "Gefen Inc.";
		break;
	case 0x001C8A:
		cid = "Cirrascale Corporation";
		break;
	case 0x001C84:
		cid = "STL Solution Co.,Ltd.";
		break;
	case 0x001C80:
		cid = "New Business Division/Rhea-Information CO., LTD.";
		break;
	case 0x001C76:
		cid = "The Wandsworth Group Ltd";
		break;
	case 0x001C6F:
		cid = "Emfit Ltd";
		break;
	case 0x001C71:
		cid = "Emergent Electronics";
		break;
	case 0x001C70:
		cid = "NOVACOMM LTDA";
		break;
	case 0x001C6A:
		cid = "Weiss Engineering Ltd.";
		break;
	case 0x001D59:
		cid = "Mitra Energy & Infrastructure";
		break;
	case 0x001D52:
		cid = "Defzone B.V.";
		break;
	case 0x001D4C:
		cid = "Alcatel-Lucent";
		break;
	case 0x001D48:
		cid = "Sensor-Technik Wiedemann GmbH";
		break;
	case 0x001D41:
		cid = "Hardy Instruments";
		break;
	case 0x001D3C:
		cid = "Muscle Corporation";
		break;
	case 0x001D30:
		cid = "YX Wireless S.A.";
		break;
	case 0x001D35:
		cid = "Viconics Electronics Inc.";
		break;
	case 0x001D2F:
		cid = "QuantumVision Corporation";
		break;
	case 0x001CD3:
		cid = "ZP Engineering SEL";
		break;
	case 0x001CCE:
		cid = "By Techdesign";
		break;
	case 0x001CC7:
		cid = "Rembrandt Technologies, LLC d/b/a REMSTREAM";
		break;
	case 0x001CC2:
		cid = "Part II Research, Inc.";
		break;
	case 0x001CBB:
		cid = "MusicianLink";
		break;
	case 0x001CB1:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001CB7:
		cid = "USC DigiArk Corporation";
		break;
	case 0x001CA3:
		cid = "Terra";
		break;
	case 0x001CA5:
		cid = "Zygo Corporation";
		break;
	case 0x001CAA:
		cid = "Bellon Pty Ltd";
		break;
	case 0x001C9D:
		cid = "Liecthi AG";
		break;
	case 0x001DCA:
		cid = "PAV Electronics Limited";
		break;
	case 0x001DC4:
		cid = "AIOI Systems Co., Ltd.";
		break;
	case 0x001DC3:
		cid = "RIKOR TV, Ltd";
		break;
	case 0x001DB1:
		cid = "Crescendo Networks";
		break;
	case 0x001DB2:
		cid = "HOKKAIDO ELECTRIC ENGINEERING CO.,LTD.";
		break;
	case 0x001DB7:
		cid = "Tendril Networks, Inc.";
		break;
	case 0x001DAD:
		cid = "Sinotech Engineering Consultants, Inc.  Geotechnical Enginee";
		break;
	case 0x001DA8:
		cid = "Takahata Electronics Co.,Ltd";
		break;
	case 0x001DA7:
		cid = "Seamless Internet";
		break;
	case 0x001DA1:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001D9A:
		cid = "GODEX INTERNATIONAL CO., LTD";
		break;
	case 0x001D95:
		cid = "Flash, Inc.";
		break;
	case 0x001D8E:
		cid = "Alereon, Inc.";
		break;
	case 0x001D87:
		cid = "VigTech Labs Sdn Bhd";
		break;
	case 0x001D88:
		cid = "Clearwire";
		break;
	case 0x001D7E:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x001D7D:
		cid = "GIGA-BYTE TECHNOLOGY CO.,LTD.";
		break;
	case 0x001D6C:
		cid = "ClariPhy Communications, Inc.";
		break;
	case 0x001D71:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001D78:
		cid = "Invengo Information Technology Co.,Ltd";
		break;
	case 0x001D65:
		cid = "Microwave Radio Communications";
		break;
	case 0x001D5E:
		cid = "COMING MEDIA CORP.";
		break;
	case 0x001D29:
		cid = "Doro AB";
		break;
	case 0x001D22:
		cid = "Foss Analytical A/S";
		break;
	case 0x001D1D:
		cid = "Inter-M Corporation";
		break;
	case 0x001D16:
		cid = "SFR";
		break;
	case 0x001D10:
		cid = "LightHaus Logic, Inc.";
		break;
	case 0x001D0A:
		cid = "Davis Instruments, Inc.";
		break;
	case 0x001D03:
		cid = "Design Solutions Inc.";
		break;
	case 0x001CFE:
		cid = "Quartics Inc";
		break;
	case 0x001CF7:
		cid = "AudioScience";
		break;
	case 0x001CE6:
		cid = "INNES";
		break;
	case 0x001CE1:
		cid = "INDRA SISTEMAS, S.A.";
		break;
	case 0x001CDA:
		cid = "Exegin Technologies Limited";
		break;
	case 0x001E07:
		cid = "Winy Technology Co., Ltd.";
		break;
	case 0x001E02:
		cid = "Sougou Keikaku Kougyou Co.,Ltd.";
		break;
	case 0x001E01:
		cid = "Renesas Technology Sales Co., Ltd.";
		break;
	case 0x001DFB:
		cid = "NETCLEUS Systems Corporation";
		break;
	case 0x001DEF:
		cid = "TRIMM, INC.";
		break;
	case 0x001DE8:
		cid = "Nikko Denki Tsushin Corporation(NDTC)";
		break;
	case 0x001DE3:
		cid = "Intuicom";
		break;
	case 0x001DDD:
		cid = "DAT H.K. LIMITED";
		break;
	case 0x001AF8:
		cid = "Copley Controls Corporation";
		break;
	case 0x001AF3:
		cid = "Samyoung Electronics";
		break;
	case 0x001AEE:
		cid = "Shenztech Ltd";
		break;
	case 0x001AE2:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001AE7:
		cid = "Aztek Networks, Inc.";
		break;
	case 0x001AD4:
		cid = "iPOX Technology Co., Ltd.";
		break;
	case 0x001AD6:
		cid = "JIAGNSU AETNA ELECTRIC CO.,LTD";
		break;
	case 0x001B97:
		cid = "Violin Technologies";
		break;
	case 0x001B9C:
		cid = "SATEL sp. z o.o.";
		break;
	case 0x001B90:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001B86:
		cid = "Bosch Access Systems GmbH";
		break;
	case 0x001B8B:
		cid = "NEC Platforms, Ltd.";
		break;
	case 0x001B7F:
		cid = "TMN Technologies Telecomunicacoes Ltda";
		break;
	case 0x001B81:
		cid = "DATAQ Instruments, Inc.";
		break;
	case 0x001B80:
		cid = "LORD Corporation";
		break;
	case 0x001B73:
		cid = "DTL Broadcast Ltd";
		break;
	case 0x001B67:
		cid = "Cisco Systems Inc";
		break;
	case 0x001B60:
		cid = "NAVIGON AG";
		break;
	case 0x001B54:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001B48:
		cid = "Shenzhen Lantech Electronics Co., Ltd.";
		break;
	case 0x001B4D:
		cid = "Areca Technology Corporation";
		break;
	case 0x001B41:
		cid = "General Infinity Co.,Ltd.";
		break;
	case 0x001B3C:
		cid = "Software Technologies Group,Inc.";
		break;
	case 0x001B35:
		cid = "ChongQing JINOU Science & Technology Development CO.,Ltd";
		break;
	case 0x001B2E:
		cid = "Sinkyo Electron Inc";
		break;
	case 0x001B30:
		cid = "Solitech Inc.";
		break;
	case 0x001BC7:
		cid = "StarVedia Technology Inc.";
		break;
	case 0x001BC6:
		cid = "Strato Rechenzentrum AG";
		break;
	case 0x001BBB:
		cid = "RFTech Co.,Ltd";
		break;
	case 0x001BB6:
		cid = "Bird Electronic Corp.";
		break;
	case 0x001BAA:
		cid = "XenICs nv";
		break;
	case 0x001BA3:
		cid = "Flexit Group GmbH";
		break;
	case 0x001C63:
		cid = "TRUEN";
		break;
	case 0x001C57:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001C5E:
		cid = "ASTON France";
		break;
	case 0x001C46:
		cid = "QTUM";
		break;
	case 0x001C3A:
		cid = "Element Labs, Inc.";
		break;
	case 0x001C41:
		cid = "scemtec Transponder Technology GmbH";
		break;
	case 0x001C34:
		cid = "HUEY CHIAO INTERNATIONAL CO., LTD.";
		break;
	case 0x001C33:
		cid = "Sutron";
		break;
	case 0x001BF7:
		cid = "Lund IP Products AB";
		break;
	case 0x001BF9:
		cid = "Intellitect Water Ltd";
		break;
	case 0x001BF8:
		cid = "Digitrax Inc.";
		break;
	case 0x001BF2:
		cid = "KWORLD COMPUTER CO., LTD";
		break;
	case 0x001BEB:
		cid = "DMP Electronics INC.";
		break;
	case 0x001BE6:
		cid = "VR AG";
		break;
	case 0x001BDF:
		cid = "Iskra Sistemi d.d.";
		break;
	case 0x001BCC:
		cid = "KINGTEK CCTV ALLIANCE CO., LTD.";
		break;
	case 0x001AC8:
		cid = "ISL (Instrumentation Scientifique de Laboratoire)";
		break;
	case 0x001ACF:
		cid = "C.T. ELETTRONICA";
		break;
	case 0x001AC3:
		cid = "Scientific-Atlanta, Inc";
		break;
	case 0x001AB9:
		cid = "PMC";
		break;
	case 0x001ABE:
		cid = "COMPUTER HI-TECH INC.";
		break;
	case 0x001AAB:
		cid = "eWings s.r.l.";
		break;
	case 0x001AB2:
		cid = "Cyber Solutions Inc.";
		break;
	case 0x001AB7:
		cid = "Ethos Networks LTD.";
		break;
	case 0x001C2E:
		cid = "HPN Supply Chain";
		break;
	case 0x001C27:
		cid = "Sunell Electronics Co.";
		break;
	case 0x001C22:
		cid = "Aeris Elettronica s.r.l.";
		break;
	case 0x001C1D:
		cid = "CHENZHOU GOSPELL DIGITAL TECHNOLOGY CO.,LTD";
		break;
	case 0x001C18:
		cid = "Sicert S.r.L.";
		break;
	case 0x001C0A:
		cid = "Shenzhen AEE Technology Co.,Ltd.";
		break;
	case 0x001C05:
		cid = "Nonin Medical Inc.";
		break;
	case 0x001BFE:
		cid = "Zavio Inc.";
		break;
	case 0x001B29:
		cid = "Avantis.Co.,Ltd";
		break;
	case 0x001B23:
		cid = "SimpleComTools";
		break;
	case 0x001B1E:
		cid = "HART Communication Foundation";
		break;
	case 0x001B12:
		cid = "Apprion";
		break;
	case 0x001B0B:
		cid = "Phidgets Inc.";
		break;
	case 0x001B10:
		cid = "ShenZhen Kang Hui Technology Co.,ltd";
		break;
	case 0x001B04:
		cid = "Affinity International S.p.a";
		break;
	case 0x001AFF:
		cid = "Wizyoung Tech.";
		break;
	case 0x001AFD:
		cid = "EVOLIS";
		break;
	case 0x00191C:
		cid = "Sensicast Systems";
		break;
	case 0x00191E:
		cid = "Beyondwiz Co., Ltd.";
		break;
	case 0x001923:
		cid = "Phonex Korea Co., LTD.";
		break;
	case 0x00192A:
		cid = "Antiope Associates";
		break;
	case 0x001910:
		cid = "Knick Elektronische Messgeraete GmbH & Co. KG";
		break;
	case 0x001917:
		cid = "Posiflex Inc.";
		break;
	case 0x001909:
		cid = "DEVI - Danfoss A/S";
		break;
	case 0x00190B:
		cid = "Southern Vision Systems, Inc.";
		break;
	case 0x001904:
		cid = "WB Electronics Sp. z o.o.";
		break;
	case 0x0018FF:
		cid = "PowerQuattro Co.";
		break;
	case 0x0018FA:
		cid = "Yushin Precision Equipment Co.,Ltd.";
		break;
	case 0x001955:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00194E:
		cid = "Ultra Electronics - TCS (Tactical Communication Systems)";
		break;
	case 0x001950:
		cid = "Harman Multimedia";
		break;
	case 0x001949:
		cid = "TENTEL  COMTECH CO., LTD.";
		break;
	case 0x001942:
		cid = "ON SOFTWARE INTERNATIONAL LIMITED";
		break;
	case 0x00193D:
		cid = "GMC Guardian Mobility Corp.";
		break;
	case 0x001936:
		cid = "STERLITE OPTICAL TECHNOLOGIES LIMITED";
		break;
	case 0x00193B:
		cid = "Wilibox Deliberant Group LLC";
		break;
	case 0x00192F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001A20:
		cid = "CMOTECH Co. Ltd.";
		break;
	case 0x001A22:
		cid = "eQ-3 Entwicklung GmbH";
		break;
	case 0x001A14:
		cid = "Xin Hua Control Engineering Co.,Ltd.";
		break;
	case 0x001A0D:
		cid = "HandHeld entertainment, Inc.";
		break;
	case 0x001A0F:
		cid = "Sistemas Avanzados de Control, S.A.";
		break;
	case 0x001A08:
		cid = "Simoco Ltd.";
		break;
	case 0x001A01:
		cid = "Smiths Medical";
		break;
	case 0x0019FC:
		cid = "PT. Ufoakses Sukses Luarbiasa";
		break;
	case 0x0019EF:
		cid = "SHENZHEN LINNKING ELECTRONICS CO.,LTD";
		break;
	case 0x0019F1:
		cid = "Star Communication Network Technology Co.,Ltd";
		break;
	case 0x0019F6:
		cid = "Acconet (PTE) Ltd";
		break;
	case 0x001A76:
		cid = "SDT information Technology Co.,LTD.";
		break;
	case 0x001A6F:
		cid = "MI.TEL s.r.l.";
		break;
	case 0x001A6A:
		cid = "Tranzas, Inc.";
		break;
	case 0x001A63:
		cid = "Elster Solutions, LLC,";
		break;
	case 0x001A5E:
		cid = "Thincom Technology Co.,Ltd";
		break;
	case 0x001A57:
		cid = "Matrix Design Group, LLC";
		break;
	case 0x001A5C:
		cid = "Euchner GmbH+Co. KG";
		break;
	case 0x001A50:
		cid = "PheeNet Technology Corp.";
		break;
	case 0x001A9D:
		cid = "Skipper Wireless, Inc.";
		break;
	case 0x001AA2:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001A91:
		cid = "FusionDynamic Ltd.";
		break;
	case 0x001A96:
		cid = "ECLER S.A.";
		break;
	case 0x001A90:
		cid = "Trópico Sistemas e Telecomunicações da Amazônia LTDA.";
		break;
	case 0x001A8C:
		cid = "Sophos Ltd";
		break;
	case 0x001A85:
		cid = "NV Michel Van de Wiele";
		break;
	case 0x001A87:
		cid = "Canhold International Limited";
		break;
	case 0x001A86:
		cid = "AdvancedIO Systems Inc";
		break;
	case 0x0019B5:
		cid = "Famar Fueguina S.A.";
		break;
	case 0x0019BA:
		cid = "Paradox Security Systems Ltd";
		break;
	case 0x0019A2:
		cid = "ORDYN TECHNOLOGIES";
		break;
	case 0x0019AE:
		cid = "Hopling Technologies b.v.";
		break;
	case 0x0019A7:
		cid = "ITU-T";
		break;
	case 0x001996:
		cid = "TurboChef Technologies Inc.";
		break;
	case 0x00199B:
		cid = "Diversified Technical Systems, Inc.";
		break;
	case 0x001991:
		cid = "avinfo";
		break;
	case 0x00198A:
		cid = "Northrop Grumman Systems Corp.";
		break;
	case 0x00198C:
		cid = "iXSea";
		break;
	case 0x001985:
		cid = "IT Watchdogs, Inc";
		break;
	case 0x00196B:
		cid = "Danpex Corporation";
		break;
	case 0x001966:
		cid = "Asiarock Technology Limited";
		break;
	case 0x00195C:
		cid = "Innotech Corporation";
		break;
	case 0x001961:
		cid = "Blaupunkt  Embedded Systems GmbH";
		break;
	case 0x0019DE:
		cid = "MOBITEK";
		break;
	case 0x0019EA:
		cid = "TeraMage Technologies Co., Ltd.";
		break;
	case 0x0019D0:
		cid = "Cathexis";
		break;
	case 0x0019D7:
		cid = "FORTUNETEK CO., LTD";
		break;
	case 0x0019B3:
		cid = "Stanford Research Systems";
		break;
	case 0x001A44:
		cid = "JWTrading Co., Ltd";
		break;
	case 0x001A49:
		cid = "Micro Vision Co.,LTD";
		break;
	case 0x001A3D:
		cid = "Ajin Vision Co.,Ltd";
		break;
	case 0x001A38:
		cid = "Sanmina-SCI";
		break;
	case 0x001A2C:
		cid = "SATEC Co.,LTD";
		break;
	case 0x001A27:
		cid = "Ubistar";
		break;
	case 0x0017AE:
		cid = "GAI-Tronics";
		break;
	case 0x0017A2:
		cid = "Camrivox Ltd.";
		break;
	case 0x0017A7:
		cid = "Mobile Computing Promotion Consortium";
		break;
	case 0x00179D:
		cid = "Kelman Limited";
		break;
	case 0x001791:
		cid = "LinTech GmbH";
		break;
	case 0x001796:
		cid = "Rittmeyer AG";
		break;
	case 0x001798:
		cid = "Azonic Technology Co., LTD";
		break;
	case 0x00178A:
		cid = "DARTS TECHNOLOGIES CORP.";
		break;
	case 0x00177E:
		cid = "Meshcom Technologies Inc.";
		break;
	case 0x001785:
		cid = "Sparr Electronics Ltd";
		break;
	case 0x001809:
		cid = "CRESYN";
		break;
	case 0x00180E:
		cid = "Avega Systems";
		break;
	case 0x001810:
		cid = "IPTrade S.A.";
		break;
	case 0x0017F6:
		cid = "Pyramid Meriden Inc.";
		break;
	case 0x0017FB:
		cid = "FA";
		break;
	case 0x0017FD:
		cid = "Amulet Hotkey";
		break;
	case 0x0017EF:
		cid = "IBM Corp";
		break;
	case 0x0017D7:
		cid = "ION Geophysical Corporation Inc.";
		break;
	case 0x0017DC:
		cid = "DAEMYUNG ZERO1";
		break;
	case 0x0017DE:
		cid = "Advantage Six Ltd";
		break;
	case 0x0018C3:
		cid = "CS Corporation";
		break;
	case 0x0018CA:
		cid = "Viprinet GmbH";
		break;
	case 0x0018BE:
		cid = "ANSA Corporation";
		break;
	case 0x0018B2:
		cid = "ADEUNIS RF";
		break;
	case 0x0018B7:
		cid = "D3 LED, LLC";
		break;
	case 0x0018AB:
		cid = "BEIJING LHWT MICROELECTRONICS INC.";
		break;
	case 0x0018A6:
		cid = "Persistent Systems, LLC";
		break;
	case 0x001895:
		cid = "Hansun Technologies Inc.";
		break;
	case 0x00189A:
		cid = "HANA Micron Inc.";
		break;
	case 0x0018E7:
		cid = "Cameo Communications, INC.";
		break;
	case 0x0018EE:
		cid = "Videology Imaging Solutions, Inc.";
		break;
	case 0x0018E2:
		cid = "Topdata Sistemas de Automacao Ltda";
		break;
	case 0x0018DB:
		cid = "EPL Technology Ltd";
		break;
	case 0x0018E0:
		cid = "ANAVEO";
		break;
	case 0x0018CF:
		cid = "Baldor Electric Company";
		break;
	case 0x0018D4:
		cid = "Unified Display Interface SIG";
		break;
	case 0x00184A:
		cid = "Catcher, Inc.";
		break;
	case 0x00184C:
		cid = "Bogen Communications";
		break;
	case 0x001845:
		cid = "Pulsar-Telecom LLC.";
		break;
	case 0x00183E:
		cid = "Digilent, Inc";
		break;
	case 0x001828:
		cid = "e2v technologies (UK) ltd.";
		break;
	case 0x00182D:
		cid = "Artec Design";
		break;
	case 0x001821:
		cid = "SINDORICOH";
		break;
	case 0x001815:
		cid = "GZ Technologies, Inc.";
		break;
	case 0x00181C:
		cid = "Exterity Limited";
		break;
	case 0x001772:
		cid = "ASTRO Strobel Kommunikationssysteme GmbH";
		break;
	case 0x001777:
		cid = "Obsidian Research Corporation";
		break;
	case 0x00176E:
		cid = "DUCATI SISTEMI";
		break;
	case 0x001762:
		cid = "Solar Technology, Inc.";
		break;
	case 0x001769:
		cid = "Cymphonix Corp";
		break;
	case 0x00175D:
		cid = "Dongseo system.";
		break;
	case 0x00175B:
		cid = "ACS Solutions Switzerland Ltd.";
		break;
	case 0x001756:
		cid = "Vinci Labs Oy";
		break;
	case 0x00174F:
		cid = "iCatch Inc.";
		break;
	case 0x0017CD:
		cid = "CEC Wireless R&D Ltd.";
		break;
	case 0x0017D2:
		cid = "THINLINX PTY LTD";
		break;
	case 0x0017C6:
		cid = "Cross Match Technologies Inc";
		break;
	case 0x0017BA:
		cid = "SEDO CO., LTD.";
		break;
	case 0x0017BF:
		cid = "Coherent Research Limited";
		break;
	case 0x0017C1:
		cid = "CM Precision Technology LTD.";
		break;
	case 0x0017B3:
		cid = "Aftek Infosys Limited";
		break;
	case 0x00186A:
		cid = "Global Link Digital Technology Co,.LTD";
		break;
	case 0x00186F:
		cid = "Setha Industria Eletronica LTDA";
		break;
	case 0x001876:
		cid = "WowWee Ltd.";
		break;
	case 0x001869:
		cid = "KINGJIM";
		break;
	case 0x001864:
		cid = "Eaton Corporation";
		break;
	case 0x00185D:
		cid = "TAIGUEN TECHNOLOGY (SHEN-ZHEN) CO., LTD.";
		break;
	case 0x001851:
		cid = "SWsoft";
		break;
	case 0x001858:
		cid = "TagMaster AB";
		break;
	case 0x00189F:
		cid = "Lenntek Corporation";
		break;
	case 0x00188E:
		cid = "Ekahau, Inc.";
		break;
	case 0x001887:
		cid = "Metasystem SpA";
		break;
	case 0x001889:
		cid = "WinNet Solutions Limited";
		break;
	case 0x00187B:
		cid = "4NSYS Co. Ltd.";
		break;
	case 0x001661:
		cid = "Novatium Solutions (P) Ltd";
		break;
	case 0x001663:
		cid = "KBT Mobile";
		break;
	case 0x001668:
		cid = "Eishin Electronics";
		break;
	case 0x001662:
		cid = "Liyuh Technology Ltd.";
		break;
	case 0x001655:
		cid = "FUHO TECHNOLOGY Co., LTD";
		break;
	case 0x0015E4:
		cid = "Zimmer Elektromedizin";
		break;
	case 0x0015DA:
		cid = "IRITEL A.D.";
		break;
	case 0x0015DF:
		cid = "Clivet S.p.A.";
		break;
	case 0x0015D3:
		cid = "Pantech&Curitel Communications, Inc.";
		break;
	case 0x0015C7:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0015C0:
		cid = "DIGITAL TELEMEDIA CO.,LTD.";
		break;
	case 0x0015BA:
		cid = "iba AG";
		break;
	case 0x00174A:
		cid = "SOCOMEC";
		break;
	case 0x001743:
		cid = "Deck Srl";
		break;
	case 0x00173D:
		cid = "Neology";
		break;
	case 0x00173E:
		cid = "LeucotronEquipamentos Ltda.";
		break;
	case 0x001738:
		cid = "International Business Machines";
		break;
	case 0x00172C:
		cid = "TAEJIN INFOTECH";
		break;
	case 0x001720:
		cid = "Image Sensing Systems, Inc.";
		break;
	case 0x001725:
		cid = "Liquid Computing";
		break;
	case 0x001701:
		cid = "KDE, Inc.";
		break;
	case 0x001703:
		cid = "MOSDAN Internation Co.,Ltd";
		break;
	case 0x0016FC:
		cid = "TOHKEN CO.,LTD.";
		break;
	case 0x0016F0:
		cid = "Dell";
		break;
	case 0x0016F5:
		cid = "Dalian Golden Hualu Digital Technology Co.,Ltd";
		break;
	case 0x0016E9:
		cid = "Tiba Medical Inc";
		break;
	case 0x0016E4:
		cid = "VANGUARD SECURITY ENGINEERING CORP.";
		break;
	case 0x0016DD:
		cid = "Gigabeam Corporation";
		break;
	case 0x0016E2:
		cid = "American Fibertek, Inc.";
		break;
	case 0x0016D8:
		cid = "Senea AB";
		break;
	case 0x00169C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00169E:
		cid = "TV One Ltd";
		break;
	case 0x0016A3:
		cid = "Ingeteam Transmission&Distribution, S.A.";
		break;
	case 0x001690:
		cid = "J-TEK INCORPORATION";
		break;
	case 0x001697:
		cid = "NEC Corporation";
		break;
	case 0x001689:
		cid = "Pilkor Electronics Co., Ltd";
		break;
	case 0x00168B:
		cid = "Paralan Corporation";
		break;
	case 0x001684:
		cid = "Donjin Co.,Ltd.";
		break;
	case 0x00167D:
		cid = "Sky-Line Information Co., Ltd.";
		break;
	case 0x001678:
		cid = "SHENZHEN BAOAN GAOKE ELECTRONICS CO., LTD";
		break;
	case 0x001649:
		cid = "SetOne GmbH";
		break;
	case 0x00163F:
		cid = "CReTE SYSTEMS Inc.";
		break;
	case 0x001638:
		cid = "TECOM Co., Ltd.";
		break;
	case 0x001633:
		cid = "Oxford Diagnostics Ltd.";
		break;
	case 0x00162C:
		cid = "Xanboo";
		break;
	case 0x001627:
		cid = "embedded-logic DESIGN AND MORE GmbH";
		break;
	case 0x001619:
		cid = "Lancelan Technologies S.L.";
		break;
	case 0x001614:
		cid = "Picosecond Pulse Labs";
		break;
	case 0x001719:
		cid = "Audiocodes USA, Inc";
		break;
	case 0x00171E:
		cid = "Theo Benning GmbH & Co. KG";
		break;
	case 0x001712:
		cid = "ISCO International";
		break;
	case 0x00170D:
		cid = "Dust Networks Inc.";
		break;
	case 0x00160F:
		cid = "BADGER METER INC";
		break;
	case 0x00160A:
		cid = "SWEEX Europe BV";
		break;
	case 0x001603:
		cid = "COOLKSKY Co., LTD";
		break;
	case 0x0015F7:
		cid = "Wintecronics Ltd.";
		break;
	case 0x0015F0:
		cid = "EGO BV";
		break;
	case 0x0015EA:
		cid = "Tellumat (Pty) Ltd";
		break;
	case 0x0016C5:
		cid = "Shenzhen Xing Feng Industry Co.,Ltd";
		break;
	case 0x0016C7:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0016CC:
		cid = "Xcute Mobile Corp.";
		break;
	case 0x0016C0:
		cid = "Semtech Corporation";
		break;
	case 0x0016B4:
		cid = "Private";
		break;
	case 0x0016A8:
		cid = "CWT CO., LTD.";
		break;
	case 0x0016AD:
		cid = "BT-Links Company Limited";
		break;
	case 0x001553:
		cid = "Cytyc Corporation";
		break;
	case 0x001555:
		cid = "DFM GmbH";
		break;
	case 0x00154E:
		cid = "IEC";
		break;
	case 0x001547:
		cid = "AiZen Solutions Inc.";
		break;
	case 0x001542:
		cid = "MICROHARD S.R.L.";
		break;
	case 0x00153B:
		cid = "EMH metering GmbH & Co. KG";
		break;
	case 0x001534:
		cid = "A Beltrónica-Companhia de Comunicações, Lda";
		break;
	case 0x001440:
		cid = "ATOMIC Corporation";
		break;
	case 0x001434:
		cid = "Keri Systems, Inc";
		break;
	case 0x00142D:
		cid = "Toradex AG";
		break;
	case 0x001426:
		cid = "NL Technology";
		break;
	case 0x001421:
		cid = "Total Wireless Technologies Pte. Ltd.";
		break;
	case 0x00141C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001583:
		cid = "IVT corporation";
		break;
	case 0x00157E:
		cid = "Weidmüller Interface GmbH & Co. KG";
		break;
	case 0x001579:
		cid = "Lunatone Industrielle Elektronik GmbH";
		break;
	case 0x001574:
		cid = "Horizon Semiconductors Ltd.";
		break;
	case 0x001566:
		cid = "A-First Technology Co., Ltd.";
		break;
	case 0x001561:
		cid = "JJPlus Corporation";
		break;
	case 0x00155A:
		cid = "DAINIPPON PHARMACEUTICAL CO., LTD.";
		break;
	case 0x001554:
		cid = "Atalum Wireless S.A.";
		break;
	case 0x001528:
		cid = "Beacon Medical Products LLC d.b.a. BeaconMedaes";
		break;
	case 0x001521:
		cid = "Horoquartz";
		break;
	case 0x001523:
		cid = "Meteor Communications Corporation";
		break;
	case 0x001522:
		cid = "Dea Security";
		break;
	case 0x00151C:
		cid = "LENECO";
		break;
	case 0x001512:
		cid = "Zurich University of Applied Sciences";
		break;
	case 0x00150B:
		cid = "SAGE INFOTECH LTD.";
		break;
	case 0x001506:
		cid = "Neo Photonics";
		break;
	case 0x0014FF:
		cid = "Precise Automation, Inc.";
		break;
	case 0x0014F8:
		cid = "Scientific Atlanta";
		break;
	case 0x0014F3:
		cid = "ViXS Systems Inc";
		break;
	case 0x0014E7:
		cid = "Stolinx,. Inc";
		break;
	case 0x0014EC:
		cid = "Acro Telecom";
		break;
	case 0x0014E2:
		cid = "datacom systems inc.";
		break;
	case 0x0014D6:
		cid = "Jeongmin Electronics Co.,Ltd.";
		break;
	case 0x0014DB:
		cid = "Elma Trenew Electronic GmbH";
		break;
	case 0x0014DD:
		cid = "Covergence Inc.";
		break;
	case 0x0014DC:
		cid = "Communication System Design & Manufacturing (CSDM)";
		break;
	case 0x0014CF:
		cid = "INVISIO Communications";
		break;
	case 0x0014CA:
		cid = "Key Radio Systems Limited";
		break;
	case 0x0014BC:
		cid = "SYNECTIC TELECOM EXPORTS PVT. LTD.";
		break;
	case 0x0014B7:
		cid = "AR Infotek Inc.";
		break;
	case 0x0014AD:
		cid = "Gassner Wiege- und Meßtechnik GmbH";
		break;
	case 0x0014B2:
		cid = "mCubelogics Corporation";
		break;
	case 0x0014A6:
		cid = "Teranetics, Inc.";
		break;
	case 0x00149F:
		cid = "System and Chips, Inc.";
		break;
	case 0x0014A1:
		cid = "Synchronous Communication Corp";
		break;
	case 0x001470:
		cid = "Prokom Software SA";
		break;
	case 0x001469:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001462:
		cid = "Digiwell Technology, inc";
		break;
	case 0x00145D:
		cid = "WJ Communications, Inc.";
		break;
	case 0x001450:
		cid = "Heim Systems GmbH";
		break;
	case 0x001456:
		cid = "Edge Products";
		break;
	case 0x00144C:
		cid = "General Meters Corp.";
		break;
	case 0x001445:
		cid = "Telefon-Gradnja d.o.o.";
		break;
	case 0x001447:
		cid = "BOAZ Inc.";
		break;
	case 0x001446:
		cid = "SuperVision Solutions LLC";
		break;
	case 0x0015B3:
		cid = "Caretech AB";
		break;
	case 0x0015A9:
		cid = "KWANG WOO I&C CO.,LTD";
		break;
	case 0x00159D:
		cid = "Tripp Lite";
		break;
	case 0x001591:
		cid = "RLW Inc.";
		break;
	case 0x00158A:
		cid = "SURECOM Technology Corp.";
		break;
	case 0x00158F:
		cid = "NTT Advanced Technology Corporation";
		break;
	case 0x001590:
		cid = "Hectronic GmbH";
		break;
	case 0x0014A0:
		cid = "Accsense, Inc.";
		break;
	case 0x001493:
		cid = "Systimax Solutions";
		break;
	case 0x00148E:
		cid = "Tele Power Inc.";
		break;
	case 0x001487:
		cid = "American Technology Integrators";
		break;
	case 0x001482:
		cid = "Aurora Networks";
		break;
	case 0x001481:
		cid = "Multilink Inc";
		break;
	case 0x00147C:
		cid = "3Com Ltd";
		break;
	case 0x001475:
		cid = "Wiline Networks, Inc.";
		break;
	case 0x0012E7:
		cid = "Projectek Networking Electronics Corp.";
		break;
	case 0x0012E8:
		cid = "Fraunhofer IMS";
		break;
	case 0x0012DB:
		cid = "ZIEHL industrie-elektronik GmbH + Co KG";
		break;
	case 0x0012E2:
		cid = "ALAXALA Networks Corporation";
		break;
	case 0x0012D6:
		cid = "Jiangsu Yitong High-Tech Co.,Ltd";
		break;
	case 0x0012D5:
		cid = "Motion Reality Inc.";
		break;
	case 0x0012C3:
		cid = "WIT S.A.";
		break;
	case 0x0013E5:
		cid = "TENOSYS, INC.";
		break;
	case 0x0013EA:
		cid = "Kamstrup A/S";
		break;
	case 0x0013DE:
		cid = "Adapt4, LLC";
		break;
	case 0x0013D7:
		cid = "SPIDCOM Technologies SA";
		break;
	case 0x0013D8:
		cid = "Princeton Instruments";
		break;
	case 0x0013CF:
		cid = "4Access Communications";
		break;
	case 0x0013D2:
		cid = "PAGE IBERICA, S.A.";
		break;
	case 0x0013C9:
		cid = "Beyond Achieve Enterprises Ltd.";
		break;
	case 0x0013C2:
		cid = "WACOM Co.,Ltd";
		break;
	case 0x0013BD:
		cid = "HYMATOM SA";
		break;
	case 0x0013B8:
		cid = "RyCo Electronic Systems Limited";
		break;
	case 0x00134E:
		cid = "Valox Systems, Inc.";
		break;
	case 0x001353:
		cid = "HYDAC Filtertechnik GMBH";
		break;
	case 0x00134D:
		cid = "Inepro BV";
		break;
	case 0x001347:
		cid = "Red Lion Controls, LP";
		break;
	case 0x00133B:
		cid = "Speed Dragon Multimedia Limited";
		break;
	case 0x001340:
		cid = "AD.EL s.r.l.";
		break;
	case 0x00132E:
		cid = "ITian Coporation";
		break;
	case 0x001328:
		cid = "Westech Korea Inc.,";
		break;
	case 0x00132D:
		cid = "iWise Communications";
		break;
	case 0x001334:
		cid = "Arkados, Inc.";
		break;
	case 0x0013B3:
		cid = "Ecom Communications Technology Co., Ltd.";
		break;
	case 0x0013AC:
		cid = "Sunmyung Electronics Co., LTD";
		break;
	case 0x0013A6:
		cid = "Extricom Ltd";
		break;
	case 0x0013A5:
		cid = "General Solutions, LTD.";
		break;
	case 0x0013A0:
		cid = "ALGOSYSTEM Co., Ltd.";
		break;
	case 0x001399:
		cid = "STAC Corporation.";
		break;
	case 0x001393:
		cid = "Panta Systems, Inc.";
		break;
	case 0x001394:
		cid = "Infohand Co.,Ltd";
		break;
	case 0x00138D:
		cid = "Kinghold";
		break;
	case 0x0012C8:
		cid = "Perfect tech";
		break;
	case 0x0012B9:
		cid = "Fusion Digital Technology";
		break;
	case 0x0012BE:
		cid = "Astek Corporation";
		break;
	case 0x0012AC:
		cid = "ONTIMETEK INC.";
		break;
	case 0x0012AB:
		cid = "WiLife, Inc.";
		break;
	case 0x0012B2:
		cid = "AVOLITES LTD.";
		break;
	case 0x0012A6:
		cid = "Dolby Australia";
		break;
	case 0x001378:
		cid = "Qsan Technology, Inc.";
		break;
	case 0x00137D:
		cid = "Dynalab, Inc.";
		break;
	case 0x001384:
		cid = "Advanced Motion Controls";
		break;
	case 0x00137E:
		cid = "CorEdge Networks, Inc.";
		break;
	case 0x00136C:
		cid = "TomTom";
		break;
	case 0x00136B:
		cid = "E-TEC";
		break;
	case 0x001359:
		cid = "ProTelevision Technologies A/S";
		break;
	case 0x00135E:
		cid = "EAB/RWI/K";
		break;
	case 0x00129F:
		cid = "RAE Systems";
		break;
	case 0x001299:
		cid = "Ktech Telecommunications Inc";
		break;
	case 0x00129A:
		cid = "IRT Electronics Pty Ltd";
		break;
	case 0x00128C:
		cid = "Woodward Governor";
		break;
	case 0x001293:
		cid = "GE Energy";
		break;
	case 0x001287:
		cid = "Digital Everywhere Unterhaltungselektronik GmbH";
		break;
	case 0x001280:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00131E:
		cid = "Peiker acustic GmbH & Co. KG";
		break;
	case 0x001323:
		cid = "Cap Co., Ltd.";
		break;
	case 0x00130B:
		cid = "Mextal B.V.";
		break;
	case 0x001312:
		cid = "Amedia Networks Inc.";
		break;
	case 0x0012F8:
		cid = "WNI Resources, LLC";
		break;
	case 0x0012FF:
		cid = "Lely Industries N.V.";
		break;
	case 0x001304:
		cid = "Flaircomm Technologies Co. LTD";
		break;
	case 0x001410:
		cid = "Suzhou Keda Technology CO.,Ltd";
		break;
	case 0x001417:
		cid = "RSE Informations Technologie GmbH";
		break;
	case 0x001408:
		cid = "Eka Systems Inc.";
		break;
	case 0x001402:
		cid = "kk-electronic a/s";
		break;
	case 0x001401:
		cid = "Rivertree Networks Corp.";
		break;
	case 0x0013FB:
		cid = "RKC INSTRUMENT INC.";
		break;
	case 0x0013F4:
		cid = "Psitek (Pty) Ltd";
		break;
	case 0x0013EF:
		cid = "Kingjon Digital Technology Co.,Ltd";
		break;
	case 0x0011F7:
		cid = "Shenzhen Forward Industry Co., Ltd";
		break;
	case 0x0011F2:
		cid = "Institute of Network Technologies";
		break;
	case 0x0011EB:
		cid = "Innovative Integration";
		break;
	case 0x0011E6:
		cid = "Scientific Atlanta";
		break;
	case 0x0011E5:
		cid = "KCodes Corporation";
		break;
	case 0x0011DF:
		cid = "Current Energy";
		break;
	case 0x0011D3:
		cid = "NextGenTel Holding ASA";
		break;
	case 0x00110E:
		cid = "Tsurusaki Sealand Transportation Co. Ltd.";
		break;
	case 0x001115:
		cid = "EPIN Technologies, Inc.";
		break;
	case 0x001114:
		cid = "EverFocus Electronics Corp.";
		break;
	case 0x001107:
		cid = "RGB Networks Inc.";
		break;
	case 0x001108:
		cid = "Orbital Data Corporation";
		break;
	case 0x001102:
		cid = "Aurora Multimedia Corp.";
		break;
	case 0x000FFC:
		cid = "Merit Li-Lin Ent.";
		break;
	case 0x000FDA:
		cid = "YAZAKI CORPORATION";
		break;
	case 0x000FF3:
		cid = "Jung Myoung Communications&Technology";
		break;
	case 0x0011A2:
		cid = "Manufacturing Technology Inc";
		break;
	case 0x00119B:
		cid = "Telesynergy Research Inc.";
		break;
	case 0x00118C:
		cid = "Missouri Department of Transportation";
		break;
	case 0x001191:
		cid = "CTS-Clima Temperatur Systeme GmbH";
		break;
	case 0x001196:
		cid = "Actuality Systems, Inc.";
		break;
	case 0x001179:
		cid = "Singular Technology Co. Ltd.";
		break;
	case 0x001172:
		cid = "COTRON CORPORATION";
		break;
	case 0x001166:
		cid = "Taelim Electronics Co., Ltd.";
		break;
	case 0x00116B:
		cid = "Digital Data Communications Asia Co.,Ltd";
		break;
	case 0x00116C:
		cid = "Nanwang Multimedia Inc.,Ltd";
		break;
	case 0x001162:
		cid = "STAR MICRONICS CO.,LTD.";
		break;
	case 0x001161:
		cid = "NetStreams, LLC";
		break;
	case 0x001155:
		cid = "Sevis Systems";
		break;
	case 0x00115C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001147:
		cid = "Secom-Industry co.LTD.";
		break;
	case 0x00114C:
		cid = "caffeina applied research ltd.";
		break;
	case 0x001274:
		cid = "NIT lab";
		break;
	case 0x00127A:
		cid = "Sanyu Industry Co.,Ltd.";
		break;
	case 0x00126D:
		cid = "University of California, Berkeley";
		break;
	case 0x001268:
		cid = "IPS d.o.o.";
		break;
	case 0x001267:
		cid = "Panasonic Corporation";
		break;
	case 0x001261:
		cid = "Adaptix, Inc";
		break;
	case 0x001257:
		cid = "LeapComm Communication Technologies Inc.";
		break;
	case 0x001222:
		cid = "Skardin (UK) Ltd";
		break;
	case 0x001227:
		cid = "Franklin Electric Co., Inc.";
		break;
	case 0x00121B:
		cid = "Sound Devices, LLC";
		break;
	case 0x001221:
		cid = "B.Braun Melsungen AG";
		break;
	case 0x001214:
		cid = "Koenig & Bauer AG";
		break;
	case 0x00120F:
		cid = "IEEE 802.3";
		break;
	case 0x001208:
		cid = "Gantner Instruments GmbH";
		break;
	case 0x001201:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001202:
		cid = "Decrane Aerospace - Audio International Inc.";
		break;
	case 0x0011C7:
		cid = "Raymarine UK Ltd";
		break;
	case 0x0011CC:
		cid = "Guangzhou Jinpeng Group Co.,Ltd.";
		break;
	case 0x0011B5:
		cid = "Shenzhen Powercom Co.,Ltd";
		break;
	case 0x0011BA:
		cid = "Elexol Pty Ltd";
		break;
	case 0x0011C1:
		cid = "4P MOBILE DATA PROCESSING";
		break;
	case 0x0011A8:
		cid = "Quest Technologies";
		break;
	case 0x0011A7:
		cid = "Infilco Degremont Inc.";
		break;
	case 0x001250:
		cid = "Tokyo Aircaft Instrument Co., Ltd.";
		break;
	case 0x00124B:
		cid = "Texas Instruments";
		break;
	case 0x001244:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001238:
		cid = "SetaBox Technology Co., Ltd.";
		break;
	case 0x00123D:
		cid = "GES Co, Ltd";
		break;
	case 0x00123E:
		cid = "ERUNE technology Co., Ltd.";
		break;
	case 0x00122C:
		cid = "Soenen Controls N.V.";
		break;
	case 0x001231:
		cid = "Motion Control Systems, Inc.";
		break;
	case 0x001146:
		cid = "Telecard-Pribor Ltd";
		break;
	case 0x001140:
		cid = "Nanometrics Inc.";
		break;
	case 0x001139:
		cid = "STOEBER ANTRIEBSTECHNIK GmbH + Co. KG.";
		break;
	case 0x00113A:
		cid = "SHINBORAM";
		break;
	case 0x001134:
		cid = "MediaCell, Inc.";
		break;
	case 0x001127:
		cid = "TASI, Inc";
		break;
	case 0x00112A:
		cid = "Niko NV";
		break;
	case 0x001121:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000EBB:
		cid = "Everbee Networks";
		break;
	case 0x000EB4:
		cid = "GUANGZHOU GAOKE COMMUNICATIONS TECHNOLOGY CO.LTD.";
		break;
	case 0x000EAE:
		cid = "GAWELL TECHNOLOGIES CORP.";
		break;
	case 0x000EA8:
		cid = "United Technologists Europe Limited";
		break;
	case 0x000EAD:
		cid = "Metanoia Technologies, Inc.";
		break;
	case 0x000EA1:
		cid = "Formosa Teletek Corporation";
		break;
	case 0x000E9C:
		cid = "Benchmark Electronics";
		break;
	case 0x000E9B:
		cid = "Ambit Microsystems Corporation";
		break;
	case 0x000E8E:
		cid = "SparkLAN Communications, Inc.";
		break;
	case 0x000E95:
		cid = "Fujiya Denki Seisakusho Co.,Ltd.";
		break;
	case 0x000FC1:
		cid = "WAVE Corporation";
		break;
	case 0x000FC8:
		cid = "Chantry Networks";
		break;
	case 0x000FC7:
		cid = "Dionica R&D Ltd.";
		break;
	case 0x000FBA:
		cid = "Tevebox AB";
		break;
	case 0x000FA7:
		cid = "Raptor Networks Technology";
		break;
	case 0x000FAE:
		cid = "E2O Communications";
		break;
	case 0x000FA8:
		cid = "Photometrics, Inc.";
		break;
	case 0x000F9A:
		cid = "Synchrony, Inc.";
		break;
	case 0x000FA2:
		cid = "2xWireless";
		break;
	case 0x000E89:
		cid = "CLEMATIC";
		break;
	case 0x000E82:
		cid = "Commtech Wireless";
		break;
	case 0x000E7C:
		cid = "Televes S.A.";
		break;
	case 0x000E76:
		cid = "GEMSOC INNOVISION INC.";
		break;
	case 0x000E6E:
		cid = "MAT S.A. (Mircrelec Advanced Technology)";
		break;
	case 0x000E72:
		cid = "CTS electronics";
		break;
	case 0x000E68:
		cid = "E-TOP Network Technology Inc.";
		break;
	case 0x000E67:
		cid = "Eltis Microelectronics Ltd.";
		break;
	case 0x000FE7:
		cid = "Lutron Electronics Co., Inc.";
		break;
	case 0x000FEC:
		cid = "ARKUS Inc.";
		break;
	case 0x000FE0:
		cid = "NComputing Co.,Ltd.";
		break;
	case 0x000FD4:
		cid = "Soundcraft";
		break;
	case 0x000FD9:
		cid = "FlexDSL Telecommunications AG";
		break;
	case 0x000EEA:
		cid = "Shadong Luneng Jicheng Electronics,Co.,Ltd";
		break;
	case 0x000EDD:
		cid = "SHURE INCORPORATED";
		break;
	case 0x000EE4:
		cid = "BOE TECHNOLOGY GROUP CO.,LTD";
		break;
	case 0x000ED8:
		cid = "Positron Access Solutions Corp";
		break;
	case 0x000ECD:
		cid = "SKOV A/S";
		break;
	case 0x000ECE:
		cid = "S.I.T.T.I. S.p.A.";
		break;
	case 0x000ED3:
		cid = "Epicenter, Inc.";
		break;
	case 0x000EC7:
		cid = "Motorola Korea";
		break;
	case 0x000F93:
		cid = "Landis+Gyr Ltd.";
		break;
	case 0x000F94:
		cid = "Genexis BV";
		break;
	case 0x000F8E:
		cid = "DONGYANG TELECOM CO.,LTD.";
		break;
	case 0x000F87:
		cid = "Maxcess International";
		break;
	case 0x000F82:
		cid = "Mortara Instrument, Inc.";
		break;
	case 0x000F81:
		cid = "PAL Pacific Inc.";
		break;
	case 0x000F74:
		cid = "Qamcom Technology AB";
		break;
	case 0x000F7B:
		cid = "Arce Sistemas, S.A.";
		break;
	case 0x000F68:
		cid = "Vavic Network Technology, Inc.";
		break;
	case 0x000F6F:
		cid = "FTA Communication Technologies";
		break;
	case 0x000F62:
		cid = "Alcatel Bell Space N.V.";
		break;
	case 0x000F5C:
		cid = "Day One Digital Media Limited";
		break;
	case 0x000F55:
		cid = "Datawire Communication Networks Inc.";
		break;
	case 0x000F49:
		cid = "Northover Solutions Limited";
		break;
	case 0x000F50:
		cid = "StreamScale Limited";
		break;
	case 0x000F42:
		cid = "Xalyo Systems";
		break;
	case 0x000F1C:
		cid = "DigitAll World Co., Ltd";
		break;
	case 0x000F0A:
		cid = "Clear Edge Networks";
		break;
	case 0x000F09:
		cid = "Private";
		break;
	case 0x000F03:
		cid = "COM&C CO., LTD";
		break;
	case 0x000EF7:
		cid = "Vulcan Portals Inc";
		break;
	case 0x000EFC:
		cid = "JTAG Technologies B.V.";
		break;
	case 0x000EE9:
		cid = "WayTech Development, Inc.";
		break;
	case 0x000EF0:
		cid = "Festo AG & Co. KG";
		break;
	case 0x000F35:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000F2E:
		cid = "Megapower International Corp.";
		break;
	case 0x000F29:
		cid = "Augmentix Corporation";
		break;
	case 0x000F22:
		cid = "Helius, Inc.";
		break;
	case 0x000F0F:
		cid = "Real ID Technology Co., Ltd.";
		break;
	case 0x000F16:
		cid = "JAY HOW TECHNOLOGY CO.,";
		break;
	case 0x000F1B:
		cid = "Ego Systems Inc.";
		break;
	case 0x000D74:
		cid = "Sand Network Systems, Inc.";
		break;
	case 0x000D7B:
		cid = "Consensys Computers Inc.";
		break;
	case 0x000D6E:
		cid = "K-Patents Oy";
		break;
	case 0x000D68:
		cid = "Vinci Systems, Inc.";
		break;
	case 0x000D6D:
		cid = "K-Tech Devices Corp.";
		break;
	case 0x000D5B:
		cid = "Smart Empire Investments Limited";
		break;
	case 0x000D5C:
		cid = "Robert Bosch GmbH, VT-ATMO";
		break;
	case 0x000D61:
		cid = "Giga-Byte Technology Co., Ltd.";
		break;
	case 0x000D55:
		cid = "SANYCOM Technology Co.,Ltd";
		break;
	case 0x000D49:
		cid = "Triton Systems of Delaware, Inc.";
		break;
	case 0x000D4E:
		cid = "NDR Co.,LTD.";
		break;
	case 0x000E5B:
		cid = "ParkerVision - Direct2Data";
		break;
	case 0x000E55:
		cid = "AUVITRAN";
		break;
	case 0x000E56:
		cid = "4G Systems GmbH & Co. KG";
		break;
	case 0x000E4F:
		cid = "Trajet GmbH";
		break;
	case 0x000E48:
		cid = "Lipman TransAction Solutions";
		break;
	case 0x000E43:
		cid = "G-Tek Electronics Sdn. Bhd.";
		break;
	case 0x000E34:
		cid = "NexGen City, LP";
		break;
	case 0x000E3B:
		cid = "Hawking Technologies, Inc.";
		break;
	case 0x000E2F:
		cid = "Roche Diagnostics GmbH";
		break;
	case 0x000DFB:
		cid = "Komax AG";
		break;
	case 0x000DE9:
		cid = "Napatech Aps";
		break;
	case 0x000DEE:
		cid = "Andrew RF Power Amplifier Group";
		break;
	case 0x000DE2:
		cid = "CMZ Sistemi Elettronici";
		break;
	case 0x000DDC:
		cid = "VAC";
		break;
	case 0x000DD6:
		cid = "ITI    LTD";
		break;
	case 0x000DDB:
		cid = "AIRWAVE TECHNOLOGIES INC.";
		break;
	case 0x000DCA:
		cid = "Tait Electronics";
		break;
	case 0x000DCF:
		cid = "Cidra Corp.";
		break;
	case 0x000E28:
		cid = "Dynamic Ratings P/L";
		break;
	case 0x000E22:
		cid = "Private";
		break;
	case 0x000E21:
		cid = "MTU Friedrichshafen GmbH";
		break;
	case 0x000E15:
		cid = "Tadlys LTD";
		break;
	case 0x000E1C:
		cid = "Hach Company";
		break;
	case 0x000E0D:
		cid = "Hesch Schröder GmbH";
		break;
	case 0x000E10:
		cid = "C-guys, Inc.";
		break;
	case 0x000DF5:
		cid = "Teletronics International Inc.";
		break;
	case 0x000DFC:
		cid = "ITFOR Inc.";
		break;
	case 0x000E01:
		cid = "ASIP Technologies Inc.";
		break;
	case 0x000CF0:
		cid = "M & N GmbH";
		break;
	case 0x000CF5:
		cid = "InfoExpress";
		break;
	case 0x000CE0:
		cid = "Trek Diagnostics Inc.";
		break;
	case 0x000CE4:
		cid = "NeuroCom International, Inc.";
		break;
	case 0x000CE9:
		cid = "BLOOMBERG L.P.";
		break;
	case 0x000CCE:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000CD4:
		cid = "Positron Public Safety Systems inc.";
		break;
	case 0x000CCD:
		cid = "IEC - TC57";
		break;
	case 0x000D15:
		cid = "Voipac s.r.o.";
		break;
	case 0x000D16:
		cid = "UHS Systems Pty Ltd";
		break;
	case 0x000D1B:
		cid = "Kyoto Electronics Manufacturing Co., Ltd.";
		break;
	case 0x000D0F:
		cid = "Finlux Ltd";
		break;
	case 0x000D03:
		cid = "Matrics, Inc.";
		break;
	case 0x000D08:
		cid = "AboveCable, Inc.";
		break;
	case 0x000CFC:
		cid = "S2io Technologies Corp";
		break;
	case 0x000CF6:
		cid = "Sitecom Europe BV";
		break;
	case 0x000DA3:
		cid = "Emerging Technologies Limited";
		break;
	case 0x000D9C:
		cid = "Elan GmbH & Co KG";
		break;
	case 0x000D96:
		cid = "Vtera Technology Inc.";
		break;
	case 0x000D95:
		cid = "Opti-cell, Inc.";
		break;
	case 0x000D90:
		cid = "Factum Electronics AB";
		break;
	case 0x000D89:
		cid = "Bils Technology Inc";
		break;
	case 0x000D80:
		cid = "Online Development Inc";
		break;
	case 0x000DC9:
		cid = "THALES Elektronik Systeme GmbH";
		break;
	case 0x000DC3:
		cid = "First Communication, Inc.";
		break;
	case 0x000DBC:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000DB7:
		cid = "SANKO ELECTRIC CO,.LTD";
		break;
	case 0x000DB0:
		cid = "Olym-tech Co.,Ltd.";
		break;
	case 0x000DA8:
		cid = "Teletronics Technology Corporation";
		break;
	case 0x000D41:
		cid = "Siemens AG ICM MP UC RD IT KLF1";
		break;
	case 0x000D3A:
		cid = "Microsoft Corp.";
		break;
	case 0x000D35:
		cid = "PAC International Ltd";
		break;
	case 0x000D2E:
		cid = "Matsushita Avionics Systems Corporation";
		break;
	case 0x000D28:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000D22:
		cid = "Unitronics LTD";
		break;
	case 0x000D27:
		cid = "MICROPLEX Printware AG";
		break;
	case 0x000C21:
		cid = "Faculty of Science and Technology, Keio University";
		break;
	case 0x000C11:
		cid = "NIPPON DEMPA CO.,LTD.";
		break;
	case 0x000C10:
		cid = "PNI Corporation";
		break;
	case 0x000C12:
		cid = "Micro-Optronic-Messtechnik GmbH";
		break;
	case 0x000C17:
		cid = "AJA Video Systems Inc";
		break;
	case 0x000C04:
		cid = "Tecnova";
		break;
	case 0x000C0B:
		cid = "Broadbus Technologies";
		break;
	case 0x000BF8:
		cid = "Infinera";
		break;
	case 0x000BFF:
		cid = "Berkeley Camera Engineering";
		break;
	case 0x000BEC:
		cid = "NIPPON ELECTRIC INSTRUMENT, INC.";
		break;
	case 0x000BB8:
		cid = "Kihoku Electronic Co.";
		break;
	case 0x000BBD:
		cid = "Connexionz Limited";
		break;
	case 0x000BAD:
		cid = "PC-PoS Inc.";
		break;
	case 0x000BA0:
		cid = "T&L Information Inc.";
		break;
	case 0x000BA7:
		cid = "Maranti Networks";
		break;
	case 0x000BAC:
		cid = "3Com Ltd";
		break;
	case 0x000B93:
		cid = "Ritter Elektronik";
		break;
	case 0x000B98:
		cid = "NiceTechVision";
		break;
	case 0x000B9B:
		cid = "Sirius System Co, Ltd.";
		break;
	case 0x000B8C:
		cid = "Flextronics";
		break;
	case 0x000BF1:
		cid = "LAP Laser Applikations";
		break;
	case 0x000BDF:
		cid = "Shenzhen RouterD Networks Limited";
		break;
	case 0x000BDE:
		cid = "TELDIX GmbH";
		break;
	case 0x000BE0:
		cid = "SercoNet Ltd.";
		break;
	case 0x000BE5:
		cid = "HIMS International Corporation";
		break;
	case 0x000BD9:
		cid = "General Hydrogen";
		break;
	case 0x000BAE:
		cid = "Vitals System Inc.";
		break;
	case 0x000BD0:
		cid = "XiMeta Technology Americas Inc.";
		break;
	case 0x000BD5:
		cid = "Nvergence, Inc.";
		break;
	case 0x000BC4:
		cid = "BIOTRONIK GmbH & Co";
		break;
	case 0x000BC9:
		cid = "Electroline Equipment";
		break;
	case 0x000BB1:
		cid = "Super Star Technology Co., Ltd.";
		break;
	case 0x000BB6:
		cid = "Metalligence Technology Corp.";
		break;
	case 0x000B79:
		cid = "X-COM, Inc.";
		break;
	case 0x000B80:
		cid = "Lycium Networks";
		break;
	case 0x000B87:
		cid = "American Reliance Inc.";
		break;
	case 0x000B6D:
		cid = "SOLECTRON JAPAN NAKANIIDA";
		break;
	case 0x000B74:
		cid = "Kingwave Technology Co., Ltd.";
		break;
	case 0x000B67:
		cid = "Topview Technology Corporation";
		break;
	case 0x000B61:
		cid = "Friedrich Lütze GmbH & Co. KG";
		break;
	case 0x000B66:
		cid = "Teralink Communications";
		break;
	case 0x000B68:
		cid = "Addvalue Communications Pte Ltd";
		break;
	case 0x000B58:
		cid = "Astronautics C.A  LTD";
		break;
	case 0x000B50:
		cid = "Oxygnet";
		break;
	case 0x000B44:
		cid = "Concord IDea Corp.";
		break;
	case 0x000B49:
		cid = "RF-Link System Inc.";
		break;
	case 0x000B4B:
		cid = "VISIOWAVE SA";
		break;
	case 0x000B31:
		cid = "Yantai ZhiYang Scientific and technology industry CO., LTD";
		break;
	case 0x000B3D:
		cid = "CONTAL OK Ltd.";
		break;
	case 0x000B38:
		cid = "Knürr GmbH";
		break;
	case 0x000B2A:
		cid = "HOWTEL Co., Ltd.";
		break;
	case 0x000B2C:
		cid = "Eiki Industrial Co. Ltd.";
		break;
	case 0x000C97:
		cid = "NV ADB TTV Technologies SA";
		break;
	case 0x000C9C:
		cid = "Chongho information & communications";
		break;
	case 0x000C9E:
		cid = "MemoryLink Corp.";
		break;
	case 0x000C89:
		cid = "AC Electric Vehicles, Ltd.";
		break;
	case 0x000C8B:
		cid = "Connect Tech Inc";
		break;
	case 0x000C90:
		cid = "Octasic Inc.";
		break;
	case 0x000C84:
		cid = "Eazix, Inc.";
		break;
	case 0x000C75:
		cid = "Oriental integrated electronics. LTD";
		break;
	case 0x000C77:
		cid = "Life Racing Ltd";
		break;
	case 0x000C7C:
		cid = "Internet Information Image Inc.";
		break;
	case 0x000C43:
		cid = "Ralink Technology, Corp.";
		break;
	case 0x000C45:
		cid = "Animation Technologies Inc.";
		break;
	case 0x000C3C:
		cid = "MediaChorus, Inc.";
		break;
	case 0x000C32:
		cid = "Avionic Design Development GmbH";
		break;
	case 0x000C35:
		cid = "KaVo Dental GmbH & Co. KG";
		break;
	case 0x000C2B:
		cid = "ELIAS Technology, Inc.";
		break;
	case 0x000C28:
		cid = "RIFATRON";
		break;
	case 0x000C1C:
		cid = "MicroWeb Co., Ltd.";
		break;
	case 0x000C64:
		cid = "X2 MSA Group";
		break;
	case 0x000C69:
		cid = "National Radio Astronomy Observatory";
		break;
	case 0x000C70:
		cid = "ACC GmbH";
		break;
	case 0x000C51:
		cid = "Scientific Technologies Inc.";
		break;
	case 0x000C56:
		cid = "Megatel Computer (1986) Corp.";
		break;
	case 0x000C58:
		cid = "M&S Systems";
		break;
	case 0x000C5D:
		cid = "CHIC TECHNOLOGY (CHINA) CORP.";
		break;
	case 0x000C4A:
		cid = "Cygnus Microsystems (P) Limited";
		break;
	case 0x000CC8:
		cid = "Xytronix Research & Design, Inc.";
		break;
	case 0x000CBB:
		cid = "ISKRAEMECO";
		break;
	case 0x000CB5:
		cid = "Premier Technolgies, Inc";
		break;
	case 0x000CBC:
		cid = "Iscutum";
		break;
	case 0x000CA3:
		cid = "Rancho Technology, Inc.";
		break;
	case 0x000CAA:
		cid = "Cubic Transportation Systems Inc";
		break;
	case 0x000A38:
		cid = "Apani Networks";
		break;
	case 0x000A3F:
		cid = "Data East Corporation";
		break;
	case 0x000A44:
		cid = "Avery Dennison Deutschland GmbH";
		break;
	case 0x000A46:
		cid = "ARO WELDING TECHNOLOGIES SAS";
		break;
	case 0x000A33:
		cid = "Emulex Corporation";
		break;
	case 0x000A31:
		cid = "HCV Consulting";
		break;
	case 0x000A2C:
		cid = "Active Tchnology Corporation";
		break;
	case 0x004252:
		cid = "RLX Technologies";
		break;
	case 0x000A2A:
		cid = "QSI Systems Inc.";
		break;
	case 0x000A1E:
		cid = "Red-M Products Limited";
		break;
	case 0x000A23:
		cid = "Parama Networks Inc";
		break;
	case 0x000A17:
		cid = "NESTAR COMMUNICATIONS, INC";
		break;
	case 0x000A1C:
		cid = "Bridge Information Co., Ltd.";
		break;
	case 0x000B19:
		cid = "Vernier Networks, Inc.";
		break;
	case 0x000B1E:
		cid = "KAPPA opto-electronics GmbH";
		break;
	case 0x000B25:
		cid = "Aeluros";
		break;
	case 0x000B17:
		cid = "MKS Instruments";
		break;
	case 0x000B12:
		cid = "NURI Telecom Co., Ltd.";
		break;
	case 0x000B0B:
		cid = "Corrent Corporation";
		break;
	case 0x000AFA:
		cid = "Traverse Technologies Australia";
		break;
	case 0x000AFF:
		cid = "Kilchherr Elektronik AG";
		break;
	case 0x000AF3:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000AF8:
		cid = "American Telecare Inc.";
		break;
	case 0x000AEE:
		cid = "GCD Hard- & Software GmbH";
		break;
	case 0x000A06:
		cid = "Teledex LLC";
		break;
	case 0x000A09:
		cid = "TaraCom Integrated Products, Inc.";
		break;
	case 0x000A0B:
		cid = "Sealevel Systems, Inc.";
		break;
	case 0x000A10:
		cid = "FAST media integrations AG";
		break;
	case 0x0009F7:
		cid = "SED, a division of Calian";
		break;
	case 0x000A01:
		cid = "SOHOware, Inc.";
		break;
	case 0x0009E9:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0009F0:
		cid = "Shimizu Technology Inc.";
		break;
	case 0x0009EA:
		cid = "YEM Inc.";
		break;
	case 0x0009E4:
		cid = "K Tech Infosystem Inc.";
		break;
	case 0x0009D8:
		cid = "Fält Communications AB";
		break;
	case 0x0009DD:
		cid = "Mavin Technology Inc.";
		break;
	case 0x0009B1:
		cid = "Kanematsu Electronics, Ltd.";
		break;
	case 0x0009A3:
		cid = "Leadfly Techologies Corp. Ltd.";
		break;
	case 0x0009AA:
		cid = "Data Comm for Business, Inc.";
		break;
	case 0x0009A4:
		cid = "HARTEC Corporation";
		break;
	case 0x00099E:
		cid = "Testech, Inc.";
		break;
	case 0x000992:
		cid = "InterEpoch Technology,INC.";
		break;
	case 0x000991:
		cid = "GE Fanuc Automation Manufacturing, Inc.";
		break;
	case 0x00098B:
		cid = "Entropic Communications, Inc.";
		break;
	case 0x000AB0:
		cid = "LOYTEC electronics GmbH";
		break;
	case 0x000AB7:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000AA4:
		cid = "SHANGHAI SURVEILLANCE TECHNOLOGY CO,LTD";
		break;
	case 0x000AA9:
		cid = "Brooks Automation GmbH";
		break;
	case 0x000A91:
		cid = "HemoCue AB";
		break;
	case 0x000A9D:
		cid = "King Young Technology Co. Ltd.";
		break;
	case 0x000A8C:
		cid = "Guardware Systems Ltd.";
		break;
	case 0x000A97:
		cid = "SONICblue, Inc.";
		break;
	case 0x000A7D:
		cid = "Valo, Inc.";
		break;
	case 0x000A84:
		cid = "Rainsun Enterprise Co., Ltd.";
		break;
	case 0x000A89:
		cid = "Creval Systems, Inc.";
		break;
	case 0x0009D7:
		cid = "DC Security Products";
		break;
	case 0x0009CA:
		cid = "iMaxNetworks(Shenzhen)Limited.";
		break;
	case 0x0009D1:
		cid = "SERANOA NETWORKS INC";
		break;
	case 0x0009C5:
		cid = "KINGENE Technology Corporation";
		break;
	case 0x0009BD:
		cid = "Epygi Technologies, Ltd.";
		break;
	case 0x0009B6:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00097F:
		cid = "Vsecure 2000 LTD.";
		break;
	case 0x000984:
		cid = "MyCasa Network Inc.";
		break;
	case 0x000971:
		cid = "Time Management, Inc.";
		break;
	case 0x000978:
		cid = "AIJI System Co., Ltd.";
		break;
	case 0x000972:
		cid = "Securebase,Inc";
		break;
	case 0x00096C:
		cid = "Imedia Semiconductor Corp.";
		break;
	case 0x000965:
		cid = "HyunJu Computer Co., Ltd.";
		break;
	case 0x000960:
		cid = "YOZAN Inc.";
		break;
	case 0x000956:
		cid = "Network Systems Group, Ltd. (NSG)";
		break;
	case 0x000955:
		cid = "Young Generation International Corp.";
		break;
	case 0x000AE9:
		cid = "AirVast Technology Inc.";
		break;
	case 0x000ADD:
		cid = "Allworx Corp.";
		break;
	case 0x000AE2:
		cid = "Binatone Electronics International, Ltd";
		break;
	case 0x000ACA:
		cid = "YOKOYAMA SHOKAI CO.,Ltd.";
		break;
	case 0x000ACF:
		cid = "PROVIDEO Multimedia Co. Ltd.";
		break;
	case 0x000AD6:
		cid = "BeamReach Networks";
		break;
	case 0x000ABC:
		cid = "Seabridge Ltd.";
		break;
	case 0x000ABE:
		cid = "OPNET Technologies CO., LTD.";
		break;
	case 0x000AC3:
		cid = "eM Technics Co., Ltd.";
		break;
	case 0x000A78:
		cid = "OLITEC";
		break;
	case 0x000A71:
		cid = "Avrio Technologies, Inc";
		break;
	case 0x000A76:
		cid = "Beida Jade Bird Huaguang Technology Co.,Ltd";
		break;
	case 0x000A63:
		cid = "DHD GmbH";
		break;
	case 0x000A65:
		cid = "GentechMedia.co.,ltd.";
		break;
	case 0x000A6A:
		cid = "SVM Microwaves s.r.o.";
		break;
	case 0x000A52:
		cid = "AsiaRF Ltd.";
		break;
	case 0x000A4B:
		cid = "DataPower Technology, Inc.";
		break;
	case 0x00075A:
		cid = "Air Products and Chemicals, Inc.";
		break;
	case 0x000754:
		cid = "Xyterra Computing, Inc.";
		break;
	case 0x00074E:
		cid = "IPFRONT Inc";
		break;
	case 0x00074D:
		cid = "Zebra Technologies Corp.";
		break;
	case 0x000742:
		cid = "Ormazabal";
		break;
	case 0x000748:
		cid = "The Imaging Source Europe";
		break;
	case 0x000736:
		cid = "Data Video Technologies Co., Ltd.";
		break;
	case 0x00073D:
		cid = "Nanjing Postel Telecommunications Co., Ltd.";
		break;
	case 0x00073C:
		cid = "Telecom Design";
		break;
	case 0x00072A:
		cid = "Innovance Networks";
		break;
	case 0x00072F:
		cid = "Intransa, Inc.";
		break;
	case 0x000730:
		cid = "Hutchison OPTEL Telecom Technology Co., Ltd.";
		break;
	case 0x000725:
		cid = "Bematech International Corp.";
		break;
	case 0x000818:
		cid = "Pixelworks, Inc.";
		break;
	case 0x000812:
		cid = "GM-2 Corporation";
		break;
	case 0x000811:
		cid = "VOIX Corporation";
		break;
	case 0x00080B:
		cid = "Birka BPA Informationssystem AB";
		break;
	case 0x000805:
		cid = "Techno-Holon Corporation";
		break;
	case 0x00080C:
		cid = "VDA Elettronica spa";
		break;
	case 0x0007FB:
		cid = "Giga Stream UMTS Technologies GmbH";
		break;
	case 0x0007F5:
		cid = "Bridgeco Co AG";
		break;
	case 0x0007E8:
		cid = "EdgeWave";
		break;
	case 0x0007EF:
		cid = "Lockheed Martin Tactical Systems";
		break;
	case 0x0007E2:
		cid = "Bitworks, Inc.";
		break;
	case 0x0007D6:
		cid = "Commil Ltd.";
		break;
	case 0x0007DC:
		cid = "Atek Co, Ltd.";
		break;
	case 0x000923:
		cid = "Heaman System Co., Ltd";
		break;
	case 0x00091D:
		cid = "Proteam Computer Corporation";
		break;
	case 0x000924:
		cid = "Telebau GmbH";
		break;
	case 0x000911:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000916:
		cid = "Listman Home Technologies, Inc.";
		break;
	case 0x00090A:
		cid = "SnedFar Technology Co., Ltd.";
		break;
	case 0x000904:
		cid = "MONDIAL electronic";
		break;
	case 0x000903:
		cid = "Panasas, Inc";
		break;
	case 0x0008FE:
		cid = "UNIK C&C Co.,Ltd.";
		break;
	case 0x0008EE:
		cid = "Logic Product Development";
		break;
	case 0x0008F0:
		cid = "Next Generation Systems, Inc.";
		break;
	case 0x000948:
		cid = "Vista Control Systems, Corp.";
		break;
	case 0x00094F:
		cid = "elmegt GmbH & Co. KG";
		break;
	case 0x000943:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00093C:
		cid = "Jacques Technologies P/L";
		break;
	case 0x000936:
		cid = "Ipetronik GmbH & Co. KG";
		break;
	case 0x000935:
		cid = "Sandvine Incorporated";
		break;
	case 0x000929:
		cid = "Sanyo Industries (UK) Limited";
		break;
	case 0x000930:
		cid = "AeroConcierge Inc.";
		break;
	case 0x0008E9:
		cid = "NextGig";
		break;
	case 0x0008DC:
		cid = "Wiznet";
		break;
	case 0x0008E2:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0008DB:
		cid = "Corrigent Systems";
		break;
	case 0x0008D6:
		cid = "HASSNET Inc.";
		break;
	case 0x0008CF:
		cid = "Nippon Koei Power Systems Co., Ltd.";
		break;
	case 0x0008C0:
		cid = "ASA SYSTEMS";
		break;
	case 0x0008C5:
		cid = "Liontech Co., Ltd.";
		break;
	case 0x0008CA:
		cid = "TwinHan Technology Co.,Ltd";
		break;
	case 0x0008BF:
		cid = "Aptus Elektronik AB";
		break;
	case 0x0008B3:
		cid = "Fastwel";
		break;
	case 0x0008B2:
		cid = "SHENZHEN COMPASS TECHNOLOGY DEVELOPMENT CO.,LTD";
		break;
	case 0x0008A6:
		cid = "Multiware & Image Co., Ltd.";
		break;
	case 0x0008AD:
		cid = "Toyo-Linx Co., Ltd.";
		break;
	case 0x00089A:
		cid = "Alcatel Microelectronics";
		break;
	case 0x0008A0:
		cid = "Stotz Feinmesstechnik GmbH";
		break;
	case 0x000892:
		cid = "EM Solutions";
		break;
	case 0x000896:
		cid = "Printronix, Inc.";
		break;
	case 0x00088C:
		cid = "Quanta Network Systems Inc.";
		break;
	case 0x000886:
		cid = "Hansung Teliann, Inc.";
		break;
	case 0x000873:
		cid = "DapTechnology B.V.";
		break;
	case 0x00087A:
		cid = "Wipotec GmbH";
		break;
	case 0x00087F:
		cid = "SPAUN electronic GmbH & Co. KG";
		break;
	case 0x0007D0:
		cid = "Automat Engenharia de Automação Ltda.";
		break;
	case 0x0007CD:
		cid = "Kumoh Electronic Co, Ltd";
		break;
	case 0x0007C7:
		cid = "Synectics Systems Limited";
		break;
	case 0x00047D:
		cid = "Pelco";
		break;
	case 0x00047E:
		cid = "Siqura B.V.";
		break;
	case 0x0007C1:
		cid = "Overture Networks, Inc.";
		break;
	case 0x0007C0:
		cid = "NetZerver Inc.";
		break;
	case 0x0007AE:
		cid = "Britestream Networks, Inc.";
		break;
	case 0x0007B4:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00079A:
		cid = "Verint Systems Inc";
		break;
	case 0x0007A0:
		cid = "e-Watch Inc.";
		break;
	case 0x000794:
		cid = "Simple Devices, Inc.";
		break;
	case 0x000793:
		cid = "Shin Satellite Public Company Limited";
		break;
	case 0x00078D:
		cid = "NetEngines Ltd.";
		break;
	case 0x00078E:
		cid = "Garz & Friche GmbH";
		break;
	case 0x000781:
		cid = "Itron Inc.";
		break;
	case 0x000787:
		cid = "Idea System Co., Ltd.";
		break;
	case 0x000777:
		cid = "Motah Ltd.";
		break;
	case 0x000771:
		cid = "Embedded System Corporation";
		break;
	case 0x00075B:
		cid = "Gibson Guitars";
		break;
	case 0x000760:
		cid = "TOMIS Information & Telecom Corp.";
		break;
	case 0x000767:
		cid = "Yuxing Electronics Company Limited";
		break;
	case 0x000879:
		cid = "CEM Corporation";
		break;
	case 0x00086C:
		cid = "Plasmon LMS";
		break;
	case 0x00086D:
		cid = "Missouri FreeNet";
		break;
	case 0x000867:
		cid = "Uptime Devices";
		break;
	case 0x000860:
		cid = "LodgeNet Entertainment Corp.";
		break;
	case 0x000854:
		cid = "Netronix, Inc.";
		break;
	case 0x00085A:
		cid = "IntiGate Inc.";
		break;
	case 0x00081E:
		cid = "Repeatit AB";
		break;
	case 0x00082B:
		cid = "Wooksung Electronics, Inc.";
		break;
	case 0x000824:
		cid = "Nuance Document Imaging";
		break;
	case 0x0005BA:
		cid = "Area Netwoeks, Inc.";
		break;
	case 0x0005B9:
		cid = "Airvana, Inc.";
		break;
	case 0x0005C0:
		cid = "Digital Network Alacarte Co., Ltd.";
		break;
	case 0x000599:
		cid = "DRS Test and Energy Management or DRS-TEM";
		break;
	case 0x0005A0:
		cid = "MOBILINE Kft.";
		break;
	case 0x0005A9:
		cid = "Princeton Networks, Inc.";
		break;
	case 0x0005AA:
		cid = "Moore Industries International Inc.";
		break;
	case 0x0005AF:
		cid = "InnoScan Computing A/S";
		break;
	case 0x0005B3:
		cid = "Asahi-Engineering Co., Ltd.";
		break;
	case 0x00059F:
		cid = "Yotta Networks, Inc.";
		break;
	case 0x0005A6:
		cid = "Extron Electronics";
		break;
	case 0x0005B4:
		cid = "Aceex Corporation";
		break;
	case 0x00058D:
		cid = "Lynx Photonic Networks, Inc.";
		break;
	case 0x000587:
		cid = "Locus, Incorporated";
		break;
	case 0x000593:
		cid = "Grammar Engine Inc.";
		break;
	case 0x000586:
		cid = "Lucent Technologies";
		break;
	case 0x00057A:
		cid = "Overture Networks";
		break;
	case 0x00063C:
		cid = "Intrinsyc Software International Inc.";
		break;
	case 0x00062F:
		cid = "Pivotech Systems Inc.";
		break;
	case 0x000636:
		cid = "Jedai Broadband Networks";
		break;
	case 0x000635:
		cid = "PacketAir Networks, Inc.";
		break;
	case 0x000628:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00061F:
		cid = "Vision Components GmbH";
		break;
	case 0x000619:
		cid = "Connection Technology Systems";
		break;
	case 0x00060D:
		cid = "Wave7 Optics";
		break;
	case 0x000613:
		cid = "Kawasaki Microelectronics Incorporated";
		break;
	case 0x00060E:
		cid = "IGYS Systems, Inc.";
		break;
	case 0x0005EC:
		cid = "Mosaic Systems Inc.";
		break;
	case 0x0005D3:
		cid = "eProduction Solutions, Inc.";
		break;
	case 0x000608:
		cid = "At-Sky SAS";
		break;
	case 0x000607:
		cid = "Omni Directional Control Technology Inc.";
		break;
	case 0x0005E6:
		cid = "Egenera, Inc.";
		break;
	case 0x000580:
		cid = "FibroLAN Ltd.";
		break;
	case 0x000576:
		cid = "NSM Technology Ltd.";
		break;
	case 0x000570:
		cid = "Baydel Ltd.";
		break;
	case 0x00056A:
		cid = "Heuft Systemtechnik GmbH";
		break;
	case 0x000563:
		cid = "J-Works, Inc.";
		break;
	case 0x00055D:
		cid = "D-LINK SYSTEMS, INC.";
		break;
	case 0x000564:
		cid = "Tsinghua Bitway Co., Ltd.";
		break;
	case 0x000557:
		cid = "Agile TV Corporation";
		break;
	case 0x000551:
		cid = "F & S Elektronik Systeme GmbH";
		break;
	case 0x00054B:
		cid = "Eaton Automation AG";
		break;
	case 0x00054A:
		cid = "Ario Data Networks, Inc.";
		break;
	case 0x000544:
		cid = "Valley Technologies, Inc.";
		break;
	case 0x00053E:
		cid = "KID Systeme GmbH";
		break;
	case 0x000531:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000538:
		cid = "Merilus, Inc.";
		break;
	case 0x000532:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000525:
		cid = "Puretek Industrial Co., Ltd.";
		break;
	case 0x00052B:
		cid = "HORIBA, Ltd.";
		break;
	case 0x00051F:
		cid = "Taijin Media Co., Ltd.";
		break;
	case 0x000519:
		cid = "Siemens Building Technologies AG,";
		break;
	case 0x000518:
		cid = "Jupiters Technology";
		break;
	case 0x00050E:
		cid = "3ware, Inc.";
		break;
	case 0x00050F:
		cid = "Tanaka S/S Ltd.";
		break;
	case 0x000508:
		cid = "Inetcam, Inc.";
		break;
	case 0x0004FE:
		cid = "Pelago Networks";
		break;
	case 0x000671:
		cid = "Softing AG";
		break;
	case 0x000672:
		cid = "Netezza";
		break;
	case 0x00067B:
		cid = "Toplink C&C Corporation";
		break;
	case 0x000665:
		cid = "Sunny Giken, Inc.";
		break;
	case 0x00066B:
		cid = "Sysmex Corporation";
		break;
	case 0x000652:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000659:
		cid = "EAL (Apeldoorn) B.V.";
		break;
	case 0x000658:
		cid = "Helmut Fischer GmbH Institut für Elektronik und Messtechnik";
		break;
	case 0x000646:
		cid = "ShenZhen XunBao Network Technology Co Ltd";
		break;
	case 0x000640:
		cid = "White Rock Networks";
		break;
	case 0x00064C:
		cid = "Invicta Networks, Inc.";
		break;
	case 0x0006B5:
		cid = "Source Photonics, Inc.";
		break;
	case 0x0006A8:
		cid = "KC Technology, Inc.";
		break;
	case 0x00069E:
		cid = "UNIQA, Inc.";
		break;
	case 0x000698:
		cid = "egnite GmbH";
		break;
	case 0x000692:
		cid = "Intruvert Networks, Inc.";
		break;
	case 0x000685:
		cid = "NetNearU Corporation";
		break;
	case 0x00068B:
		cid = "AirRunner Technologies, Inc.";
		break;
	case 0x000686:
		cid = "ZARDCOM Co., Ltd.";
		break;
	case 0x00067F:
		cid = "Digeo, Inc.";
		break;
	case 0x0006DE:
		cid = "Flash Technology";
		break;
	case 0x0006E4:
		cid = "Citel Technologies Ltd.";
		break;
	case 0x0006D1:
		cid = "Tahoe Networks, Inc.";
		break;
	case 0x0006DA:
		cid = "ITRAN Communications Ltd.";
		break;
	case 0x0006CB:
		cid = "Jotron Electronics A/S";
		break;
	case 0x0006CC:
		cid = "JMI Electronics Co., Ltd.";
		break;
	case 0x0006BB:
		cid = "ATI Technologies Inc.";
		break;
	case 0x0006C5:
		cid = "INNOVI Technologies Limited";
		break;
	case 0x0006AF:
		cid = "Xalted Networks";
		break;
	case 0x000719:
		cid = "Mobiis Co., Ltd.";
		break;
	case 0x000720:
		cid = "Trutzschler GmbH & Co. KG";
		break;
	case 0x000713:
		cid = "IP One, Inc.";
		break;
	case 0x00070D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000714:
		cid = "Brightcom";
		break;
	case 0x0006F1:
		cid = "Optillion";
		break;
	case 0x0006F0:
		cid = "Digeo, Inc.";
		break;
	case 0x0006FB:
		cid = "Hitachi Printing Solutions, Ltd.";
		break;
	case 0x0006EB:
		cid = "Global Data";
		break;
	case 0x0005F2:
		cid = "Power R, Inc.";
		break;
	case 0x0005FE:
		cid = "Traficon N.V.";
		break;
	case 0x0005E5:
		cid = "Renishaw PLC";
		break;
	case 0x0005F8:
		cid = "Real Time Access, Inc.";
		break;
	case 0x0005FF:
		cid = "SNS Solutions, Inc.";
		break;
	case 0x0005DD:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0005D9:
		cid = "Techno Valley, Inc.";
		break;
	case 0x0005C6:
		cid = "Triz Communications";
		break;
	case 0x0005CC:
		cid = "Sumtel Communications, Inc.";
		break;
	case 0x00044C:
		cid = "JENOPTIK";
		break;
	case 0x000448:
		cid = "Polaroid Corporation";
		break;
	case 0x00043C:
		cid = "SONOS Co., Ltd.";
		break;
	case 0x000441:
		cid = "Half Dome Systems, Inc.";
		break;
	case 0x00042F:
		cid = "International Communications Products, Inc.";
		break;
	case 0x000429:
		cid = "Pixord Corporation";
		break;
	case 0x00041C:
		cid = "ipDialog, Inc.";
		break;
	case 0x00041D:
		cid = "Corega of America";
		break;
	case 0x000416:
		cid = "Parks S/A Comunicacoes Digitais";
		break;
	case 0x000410:
		cid = "Spinnaker Networks, Inc.";
		break;
	case 0x00040F:
		cid = "Asus Network Technologies, Inc.";
		break;
	case 0x00040A:
		cid = "Sage Systems";
		break;
	case 0x000403:
		cid = "Nexsi Corporation";
		break;
	case 0x0004F8:
		cid = "QUALICABLE TV Industria E Com., Ltda";
		break;
	case 0x0004F2:
		cid = "Polycom";
		break;
	case 0x0004EB:
		cid = "Paxonet Communications, Inc.";
		break;
	case 0x0004EC:
		cid = "Memobox SA";
		break;
	case 0x0004E6:
		cid = "Banyan Network Private Limited";
		break;
	case 0x0004E1:
		cid = "Infinior Microsystems";
		break;
	case 0x0004DB:
		cid = "Tellus Group Corp.";
		break;
	case 0x0004E2:
		cid = "SMC Networks, Inc.";
		break;
	case 0x0004D5:
		cid = "Hitachi Information & Communication Engineering, Ltd.";
		break;
	case 0x0004C9:
		cid = "Micro Electron Co., Ltd.";
		break;
	case 0x000487:
		cid = "Cogency Semiconductor, Inc.";
		break;
	case 0x000482:
		cid = "Medialogic Corp.";
		break;
	case 0x000478:
		cid = "G. Star Technology Corporation";
		break;
	case 0x000471:
		cid = "IPrad";
		break;
	case 0x00046B:
		cid = "Palm Wireless, Inc.";
		break;
	case 0x000465:
		cid = "i.s.t isdn-support technik GmbH";
		break;
	case 0x000459:
		cid = "Veristar Corporation";
		break;
	case 0x00045E:
		cid = "PolyTrax Information Technology AG";
		break;
	case 0x000458:
		cid = "Fusion X Co., Ltd.";
		break;
	case 0x000452:
		cid = "RocketLogix, Inc.";
		break;
	case 0x000442:
		cid = "NACT";
		break;
	case 0x0003F9:
		cid = "Pleiades Communications, Inc.";
		break;
	case 0x0003E2:
		cid = "Comspace Corporation";
		break;
	case 0x0003F4:
		cid = "NetBurner";
		break;
	case 0x0003F3:
		cid = "Dazzle Multimedia, Inc.";
		break;
	case 0x0003ED:
		cid = "Shinkawa Electric Co., Ltd.";
		break;
	case 0x0003E7:
		cid = "Logostek Co. Ltd.";
		break;
	case 0x0003DF:
		cid = "Desana Systems";
		break;
	case 0x0003DB:
		cid = "Apogee Electronics Corp.";
		break;
	case 0x0003D6:
		cid = "RADVision, Ltd.";
		break;
	case 0x0003CF:
		cid = "Muxcom, Inc.";
		break;
	case 0x0003C8:
		cid = "CML Emergency Services";
		break;
	case 0x0003C3:
		cid = "Micronik Multimedia";
		break;
	case 0x0003C0:
		cid = "RFTNC Co., Ltd.";
		break;
	case 0x0003BC:
		cid = "COT GmbH";
		break;
	case 0x0003B1:
		cid = "Hospira Inc.";
		break;
	case 0x0003A5:
		cid = "Medea Corporation";
		break;
	case 0x0003AA:
		cid = "Watlow";
		break;
	case 0x0003A2:
		cid = "Catapult Communications";
		break;
	case 0x00039E:
		cid = "Tera System Co., Ltd.";
		break;
	case 0x000392:
		cid = "Hyundai Teletek Co., Ltd.";
		break;
	case 0x00038F:
		cid = "Weinschel Corporation";
		break;
	case 0x00038B:
		cid = "PLUS-ONE I&T, Inc.";
		break;
	case 0x000386:
		cid = "Ho Net, Inc.";
		break;
	case 0x00037D:
		cid = "Stellcom";
		break;
	case 0x000382:
		cid = "A-One Co., Ltd.";
		break;
	case 0x00037A:
		cid = "Taiyo Yuden Co., Ltd.";
		break;
	case 0x000376:
		cid = "Graphtec Technology, Inc.";
		break;
	case 0x000369:
		cid = "Nippon Antenna Co., Ltd.";
		break;
	case 0x00036F:
		cid = "Telsey SPA";
		break;
	case 0x000363:
		cid = "Miraesys Co., Ltd.";
		break;
	case 0x00035E:
		cid = "Metropolitan Area Networks, Inc.";
		break;
	case 0x000357:
		cid = "Intervoice-Brite, Inc.";
		break;
	case 0x00034C:
		cid = "Shanghai DigiVision Technology Co., Ltd.";
		break;
	case 0x000351:
		cid = "Diebold, Inc.";
		break;
	case 0x000311:
		cid = "Micro Technology Co., Ltd.";
		break;
	case 0x00030A:
		cid = "Argus Technologies";
		break;
	case 0x000305:
		cid = "MSC Vertriebs GmbH";
		break;
	case 0x0002FE:
		cid = "Viditec, Inc.";
		break;
	case 0x0002F2:
		cid = "eDevice, Inc.";
		break;
	case 0x0002F7:
		cid = "ARM";
		break;
	case 0x0002EC:
		cid = "Maschoff Design Engineering";
		break;
	case 0x0002E4:
		cid = "JC HYUN Systems, Inc.";
		break;
	case 0x0002E7:
		cid = "CAB GmbH & Co KG";
		break;
	case 0x0002E0:
		cid = "ETAS GmbH";
		break;
	case 0x0002D9:
		cid = "Reliable Controls";
		break;
	case 0x0002D4:
		cid = "PDA Peripherals, Inc.";
		break;
	case 0x0002D1:
		cid = "Vivotek, Inc.";
		break;
	case 0x0002CD:
		cid = "TeleDream, Inc.";
		break;
	case 0x000349:
		cid = "Vidicode Datacommunicatie B.V.";
		break;
	case 0x000340:
		cid = "Floware Wireless Systems, Ltd.";
		break;
	case 0x008037:
		cid = "Ericsson Group";
		break;
	case 0x000332:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000339:
		cid = "Eurologic Systems, Ltd.";
		break;
	case 0x00032A:
		cid = "UniData Communication Systems, Inc.";
		break;
	case 0x00032D:
		cid = "IBASE Technology, Inc.";
		break;
	case 0x000326:
		cid = "Iwasaki Information Systems Co., Ltd.";
		break;
	case 0x00031D:
		cid = "Taiwan Commate Computer, Inc.";
		break;
	case 0x000318:
		cid = "Cyras Systems, Inc.";
		break;
	case 0x0004C2:
		cid = "Magnipix, Inc.";
		break;
	case 0x0004B6:
		cid = "Stratex Networks, Inc.";
		break;
	case 0x0004BC:
		cid = "Giantec, Inc.";
		break;
	case 0x0004B0:
		cid = "ELESIGN Co., Ltd.";
		break;
	case 0x0004A9:
		cid = "SandStream Technologies, Inc.";
		break;
	case 0x0004A8:
		cid = "Broadmax Technologies, Inc.";
		break;
	case 0x0004A2:
		cid = "L.S.I. Japan Co., Ltd.";
		break;
	case 0x00049B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00049C:
		cid = "Surgient Networks, Inc.";
		break;
	case 0x00048F:
		cid = "TD Systems Corporation";
		break;
	case 0x000488:
		cid = "Eurotherm Controls";
		break;
	case 0x000281:
		cid = "Madge Ltd.";
		break;
	case 0x009064:
		cid = "Thomson Inc.";
		break;
	case 0x00027F:
		cid = "ask-technologies.com";
		break;
	case 0x00027A:
		cid = "IOI Technology Corporation";
		break;
	case 0x000273:
		cid = "Coriolis Networks";
		break;
	case 0x00026E:
		cid = "NeGeN Access, Inc.";
		break;
	case 0x000263:
		cid = "UPS Manufacturing SRL";
		break;
	case 0x00025C:
		cid = "SCI Systems (Kunshan) Co., Ltd.";
		break;
	case 0x000253:
		cid = "Televideo, Inc.";
		break;
	case 0x00024C:
		cid = "SiByte, Inc.";
		break;
	case 0x00024E:
		cid = "Datacard Group";
		break;
	case 0x00012F:
		cid = "Twinhead International Corp";
		break;
	case 0x00023C:
		cid = "Creative Technology, Ltd.";
		break;
	case 0x000240:
		cid = "Seedek Co., Ltd.";
		break;
	case 0x000247:
		cid = "Great Dragon Information Technology (Group) Co., Ltd.";
		break;
	case 0x000243:
		cid = "Raysis Co., Ltd.";
		break;
	case 0x000239:
		cid = "Visicom";
		break;
	case 0x000236:
		cid = "INIT GmbH";
		break;
	case 0x000231:
		cid = "Ingersoll-Rand";
		break;
	case 0x00022A:
		cid = "Asound Electronic";
		break;
	case 0x00022D:
		cid = "Agere Systems";
		break;
	case 0x000219:
		cid = "Paralon Technologies";
		break;
	case 0x000186:
		cid = "Uwe Disch";
		break;
	case 0x00017B:
		cid = "Heidelberger Druckmaschinen AG";
		break;
	case 0x000182:
		cid = "DICA TECHNOLOGIES AG";
		break;
	case 0x00018E:
		cid = "Logitec Corporation";
		break;
	case 0x00019B:
		cid = "Kyoto Microcomputer Co., Ltd.";
		break;
	case 0x000194:
		cid = "Capital Equipment Corporation";
		break;
	case 0x000197:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0001A3:
		cid = "GENESYS LOGIC, INC.";
		break;
	case 0x00014E:
		cid = "WIN Enterprises, Inc.";
		break;
	case 0x0030AC:
		cid = "Systeme Lauer GmbH & Co., Ltd.";
		break;
	case 0x00013E:
		cid = "Ascom Tateco AB";
		break;
	case 0x000145:
		cid = "WINSYSTEMS, INC.";
		break;
	case 0x000126:
		cid = "PAC Labs";
		break;
	case 0x00011A:
		cid = "Hoffmann und Burmeister GbR";
		break;
	case 0x00011D:
		cid = "Centillium Communications";
		break;
	case 0x000129:
		cid = "DFI Inc.";
		break;
	case 0x000107:
		cid = "Leiser GmbH";
		break;
	case 0x00010E:
		cid = "Bri-Link Technologies Co., Ltd";
		break;
	case 0x000116:
		cid = "Netspect Technologies, Inc.";
		break;
	case 0x00062B:
		cid = "INTRASERVER TECHNOLOGY";
		break;
	case 0x0002C1:
		cid = "Innovative Electronic Designs, Inc.";
		break;
	case 0x0002C8:
		cid = "Technocom Communications Technology (pte) Ltd";
		break;
	case 0x0002A9:
		cid = "RACOM, s.r.o.";
		break;
	case 0x0002B8:
		cid = "WHI KONSULT AB";
		break;
	case 0x0002AC:
		cid = "3PAR data";
		break;
	case 0x0002B1:
		cid = "Anritsu, Ltd.";
		break;
	case 0x00029A:
		cid = "Storage Apps";
		break;
	case 0x0002A0:
		cid = "Flatstack Ltd.";
		break;
	case 0x000295:
		cid = "IP.Access Limited";
		break;
	case 0x000294:
		cid = "Tokyo Sokushin Co., Ltd.";
		break;
	case 0x000290:
		cid = "Woorigisool, Inc.";
		break;
	case 0x000286:
		cid = "Occam Networks";
		break;
	case 0x00028B:
		cid = "VDSL Systems OY";
		break;
	case 0x000222:
		cid = "Chromisys, Inc.";
		break;
	case 0x00021D:
		cid = "Data General Communication Ltd.";
		break;
	case 0x00020A:
		cid = "Gefran Spa";
		break;
	case 0x000216:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000206:
		cid = "Telital R&D Denmark A/S";
		break;
	case 0x000203:
		cid = "Woonsang Telecom, Inc.";
		break;
	case 0x0001F7:
		cid = "Image Display Systems, Inc.";
		break;
	case 0x0001EE:
		cid = "Comtrol Europe, Ltd.";
		break;
	case 0x0001E2:
		cid = "Ando Electric Corporation";
		break;
	case 0x0001F1:
		cid = "Innovative Concepts, Inc.";
		break;
	case 0x00B06D:
		cid = "Jones Futurex Inc.";
		break;
	case 0x0030FE:
		cid = "DSA GmbH";
		break;
	case 0x00305E:
		cid = "Abelko Innovation";
		break;
	case 0x00304D:
		cid = "ESI";
		break;
	case 0x003046:
		cid = "Controlled Electronic Manageme";
		break;
	case 0x00307B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0001D6:
		cid = "manroland AG";
		break;
	case 0x0001DB:
		cid = "Freecom Technologies GmbH";
		break;
	case 0x0001DE:
		cid = "Trango Systems, Inc.";
		break;
	case 0x0001CF:
		cid = "Alpha Data Parallel Systems, Ltd.";
		break;
	case 0x0001CB:
		cid = "EVR";
		break;
	case 0x0001C4:
		cid = "NeoWave, Inc.";
		break;
	case 0x0001C0:
		cid = "CompuLab, Ltd.";
		break;
	case 0x0001B5:
		cid = "Turin Networks, Inc.";
		break;
	case 0x00017F:
		cid = "Experience Music Project";
		break;
	case 0x00016C:
		cid = "FOXCONN";
		break;
	case 0x000173:
		cid = "AMCC";
		break;
	case 0x00015C:
		cid = "CADANT INC.";
		break;
	case 0x000163:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00010A:
		cid = "CIS TECHNOLOGY INC.";
		break;
	case 0x00016F:
		cid = "Inkel Corp.";
		break;
	case 0x000155:
		cid = "Promise Technology, Inc.";
		break;
	case 0x000151:
		cid = "Ensemble Communications";
		break;
	case 0x000142:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000132:
		cid = "Dranetz - BMI";
		break;
	case 0x00D07D:
		cid = "COSINE COMMUNICATIONS";
		break;
	case 0x00D0CA:
		cid = "Intrinsyc Software International Inc.";
		break;
	case 0x00D058:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00D067:
		cid = "CAMPIO COMMUNICATIONS";
		break;
	case 0x00D023:
		cid = "INFORTREND TECHNOLOGY, INC.";
		break;
	case 0x00D02A:
		cid = "Voxent Systems Ltd.";
		break;
	case 0x00D068:
		cid = "IWILL CORPORATION";
		break;
	case 0x00D09D:
		cid = "VERIS INDUSTRIES";
		break;
	case 0x00D09A:
		cid = "FILANET CORPORATION";
		break;
	case 0x00D00A:
		cid = "LANACCESS TELECOM S.A.";
		break;
	case 0x00D04A:
		cid = "PRESENCE TECHNOLOGY GMBH";
		break;
	case 0x00D0C3:
		cid = "VIVID TECHNOLOGY PTE, LTD.";
		break;
	case 0x00D0F8:
		cid = "FUJIAN STAR TERMINAL";
		break;
	case 0x00D003:
		cid = "COMDA ENTERPRISES CORP.";
		break;
	case 0x00D029:
		cid = "WAKEFERN FOOD CORPORATION";
		break;
	case 0x00D0F5:
		cid = "ORANGE MICRO, INC.";
		break;
	case 0x00D0F7:
		cid = "NEXT NETS CORPORATION";
		break;
	case 0x00D078:
		cid = "Eltex of Sweden AB";
		break;
	case 0x00D0AF:
		cid = "CUTLER-HAMMER, INC.";
		break;
	case 0x00D026:
		cid = "HIRSCHMANN AUSTRIA GMBH";
		break;
	case 0x00D010:
		cid = "CONVERGENT NETWORKS, INC.";
		break;
	case 0x00D074:
		cid = "TAQUA SYSTEMS, INC.";
		break;
	case 0x00D0D5:
		cid = "GRUNDIG AG";
		break;
	case 0x00D034:
		cid = "ORMEC SYSTEMS CORP.";
		break;
	case 0x00D08C:
		cid = "GENOA TECHNOLOGY, INC.";
		break;
	case 0x00D059:
		cid = "AMBIT MICROSYSTEMS CORP.";
		break;
	case 0x005020:
		cid = "MEDIASTAR CO., LTD.";
		break;
	case 0x00503E:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00D02B:
		cid = "JETCELL, INC.";
		break;
	case 0x005017:
		cid = "RSR S.R.L.";
		break;
	case 0x00D0CC:
		cid = "TECHNOLOGIES LYRE INC.";
		break;
	case 0x00506D:
		cid = "VIDEOJET SYSTEMS";
		break;
	case 0x005077:
		cid = "PROLIFIC TECHNOLOGY, INC.";
		break;
	case 0x0050D4:
		cid = "JOOHONG INFORMATION &";
		break;
	case 0x00505E:
		cid = "DIGITEK MICROLOGIC S.A.";
		break;
	case 0x0050E7:
		cid = "PARADISE INNOVATIONS (ASIA)";
		break;
	case 0x0050B9:
		cid = "XITRON TECHNOLOGIES, INC.";
		break;
	case 0x00D049:
		cid = "IMPRESSTEK CO., LTD.";
		break;
	case 0x00D04D:
		cid = "DIV OF RESEARCH & STATISTICS";
		break;
	case 0x00D035:
		cid = "BEHAVIOR TECH. COMPUTER CORP.";
		break;
	case 0x00D02D:
		cid = "ADEMCO";
		break;
	case 0x00D07C:
		cid = "KOYO ELECTRONICS INC. CO.,LTD.";
		break;
	case 0x00D05B:
		cid = "ACROLOOP MOTION CONTROL";
		break;
	case 0x00D0C6:
		cid = "THOMAS & BETTS CORP.";
		break;
	case 0x00D02E:
		cid = "COMMUNICATION AUTOMATION CORP.";
		break;
	case 0x00D0DA:
		cid = "TAICOM DATA SYSTEMS CO., LTD.";
		break;
	case 0x00D0E8:
		cid = "MAC SYSTEM CO., LTD.";
		break;
	case 0x00D03C:
		cid = "Vieo, Inc.";
		break;
	case 0x00D09F:
		cid = "NOVTEK TEST SYSTEMS";
		break;
	case 0x00D07E:
		cid = "KEYCORP LTD.";
		break;
	case 0x00D0EA:
		cid = "NEXTONE COMMUNICATIONS, INC.";
		break;
	case 0x00D020:
		cid = "AIM SYSTEM, INC.";
		break;
	case 0x00D064:
		cid = "MULTITEL";
		break;
	case 0x00D072:
		cid = "BROADLOGIC";
		break;
	case 0x00309B:
		cid = "Smartware";
		break;
	case 0x0030AF:
		cid = "Honeywell GmbH";
		break;
	case 0x003074:
		cid = "EQUIINET LTD.";
		break;
	case 0x003090:
		cid = "CYRA TECHNOLOGIES, INC.";
		break;
	case 0x003030:
		cid = "HARMONIX CORPORATION";
		break;
	case 0x00307C:
		cid = "ADID SA";
		break;
	case 0x003063:
		cid = "SANTERA SYSTEMS, INC.";
		break;
	case 0x00309F:
		cid = "AMBER NETWORKS";
		break;
	case 0x0030A8:
		cid = "OL'E COMMUNICATIONS, INC.";
		break;
	case 0x00304C:
		cid = "APPIAN COMMUNICATIONS, INC.";
		break;
	case 0x0030EF:
		cid = "NEON TECHNOLOGY, INC.";
		break;
	case 0x00306F:
		cid = "SEYEON TECH. CO., LTD.";
		break;
	case 0x003031:
		cid = "LIGHTWAVE COMMUNICATIONS, INC.";
		break;
	case 0x003035:
		cid = "Corning Incorporated";
		break;
	case 0x00302B:
		cid = "INALP NETWORKS, INC.";
		break;
	case 0x00305F:
		cid = "Hasselblad";
		break;
	case 0x00302D:
		cid = "QUANTUM BRIDGE COMMUNICATIONS";
		break;
	case 0x003025:
		cid = "CHECKOUT COMPUTER SYSTEMS, LTD";
		break;
	case 0x003012:
		cid = "DIGITAL ENGINEERING LTD.";
		break;
	case 0x003077:
		cid = "ONPREM NETWORKS";
		break;
	case 0x0030D4:
		cid = "AAE Systems, Inc.";
		break;
	case 0x00D00F:
		cid = "SPEECH DESIGN GMBH";
		break;
	case 0x00D0CF:
		cid = "MORETON BAY";
		break;
	case 0x00D073:
		cid = "ACN ADVANCED COMMUNICATIONS";
		break;
	case 0x00D030:
		cid = "Safetran Systems Corp";
		break;
	case 0x00D057:
		cid = "ULTRAK, INC.";
		break;
	case 0x00D03B:
		cid = "VISION PRODUCTS PTY. LTD.";
		break;
	case 0x00D0BF:
		cid = "PIVOTAL TECHNOLOGIES";
		break;
	case 0x00D050:
		cid = "ISKRATEL";
		break;
	case 0x00D0CB:
		cid = "DASAN CO., LTD.";
		break;
	case 0x00D0D3:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00D08E:
		cid = "Grass Valley, A Belden Brand";
		break;
	case 0x00D0A3:
		cid = "VOCAL DATA, INC.";
		break;
	case 0x00D0E0:
		cid = "DOOIN ELECTRONICS CO.";
		break;
	case 0x003054:
		cid = "CASTLENET TECHNOLOGY, INC.";
		break;
	case 0x003039:
		cid = "SOFTBOOK PRESS";
		break;
	case 0x003017:
		cid = "BlueArc UK Ltd";
		break;
	case 0x003076:
		cid = "Akamba Corporation";
		break;
	case 0x00305D:
		cid = "DIGITRA SYSTEMS, INC.";
		break;
	case 0x0030F7:
		cid = "RAMIX INC.";
		break;
	case 0x003033:
		cid = "ORIENT TELECOM CO., LTD.";
		break;
	case 0x003083:
		cid = "Ivron Systems";
		break;
	case 0x003007:
		cid = "OPTI, INC.";
		break;
	case 0x0030DD:
		cid = "INDIGITA CORPORATION";
		break;
	case 0x0030F2:
		cid = "Cisco Systems, Inc";
		break;
	case 0x003020:
		cid = "TSI, Inc..";
		break;
	case 0x003089:
		cid = "Spectrapoint Wireless, LLC";
		break;
	case 0x003022:
		cid = "Fong Kai Industrial Co., Ltd.";
		break;
	case 0x0030F8:
		cid = "Dynapro Systems, Inc.";
		break;
	case 0x0030C2:
		cid = "COMONE";
		break;
	case 0x003056:
		cid = "Beck IPC GmbH";
		break;
	case 0x0030D2:
		cid = "WIN TECHNOLOGIES, CO., LTD.";
		break;
	case 0x003050:
		cid = "Versa Technology";
		break;
	case 0x0030B8:
		cid = "RiverDelta Networks";
		break;
	case 0x00904D:
		cid = "SPEC S.A.";
		break;
	case 0x009079:
		cid = "ClearOne, Inc.";
		break;
	case 0x00908F:
		cid = "AUDIO CODES LTD.";
		break;
	case 0x0090D5:
		cid = "EUPHONIX, INC.";
		break;
	case 0x0090A7:
		cid = "CLIENTEC CORPORATION";
		break;
	case 0x00907E:
		cid = "VETRONIX CORP.";
		break;
	case 0x00902F:
		cid = "NETCORE SYSTEMS, INC.";
		break;
	case 0x00900D:
		cid = "Overland Storage Inc.";
		break;
	case 0x009044:
		cid = "ASSURED DIGITAL, INC.";
		break;
	case 0x009078:
		cid = "MER TELEMANAGEMENT SOLUTIONS, LTD.";
		break;
	case 0x009009:
		cid = "I Controls, Inc.";
		break;
	case 0x009015:
		cid = "CENTIGRAM COMMUNICATIONS CORP.";
		break;
	case 0x0090F3:
		cid = "ASPECT COMMUNICATIONS";
		break;
	case 0x0090A8:
		cid = "NineTiles Networks, Ltd.";
		break;
	case 0x00507A:
		cid = "XPEED, INC.";
		break;
	case 0x005002:
		cid = "OMNISEC AG";
		break;
	case 0x00508D:
		cid = "ABIT COMPUTER CORPORATION";
		break;
	case 0x0050CD:
		cid = "DIGIANSWER A/S";
		break;
	case 0x0050C5:
		cid = "ADS Technologies, Inc";
		break;
	case 0x00502F:
		cid = "TollBridge Technologies, Inc.";
		break;
	case 0x005028:
		cid = "AVAL COMMUNICATIONS";
		break;
	case 0x00505B:
		cid = "KAWASAKI LSI U.S.A., INC.";
		break;
	case 0x0050F8:
		cid = "ENTREGA TECHNOLOGIES, INC.";
		break;
	case 0x00506F:
		cid = "G-CONNECT";
		break;
	case 0x0050D5:
		cid = "AD SYSTEMS CORP.";
		break;
	case 0x0050AA:
		cid = "KONICA MINOLTA HOLDINGS, INC.";
		break;
	case 0x00509C:
		cid = "BETA RESEARCH";
		break;
	case 0x005027:
		cid = "GENICOM CORPORATION";
		break;
	case 0x005010:
		cid = "NovaNET Learning, Inc.";
		break;
	case 0x00509E:
		cid = "Les Technologies SoftAcoustik Inc.";
		break;
	case 0x00505F:
		cid = "BRAND INNOVATORS";
		break;
	case 0x005095:
		cid = "PERACOM NETWORKS";
		break;
	case 0x005026:
		cid = "COSYSTEMS, INC.";
		break;
	case 0x0050EF:
		cid = "SPE Systemhaus GmbH";
		break;
	case 0x005093:
		cid = "BOEING";
		break;
	case 0x0050D8:
		cid = "UNICORN COMPUTER CORP.";
		break;
	case 0x009034:
		cid = "IMAGIC, INC.";
		break;
	case 0x009073:
		cid = "GAIO TECHNOLOGY";
		break;
	case 0x0090C9:
		cid = "DPAC Technologies";
		break;
	case 0x0090E7:
		cid = "HORSCH ELEKTRONIK AG";
		break;
	case 0x009001:
		cid = "NISHIMU ELECTRONICS INDUSTRIES CO., LTD.";
		break;
	case 0x0090FB:
		cid = "PORTWELL, INC.";
		break;
	case 0x009070:
		cid = "NEO NETWORKS, INC.";
		break;
	case 0x0090EF:
		cid = "INTEGRIX, INC.";
		break;
	case 0x0090B0:
		cid = "VADEM";
		break;
	case 0x0090D1:
		cid = "LEICHU ENTERPRISE CO., LTD.";
		break;
	case 0x0050D7:
		cid = "TELSTRAT";
		break;
	case 0x0050F1:
		cid = "Intel Corporation";
		break;
	case 0x00501B:
		cid = "ABL CANADA, INC.";
		break;
	case 0x005036:
		cid = "NETCAM, LTD.";
		break;
	case 0x0050C9:
		cid = "MASPRO DENKOH CORP.";
		break;
	case 0x005009:
		cid = "PHILIPS BROADBAND NETWORKS";
		break;
	case 0x0050C4:
		cid = "IMD";
		break;
	case 0x0050A3:
		cid = "TransMedia Communications, Inc.";
		break;
	case 0x0050A4:
		cid = "IO TECH, INC.";
		break;
	case 0x0050B3:
		cid = "VOICEBOARD CORPORATION";
		break;
	case 0x0050B7:
		cid = "BOSER TECHNOLOGY CO., LTD.";
		break;
	case 0x00908D:
		cid = "VICKERS ELECTRONICS SYSTEMS";
		break;
	case 0x009042:
		cid = "ECCS, Inc.";
		break;
	case 0x009051:
		cid = "ULTIMATE TECHNOLOGY CORP.";
		break;
	case 0x0090FF:
		cid = "TELLUS TECHNOLOGY INC.";
		break;
	case 0x009018:
		cid = "ITO ELECTRIC INDUSTRY CO, LTD.";
		break;
	case 0x009002:
		cid = "ALLGON AB";
		break;
	case 0x009016:
		cid = "ZAC";
		break;
	case 0x009005:
		cid = "PROTECH SYSTEMS CO., LTD.";
		break;
	case 0x00901E:
		cid = "Selesta Ingegneria S.p.A.";
		break;
	case 0x009090:
		cid = "I-BUS";
		break;
	case 0x0090AA:
		cid = "INDIGO ACTIVE VISION SYSTEMS LIMITED";
		break;
	case 0x00903A:
		cid = "NIHON MEDIA TOOL INC.";
		break;
	case 0x009055:
		cid = "PARKER HANNIFIN CORPORATION COMPUMOTOR DIVISION";
		break;
	case 0x00909F:
		cid = "DIGI-DATA CORPORATION";
		break;
	case 0x0090E4:
		cid = "NEC AMERICA, INC.";
		break;
	case 0x009013:
		cid = "SAMSAN CORP.";
		break;
	case 0x0090E1:
		cid = "TELENA S.P.A.";
		break;
	case 0x00504A:
		cid = "ELTECO A.S.";
		break;
	case 0x00504C:
		cid = "Galil Motion Control";
		break;
	case 0x005021:
		cid = "EIS INTERNATIONAL, INC.";
		break;
	case 0x00506E:
		cid = "CORDER ENGINEERING CORPORATION";
		break;
	case 0x00507E:
		cid = "NEWER TECHNOLOGY";
		break;
	case 0x0050E6:
		cid = "HAKUSAN CORPORATION";
		break;
	case 0x0050AE:
		cid = "FDK Co., Ltd";
		break;
	case 0x00109D:
		cid = "CLARINET SYSTEMS, INC.";
		break;
	case 0x0010D2:
		cid = "NITTO TSUSHINKI CO., LTD";
		break;
	case 0x001045:
		cid = "Nortel Networks";
		break;
	case 0x00106B:
		cid = "SONUS NETWORKS, INC.";
		break;
	case 0x0010EC:
		cid = "RPCG, LLC";
		break;
	case 0x001092:
		cid = "NETCORE INC.";
		break;
	case 0x0010E2:
		cid = "ArrayComm, Inc.";
		break;
	case 0x001071:
		cid = "ADVANET INC.";
		break;
	case 0x001069:
		cid = "HELIOSS COMMUNICATIONS, INC.";
		break;
	case 0x0010FD:
		cid = "COCOM A/S";
		break;
	case 0x0010AC:
		cid = "IMCI TECHNOLOGIES";
		break;
	case 0x0010EF:
		cid = "DBTEL INCORPORATED";
		break;
	case 0x001024:
		cid = "NAGOYA ELECTRIC WORKS CO., LTD";
		break;
	case 0x0010DD:
		cid = "ENABLE SEMICONDUCTOR, INC.";
		break;
	case 0x0010C9:
		cid = "MITSUBISHI ELECTRONICS LOGISTIC SUPPORT CO.";
		break;
	case 0x001085:
		cid = "POLARIS COMMUNICATIONS, INC.";
		break;
	case 0x001044:
		cid = "InnoLabs Corporation";
		break;
	case 0x001056:
		cid = "SODICK CO., LTD.";
		break;
	case 0x001099:
		cid = "InnoMedia, Inc.";
		break;
	case 0x001061:
		cid = "HOSTLINK CORP.";
		break;
	case 0x001093:
		cid = "CMS COMPUTERS, LTD.";
		break;
	case 0x0010CD:
		cid = "INTERFACE CONCEPT";
		break;
	case 0x0010F3:
		cid = "Nexcom International Co., Ltd.";
		break;
	case 0x001005:
		cid = "UEC COMMERCIAL";
		break;
	case 0x001066:
		cid = "ADVANCED CONTROL SYSTEMS, INC.";
		break;
	case 0x0010E4:
		cid = "NSI CORPORATION";
		break;
	case 0x001062:
		cid = "NX SERVER, ILNC.";
		break;
	case 0x0010B9:
		cid = "MAXTOR CORP.";
		break;
	case 0x00108B:
		cid = "LASERANIMATION SOLLINGER GMBH";
		break;
	case 0x00105C:
		cid = "QUANTUM DESIGNS (H.K.) LTD.";
		break;
	case 0x001042:
		cid = "Alacritech, Inc.";
		break;
	case 0x001060:
		cid = "BILLIONTON SYSTEMS, INC.";
		break;
	case 0x0010DE:
		cid = "INTERNATIONAL DATACASTING CORPORATION";
		break;
	case 0x00105D:
		cid = "Draeger Medical";
		break;
	case 0x0010E1:
		cid = "S.I. TECH, INC.";
		break;
	case 0x001091:
		cid = "NO WIRES NEEDED BV";
		break;
	case 0x0010F5:
		cid = "AMHERST SYSTEMS, INC.";
		break;
	case 0x001090:
		cid = "CIMETRICS, INC.";
		break;
	case 0x001070:
		cid = "CARADON TREND LTD.";
		break;
	case 0x0010BA:
		cid = "MARTINHO-DAVIS SYSTEMS, INC.";
		break;
	case 0x00107C:
		cid = "P-COM, INC.";
		break;
	case 0x0010AE:
		cid = "SHINKO ELECTRIC INDUSTRIES CO.";
		break;
	case 0x001040:
		cid = "INTERMEC CORPORATION";
		break;
	case 0x0010B0:
		cid = "MERIDIAN TECHNOLOGY CORP.";
		break;
	case 0x001077:
		cid = "SAF DRIVE SYSTEMS, LTD.";
		break;
	case 0x0010F4:
		cid = "Vertical Communications";
		break;
	case 0x001065:
		cid = "RADYNE CORPORATION";
		break;
	case 0x00104A:
		cid = "The Parvus Corporation";
		break;
	case 0x0010B3:
		cid = "NOKIA MULTIMEDIA TERMINALS";
		break;
	case 0x001037:
		cid = "CYQ've Technology Co., Ltd.";
		break;
	case 0x001051:
		cid = "CMICRO CORPORATION";
		break;
	case 0x0010DC:
		cid = "MICRO-STAR INTERNATIONAL CO., LTD.";
		break;
	case 0x0010EE:
		cid = "CTI PRODUCTS, INC.";
		break;
	case 0x00101B:
		cid = "CORNET TECHNOLOGY, INC.";
		break;
	case 0x001032:
		cid = "ALTA TECHNOLOGY";
		break;
	case 0x001025:
		cid = "Grayhill, Inc";
		break;
	case 0x0010F8:
		cid = "TEXIO TECHNOLOGY CORPORATION";
		break;
	case 0x00104D:
		cid = "SURTEC INDUSTRIES, INC.";
		break;
	case 0x00E0E0:
		cid = "SI ELECTRONICS, LTD.";
		break;
	case 0x00E0D1:
		cid = "TELSIS LIMITED";
		break;
	case 0x00E005:
		cid = "TECHNICAL CORP.";
		break;
	case 0x00E072:
		cid = "LYNK";
		break;
	case 0x00E0C1:
		cid = "MEMOREX TELEX JAPAN, LTD.";
		break;
	case 0x00E0AD:
		cid = "EES TECHNOLOGY, LTD.";
		break;
	case 0x00E025:
		cid = "dit Co., Ltd.";
		break;
	case 0x00E0E4:
		cid = "FANUC ROBOTICS NORTH AMERICA, Inc.";
		break;
	case 0x00E031:
		cid = "HAGIWARA ELECTRIC CO., LTD.";
		break;
	case 0x00E0A5:
		cid = "ComCore Semiconductor, Inc.";
		break;
	case 0x00E044:
		cid = "LSICS CORPORATION";
		break;
	case 0x00E05D:
		cid = "UNITEC CO., LTD.";
		break;
	case 0x00E0B3:
		cid = "EtherWAN Systems, Inc.";
		break;
	case 0x00E053:
		cid = "CELLPORT LABS, INC.";
		break;
	case 0x00E07D:
		cid = "NETRONIX, INC.";
		break;
	case 0x00E0ED:
		cid = "SILICOM, LTD.";
		break;
	case 0x00E0B4:
		cid = "TECHNO SCOPE CO., LTD.";
		break;
	case 0x00E0C6:
		cid = "LINK2IT, L.L.C.";
		break;
	case 0x00E06D:
		cid = "COMPUWARE CORPORATION";
		break;
	case 0x00E074:
		cid = "TIERNAN COMMUNICATIONS, INC.";
		break;
	case 0x00E059:
		cid = "CONTROLLED ENVIRONMENTS, LTD.";
		break;
	case 0x00E006:
		cid = "SILICON INTEGRATED SYS. CORP.";
		break;
	case 0x00E0F8:
		cid = "DICNA CONTROL AB";
		break;
	case 0x00E004:
		cid = "PMC-SIERRA, INC.";
		break;
	case 0x00E0DE:
		cid = "DATAX NV";
		break;
	case 0x00E078:
		cid = "BERKELEY NETWORKS";
		break;
	case 0x00E041:
		cid = "CSPI";
		break;
	case 0x00E0E2:
		cid = "INNOVA CORP.";
		break;
	case 0x00E02F:
		cid = "MCNS HOLDINGS, L.P.";
		break;
	case 0x00E04C:
		cid = "REALTEK SEMICONDUCTOR CORP.";
		break;
	case 0x00E047:
		cid = "InFocus Corporation";
		break;
	case 0x00E092:
		cid = "ADMTEK INCORPORATED";
		break;
	case 0x00E0FF:
		cid = "SECURITY DYNAMICS TECHNOLOGIES, Inc.";
		break;
	case 0x08BBCC:
		cid = "AK-NORD EDV VERTRIEBSGES. mbH";
		break;
	case 0x0060B2:
		cid = "PROCESS CONTROL CORP.";
		break;
	case 0x006004:
		cid = "COMPUTADORES MODULARES SA";
		break;
	case 0x006000:
		cid = "XYCOM INC.";
		break;
	case 0x00A019:
		cid = "NEBULA CONSULTANTS, INC.";
		break;
	case 0x00A0ED:
		cid = "Brooks Automation, Inc.";
		break;
	case 0x00A0A9:
		cid = "NAVTEL COMMUNICATIONS INC.";
		break;
	case 0x00A0E1:
		cid = "WESTPORT RESEARCH ASSOCIATES, INC.";
		break;
	case 0x00A0D6:
		cid = "SBE, Inc.";
		break;
	case 0x00A05E:
		cid = "MYRIAD LOGIC INC.";
		break;
	case 0x00A078:
		cid = "Marconi Communications";
		break;
	case 0x00A00B:
		cid = "COMPUTEX CO., LTD.";
		break;
	case 0x00A09A:
		cid = "NIHON KOHDEN AMERICA";
		break;
	case 0x00A095:
		cid = "ACACIA NETWORKS, INC.";
		break;
	case 0x00A0F2:
		cid = "INFOTEK COMMUNICATIONS, INC.";
		break;
	case 0x00A0EF:
		cid = "LUCIDATA LTD.";
		break;
	case 0x00A03F:
		cid = "COMPUTER SOCIETY MICROPROCESSOR & MICROPROCESSOR STANDARDS C";
		break;
	case 0x00A067:
		cid = "NETWORK SERVICES GROUP";
		break;
	case 0x00A0A7:
		cid = "VORAX CORPORATION";
		break;
	case 0x00A02D:
		cid = "1394 Trade Association";
		break;
	case 0x00A0E6:
		cid = "DIALOGIC CORPORATION";
		break;
	case 0x00A04A:
		cid = "NISSHIN ELECTRIC CO., LTD.";
		break;
	case 0x00A05B:
		cid = "MARQUIP, INC.";
		break;
	case 0x00A08D:
		cid = "JACOMO CORPORATION";
		break;
	case 0x00A08E:
		cid = "Check Point Software Technologies";
		break;
	case 0x00E0AA:
		cid = "ELECTROSONIC LTD.";
		break;
	case 0x00E085:
		cid = "GLOBAL MAINTECH, INC.";
		break;
	case 0x00E05A:
		cid = "GALEA NETWORK SECURITY";
		break;
	case 0x00E0E7:
		cid = "RAYTHEON E-SYSTEMS, INC.";
		break;
	case 0x00E00C:
		cid = "MOTOROLA";
		break;
	case 0x00E04A:
		cid = "ZX Technologies, Inc";
		break;
	case 0x00E00A:
		cid = "DIBA, INC.";
		break;
	case 0x00E0B9:
		cid = "BYAS SYSTEMS";
		break;
	case 0x00E054:
		cid = "KODAI HITEC CO., LTD.";
		break;
	case 0x00E0AF:
		cid = "GENERAL DYNAMICS INFORMATION SYSTEMS";
		break;
	case 0x00605B:
		cid = "IntraServer Technology, Inc.";
		break;
	case 0x00604B:
		cid = "Safe-com GmbH & Co. KG";
		break;
	case 0x00A0CD:
		cid = "DR. JOHANNES HEIDENHAIN GmbH";
		break;
	case 0x00A0DA:
		cid = "INTEGRATED SYSTEMS Technology, Inc.";
		break;
	case 0x00A03C:
		cid = "EG&G NUCLEAR INSTRUMENTS";
		break;
	case 0x00A038:
		cid = "EMAIL ELECTRONICS";
		break;
	case 0x00A0BE:
		cid = "INTEGRATED CIRCUIT SYSTEMS, INC. COMMUNICATIONS GROUP";
		break;
	case 0x00605D:
		cid = "SCANIVALVE CORP.";
		break;
	case 0x0060E4:
		cid = "COMPUSERVE, INC.";
		break;
	case 0x00600A:
		cid = "SORD COMPUTER CORPORATION";
		break;
	case 0x0060C4:
		cid = "SOLITON SYSTEMS K.K.";
		break;
	case 0x0060C8:
		cid = "KUKA WELDING SYSTEMS & ROBOTS";
		break;
	case 0x006030:
		cid = "VILLAGE TRONIC ENTWICKLUNG";
		break;
	case 0x0060E7:
		cid = "RANDATA";
		break;
	case 0x00602A:
		cid = "SYMICRON COMPUTER COMMUNICATIONS, LTD.";
		break;
	case 0x00601E:
		cid = "SOFTLAB, INC.";
		break;
	case 0x0060F8:
		cid = "Loran International Technologies Inc.";
		break;
	case 0x00609A:
		cid = "NJK TECHNO CO.";
		break;
	case 0x0060CC:
		cid = "EMTRAK, INCORPORATED";
		break;
	case 0x006036:
		cid = "AIT Austrian Institute of Technology GmbH";
		break;
	case 0x0060B9:
		cid = "NEC Platforms, Ltd";
		break;
	case 0x0060CE:
		cid = "ACCLAIM COMMUNICATIONS";
		break;
	case 0x0060F5:
		cid = "ICON WEST, INC.";
		break;
	case 0x0060A4:
		cid = "GEW Technologies (PTY)Ltd";
		break;
	case 0x0060CA:
		cid = "HARMONIC SYSTEMS INCORPORATED";
		break;
	case 0x006024:
		cid = "GRADIENT TECHNOLOGIES, INC.";
		break;
	case 0x0060FB:
		cid = "PACKETEER, INC.";
		break;
	case 0x0060BC:
		cid = "KeunYoung Electronics & Communication Co., Ltd.";
		break;
	case 0x0060B8:
		cid = "CORELIS Inc.";
		break;
	case 0x0060FE:
		cid = "LYNX SYSTEM DEVELOPERS, INC.";
		break;
	case 0x006001:
		cid = "InnoSys, Inc.";
		break;
	case 0x00607D:
		cid = "SENTIENT NETWORKS INC.";
		break;
	case 0x00606E:
		cid = "DAVICOM SEMICONDUCTOR, INC.";
		break;
	case 0x00607E:
		cid = "GIGALABS, INC.";
		break;
	case 0x0060CF:
		cid = "ALTEON NETWORKS, INC.";
		break;
	case 0x006026:
		cid = "VIKING Modular Solutions";
		break;
	case 0x006003:
		cid = "TERAOKA WEIGH SYSTEM PTE, LTD.";
		break;
	case 0x006059:
		cid = "TECHNICAL COMMUNICATIONS CORP.";
		break;
	case 0x006066:
		cid = "LACROIX Trafic";
		break;
	case 0x0060DA:
		cid = "Red Lion Controls, LP";
		break;
	case 0x006042:
		cid = "TKS (USA), INC.";
		break;
	case 0x00A023:
		cid = "APPLIED CREATIVE TECHNOLOGY, INC.";
		break;
	case 0x00A00F:
		cid = "Broadband Technologies";
		break;
	case 0x00A032:
		cid = "GES SINGAPORE PTE. LTD.";
		break;
	case 0x002034:
		cid = "ROTEC INDUSTRIEAUTOMATION GMBH";
		break;
	case 0x0020B2:
		cid = "GKD Gesellschaft Fur Kommunikation Und Datentechnik";
		break;
	case 0x002004:
		cid = "YAMATAKE-HONEYWELL CO., LTD.";
		break;
	case 0x0020FE:
		cid = "TOPWARE INC. / GRAND COMPUTER";
		break;
	case 0x002073:
		cid = "FUSION SYSTEMS CORPORATION";
		break;
	case 0x00207A:
		cid = "WiSE Communications, Inc.";
		break;
	case 0x00205C:
		cid = "InterNet Systems of Florida, Inc.";
		break;
	case 0x00207E:
		cid = "FINECOM CO., LTD.";
		break;
	case 0x00205A:
		cid = "COMPUTER IDENTICS";
		break;
	case 0x0020E4:
		cid = "HSING TECH ENTERPRISE CO., LTD";
		break;
	case 0x00A000:
		cid = "CENTILLION NETWORKS, INC.";
		break;
	case 0x00A07B:
		cid = "DAWN COMPUTER INCORPORATION";
		break;
	case 0x00A05C:
		cid = "INVENTORY CONVERSION, INC./";
		break;
	case 0x00206F:
		cid = "FLOWPOINT CORPORATION";
		break;
	case 0x0020DF:
		cid = "KYOSAN ELECTRIC MFG. CO., LTD.";
		break;
	case 0x002010:
		cid = "JEOL SYSTEM TECHNOLOGY CO. LTD";
		break;
	case 0x002020:
		cid = "MEGATRON COMPUTER INDUSTRIES PTY, LTD.";
		break;
	case 0x0020A0:
		cid = "OA LABORATORY CO., LTD.";
		break;
	case 0x00C0A3:
		cid = "DUAL ENTERPRISES CORPORATION";
		break;
	case 0x0070B0:
		cid = "M/A-COM INC. COMPANIES";
		break;
	case 0x009D8E:
		cid = "CARDIAC RECORDERS, INC.";
		break;
	case 0x006086:
		cid = "LOGIC REPLACEMENT TECH. LTD.";
		break;
	case 0x001C7C:
		cid = "PERQ SYSTEMS CORPORATION";
		break;
	case 0x00C059:
		cid = "DENSO CORPORATION";
		break;
	case 0x00C0A9:
		cid = "BARRON MCCANN LTD.";
		break;
	case 0x00C069:
		cid = "Axxcelera Broadband Wireless";
		break;
	case 0x00C019:
		cid = "LEAP TECHNOLOGY, INC.";
		break;
	case 0x00A062:
		cid = "AES PRODATA";
		break;
	case 0x00A008:
		cid = "NETCORP";
		break;
	case 0x00A01B:
		cid = "PREMISYS COMMUNICATIONS, INC.";
		break;
	case 0x00A04B:
		cid = "TFL LAN INC.";
		break;
	case 0x00A015:
		cid = "WYLE";
		break;
	case 0x00A011:
		cid = "MUTOH INDUSTRIES LTD.";
		break;
	case 0x00A0B6:
		cid = "SANRITZ AUTOMATION CO., LTD.";
		break;
	case 0x00A0DD:
		cid = "AZONIX CORPORATION";
		break;
	case 0x00A00A:
		cid = "Airspan";
		break;
	case 0x00A03B:
		cid = "TOSHIN ELECTRIC CO., LTD.";
		break;
	case 0x00A0F3:
		cid = "STAUBLI";
		break;
	case 0x00A097:
		cid = "JC INFORMATION SYSTEMS";
		break;
	case 0x00A082:
		cid = "NKT ELEKTRONIK A/S";
		break;
	case 0x00A072:
		cid = "OVATION SYSTEMS LTD.";
		break;
	case 0x00A0B2:
		cid = "SHIMA SEIKI";
		break;
	case 0x00A0E5:
		cid = "NHC COMMUNICATIONS";
		break;
	case 0x00A0D3:
		cid = "INSTEM COMPUTER SYSTEMS, LTD.";
		break;
	case 0x00A0BA:
		cid = "PATTON ELECTRONICS CO.";
		break;
	case 0x00A0B4:
		cid = "TEXAS MICROSYSTEMS, INC.";
		break;
	case 0x00A0AF:
		cid = "WMS INDUSTRIES";
		break;
	case 0x00A0FE:
		cid = "BOSTON TECHNOLOGY, INC.";
		break;
	case 0x00202F:
		cid = "ZETA COMMUNICATIONS, LTD.";
		break;
	case 0x002060:
		cid = "ALCATEL ITALIA S.p.A.";
		break;
	case 0x00209A:
		cid = "THE 3DO COMPANY";
		break;
	case 0x00205E:
		cid = "CASTLE ROCK, INC.";
		break;
	case 0x00207C:
		cid = "AUTEC GMBH";
		break;
	case 0x002075:
		cid = "MOTOROLA COMMUNICATION ISRAEL";
		break;
	case 0x002015:
		cid = "ACTIS COMPUTER SA";
		break;
	case 0x0020E9:
		cid = "DANTEL";
		break;
	case 0x00204A:
		cid = "PRONET GMBH";
		break;
	case 0x002029:
		cid = "TELEPROCESSING PRODUCTS, INC.";
		break;
	case 0x002051:
		cid = "Verilink Corporation";
		break;
	case 0x0020A1:
		cid = "DOVATRON";
		break;
	case 0x002024:
		cid = "PACIFIC COMMUNICATION SCIENCES";
		break;
	case 0x00209D:
		cid = "LIPPERT AUTOMATIONSTECHNIK";
		break;
	case 0x002041:
		cid = "DATA NET";
		break;
	case 0x002076:
		cid = "REUDO CORPORATION";
		break;
	case 0x00206E:
		cid = "XACT, INC.";
		break;
	case 0x0020CA:
		cid = "DIGITAL OCEAN";
		break;
	case 0x002085:
		cid = "Eaton Corporation";
		break;
	case 0x0020CD:
		cid = "HYBRID NETWORKS, INC.";
		break;
	case 0x0020E7:
		cid = "B&W NUCLEAR SERVICE COMPANY";
		break;
	case 0x0020AC:
		cid = "INTERFLEX DATENSYSTEME GMBH";
		break;
	case 0x0020F6:
		cid = "NET TEK  AND KARLNET, INC.";
		break;
	case 0x0020D3:
		cid = "OST (OUEST STANDARD TELEMATIQU";
		break;
	case 0x0020D8:
		cid = "Nortel Networks";
		break;
	case 0x002017:
		cid = "ORBOTECH";
		break;
	case 0x002025:
		cid = "CONTROL TECHNOLOGY, INC.";
		break;
	case 0x00C08B:
		cid = "RISQ MODULAR SYSTEMS, INC.";
		break;
	case 0x00C0CD:
		cid = "COMELTA, S.A.";
		break;
	case 0x00C04B:
		cid = "CREATIVE MICROSYSTEMS";
		break;
	case 0x00C0A1:
		cid = "TOKYO DENSHI SEKEI CO.";
		break;
	case 0x00C03E:
		cid = "FA. GEBR. HELLER GMBH";
		break;
	case 0x00C0E1:
		cid = "SONIC SOLUTIONS";
		break;
	case 0x00C047:
		cid = "UNIMICRO SYSTEMS, INC.";
		break;
	case 0x00C046:
		cid = "Blue Chip Technology Ltd";
		break;
	case 0x00C00D:
		cid = "ADVANCED LOGIC RESEARCH, INC.";
		break;
	case 0x00C0FA:
		cid = "CANARY COMMUNICATIONS, INC.";
		break;
	case 0x00C0B7:
		cid = "AMERICAN POWER CONVERSION CORP";
		break;
	case 0x00C0BA:
		cid = "NETVANTAGE";
		break;
	case 0x00C0B6:
		cid = "Overland Storage, Inc.";
		break;
	case 0x00C048:
		cid = "BAY TECHNICAL ASSOCIATES";
		break;
	case 0x00C03F:
		cid = "STORES AUTOMATED SYSTEMS, INC.";
		break;
	case 0x00C00E:
		cid = "PSITECH, INC.";
		break;
	case 0x00C036:
		cid = "RAYTECH ELECTRONIC CORP.";
		break;
	case 0x00C009:
		cid = "KT TECHNOLOGY (S) PTE LTD";
		break;
	case 0x00C0EA:
		cid = "ARRAY TECHNOLOGY LTD.";
		break;
	case 0x00C03A:
		cid = "MEN-MIKRO ELEKTRONIK GMBH";
		break;
	case 0x00C040:
		cid = "ECCI";
		break;
	case 0x00C04C:
		cid = "DEPARTMENT OF FOREIGN AFFAIRS";
		break;
	case 0x00C01C:
		cid = "INTERLINK COMMUNICATIONS LTD.";
		break;
	case 0x00C086:
		cid = "THE LYNK CORPORATION";
		break;
	case 0x00C08D:
		cid = "TRONIX PRODUCT DEVELOPMENT";
		break;
	case 0x00C0A2:
		cid = "INTERMEDIUM A/S";
		break;
	case 0x00C070:
		cid = "SECTRA SECURE-TRANSMISSION AB";
		break;
	case 0x00C057:
		cid = "MYCO ELECTRONICS";
		break;
	case 0x00C0DF:
		cid = "KYE Systems Corp.";
		break;
	case 0x00C0F6:
		cid = "CELAN TECHNOLOGY INC.";
		break;
	case 0x00C012:
		cid = "NETSPAN CORPORATION";
		break;
	case 0x00C0C4:
		cid = "COMPUTER OPERATIONAL";
		break;
	case 0x00C0C2:
		cid = "INFINITE NETWORKS LTD.";
		break;
	case 0x00C0D3:
		cid = "OLYMPUS IMAGE SYSTEMS, INC.";
		break;
	case 0x00C0B0:
		cid = "GCC TECHNOLOGIES,INC.";
		break;
	case 0x00C0F4:
		cid = "INTERLINK SYSTEM CO., LTD.";
		break;
	case 0x00C0E2:
		cid = "CALCOMP, INC.";
		break;
	case 0x00C0CA:
		cid = "ALFA, INC.";
		break;
	case 0x00C07B:
		cid = "ASCEND COMMUNICATIONS, INC.";
		break;
	case 0x00C052:
		cid = "BURR-BROWN";
		break;
	case 0x00C0BE:
		cid = "ALCATEL - SEL";
		break;
	case 0x00408F:
		cid = "WM-DATA MINFO AB";
		break;
	case 0x0040B7:
		cid = "STEALTH COMPUTER SYSTEMS";
		break;
	case 0x004057:
		cid = "LOCKHEED - SANDERS";
		break;
	case 0x004017:
		cid = "Silex Technology America";
		break;
	case 0x004087:
		cid = "UBITREX CORPORATION";
		break;
	case 0x00400E:
		cid = "MEMOTEC, INC.";
		break;
	case 0x00C09E:
		cid = "CACHE COMPUTERS, INC.";
		break;
	case 0x00C093:
		cid = "ALTA RESEARCH CORP.";
		break;
	case 0x00C034:
		cid = "TRANSACTION NETWORK";
		break;
	case 0x004034:
		cid = "BUSTEK CORPORATION";
		break;
	case 0x004097:
		cid = "DATEX DIVISION OF";
		break;
	case 0x00401E:
		cid = "ICC";
		break;
	case 0x00407C:
		cid = "QUME CORPORATION";
		break;
	case 0x004060:
		cid = "COMENDEC LTD";
		break;
	case 0x004056:
		cid = "MCM JAPAN LTD.";
		break;
	case 0x004095:
		cid = "R.P.T. INTERGROUPS INT'L LTD.";
		break;
	case 0x0040C3:
		cid = "FISCHER AND PORTER CO.";
		break;
	case 0x0040F1:
		cid = "CHUO ELECTRONICS CO., LTD.";
		break;
	case 0x004061:
		cid = "DATATECH ENTERPRISES CO., LTD.";
		break;
	case 0x00408B:
		cid = "RAYLAN CORPORATION";
		break;
	case 0x004020:
		cid = "CommScope Inc";
		break;
	case 0x00406E:
		cid = "COROLLARY, INC.";
		break;
	case 0x004016:
		cid = "ADC - Global Connectivity Solutions Division";
		break;
	case 0x004086:
		cid = "MICHELS & KLEBERHOFF COMPUTER";
		break;
	case 0x0040DC:
		cid = "TRITEC ELECTRONIC GMBH";
		break;
	case 0x004074:
		cid = "CABLE AND WIRELESS";
		break;
	case 0x0040B8:
		cid = "IDEA ASSOCIATES";
		break;
	case 0x004058:
		cid = "KRONOS, INC.";
		break;
	case 0x0040A8:
		cid = "IMF INTERNATIONAL LTD.";
		break;
	case 0x0080BB:
		cid = "HUGHES LAN SYSTEMS";
		break;
	case 0x00C0A0:
		cid = "ADVANCE MICRO RESEARCH, INC.";
		break;
	case 0x00C0D7:
		cid = "TAIWAN TRADING CENTER DBA";
		break;
	case 0x00C037:
		cid = "DYNATEM";
		break;
	case 0x00C05F:
		cid = "FINE-PAL COMPANY LIMITED";
		break;
	case 0x0040CE:
		cid = "NET-SOURCE, INC.";
		break;
	case 0x004080:
		cid = "ATHENIX CORPORATION";
		break;
	case 0x0040BB:
		cid = "GOLDSTAR CABLE CO., LTD.";
		break;
	case 0x0040B1:
		cid = "CODONICS INC.";
		break;
	case 0x00402E:
		cid = "PRECISION SOFTWARE, INC.";
		break;
	case 0x00C0CE:
		cid = "CEI SYSTEMS & ENGINEERING PTE";
		break;
	case 0x00409B:
		cid = "HAL COMPUTER SYSTEMS INC.";
		break;
	case 0x004073:
		cid = "BASS ASSOCIATES";
		break;
	case 0x10005A:
		cid = "IBM Corp";
		break;
	case 0x004005:
		cid = "ANI COMMUNICATIONS INC.";
		break;
	case 0x004099:
		cid = "NEWGEN SYSTEMS CORP.";
		break;
	case 0x0040E1:
		cid = "MARNER INTERNATIONAL, INC.";
		break;
	case 0x0080DD:
		cid = "GMX INC/GIMIX";
		break;
	case 0x0080B7:
		cid = "STELLAR COMPUTER";
		break;
	case 0x008002:
		cid = "SATELCOM (UK) LTD";
		break;
	case 0x00805C:
		cid = "AGILIS CORPORATION";
		break;
	case 0x008070:
		cid = "COMPUTADORAS MICRON";
		break;
	case 0x00808F:
		cid = "C. ITOH ELECTRONICS, INC.";
		break;
	case 0x000091:
		cid = "ANRITSU CORPORATION";
		break;
	case 0x000094:
		cid = "ASANTE TECHNOLOGIES";
		break;
	case 0x000090:
		cid = "MICROCOM";
		break;
	case 0x000047:
		cid = "NICOLET INSTRUMENTS CORP.";
		break;
	case 0x0000FB:
		cid = "RECHNER ZUR KOMMUNIKATION";
		break;
	case 0x0000A3:
		cid = "NETWORK APPLICATION TECHNOLOGY";
		break;
	case 0x00008F:
		cid = "Raytheon";
		break;
	case 0x00007E:
		cid = "CLUSTRIX CORPORATION";
		break;
	case 0x00000A:
		cid = "OMRON TATEISI ELECTRONICS CO.";
		break;
	case 0x000063:
		cid = "BARCO CONTROL ROOMS GMBH";
		break;
	case 0x00004E:
		cid = "AMPEX CORPORATION";
		break;
	case 0x0000C2:
		cid = "INFORMATION PRESENTATION TECH.";
		break;
	case 0x000034:
		cid = "NETWORK RESOURCES CORPORATION";
		break;
	case 0x000049:
		cid = "APRICOT COMPUTERS, LTD";
		break;
	case 0x0000E2:
		cid = "ACER TECHNOLOGIES CORP.";
		break;
	case 0x0000D4:
		cid = "PURE DATA LTD.";
		break;
	case 0x0000E1:
		cid = "GRID SYSTEMS";
		break;
	case 0x000044:
		cid = "CASTELLE CORPORATION";
		break;
	case 0x000027:
		cid = "JAPAN RADIO COMPANY";
		break;
	case 0x004049:
		cid = "Roche Diagnostics International Ltd.";
		break;
	case 0x004029:
		cid = "Compex";
		break;
	case 0x008038:
		cid = "DATA RESEARCH & APPLICATIONS";
		break;
	case 0x008090:
		cid = "MICROTEK INTERNATIONAL, INC.";
		break;
	case 0x0080C3:
		cid = "BICC INFORMATION SYSTEMS & SVC";
		break;
	case 0x00805A:
		cid = "TULIP COMPUTERS INTERNAT'L B.V";
		break;
	case 0x0080F0:
		cid = "Panasonic Communications Co., Ltd.";
		break;
	case 0x008043:
		cid = "NETWORLD, INC.";
		break;
	case 0x0080B0:
		cid = "ADVANCED INFORMATION";
		break;
	case 0x008066:
		cid = "ARCOM CONTROL SYSTEMS, LTD.";
		break;
	case 0x004051:
		cid = "GRACILIS, INC.";
		break;
	case 0x004064:
		cid = "KLA INSTRUMENTS CORPORATION";
		break;
	case 0x004028:
		cid = "NETCOMM LIMITED";
		break;
	case 0x004013:
		cid = "NTT DATA COMM. SYSTEMS CORP.";
		break;
	case 0x0040A0:
		cid = "GOLDSTAR CO., LTD.";
		break;
	case 0x0040B2:
		cid = "SYSTEMFORSCHUNG";
		break;
	case 0x004071:
		cid = "ATM COMPUTER GMBH";
		break;
	case 0x0080BF:
		cid = "TAKAOKA ELECTRIC MFG. CO. LTD.";
		break;
	case 0x0080F6:
		cid = "SYNERGY MICROSYSTEMS";
		break;
	case 0x000058:
		cid = "RACORE COMPUTER PRODUCTS INC.";
		break;
	case 0x000050:
		cid = "RADISYS CORPORATION";
		break;
	case 0x008082:
		cid = "PEP MODULAR COMPUTERS GMBH";
		break;
	case 0x008096:
		cid = "HUMAN DESIGNED SYSTEMS, INC.";
		break;
	case 0x0080D5:
		cid = "CADRE TECHNOLOGIES";
		break;
	case 0x00803E:
		cid = "SYNERNETICS";
		break;
	case 0x00809A:
		cid = "NOVUS NETWORKS LTD";
		break;
	case 0x0080B3:
		cid = "AVAL DATA CORPORATION";
		break;
	case 0x0080A3:
		cid = "Lantronix";
		break;
	case 0x00803C:
		cid = "TVS ELECTRONICS LTD";
		break;
	case 0x008061:
		cid = "LITTON SYSTEMS, INC.";
		break;
	case 0x0080AD:
		cid = "CNET TECHNOLOGY, INC.";
		break;
	case 0x008081:
		cid = "KENDALL SQUARE RESEARCH CORP.";
		break;
	case 0x008019:
		cid = "DAYNA COMMUNICATIONS, INC.";
		break;
	case 0x00808B:
		cid = "DACOLL LIMITED";
		break;
	case 0x008097:
		cid = "CENTRALP AUTOMATISMES";
		break;
	case 0x0080FC:
		cid = "AVATAR CORPORATION";
		break;
	case 0x008076:
		cid = "MCNC";
		break;
	case 0x008080:
		cid = "DATAMEDIA CORPORATION";
		break;
	case 0x0000E6:
		cid = "APTOR PRODUITS DE COMM INDUST";
		break;
	case 0x000084:
		cid = "SUPERNET";
		break;
	case 0x0000FF:
		cid = "CAMTEC ELECTRONICS LTD.";
		break;
	case 0x00007B:
		cid = "RESEARCH MACHINES";
		break;
	case 0x000056:
		cid = "DR. B. STRUCK";
		break;
	case 0x0000BB:
		cid = "TRI-DATA";
		break;
	case 0x080025:
		cid = "CONTROL DATA";
		break;
	case 0x080020:
		cid = "Oracle Corporation";
		break;
	case 0x027001:
		cid = "RACAL-DATACOM";
		break;
	case 0x080006:
		cid = "SIEMENS AG";
		break;
	case 0x08007E:
		cid = "AMALGAMATED WIRELESS(AUS) LTD";
		break;
	case 0x080075:
		cid = "DANSK DATA ELECTRONIK";
		break;
	case 0x080073:
		cid = "TECMAR INC.";
		break;
	case 0x080069:
		cid = "SILICON GRAPHICS INC.";
		break;
	case 0x080061:
		cid = "JAROGATE LTD.";
		break;
	case 0x08005D:
		cid = "GOULD INC.";
		break;
	case 0x08004A:
		cid = "BANYAN SYSTEMS INC.";
		break;
	case 0x08004C:
		cid = "HYDRA COMPUTER SYSTEMS INC.";
		break;
	case 0x080043:
		cid = "PIXEL COMPUTER INC.";
		break;
	case 0x08003A:
		cid = "ORCATECH INC.";
		break;
	case 0x080035:
		cid = "MICROFIVE CORPORATION";
		break;
	case 0x080036:
		cid = "INTERGRAPH CORPORATION";
		break;
	case 0x08002D:
		cid = "LAN-TEC INC.";
		break;
	case 0x000025:
		cid = "RAMTEK CORP.";
		break;
	case 0x00003A:
		cid = "CHYRON CORPORATION";
		break;
	case 0x000077:
		cid = "INTERPHASE CORPORATION";
		break;
	case 0x000096:
		cid = "MARCONI ELECTRONICS LTD.";
		break;
	case 0x000076:
		cid = "ABEKAS VIDEO SYSTEM";
		break;
	case 0x0000EA:
		cid = "UPNOD AB";
		break;
	case 0x000074:
		cid = "RICOH COMPANY LTD.";
		break;
	case 0x00006A:
		cid = "COMPUTER CONSOLES INC.";
		break;
	case 0x0000C4:
		cid = "WATERS DIV. OF MILLIPORE";
		break;
	case 0x000006:
		cid = "XEROX CORPORATION";
		break;
	case 0x0001C8:
		cid = "THOMAS CONRAD CORP. / CONRAD CORP.";
		break;
	case 0x00DD0E:
		cid = "UNGERMANN-BASS INC.";
		break;
	case 0x08008D:
		cid = "XYVISION INC.";
		break;
	case 0x080059:
		cid = "A/S MYCRON";
		break;
	case 0x021C7C:
		cid = "PERQ SYSTEMS CORPORATION";
		break;
	case 0x100000:
		cid = "Private";
		break;
	case 0x080004:
		cid = "CROMEMCO INCORPORATED";
		break;
	case 0x00DD07:
		cid = "UNGERMANN-BASS INC.";
		break;
	case 0x00003E:
		cid = "SIMPACT";
		break;
	case 0x04E0C4:
		cid = "TRIUMPH-ADLER AG";
		break;
	case 0x040AE0:
		cid = "XMIT AG COMPUTER NETWORKS";
		break;
	case 0x080016:
		cid = "BARRISTER INFO SYS CORP";
		break;
	case 0x080012:
		cid = "BELL ATLANTIC INTEGRATED SYST.";
		break;
	// case 0x0001C8: cid = "CONRAD CORP."; break;
	case 0x0000F9:
		cid = "QUOTRON SYSTEMS INC.";
		break;
	case 0x0000BF:
		cid = "SYMMETRIC COMPUTER SYSTEMS";
		break;
	case 0x000085:
		cid = "CANON INC.";
		break;
	case 0x000028:
		cid = "PRODIGY SYSTEMS CORPORATION";
		break;
	case 0x000012:
		cid = "INFORMATION TECHNOLOGY LIMITED";
		break;
	case 0x080085:
		cid = "ELXSI";
		break;
	case 0x00005B:
		cid = "ELTEC ELEKTRONIK AG";
		break;
	case 0x000054:
		cid = "Schneider Electric";
		break;
	case 0x0000A9:
		cid = "NETWORK SYSTEMS CORP.";
		break;
	case 0x000059:
		cid = "Hellige GMBH";
		break;
	case 0x000099:
		cid = "MTX, INC.";
		break;
	case 0x0000E9:
		cid = "ISICAD, INC.";
		break;
	case 0x08003F:
		cid = "FRED KOSCHARA ENTERPRISES";
		break;
	case 0x080002:
		cid = "BRIDGE COMMUNICATIONS INC.";
		break;
	case 0x08008B:
		cid = "PYRAMID TECHNOLOGY CORP.";
		break;
	case 0x000002:
		cid = "XEROX CORPORATION";
		break;
	case 0x84F6FA:
		cid = "Miovision Technologies Incorporated";
		break;
	case 0xCC3B3E:
		cid = "Lester Electrical";
		break;
	case 0xC05627:
		cid = "Belkin International Inc.";
		break;
	case 0x4065A3:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x00789E:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x44E9DD:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x247C4C:
		cid = "Herman Miller";
		break;
	case 0x180373:
		cid = "Dell Inc.";
		break;
	case 0xF8B156:
		cid = "Dell Inc.";
		break;
	case 0x1C4024:
		cid = "Dell Inc.";
		break;
	case 0xF8BC12:
		cid = "Dell Inc.";
		break;
	case 0x001B5B:
		cid = "2Wire Inc";
		break;
	case 0x002456:
		cid = "2Wire Inc";
		break;
	case 0x002351:
		cid = "2Wire Inc";
		break;
	case 0x00253C:
		cid = "2Wire Inc";
		break;
	case 0x0022A4:
		cid = "2Wire Inc";
		break;
	case 0xC0830A:
		cid = "2Wire Inc";
		break;
	case 0xD0431E:
		cid = "Dell Inc.";
		break;
	case 0x246E96:
		cid = "Dell Inc.";
		break;
	case 0x204747:
		cid = "Dell Inc.";
		break;
	case 0x4C7625:
		cid = "Dell Inc.";
		break;
	case 0xB8AC6F:
		cid = "Dell Inc.";
		break;
	case 0x001EC9:
		cid = "Dell Inc.";
		break;
	case 0xE09861:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0xF4F1E1:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x60BEB5:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x7845C4:
		cid = "Dell Inc.";
		break;
	case 0xB4E1C4:
		cid = "Microsoft Mobile Oy";
		break;
	case 0xD86C02:
		cid = "Huaqin Telecom Technology Co.,Ltd";
		break;
	case 0x0019D2:
		cid = "Intel Corporate";
		break;
	case 0x7C5CF8:
		cid = "Intel Corporate";
		break;
	case 0x001E67:
		cid = "Intel Corporate";
		break;
	case 0x001F3C:
		cid = "Intel Corporate";
		break;
	case 0x0022FA:
		cid = "Intel Corporate";
		break;
	case 0x001517:
		cid = "Intel Corporate";
		break;
	case 0x00166F:
		cid = "Intel Corporate";
		break;
	case 0xA44E31:
		cid = "Intel Corporate";
		break;
	case 0x6C8814:
		cid = "Intel Corporate";
		break;
	case 0xF81654:
		cid = "Intel Corporate";
		break;
	case 0x3413E8:
		cid = "Intel Corporate";
		break;
	case 0x34E6AD:
		cid = "Intel Corporate";
		break;
	case 0xFCF8AE:
		cid = "Intel Corporate";
		break;
	case 0x648099:
		cid = "Intel Corporate";
		break;
	case 0x002314:
		cid = "Intel Corporate";
		break;
	case 0x4025C2:
		cid = "Intel Corporate";
		break;
	case 0x8CA982:
		cid = "Intel Corporate";
		break;
	case 0xD07E35:
		cid = "Intel Corporate";
		break;
	case 0x685D43:
		cid = "Intel Corporate";
		break;
	case 0x90E2BA:
		cid = "Intel Corporate";
		break;
	case 0x0026C7:
		cid = "Intel Corporate";
		break;
	case 0x8086F2:
		cid = "Intel Corporate";
		break;
	case 0x78FF57:
		cid = "Intel Corporate";
		break;
	case 0x20934D:
		cid = "FUJIAN STAR-NET COMMUNICATION CO.,LTD";
		break;
	case 0x00AA00:
		cid = "Intel Corporation";
		break;
	case 0x6CF37F:
		cid = "Aruba Networks";
		break;
	case 0x605BB4:
		cid = "AzureWave Technology Inc.";
		break;
	case 0x9C0E4A:
		cid = "Shenzhen Vastking Electronic Co.,Ltd.";
		break;
	case 0xACE5F0:
		cid = "Doppler Labs";
		break;
	case 0x00F28B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x5414FD:
		cid = "Orbbec 3D Technology International";
		break;
	case 0x1C4BD6:
		cid = "AzureWave Technology Inc.";
		break;
	case 0x94DBC9:
		cid = "AzureWave Technology Inc.";
		break;
	case 0x40E230:
		cid = "AzureWave Technology Inc.";
		break;
	case 0x00006E:
		cid = "Artisoft Inc.";
		break;
	case 0xA0F459:
		cid = "FN-LINK TECHNOLOGY LIMITED";
		break;
	case 0x0C6AE6:
		cid = "Stanley Security Solutions";
		break;
	case 0xE874E6:
		cid = "ADB Broadband Italia";
		break;
	case 0x00247B:
		cid = "Actiontec Electronics, Inc";
		break;
	case 0x689C5E:
		cid = "AcSiP Technology Corp.";
		break;
	case 0x0012CF:
		cid = "Accton Technology Corp";
		break;
	case 0x0030D3:
		cid = "Agilent Technologies, Inc.";
		break;
	case 0x38229D:
		cid = "ADB Broadband Italia";
		break;
	case 0x002233:
		cid = "ADB Broadband Italia";
		break;
	case 0xD4D184:
		cid = "ADB Broadband Italia";
		break;
	case 0x34C3D2:
		cid = "FN-LINK TECHNOLOGY LIMITED";
		break;
	case 0x38E3C5:
		cid = "Taicang T&W Electronics";
		break;
	case 0xD0E44A:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x9433DD:
		cid = "Taco Inc";
		break;
	case 0x948815:
		cid = "Infinique Worldwide Inc";
		break;
	case 0x3010B3:
		cid = "Liteon Technology Corporation";
		break;
	case 0x001802:
		cid = "Alpha Networks Inc.";
		break;
	case 0xECCD6D:
		cid = "Allied Telesis, Inc.";
		break;
	case 0x00225F:
		cid = "Liteon Technology Corporation";
		break;
	case 0x983B16:
		cid = "AMPAK Technology, Inc.";
		break;
	case 0x001A80:
		cid = "Sony Corporation";
		break;
	case 0x0024BE:
		cid = "Sony Corporation";
		break;
	case 0x20689D:
		cid = "Liteon Technology Corporation";
		break;
	case 0x446D57:
		cid = "Liteon Technology Corporation";
		break;
	case 0x44EE02:
		cid = "MTI Ltd.";
		break;
	case 0x0026B6:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0xB4EEB4:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0xFCB4E6:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0xF05C19:
		cid = "Aruba Networks";
		break;
	case 0x70AAB2:
		cid = "BlackBerry RTS";
		break;
	case 0x0026FF:
		cid = "BlackBerry RTS";
		break;
	case 0x406F2A:
		cid = "BlackBerry RTS";
		break;
	case 0x002557:
		cid = "BlackBerry RTS";
		break;
	case 0x0024FE:
		cid = "AVM GmbH";
		break;
	case 0x745AAA:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x7C1CF1:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x00264D:
		cid = "Arcadyan Technology Corporation";
		break;
	case 0x74A528:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x30A220:
		cid = "ARG Telecom";
		break;
	case 0x783E53:
		cid = "BSkyB Ltd";
		break;
	case 0x4CF2BF:
		cid = "Cambridge Industries(Group) Co.,Ltd.";
		break;
	case 0x70D931:
		cid = "Cambridge Industries(Group) Co.,Ltd.";
		break;
	case 0x00E063:
		cid = "Cabletron Systems, Inc.";
		break;
	case 0xE01D3B:
		cid = "Cambridge Industries(Group) Co.,Ltd.";
		break;
	case 0xD476EA:
		cid = "zte corporation";
		break;
	case 0x0040FB:
		cid = "CASCADE COMMUNICATIONS";
		break;
	case 0xF05A09:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x503275:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x28CC01:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xB46293:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x04FE31:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x845181:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD831CF:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xF8D0BD:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xFCC734:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE4B021:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xB0EC71:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x3CBBFD:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x2CAE2B:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xC488E5:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x7C9122:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE8B4C8:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x18895B:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE0DB10:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE09971:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x6077E2:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x680571:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x6C2F2C:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x000136:
		cid = "CyberTAN Technology Inc.";
		break;
	case 0xF88E85:
		cid = "Comtrend Corporation";
		break;
	case 0x300D43:
		cid = "Microsoft Mobile Oy";
		break;
	case 0x6C2779:
		cid = "Microsoft Mobile Oy";
		break;
	case 0x607EDD:
		cid = "Microsoft Mobile Oy";
		break;
	case 0xF88096:
		cid = "Elsys Equipamentos Eletrônicos Ltda";
		break;
	case 0xE0B9E5:
		cid = "Technicolor";
		break;
	case 0x0CBF15:
		cid = "Genetec Inc.";
		break;
	case 0x000B5D:
		cid = "FUJITSU LIMITED";
		break;
	case 0xF4CAE5:
		cid = "FREEBOX SAS";
		break;
	case 0x002100:
		cid = "Gemtek Technology Co., Ltd.";
		break;
	case 0x002147:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x0022AA:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x0022D7:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x002331:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x00241E:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x78A2A0:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x001B7A:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x40F407:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0xB8AE6E:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x60A8FE:
		cid = "Nokia";
		break;
	case 0x546751:
		cid = "Compal Broadband Networks, Inc.";
		break;
	case 0x84BA3B:
		cid = "CANON INC.";
		break;
	case 0x0018C5:
		cid = "Nokia Danmark A/S";
		break;
	case 0x80501B:
		cid = "Nokia Corporation";
		break;
	case 0x347E39:
		cid = "Nokia Danmark A/S";
		break;
	case 0xA87E33:
		cid = "Nokia Danmark A/S";
		break;
	case 0x00247D:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001BAF:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001C35:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001CD4:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001979:
		cid = "Nokia Danmark A/S";
		break;
	case 0x9C1874:
		cid = "Nokia Danmark A/S";
		break;
	case 0x0021FC:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001F5D:
		cid = "Nokia Danmark A/S";
		break;
	case 0x0025CF:
		cid = "Nokia Danmark A/S";
		break;
	case 0x0025D0:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001FDE:
		cid = "Nokia Danmark A/S";
		break;
	case 0x907282:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x006CFD:
		cid = "Sichuan Changhong Electric Ltd.";
		break;
	case 0x1C234F:
		cid = "EDMI  Europe Ltd";
		break;
	case 0xA444D1:
		cid = " Wingtech Group (HongKong）Limited";
		break;
	case 0x005058:
		cid = "Sangoma Technologies";
		break;
	case 0x3482DE:
		cid = "Kiio Inc";
		break;
	case 0x0008F6:
		cid = "Sumitomo Electric Industries,Ltd";
		break;
	case 0x00005F:
		cid = "Sumitomo Electric Industries,Ltd";
		break;
	case 0xA0C589:
		cid = "Intel Corporate";
		break;
	case 0x74BFB7:
		cid = "Nusoft Corporation";
		break;
	case 0x50DA00:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x9C2A83:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE45D75:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x3CBEE1:
		cid = "NIKON CORPORATION";
		break;
	case 0x047E4A:
		cid = "moobox CO., Ltd.";
		break;
	case 0x2C09CB:
		cid = "COBS AB";
		break;
	case 0x60ACC8:
		cid = "KunTeng Inc.";
		break;
	case 0x0404EA:
		cid = "Valens Semiconductor Ltd.";
		break;
	case 0x800DD7:
		cid = "Latticework, Inc";
		break;
	case 0x402E28:
		cid = "MiXTelematics";
		break;
	case 0x18C501:
		cid = "SHENZHEN GONGJIN ELECTRONICS CO.,LT";
		break;
	case 0x546D52:
		cid = "TOPVIEW OPTRONICS CORP.";
		break;
	case 0xCCB3AB:
		cid = "shenzhen Biocare Bio-Medical Equipment Co.,Ltd.";
		break;
	case 0xE4B318:
		cid = "Intel Corporate";
		break;
	case 0x00C88B:
		cid = "Cisco Systems, Inc";
		break;
	case 0xA85EE4:
		cid = "12Sided Technology, LLC";
		break;
	case 0x000CC1:
		cid = "Eaton Corporation";
		break;
	case 0x0090F9:
		cid = "Imagine Communications";
		break;
	case 0x04C103:
		cid = "Clover Network, Inc.";
		break;
	case 0x1C553A:
		cid = "QianGua Corp.";
		break;
	case 0xE4A7A0:
		cid = "Intel Corporate";
		break;
	case 0xE4FAED:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x789682:
		cid = "zte corporation";
		break;
	case 0xF02745:
		cid = "F-Secure Corporation";
		break;
	case 0x54D0B4:
		cid = "Xiamen Four-Faith Communication Technology Co.,Ltd";
		break;
	case 0xD017C2:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x001625:
		cid = "Impinj, Inc.";
		break;
	case 0x60EE5C:
		cid = "SHENZHEN FAST TECHNOLOGIES CO.,LTD";
		break;
	case 0x58D67A:
		cid = "TCPlink";
		break;
	case 0x00A0DE:
		cid = "YAMAHA CORPORATION";
		break;
	case 0x081F71:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x2C2D48:
		cid = "bct electronic GesmbH";
		break;
	case 0xE4A471:
		cid = "Intel Corporate";
		break;
	case 0x00A0F4:
		cid = "GE";
		break;
	case 0x00CAE5:
		cid = "Cisco Systems, Inc";
		break;
	case 0x4883C7:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x7050AF:
		cid = "BSkyB Ltd";
		break;
	case 0xF4EF9E:
		cid = "SGSG SCIENCE & TECHNOLOGY CO. LTD";
		break;
	case 0xDC9C9F:
		cid = "Shenzhen YOUHUA Technology Co., Ltd";
		break;
	case 0x0CBF3F:
		cid = "Shenzhen Lencotion Technology Co.,Ltd";
		break;
	case 0x84FEDC:
		cid = "Borqs Beijing Ltd.";
		break;
	case 0xD8D723:
		cid = "IDS, Inc";
		break;
	case 0x703A0E:
		cid = "Aruba Networks";
		break;
	case 0x7054D2:
		cid = "PEGATRON CORPORATION";
		break;
	case 0x7C0507:
		cid = "PEGATRON CORPORATION";
		break;
	case 0xC07CD1:
		cid = "PEGATRON CORPORATION";
		break;
	case 0x94DBDA:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x384C4F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xE4A8B6:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x244C07:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xE840F2:
		cid = "PEGATRON CORPORATION";
		break;
	case 0xF0D1B8:
		cid = "LEDVANCE";
		break;
	case 0x60B387:
		cid = "Synergics Technologies GmbH";
		break;
	case 0x7085C2:
		cid = "ASRock Incorporation";
		break;
	case 0xC825E1:
		cid = "Lemobile Information Technology (Beijing) Co., Ltd";
		break;
	case 0x0022B1:
		cid = "Elbit Systems Ltd.";
		break;
	case 0x00065F:
		cid = "ECI Telecom Ltd.";
		break;
	case 0x001F45:
		cid = "Enterasys";
		break;
	case 0x0090FA:
		cid = "Emulex Corporation";
		break;
	case 0x50C971:
		cid = "GN Netcom A/S";
		break;
	case 0x001D82:
		cid = "GN Netcom A/S";
		break;
	case 0x001317:
		cid = "GN Netcom A/S";
		break;
	case 0x749781:
		cid = "zte corporation";
		break;
	case 0xB4B15A:
		cid = "Siemens AG Energy Management Division";
		break;
	case 0xA8D828:
		cid = "Ascensia Diabetes Care";
		break;
	case 0xFCBC9C:
		cid = "Vimar Spa";
		break;
	case 0x149ECF:
		cid = "Dell Inc.";
		break;
	case 0xAC620D:
		cid = "Jabil Circuit(Wuxi) Co.,Ltd";
		break;
	case 0x0008B9:
		cid = "Kaonmedia CO., LTD.";
		break;
	case 0xC83F26:
		cid = "Microsoft Corporation";
		break;
	case 0x00E0E6:
		cid = "INCAA Computers";
		break;
	case 0x5C5EAB:
		cid = "Juniper Networks";
		break;
	case 0x7819F7:
		cid = "Juniper Networks";
		break;
	case 0x2C2172:
		cid = "Juniper Networks";
		break;
	case 0x88E0F3:
		cid = "Juniper Networks";
		break;
	case 0x4C9614:
		cid = "Juniper Networks";
		break;
	case 0x3C8AB0:
		cid = "Juniper Networks";
		break;
	case 0xB0C69A:
		cid = "Juniper Networks";
		break;
	case 0x009069:
		cid = "Juniper Networks";
		break;
	case 0x204E71:
		cid = "Juniper Networks";
		break;
	case 0xF4B52F:
		cid = "Juniper Networks";
		break;
	case 0x88A25E:
		cid = "Juniper Networks";
		break;
	case 0x001BC0:
		cid = "Juniper Networks";
		break;
	case 0xF49EEF:
		cid = "Taicang T&W Electronics";
		break;
	case 0xF4911E:
		cid = "ZHUHAI EWPE INFORMATION TECHNOLOGY INC";
		break;
	case 0x94FE22:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xF823B2:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xDCD916:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x002552:
		cid = "VXi Corporation";
		break;
	case 0x006CBC:
		cid = "Cisco Systems, Inc";
		break;
	case 0xDC3752:
		cid = "GE";
		break;
	case 0xB4D5BD:
		cid = "Intel Corporate";
		break;
	case 0x7CB0C2:
		cid = "Intel Corporate";
		break;
	case 0x98AA3C:
		cid = "Will i-tech Co., Ltd.";
		break;
	case 0x449F7F:
		cid = "DataCore Software Corporation";
		break;
	case 0x0011FC:
		cid = "HARTING Electronics GmbH";
		break;
	case 0x5CDD70:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x24BF74:
		cid = "Private";
		break;
	case 0xB8E779:
		cid = "9Solutions Oy";
		break;
	case 0x240A11:
		cid = "TCT mobile ltd";
		break;
	case 0xC84544:
		cid = "Asia Pacific CIS (Wuxi) Co, Ltd";
		break;
	case 0xE8A7F2:
		cid = "sTraffic";
		break;
	case 0xD8209F:
		cid = "Cubro Acronet GesmbH";
		break;
	case 0xE47B3F:
		cid = "BEIJING CO-CLOUD TECHNOLOGY LTD.";
		break;
	case 0xA0415E:
		cid = "Opsens Solution Inc.";
		break;
	case 0x1C6E76:
		cid = "Quarion Technology Inc";
		break;
	case 0x000AAB:
		cid = "Toyota Technical Development Corporation";
		break;
	case 0x44D1FA:
		cid = "Shenzhen Yunlink Technology Co., Ltd";
		break;
	case 0x08C021:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x48435A:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x9CE374:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x6C0EE6:
		cid = "Chengdu Xiyida Electronic Technology Co,.Ltd";
		break;
	case 0x78FFCA:
		cid = "TECNO MOBILE LIMITED";
		break;
	case 0xF03EBF:
		cid = "GOGORO TAIWAN LIMITED";
		break;
	case 0x50AB3E:
		cid = "Qibixx AG";
		break;
	case 0xA8BB50:
		cid = "WiZ IoT Company Limited";
		break;
	case 0x005F86:
		cid = "Cisco Systems, Inc";
		break;
	case 0xE46251:
		cid = "HAO CHENG GROUP LIMITED";
		break;
	case 0x8850DD:
		cid = "Infiniband Trade Association";
		break;
	case 0xDC7834:
		cid = "LOGICOM SA";
		break;
	case 0x54F201:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xA06090:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x3876CA:
		cid = "Shenzhen Smart Intelligent Technology Co.Ltd";
		break;
	case 0xD0577B:
		cid = "Intel Corporate";
		break;
	case 0xB824F0:
		cid = "SOYO Technology Development Co., Ltd.";
		break;
	case 0xB456B9:
		cid = "Teraspek Technologies Co.,Ltd";
		break;
	case 0x68B35E:
		cid = "Shenzhen Neostra Technology Co.Ltd";
		break;
	case 0x24E271:
		cid = "Qingdao Hisense Communications Co.,Ltd.";
		break;
	case 0xBC6010:
		cid = "Qingdao Hisense Communications Co.,Ltd.";
		break;
	case 0xAC3743:
		cid = "HTC Corporation";
		break;
	case 0xD8B02E:
		cid = "Guangzhou Zonerich Business Machine Co., LTD.";
		break;
	case 0x849D64:
		cid = "SMC Corporation";
		break;
	case 0xA020A6:
		cid = "Espressif Inc.";
		break;
	case 0xC4BB4C:
		cid = "Zebra Information Tech Co. Ltd";
		break;
	case 0x001972:
		cid = "Plexus (Xiamen) Co.,ltd.";
		break;
	case 0x6488FF:
		cid = "Sichuan Changhong Electric Ltd.";
		break;
	case 0x005979:
		cid = "Networked Energy Services";
		break;
	case 0x000997:
		cid = "Nortel Networks";
		break;
	case 0x000E62:
		cid = "Nortel Networks";
		break;
	case 0x000EC0:
		cid = "Nortel Networks";
		break;
	case 0x000FCD:
		cid = "Nortel Networks";
		break;
	case 0x0004DC:
		cid = "Nortel Networks";
		break;
	case 0x02E6D3:
		cid = "NIXDORF COMPUTER CORP.";
		break;
	case 0x0016B9:
		cid = "ProCurve Networking by HP";
		break;
	case 0x0024A8:
		cid = "ProCurve Networking by HP";
		break;
	case 0x141F78:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x006F64:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xDC6672:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x0025C3:
		cid = "21168";
		break;
	case 0x001365:
		cid = "Nortel Networks";
		break;
	case 0x001ECA:
		cid = "Nortel Networks";
		break;
	case 0x001D42:
		cid = "Nortel Networks";
		break;
	case 0x001CEB:
		cid = "Nortel Networks";
		break;
	case 0x002363:
		cid = "Zhuhai Raysharp Technology Co.,Ltd";
		break;
	case 0xD03742:
		cid = "Yulong Computer Telecommunication Scientific (Shenzhen) Co.,Ltd";
		break;
	case 0x001CFD:
		cid = "Universal Electronics, Inc.";
		break;
	case 0x080051:
		cid = "ExperData";
		break;
	case 0x0080C7:
		cid = "XIRCOM";
		break;
	case 0x049FCA:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xC81FBE:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x203DB2:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x48D539:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x10E68F:
		cid = "KWANGSUNG ELECTRONICS KOREA CO.,LTD.";
		break;
	case 0x1899F5:
		cid = "Sichuan Changhong Electric Ltd.";
		break;
	case 0xB80018:
		cid = "Htel";
		break;
	case 0x0081C4:
		cid = "Cisco Systems, Inc";
		break;
	case 0xE8FD90:
		cid = "Turbostor";
		break;
	case 0x0017EA:
		cid = "Texas Instruments";
		break;
	case 0x0017E3:
		cid = "Texas Instruments";
		break;
	case 0x001834:
		cid = "Texas Instruments";
		break;
	case 0x00182F:
		cid = "Texas Instruments";
		break;
	case 0x78DEE4:
		cid = "Texas Instruments";
		break;
	case 0xB8FFFE:
		cid = "Texas Instruments";
		break;
	case 0xE0D7BA:
		cid = "Texas Instruments";
		break;
	case 0x405FC2:
		cid = "Texas Instruments";
		break;
	case 0x8030DC:
		cid = "Texas Instruments";
		break;
	case 0xCC78AB:
		cid = "Texas Instruments";
		break;
	case 0xA4D578:
		cid = "Texas Instruments";
		break;
	case 0x544A16:
		cid = "Texas Instruments";
		break;
	case 0xD8DDFD:
		cid = "Texas Instruments";
		break;
	case 0x20CD39:
		cid = "Texas Instruments";
		break;
	case 0x987BF3:
		cid = "Texas Instruments";
		break;
	case 0x247189:
		cid = "Texas Instruments";
		break;
	case 0xEC1127:
		cid = "Texas Instruments";
		break;
	case 0xF0C77F:
		cid = "Texas Instruments";
		break;
	case 0xF45EAB:
		cid = "Texas Instruments";
		break;
	case 0x001783:
		cid = "Texas Instruments";
		break;
	case 0xA81B6A:
		cid = "Texas Instruments";
		break;
	case 0x9884E3:
		cid = "Texas Instruments";
		break;
	case 0x38D269:
		cid = "Texas Instruments";
		break;
	case 0xC8FD19:
		cid = "Texas Instruments";
		break;
	case 0x508CB1:
		cid = "Texas Instruments";
		break;
	case 0x04BBF9:
		cid = "Pavilion Data Systems Inc";
		break;
	case 0xB0F893:
		cid = "Shanghai MXCHIP Information Technology Co., Ltd.";
		break;
	case 0x00C017:
		cid = "NetScout Systems, Inc.";
		break;
	case 0xD49B5C:
		cid = "Chongqing Miedu Technology Co., Ltd.";
		break;
	case 0xC0D391:
		cid = "IEEE Registration Authority";
		break;
	case 0xC411E0:
		cid = "Bull Group Co., Ltd";
		break;
	case 0x90842B:
		cid = "LEGO System A/S";
		break;
	case 0x8C6102:
		cid = "Beijing Baofengmojing Technologies Co., Ltd";
		break;
	case 0xC0F636:
		cid = "Hangzhou Kuaiyue Technologies, Ltd.";
		break;
	case 0xF0038C:
		cid = "AzureWave Technology Inc.";
		break;
	case 0xB45D50:
		cid = "Aruba Networks";
		break;
	case 0x001E7D:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x3C6200:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x0024E9:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x002399:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE4E0C5:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE8039A:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xC4731E:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x78D6F0:
		cid = "SAMSUNG ELECTRO MECHANICS CO., LTD.";
		break;
	case 0xB407F9:
		cid = "SAMSUNG ELECTRO MECHANICS CO., LTD.";
		break;
	case 0x40B89A:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xA8A795:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x8096CA:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x9CD21E:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xD87988:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x00242B:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x00242C:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x945330:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xEC0EC4:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x7429AF:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x346895:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xA86BAD:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xD80F99:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x78DD08:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x00197E:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xA0AB1B:
		cid = "D-Link International";
		break;
	case 0x5C4979:
		cid = "AVM Audiovisuelles Marketing und Computersysteme GmbH";
		break;
	case 0x086A0A:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0x101250:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0x8C7712:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x2013E0:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x0007AB:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x0021D2:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xBC4760:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD0176A:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xF0D9B2:
		cid = "EXO S.A.";
		break;
	case 0x2CBABA:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x24920E:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x40D3AE:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x802AA8:
		cid = "Ubiquiti Networks Inc.";
		break;
	case 0x00156D:
		cid = "Ubiquiti Networks Inc.";
		break;
	case 0x787D48:
		cid = "ITEL MOBILE LIMITED";
		break;
	case 0xD46E0E:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x049790:
		cid = "Lartech telecom LLC";
		break;
	case 0x8CEA1B:
		cid = "Edgecore Networks Corporation";
		break;
	case 0x001650:
		cid = " Kratos EPD   ";
		break;
	case 0x583112:
		cid = "DRUST";
		break;
	case 0x58696C:
		cid = "Ruijie Networks Co.,LTD";
		break;
	case 0xA0B8F8:
		cid = "Amgen U.S.A. Inc.";
		break;
	case 0x14A51A:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xC816A5:
		cid = "Masimo Corporation";
		break;
	case 0x9002A9:
		cid = "Zhejiang Dahua Technology Co., Ltd.";
		break;
	case 0xACD657:
		cid = "Shaanxi GuoLian Digital TV Technology Co.,Ltd.";
		break;
	case 0x244E7B:
		cid = "IEEE Registration Authority";
		break;
	case 0xE80945:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0x98FD74:
		cid = "ACT.CO.LTD";
		break;
	case 0x60C798:
		cid = "Verifone";
		break;
	case 0xA46011:
		cid = "Verifone";
		break;
	case 0x2C2131:
		cid = "Juniper Networks";
		break;
	case 0x0CC47A:
		cid = "Super Micro Computer, Inc.";
		break;
	case 0x60427F:
		cid = "SHENZHEN CHUANGWEI-RGB ELECTRONICS CO.,LTD";
		break;
	case 0xF8461C:
		cid = "Sony Interactive Entertainment Inc.";
		break;
	case 0x500B91:
		cid = "IEEE Registration Authority";
		break;
	case 0x40B93C:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0x4C7487:
		cid = "Leader Phone Communication Technology Co., Ltd.";
		break;
	case 0xF48C50:
		cid = "Intel Corporate";
		break;
	case 0xE8E875:
		cid = "iS5 Communications Inc.";
		break;
	case 0x000422:
		cid = "Studio Technologies, Inc";
		break;
	case 0xACC662:
		cid = "MitraStar Technology Corp.";
		break;
	case 0xF01DBC:
		cid = "Microsoft Corporation";
		break;
	case 0xACDCE5:
		cid = "Procter & Gamble Company";
		break;
	case 0x98D293:
		cid = "Google, Inc.";
		break;
	case 0x5CCCA0:
		cid = "Gridwiz Inc.";
		break;
	case 0x104FA8:
		cid = "Sony Corporation";
		break;
	case 0x6C25B9:
		cid = "BBK EDUCATIONAL ELECTRONICS CORP.,LTD.";
		break;
	case 0x486B2C:
		cid = "BBK EDUCATIONAL ELECTRONICS CORP.,LTD.";
		break;
	case 0x00001F:
		cid = "Telco Systems, Inc.";
		break;
	case 0xBC307E:
		cid = "Wistron Neweb Corporation";
		break;
	case 0x00C0AB:
		cid = "Telco Systems, Inc.";
		break;
	case 0x0010CA:
		cid = "Telco Systems, Inc.";
		break;
	case 0x0C2576:
		cid = "LONGCHEER TELECOMMUNICATION LIMITED";
		break;
	case 0x0007A6:
		cid = "Leviton Manufacturing Co., Inc.";
		break;
	case 0x208756:
		cid = "SIEMENS AG";
		break;
	case 0xB08900:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xA03E6B:
		cid = "IEEE Registration Authority";
		break;
	case 0xDC4427:
		cid = "IEEE Registration Authority";
		break;
	case 0x0055DA:
		cid = "IEEE Registration Authority";
		break;
	case 0x90C682:
		cid = "IEEE Registration Authority";
		break;
	case 0x986D35:
		cid = "IEEE Registration Authority";
		break;
	case 0xE0B6F5:
		cid = "IEEE Registration Authority";
		break;
	case 0xC47C8D:
		cid = "IEEE Registration Authority";
		break;
	case 0x001BC5:
		cid = "IEEE Registration Authority";
		break;
	case 0x640DCE:
		cid = "SHENZHEN MERCURY COMMUNICATION TECHNOLOGIES CO.,LTD.";
		break;
	case 0x100723:
		cid = "IEEE Registration Authority";
		break;
	case 0x6063F9:
		cid = "Ciholas, Inc.";
		break;
	case 0xF0421C:
		cid = "Intel Corporate";
		break;
	case 0xC0E42D:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x18D6C7:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xB8BB23:
		cid = "Guangdong Nufront CSC Co., Ltd";
		break;
	case 0xEC26FB:
		cid = "TECC CO.,LTD.";
		break;
	case 0x0090CC:
		cid = "PLANEX COMMUNICATIONS INC.";
		break;
	case 0xE09DB8:
		cid = "PLANEX COMMUNICATIONS INC.";
		break;
	case 0x903AE6:
		cid = "PARROT SA";
		break;
	case 0x00E00F:
		cid = "Shanghai Baud Data Communication Co.,Ltd.";
		break;
	case 0x3C404F:
		cid = "GUANGDONG PISEN ELECTRONICS CO.,LTD";
		break;
	case 0xF0ACD7:
		cid = "IEEE Registration Authority";
		break;
	case 0x00233E:
		cid = "Alcatel-Lucent IPD";
		break;
	case 0x6CBEE9:
		cid = "Alcatel-Lucent IPD";
		break;
	case 0x0080F7:
		cid = "Zenith Electronics Corporation";
		break;
	case 0x00C095:
		cid = "ZNYX Networks, Inc.";
		break;
	case 0x60EB69:
		cid = "QUANTA COMPUTER INC.";
		break;
	case 0xC80AA9:
		cid = "QUANTA COMPUTER INC.";
		break;
	case 0x00238B:
		cid = "QUANTA COMPUTER INC.";
		break;
	case 0x0007BA:
		cid = "UTStarcom Inc";
		break;
	case 0x4439C4:
		cid = "Universal Global Scientific Industrial Co., Ltd.";
		break;
	case 0x70F395:
		cid = "Universal Global Scientific Industrial Co., Ltd.";
		break;
	case 0x001E37:
		cid = "Universal Global Scientific Industrial Co., Ltd.";
		break;
	case 0x002713:
		cid = "Universal Global Scientific Industrial Co., Ltd.";
		break;
	case 0x002186:
		cid = "Universal Global Scientific Industrial Co., Ltd.";
		break;
	case 0x8CFDF0:
		cid = "Qualcomm Inc.";
		break;
	case 0x000031:
		cid = "QPSX COMMUNICATIONS, LTD.";
		break;
	case 0x000E7B:
		cid = "Toshiba";
		break;
	case 0xB86B23:
		cid = "Toshiba";
		break;
	case 0x000C29:
		cid = "VMware, Inc.";
		break;
	case 0x005056:
		cid = "VMware, Inc.";
		break;
	case 0x001C4D:
		cid = "Aplix IP Holdings Corporation";
		break;
	case 0xD0052A:
		cid = "Arcadyan Corporation";
		break;
	case 0xF485C6:
		cid = "FDT Technologies";
		break;
	case 0xBC60A7:
		cid = "Sony Interactive Entertainment Inc.";
		break;
	case 0x08D833:
		cid = "Shenzhen RF Technology Co., Ltd";
		break;
	case 0x94D469:
		cid = "Cisco Systems, Inc";
		break;
	case 0x385610:
		cid = "CANDY HOUSE, Inc.";
		break;
	case 0x685388:
		cid = "P&S Technology";
		break;
	case 0x54A619:
		cid = "Alcatel-Lucent Shanghai Bell Co., Ltd";
		break;
	case 0x1880F5:
		cid = "Alcatel-Lucent Shanghai Bell Co., Ltd";
		break;
	case 0x24DBED:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xAC3613:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x1449E0:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0xC0BDD1:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0xE8508B:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0xF025B7:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0xC8BA94:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0xEC1F72:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0x9852B1:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x1489FD:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xCCFE3C:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x789ED0:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE440E2:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x1CAF05:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE492FB:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x247F20:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x0073E0:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xBC4486:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x380B40:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x8C0D76:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x005A13:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x002490:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x0023D7:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xFCA13E:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xA00798:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x945103:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xC819F7:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x2C4401:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x84E0F4:
		cid = "IEEE Registration Authority";
		break;
	case 0x08C6B3:
		cid = "QTECH LLC";
		break;
	case 0x64DAA0:
		cid = "Robert Bosch Smart Home GmbH";
		break;
	case 0x14B837:
		cid = "Shenzhen YOUHUA Technology Co., Ltd";
		break;
	case 0x8056F2:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x70188B:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x3C77E6:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x0C84DC:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x844BF5:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xE006E6:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x60F494:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xA41731:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xC0143D:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x642737:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x60D819:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x6474F6:
		cid = "Shooter Detection Systems";
		break;
	case 0xCC7314:
		cid = "HONG KONG WHEATEK TECHNOLOGY LIMITED";
		break;
	case 0xC0CB38:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x98E7F4:
		cid = "Hewlett Packard";
		break;
	case 0xD42C44:
		cid = "Cisco Systems, Inc";
		break;
	case 0xD842E2:
		cid = "Canary Connect, Inc.";
		break;
	case 0x143365:
		cid = "TEM Mobile Limited";
		break;
	case 0xC0F945:
		cid = "Toshiba Toko Meter Systems Co., LTD.";
		break;
	case 0xACAB2E:
		cid = "Beijing LasNubes Technology Co., Ltd.";
		break;
	case 0x10E878:
		cid = "Nokia";
		break;
	case 0x48F7F1:
		cid = "Nokia";
		break;
	case 0x4CC94F:
		cid = "Nokia";
		break;
	case 0x1CEA1B:
		cid = "Nokia";
		break;
	case 0xB4F81E:
		cid = "Kinova";
		break;
	case 0x28CA09:
		cid = "ThyssenKrupp Elevators (Shanghai) Co.,Ltd";
		break;
	case 0xE0B94D:
		cid = "SHENZHEN BILIAN ELECTRONIC CO.，LTD";
		break;
	case 0xD8380D:
		cid = "SHENZHEN IP-COM Network Co.,Ltd";
		break;
	case 0xA4C64F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xC83DD4:
		cid = "CyberTAN Technology Inc.";
		break;
	case 0x487B6B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x9C62AB:
		cid = "Sumavision Technologies Co.,Ltd";
		break;
	case 0x487A55:
		cid = "ALE International";
		break;
	case 0x000435:
		cid = "InfiNet LLC";
		break;
	case 0xBC39D9:
		cid = "Z-TEC";
		break;
	case 0xB04BBF:
		cid = "PT HAN SUNG ELECTORONICS INDONESIA";
		break;
	case 0x0060D6:
		cid = "NovAtel Inc.";
		break;
	case 0x78B84B:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO.,LTD";
		break;
	case 0x40F420:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO.,LTD";
		break;
	case 0x9C6121:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO.,LTD";
		break;
	case 0x8C8ABB:
		cid = "Beijing Orient View Technology Co., Ltd.";
		break;
	case 0x88366C:
		cid = "EFM Networks";
		break;
	case 0xF074E4:
		cid = "Thundercomm Technology Co., Ltd";
		break;
	case 0xA0722C:
		cid = "HUMAX Co., Ltd.";
		break;
	case 0xFCECDA:
		cid = "Ubiquiti Networks Inc.";
		break;
	case 0xE07C13:
		cid = "zte corporation";
		break;
	case 0x58E16C:
		cid = "Ying Hua Information Technology (Shanghai)Co., LTD";
		break;
	case 0x24C1BD:
		cid = "CRRC DALIAN R&D CO.,LTD.";
		break;
	case 0xA81E84:
		cid = "QUANTA COMPUTER INC.";
		break;
	case 0xC82158:
		cid = "Intel Corporate";
		break;
	case 0x2420C7:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x703D15:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x4018B1:
		cid = "Aerohive Networks Inc.";
		break;
	case 0x001977:
		cid = "Aerohive Networks Inc.";
		break;
	case 0xC8665D:
		cid = "Aerohive Networks Inc.";
		break;
	case 0x4865EE:
		cid = "IEEE Registration Authority";
		break;
	case 0x3CEF8C:
		cid = "Zhejiang Dahua Technology Co., Ltd.";
		break;
	case 0xA0CC2B:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x00234A:
		cid = "Private";
		break;
	case 0x88C626:
		cid = "Logitech, Inc";
		break;
	case 0x28E31F:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x0C1DAF:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x14F65A:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x742344:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0xF0B429:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x94E979:
		cid = "Liteon Technology Corporation";
		break;
	case 0xAC1F6B:
		cid = "Super Micro Computer, Inc.";
		break;
	case 0x80D4A5:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x38BC01:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x04B0E7:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x446A2E:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x0026AB:
		cid = "Seiko Epson Corporation";
		break;
	case 0x64EB8C:
		cid = "Seiko Epson Corporation";
		break;
	case 0xA06FAA:
		cid = "LG Innotek";
		break;
	case 0x0015FC:
		cid = "Littelfuse Startco";
		break;
	case 0x504B5B:
		cid = "CONTROLtronic GmbH";
		break;
	case 0xA0E0AF:
		cid = "Cisco Systems, Inc";
		break;
	case 0x603E7B:
		cid = "Gafachi, Inc.";
		break;
	case 0x98F199:
		cid = "NEC Platforms, Ltd.";
		break;
	case 0x78FC14:
		cid = "Family Zone Cyber Safety Ltd";
		break;
	case 0x1062EB:
		cid = "D-Link International";
		break;
	case 0xE0A700:
		cid = "Verkada Inc";
		break;
	case 0x901711:
		cid = "Hagenuk Marinekommunikation GmbH";
		break;
	case 0xD825B0:
		cid = "Rockeetech Systems Co.,Ltd.";
		break;
	case 0x74614B:
		cid = "Chongqing Huijiatong Information Technology Co., Ltd.";
		break;
	case 0xF46E24:
		cid = "NEC Personal Computers, Ltd.";
		break;
	case 0x888279:
		cid = "Shenzhen RB-LINK Intelligent Technology Co.Ltd";
		break;
	case 0x78321B:
		cid = "D-Link International";
		break;
	case 0xEC51BC:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0xF079E8:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0xD8A534:
		cid = "Spectronix Corporation";
		break;
	case 0x583879:
		cid = "RICOH COMPANY, LTD.";
		break;
	case 0x94282E:
		cid = "New H3C Technologies Co., Ltd";
		break;
	case 0xD843ED:
		cid = "Suzuken";
		break;
	case 0x887598:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD0B128:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xFCEEE6:
		cid = "FORMIKE ELECTRONIC CO., LTD";
		break;
	case 0x2C431A:
		cid = "Shenzhen YOUHUA Technology Co., Ltd";
		break;
	case 0xA8D3C8:
		cid = "Topcon Electronics GmbH & Co. KG";
		break;
	case 0x389F5A:
		cid = "C-Kur TV Inc.";
		break;
	case 0x24B209:
		cid = "Avaya Inc";
		break;
	case 0x24E124:
		cid = "Xiamen Ursaconn Technology Co. , Ltd.";
		break;
	case 0xDC68EB:
		cid = "Nintendo Co.,Ltd";
		break;
	case 0x9441C1:
		cid = "Mini-Cam Limited";
		break;
	case 0xE8D819:
		cid = "AzureWave Technology Inc.";
		break;
	case 0xAC1DDF:
		cid = "IEEE Registration Authority";
		break;
	case 0x0008FA:
		cid = "KEB Automation KG";
		break;
	case 0x18396E:
		cid = "SUNSEA TELECOMMUNICATIONS CO.,LTD.";
		break;
	case 0xE8DF70:
		cid = "AVM Audiovisuelles Marketing und Computersysteme GmbH";
		break;
	case 0x7CDD76:
		cid = "Suzhou Hanming Technologies Co., Ltd.";
		break;
	case 0x246880:
		cid = "Braveridge.co.,ltd.";
		break;
	case 0xD00401:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x589043:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x28CF08:
		cid = "ESSYS";
		break;
	case 0x707DB9:
		cid = "Cisco Systems, Inc";
		break;
	case 0x346FED:
		cid = "Enovation Controls";
		break;
	case 0x0000B4:
		cid = "Edimax Technology Co. Ltd.";
		break;
	case 0x08BEAC:
		cid = "Edimax Technology Co. Ltd.";
		break;
	case 0xF06D78:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x7844FD:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x503EAA:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xAC84C6:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x34D0B8:
		cid = "IEEE Registration Authority";
		break;
	case 0xB0C19E:
		cid = "zte corporation";
		break;
	case 0x0C3747:
		cid = "zte corporation";
		break;
	case 0x000097:
		cid = "Dell EMC";
		break;
	case 0xECC06A:
		cid = "PowerChord Group Limited";
		break;
	case 0x38D7CA:
		cid = "7HUGS LABS";
		break;
	case 0x6C05D5:
		cid = "Ethertronics Inc";
		break;
	case 0x001DF4:
		cid = "Magellan Technology Pty Limited";
		break;
	case 0xC02250:
		cid = "Private";
		break;
	case 0x0094A1:
		cid = "F5 Networks, Inc.";
		break;
	case 0x1890D8:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x88835D:
		cid = "FN-LINK TECHNOLOGY LIMITED";
		break;
	case 0x10683F:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x74A722:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x58A2B5:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x64899A:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x88074B:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x64BC0C:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0xA039F7:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x041B6D:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x001F6B:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0xD007CA:
		cid = "Juniper Networks";
		break;
	case 0xF86CE1:
		cid = "Taicang T&W Electronics";
		break;
	case 0x1C7328:
		cid = "Connected Home";
		break;
	case 0x40A93F:
		cid = "Private";
		break;
	case 0x5C7776:
		cid = "TCT mobile ltd";
		break;
	case 0xEC1D8B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x38F73D:
		cid = "Amazon Technologies Inc.";
		break;
	case 0x30B4B8:
		cid = "LG Electronics";
		break;
	case 0x2CFDAB:
		cid = "Motorola (Wuhan) Mobility Technologies Communication Co., Ltd.";
		break;
	case 0xF41E5E:
		cid = "RtBrick Inc.";
		break;
	case 0x1806FF:
		cid = "Acer Computer(Shanghai) Limited.";
		break;
	case 0xB8ECA3:
		cid = "Zyxel Communications Corporation";
		break;
	case 0xEC43F6:
		cid = "Zyxel Communications Corporation";
		break;
	case 0x588BF3:
		cid = "Zyxel Communications Corporation";
		break;
	case 0xFCF528:
		cid = "Zyxel Communications Corporation";
		break;
	case 0x0019CB:
		cid = "Zyxel Communications Corporation";
		break;
	case 0x603197:
		cid = "Zyxel Communications Corporation";
		break;
	case 0x34FA9F:
		cid = "Ruckus Wireless";
		break;
	case 0x506F98:
		cid = "Sehaj Synergy Technologies Private Limited";
		break;
	case 0x04F128:
		cid = "HMD Global Oy";
		break;
	case 0xF065C2:
		cid = "Yanfeng Visteon Electronics Technology (Shanghai) Co.,Ltd.";
		break;
	case 0x70B7E2:
		cid = "Jiangsu Miter Technology Co.,Ltd.";
		break;
	case 0x503CEA:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x0004CF:
		cid = "Seagate Technology";
		break;
	case 0x0014C3:
		cid = "Seagate Technology";
		break;
	case 0x002037:
		cid = "Seagate Technology";
		break;
	case 0x0050CC:
		cid = "Seagate Cloud Systems Inc";
		break;
	case 0x1C27DD:
		cid = "Datang Gohighsec(zhejiang)Information Technology Co.,Ltd.";
		break;
	case 0x007263:
		cid = "Netcore Technology Inc.";
		break;
	case 0x48555C:
		cid = "Wu Qi Technologies,Inc.";
		break;
	case 0x70EEA3:
		cid = "Eoptolink Technology Inc. Ltd,";
		break;
	case 0x5C5819:
		cid = "Jingsheng Technology Co., Ltd.";
		break;
	case 0x747D24:
		cid = "Phicomm (Shanghai) Co., Ltd.";
		break;
	case 0x5C81A7:
		cid = "Network Devices Pty Ltd";
		break;
	case 0x808DB7:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0x10CEA9:
		cid = "Texas Instruments";
		break;
	case 0xF8B568:
		cid = "IEEE Registration Authority";
		break;
	case 0x14444A:
		cid = "Apollo Seiko Ltd.";
		break;
	case 0x5C0C0E:
		cid = "Guizhou Huaxintong Semiconductor Technology Co Ltd";
		break;
	case 0x2CFDA1:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x3807D4:
		cid = "Zeppelin Systems GmbH";
		break;
	case 0x64209F:
		cid = "Tilgin AB";
		break;
	case 0x04E0B0:
		cid = "Shenzhen YOUHUA Technology Co., Ltd";
		break;
	case 0x0C9838:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x000496:
		cid = "Extreme Networks, Inc.";
		break;
	case 0xB85001:
		cid = "Extreme Networks, Inc.";
		break;
	case 0x7C7630:
		cid = "Shenzhen YOUHUA Technology Co., Ltd";
		break;
	case 0x9822EF:
		cid = "Liteon Technology Corporation";
		break;
	case 0x580454:
		cid = "ICOMM HK LIMITED";
		break;
	case 0xA0BDCD:
		cid = "BSkyB Ltd";
		break;
	case 0x803A59:
		cid = "AT&T";
		break;
	case 0x606D3C:
		cid = "Luxshare Precision Industry Company Limited";
		break;
	case 0xCC4D38:
		cid = "Carnegie Technologies";
		break;
	case 0x54FCF0:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x08AED6:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xB0672F:
		cid = "Bowers & Wilkins";
		break;
	case 0xA816D0:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x88BD45:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x74C9A3:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0xA8E705:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0xCC500A:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x60B617:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x18A3E8:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x741E93:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x20896F:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0xA013CB:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x3CFB5C:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x28EDE0:
		cid = "AMPAK Technology, Inc.";
		break;
	case 0x040973:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0x70F220:
		cid = "Actiontec Electronics, Inc";
		break;
	case 0x4CC206:
		cid = "Somfy";
		break;
	case 0x50DCE7:
		cid = "Amazon Technologies Inc.";
		break;
	case 0x04C9D9:
		cid = "Dish Technologies Corp";
		break;
	case 0x0024AF:
		cid = "Dish Technologies Corp";
		break;
	case 0x285767:
		cid = "Dish Technologies Corp";
		break;
	case 0x7055F8:
		cid = "Cerebras Systems Inc";
		break;
	case 0x9C431E:
		cid = "IEEE Registration Authority";
		break;
	case 0x6C54CD:
		cid = "LAMPEX ELECTRONICS LIMITED";
		break;
	case 0x80C548:
		cid = "Shenzhen Zowee Technology Co.,Ltd";
		break;
	case 0x883D24:
		cid = "Google, Inc.";
		break;
	case 0x90848B:
		cid = "HDR10+ Technologies, LLC";
		break;
	case 0x0C2369:
		cid = "Honeywell SPS";
		break;
	case 0xE8DEFB:
		cid = "MESOTIC SAS";
		break;
	case 0x8C1645:
		cid = "LCFC(HeFei) Electronics Technology co., ltd";
		break;
	case 0xB4E9A3:
		cid = "port GmbH";
		break;
	case 0x6CB6CA:
		cid = "DIVUS GmbH";
		break;
	case 0xB8DE5E:
		cid = "LONGCHEER TELECOMMUNICATION LIMITED";
		break;
	case 0xDCDD24:
		cid = "Energica Motor Company SpA";
		break;
	case 0x641CB0:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x946372:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x449EF9:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x8CF957:
		cid = "RuiXingHengFang Network (Shenzhen) Co.,Ltd";
		break;
	case 0x001BD8:
		cid = "FLIR Systems Inc";
		break;
	case 0x20365B:
		cid = "Megafone Limited";
		break;
	case 0xE8DE00:
		cid = "ChongQing GuanFang Technology Co.,LTD";
		break;
	case 0x3CDCBC:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xF47190:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x4C776D:
		cid = "Cisco Systems, Inc";
		break;
	case 0xFCA6CD:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x64DB8B:
		cid = "Hangzhou Hikvision Digital Technology Co.,Ltd.";
		break;
	case 0x78257A:
		cid = "LEO Innovation Lab";
		break;
	case 0xA4DA22:
		cid = "IEEE Registration Authority";
		break;
	case 0x000397:
		cid = "FireBrick Limited";
		break;
	case 0xA8610A:
		cid = "ARDUINO AG";
		break;
	case 0x6097DD:
		cid = "MicroSys Electronics GmbH";
		break;
	case 0x047970:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xC49F4C:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xA057E3:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xE0E62E:
		cid = "TCT mobile ltd";
		break;
	case 0x00A085:
		cid = "Private";
		break;
	case 0x94B86D:
		cid = "Intel Corporate";
		break;
	case 0x587A6A:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0xE4C483:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x30FD38:
		cid = "Google, Inc.";
		break;
	case 0x18502A:
		cid = "SOARNEX";
		break;
	case 0x304511:
		cid = "Texas Instruments";
		break;
	case 0x3403DE:
		cid = "Texas Instruments";
		break;
	case 0xF4E11E:
		cid = "Texas Instruments";
		break;
	case 0x10E7C6:
		cid = "Hewlett Packard";
		break;
	case 0x20F543:
		cid = "Hui Zhou Gaoshengda Technology Co.,LTD";
		break;
	case 0x1C1EE3:
		cid = "Hui Zhou Gaoshengda Technology Co.,LTD";
		break;
	case 0x0C9160:
		cid = "Hui Zhou Gaoshengda Technology Co.,LTD";
		break;
	case 0x0C62A6:
		cid = "Hui Zhou Gaoshengda Technology Co.,LTD";
		break;
	case 0x7C49EB:
		cid = "XIAOMI Electronics,CO.,LTD";
		break;
	case 0xC43306:
		cid = "China Mobile Group Device Co.,Ltd.";
		break;
	case 0x68FEDA:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x0C6ABC:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x0001B9:
		cid = "SKF (U.K.) Limited";
		break;
	case 0x64C3D6:
		cid = "Juniper Networks";
		break;
	case 0xC0D9F7:
		cid = "ShanDong Domor Intelligent S&T CO.,Ltd";
		break;
	case 0x94FB29:
		cid = "Zebra Technologies Inc.";
		break;
	case 0x64DBA0:
		cid = "Select Comfort";
		break;
	case 0x5800E3:
		cid = "Liteon Technology Corporation";
		break;
	case 0x64777D:
		cid = "Hitron Technologies. Inc";
		break;
	case 0x0495E6:
		cid = "Tenda Technology Co.,Ltd.Dongguan branch";
		break;
	case 0x0016D3:
		cid = "Wistron Corporation";
		break;
	case 0x001F16:
		cid = "Wistron Corporation";
		break;
	case 0x4C4E03:
		cid = "TCT mobile ltd";
		break;
	case 0x50E666:
		cid = "Shenzhen Techtion Electronics Co., Ltd.";
		break;
	case 0x6831FE:
		cid = "Teladin Co.,Ltd.";
		break;
	case 0xD4B169:
		cid = "Le Shi Zhi Xin Electronic Technology (Tianjin) Limited";
		break;
	case 0x0C3CCD:
		cid = "Universal Global Scientific Industrial Co., Ltd.";
		break;
	case 0xB04089:
		cid = "Senient Systems LTD";
		break;
	case 0x002445:
		cid = "Adtran Inc";
		break;
	case 0x689FF0:
		cid = "zte corporation";
		break;
	case 0x7CC6C4:
		cid = "Kolff Computer Supplies b.v.";
		break;
	case 0xF06E32:
		cid = "MICROTEL INNOVATION S.R.L.";
		break;
	case 0x00E022:
		cid = "Analog Devices, Inc.";
		break;
	case 0x7C67A2:
		cid = "Intel Corporate";
		break;
	case 0x000302:
		cid = "Charles Industries, Ltd.";
		break;
	case 0x0896AD:
		cid = "Cisco Systems, Inc";
		break;
	case 0x8CF5A3:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0xB8EAAA:
		cid = "ICG NETWORKS CO.,ltd";
		break;
	case 0xB8F883:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xDCFE18:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xAC60B6:
		cid = "Ericsson AB";
		break;
	case 0x3C197D:
		cid = "Ericsson AB";
		break;
	case 0x74C99A:
		cid = "Ericsson AB";
		break;
	case 0x000F4F:
		cid = "PCS Systemtechnik GmbH";
		break;
	case 0x7C5A1C:
		cid = "Sophos Ltd";
		break;
	case 0x00E400:
		cid = "Sichuan Changhong Electric Ltd.";
		break;
	case 0x00117E:
		cid = "Midmark Corp";
		break;
	case 0x105AF7:
		cid = "ADB Italia";
		break;
	case 0x703ACB:
		cid = "Google, Inc.";
		break;
	case 0xD481D7:
		cid = "Dell Inc.";
		break;
	case 0x2C55D3:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xF44C7F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x143004:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x7C4685:
		cid = "Motorola (Wuhan) Mobility Technologies Communication Co., Ltd.";
		break;
	case 0xE05163:
		cid = "Arcadyan Corporation";
		break;
	case 0x00A06F:
		cid = "Color Sentinel Systems, LLC";
		break;
	case 0x0C5F35:
		cid = "Niagara Video Corporation";
		break;
	case 0x7C3866:
		cid = "Texas Instruments";
		break;
	case 0x50F14A:
		cid = "Texas Instruments";
		break;
	case 0x9C1D58:
		cid = "Texas Instruments";
		break;
	case 0x500FF5:
		cid = "Tenda Technology Co.,Ltd.Dongguan branch";
		break;
	case 0xF0272D:
		cid = "Amazon Technologies Inc.";
		break;
	case 0x74C246:
		cid = "Amazon Technologies Inc.";
		break;
	case 0xF4C4D6:
		cid = "Shenzhen Xinfa Electronic Co.,ltd";
		break;
	case 0x08B258:
		cid = "Juniper Networks";
		break;
	case 0xC03D46:
		cid = "Shanghai Sango Network Technology Co.,Ltd";
		break;
	case 0xE89FEC:
		cid = "CHENGDU KT ELECTRONIC HI-TECH CO.,LTD";
		break;
	case 0xBCA042:
		cid = "SHANGHAI FLYCO ELECTRICAL APPLIANCE CO.,LTD";
		break;
	case 0xD47DFC:
		cid = "TECNO MOBILE LIMITED";
		break;
	case 0x443708:
		cid = "MRV Comunications";
		break;
	case 0x14568E:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x6837E9:
		cid = "Amazon Technologies Inc.";
		break;
	case 0x8058F8:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0xF0D7AA:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x28FF3E:
		cid = "zte corporation";
		break;
	case 0xD0498B:
		cid = "ZOOM SERVER";
		break;
	case 0xC49DED:
		cid = "Microsoft Corporation";
		break;
	case 0x98A40E:
		cid = "Snap, Inc.";
		break;
	case 0x2C5A0F:
		cid = "Cisco Systems, Inc";
		break;
	case 0xAC7409:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0xE037BF:
		cid = "Wistron Neweb Corporation";
		break;
	case 0x4C8120:
		cid = "Taicang T&W Electronics";
		break;
	case 0xE8E732:
		cid = "Alcatel-Lucent Enterprise";
		break;
	case 0x00118B:
		cid = "Alcatel-Lucent Enterprise";
		break;
	case 0x00E0B1:
		cid = "Alcatel-Lucent Enterprise";
		break;
	case 0x6854ED:
		cid = "Alcatel-Lucent";
		break;
	case 0xE8DE8E:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0x40C8CB:
		cid = "AM Telecom co., Ltd.";
		break;
	case 0x14A0F8:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x28B448:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xE442A6:
		cid = "Intel Corporate";
		break;
	case 0x6045CB:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x84AFEC:
		cid = "BUFFALO.INC";
		break;
	case 0xAC202E:
		cid = "Hitron Technologies. Inc";
		break;
	case 0x48A74E:
		cid = "zte corporation";
		break;
	case 0x3C5282:
		cid = "Hewlett Packard";
		break;
	case 0xB0AA36:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x2C5BB8:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x1C48CE:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x004066:
		cid = "APRESIA Systems Ltd";
		break;
	case 0x9CAC6D:
		cid = "Universal Electronics, Inc.";
		break;
	case 0xB03D96:
		cid = "Vision Valley FZ LLC";
		break;
	case 0xB02628:
		cid = "Broadcom Limited";
		break;
	case 0xE81363:
		cid = "Comstock RD, Inc.";
		break;
	case 0x44AA50:
		cid = "Juniper Networks";
		break;
	case 0x0080E7:
		cid = "Leonardo Tactical Systems.";
		break;
	case 0x688DB6:
		cid = "AETEK INC.";
		break;
	case 0x481063:
		cid = "NTT Innovation Institute, Inc.";
		break;
	case 0x24F5AA:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xF877B8:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x682737:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x5056BF:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD428D5:
		cid = "TCT mobile ltd";
		break;
	case 0x405CFD:
		cid = "Dell Inc.";
		break;
	case 0xA0094C:
		cid = "CenturyLink";
		break;
	case 0x00A38E:
		cid = "Cisco Systems, Inc";
		break;
	case 0xDCC8F5:
		cid = "Shanghai UMEinfo CO.,LTD.";
		break;
	case 0x64DFE9:
		cid = "ATEME";
		break;
	case 0x9097F3:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x58C5CB:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xACAFB9:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x308976:
		cid = "DALIAN LAMBA TECHNOLOGY CO.,LTD";
		break;
	case 0x447BBB:
		cid = "Shenzhen YOUHUA Technology Co., Ltd";
		break;
	case 0xA4F4C2:
		cid = "VNPT TECHNOLOGY";
		break;
	case 0xC0A5DD:
		cid = "SHENZHEN MERCURY COMMUNICATION TECHNOLOGIES CO.,LTD.";
		break;
	case 0xDCBE7A:
		cid = "Zhejiang Nurotron Biotechnology Co.";
		break;
	case 0x206BE7:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x4857DD:
		cid = "Facebook Inc";
		break;
	case 0x681DEF:
		cid = "Shenzhen CYX Technology Co., Ltd.";
		break;
	case 0xAC203E:
		cid = "Wuhan Tianyu Information Industry Co., Ltd.";
		break;
	case 0x30074D:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0x00A3D1:
		cid = "Cisco Systems, Inc";
		break;
	case 0x801DAA:
		cid = "Avaya Inc";
		break;
	case 0x001B4F:
		cid = "Avaya Inc";
		break;
	case 0x7052C5:
		cid = "Avaya Inc";
		break;
	case 0x848371:
		cid = "Avaya Inc";
		break;
	case 0x24D921:
		cid = "Avaya Inc";
		break;
	case 0xA051C6:
		cid = "Avaya Inc";
		break;
	case 0x90EC50:
		cid = "C.O.B.O. SPA";
		break;
	case 0x90FB5B:
		cid = "Avaya Inc";
		break;
	case 0xB4475E:
		cid = "Avaya Inc";
		break;
	case 0xD4EA0E:
		cid = "Avaya Inc";
		break;
	case 0xA009ED:
		cid = "Avaya Inc";
		break;
	case 0x3C0CDB:
		cid = "UNIONMAN TECHNOLOGY CO.,LTD";
		break;
	case 0xC81FEA:
		cid = "Avaya Inc";
		break;
	case 0xF01B6C:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0xDC1AC5:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x205D47:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x9CFBD5:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x10F681:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x886AE3:
		cid = "Alpha Networks Inc.";
		break;
	case 0x9061AE:
		cid = "Intel Corporate";
		break;
	case 0xA4F3E7:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0xA0239F:
		cid = "Cisco Systems, Inc";
		break;
	case 0xD8DF7A:
		cid = "Quest Software, Inc.";
		break;
	case 0x30B62D:
		cid = " Mojo Networks, Inc.";
		break;
	case 0x001B17:
		cid = "Palo Alto Networks";
		break;
	case 0x9828A6:
		cid = "COMPAL INFORMATION (KUNSHAN) CO., LTD.";
		break;
	case 0xB0EABC:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0x94C691:
		cid = "EliteGroup Computer Systems Co., LTD";
		break;
	case 0x9C6F52:
		cid = "zte corporation";
		break;
	case 0xA09D86:
		cid = "Alcatel-Lucent Shanghai Bell Co., Ltd";
		break;
	case 0xE0CBBC:
		cid = "Cisco Meraki";
		break;
	case 0x00D01F:
		cid = "Senetas Corporation Ltd";
		break;
	case 0xA40450:
		cid = "nFore Technology Inc.";
		break;
	case 0x4CB008:
		cid = "Shenzhen Gwelltimes Technology Co.,Ltd";
		break;
	case 0x2CE6CC:
		cid = "Ruckus Wireless";
		break;
	case 0x8C0C90:
		cid = "Ruckus Wireless";
		break;
	case 0x842096:
		cid = "SHENZHEN RF-LINK TECHNOLOGY CO.,LTD.";
		break;
	case 0x589396:
		cid = "Ruckus Wireless";
		break;
	case 0x74911A:
		cid = "Ruckus Wireless";
		break;
	case 0x00227F:
		cid = "Ruckus Wireless";
		break;
	case 0x002482:
		cid = "Ruckus Wireless";
		break;
	case 0x58B633:
		cid = "Ruckus Wireless";
		break;
	case 0xD4684D:
		cid = "Ruckus Wireless";
		break;
	case 0xF03E90:
		cid = "Ruckus Wireless";
		break;
	case 0xEC8CA2:
		cid = "Ruckus Wireless";
		break;
	case 0x3087D9:
		cid = "Ruckus Wireless";
		break;
	case 0x24792A:
		cid = "Ruckus Wireless";
		break;
	case 0x30F77F:
		cid = "S Mobile Devices Limited";
		break;
	case 0x5C5181:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x389AF6:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE0AA96:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x507705:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x38E595:
		cid = "SHENZHEN GONGJIN ELECTRONICS CO.,LT";
		break;
	case 0xC4CB6B:
		cid = "Airista Flow, Inc.";
		break;
	case 0xB05508:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x008BFC:
		cid = "mixi,Inc.";
		break;
	case 0x2C4053:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD09466:
		cid = "Dell Inc.";
		break;
	case 0xF0EFD2:
		cid = "TF PAYMENT SERVICE CO., LTD";
		break;
	case 0x30C01B:
		cid = "Shenzhen Jingxun Software Telecommunication Technology Co.,Ltd";
		break;
	case 0x647C34:
		cid = "Ubee Interactive Co., Limited";
		break;
	case 0xE817FC:
		cid = "Fujitsu Cloud Technologies Limited";
		break;
	case 0x001009:
		cid = "HORANET";
		break;
	case 0x6432A8:
		cid = "Intel Corporate";
		break;
	case 0x78BC1A:
		cid = "Cisco Systems, Inc";
		break;
	case 0xE4F004:
		cid = "Dell Inc.";
		break;
	case 0x60F677:
		cid = "Intel Corporate";
		break;
	case 0x288CB8:
		cid = "zte corporation";
		break;
	case 0x0C72D9:
		cid = "zte corporation";
		break;
	case 0xE472E2:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xE86819:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x602E20:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x48BCA6:
		cid = "​ASUNG TECHNO CO.,Ltd";
		break;
	case 0x006069:
		cid = "Brocade Communications Systems, Inc.";
		break;
	case 0x000CDB:
		cid = "Brocade Communications Systems, Inc.";
		break;
	case 0x8C7CFF:
		cid = "Brocade Communications Systems, Inc.";
		break;
	case 0xC4F57C:
		cid = "Brocade Communications Systems, Inc.";
		break;
	case 0x00237F:
		cid = "PLANTRONICS, INC.";
		break;
	case 0x00095B:
		cid = "NETGEAR";
		break;
	case 0x000FB5:
		cid = "NETGEAR";
		break;
	case 0x803773:
		cid = "NETGEAR";
		break;
	case 0x405D82:
		cid = "NETGEAR";
		break;
	case 0xC0FFD4:
		cid = "NETGEAR";
		break;
	case 0x10DA43:
		cid = "NETGEAR";
		break;
	case 0xB03956:
		cid = "NETGEAR";
		break;
	case 0xC43DC7:
		cid = "NETGEAR";
		break;
	case 0xF87394:
		cid = "NETGEAR";
		break;
	case 0xAC512C:
		cid = "Infinix mobility limited";
		break;
	case 0x90B1E0:
		cid = "Beijing Nebula Link Technology Co., Ltd";
		break;
	case 0x6C090A:
		cid = "GEMATICA SRL";
		break;
	case 0x001439:
		cid = "Blonder Tongue Laboratories, Inc";
		break;
	case 0x107B44:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x9C4FCF:
		cid = "TCT mobile ltd";
		break;
	case 0x001BD3:
		cid = "Panasonic Corporation AVC Networks Company";
		break;
	case 0x00C08F:
		cid = "Panasonic Electric Works Co., Ltd.";
		break;
	case 0x0008C9:
		cid = "TechniSat Digital GmbH Daun";
		break;
	case 0x20A6CD:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0xF4F3AA:
		cid = "JBL GmbH & Co. KG";
		break;
	case 0x38CD07:
		cid = "Beijing FaceCam Technology Co., Ltd.";
		break;
	case 0xB009DA:
		cid = "Ring Solutions";
		break;
	case 0x444AB0:
		cid = "Zhejiang Moorgen Intelligence Technology Co., Ltd";
		break;
	case 0xECFA03:
		cid = "FCA";
		break;
	case 0x90324B:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x78E103:
		cid = "Amazon Technologies Inc.";
		break;
	case 0x78A6E1:
		cid = "Brocade Communications Systems, Inc.";
		break;
	case 0xF4D7B2:
		cid = "LGS Innovations, LLC";
		break;
	case 0x34298F:
		cid = "IEEE Registration Authority";
		break;
	case 0x20040F:
		cid = "Dell Inc.";
		break;
	case 0x2C7360:
		cid = "Earda Technologies co Ltd";
		break;
	case 0x048B42:
		cid = "Skspruce Technologies";
		break;
	case 0x9C63ED:
		cid = "zte corporation";
		break;
	case 0xC421C8:
		cid = "KYOCERA CORPORATION";
		break;
	case 0x002692:
		cid = "Mitsubishi Electric Corporation";
		break;
	case 0xF03D03:
		cid = "TECNO MOBILE LIMITED";
		break;
	case 0x006088:
		cid = "Analog Devices, Inc.";
		break;
	case 0x084ACF:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x1CDDEA:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0xECEBB8:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0x5CE8B7:
		cid = "Oraimo Technology Limited";
		break;
	case 0xD89EF3:
		cid = "Dell Inc.";
		break;
	case 0xCC66B2:
		cid = "Nokia";
		break;
	case 0xC0742B:
		cid = "SHENZHEN XUNLONG SOFTWARE CO.,LIMITED";
		break;
	case 0xD8AFF1:
		cid = "Panasonic Appliances Company";
		break;
	case 0x7086C1:
		cid = "Texas Instruments";
		break;
	case 0xA072E4:
		cid = "NJ SYSTEM CO.,LTD";
		break;
	case 0xA8E824:
		cid = "INIM ELECTRONICS S.R.L.";
		break;
	case 0x6CB749:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xA0FE61:
		cid = "Vivint Wireless Inc.";
		break;
	case 0x601803:
		cid = "Daikin Air-conditioning (Shanghai) Co., Ltd.";
		break;
	case 0x08152F:
		cid = "Samsung Electronics Co., Ltd. ARTIK";
		break;
	case 0x408BF6:
		cid = "Shenzhen TCL New Technology Co., Ltd";
		break;
	case 0xB4CD27:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x3CCD5D:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x346B46:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xD4C19E:
		cid = "Ruckus Wireless";
		break;
	case 0x08DFCB:
		cid = "Systrome Networks";
		break;
	case 0x9CA615:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x28AC9E:
		cid = "Cisco Systems, Inc";
		break;
	case 0x04FA83:
		cid = "Qingdao Haier Technology Co.,Ltd";
		break;
	case 0x84F3EB:
		cid = "Espressif Inc.";
		break;
	case 0x10B36F:
		cid = "Bowei Technology Company Limited";
		break;
	case 0x800588:
		cid = "Ruijie Networks Co.,LTD";
		break;
	case 0x9CE895:
		cid = "New H3C Technologies Co., Ltd";
		break;
	case 0x00165C:
		cid = "Trackflow Ltd.";
		break;
	case 0x04E229:
		cid = "Qingdao Haier Technology Co.,Ltd";
		break;
	case 0x78F9B4:
		cid = "Nokia";
		break;
	case 0x04D3B0:
		cid = "Intel Corporate";
		break;
	case 0xC8D779:
		cid = "QING DAO HAIER TELECOM CO.,LTD.";
		break;
	case 0x3CE1A1:
		cid = "Universal Global Scientific Industrial Co., Ltd.";
		break;
	case 0x58BAD4:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x14B126:
		cid = "Industrial Software Co";
		break;
	case 0xB8C111:
		cid = "Apple, Inc.";
		break;
	case 0x3408BC:
		cid = "Apple, Inc.";
		break;
	case 0x844167:
		cid = "Apple, Inc.";
		break;
	case 0xB4F61C:
		cid = "Apple, Inc.";
		break;
	case 0x68AB1E:
		cid = "Apple, Inc.";
		break;
	case 0x2C61F6:
		cid = "Apple, Inc.";
		break;
	case 0xE49ADC:
		cid = "Apple, Inc.";
		break;
	case 0xD0817A:
		cid = "Apple, Inc.";
		break;
	case 0xC4618B:
		cid = "Apple, Inc.";
		break;
	case 0x3451C9:
		cid = "Apple, Inc.";
		break;
	case 0xE0B9BA:
		cid = "Apple, Inc.";
		break;
	case 0xD023DB:
		cid = "Apple, Inc.";
		break;
	case 0xB88D12:
		cid = "Apple, Inc.";
		break;
	case 0xB817C2:
		cid = "Apple, Inc.";
		break;
	case 0x68A86D:
		cid = "Apple, Inc.";
		break;
	case 0x78A3E4:
		cid = "Apple, Inc.";
		break;
	case 0x680927:
		cid = "Apple, Inc.";
		break;
	case 0x60FACD:
		cid = "Apple, Inc.";
		break;
	case 0x1CABA7:
		cid = "Apple, Inc.";
		break;
	case 0x784F43:
		cid = "Apple, Inc.";
		break;
	case 0x404D7F:
		cid = "Apple, Inc.";
		break;
	case 0x7C04D0:
		cid = "Apple, Inc.";
		break;
	case 0xBC9FEF:
		cid = "Apple, Inc.";
		break;
	case 0x8866A5:
		cid = "Apple, Inc.";
		break;
	case 0x88E87F:
		cid = "Apple, Inc.";
		break;
	case 0xB853AC:
		cid = "Apple, Inc.";
		break;
	case 0x2C3361:
		cid = "Apple, Inc.";
		break;
	case 0xA860B6:
		cid = "Apple, Inc.";
		break;
	case 0x24F094:
		cid = "Apple, Inc.";
		break;
	case 0x90B0ED:
		cid = "Apple, Inc.";
		break;
	case 0xC4B301:
		cid = "Apple, Inc.";
		break;
	case 0xE05F45:
		cid = "Apple, Inc.";
		break;
	case 0x483B38:
		cid = "Apple, Inc.";
		break;
	case 0xE0C767:
		cid = "Apple, Inc.";
		break;
	case 0x1C9E46:
		cid = "Apple, Inc.";
		break;
	case 0x0CD746:
		cid = "Apple, Inc.";
		break;
	case 0x440010:
		cid = "Apple, Inc.";
		break;
	case 0xE498D6:
		cid = "Apple, Inc.";
		break;
	case 0x606944:
		cid = "Apple, Inc.";
		break;
	case 0x0452F3:
		cid = "Apple, Inc.";
		break;
	case 0x241EEB:
		cid = "Apple, Inc.";
		break;
	case 0xF431C3:
		cid = "Apple, Inc.";
		break;
	case 0x64A5C3:
		cid = "Apple, Inc.";
		break;
	case 0xBC926B:
		cid = "Apple, Inc.";
		break;
	case 0x0050E4:
		cid = "Apple, Inc.";
		break;
	case 0x003065:
		cid = "Apple, Inc.";
		break;
	case 0x000A27:
		cid = "Apple, Inc.";
		break;
	case 0x001451:
		cid = "Apple, Inc.";
		break;
	case 0x8C7B9D:
		cid = "Apple, Inc.";
		break;
	case 0x88C663:
		cid = "Apple, Inc.";
		break;
	case 0xC82A14:
		cid = "Apple, Inc.";
		break;
	case 0x9803D8:
		cid = "Apple, Inc.";
		break;
	case 0x8C5877:
		cid = "Apple, Inc.";
		break;
	case 0x0019E3:
		cid = "Apple, Inc.";
		break;
	case 0x002312:
		cid = "Apple, Inc.";
		break;
	case 0x002332:
		cid = "Apple, Inc.";
		break;
	case 0x002436:
		cid = "Apple, Inc.";
		break;
	case 0x00254B:
		cid = "Apple, Inc.";
		break;
	case 0x0026BB:
		cid = "Apple, Inc.";
		break;
	case 0x70F087:
		cid = "Apple, Inc.";
		break;
	case 0x886B6E:
		cid = "Apple, Inc.";
		break;
	case 0x4C74BF:
		cid = "Apple, Inc.";
		break;
	case 0xE80688:
		cid = "Apple, Inc.";
		break;
	case 0xCC08E0:
		cid = "Apple, Inc.";
		break;
	case 0x5855CA:
		cid = "Apple, Inc.";
		break;
	case 0x5C0947:
		cid = "Apple, Inc.";
		break;
	case 0x38892C:
		cid = "Apple, Inc.";
		break;
	case 0x40831D:
		cid = "Apple, Inc.";
		break;
	case 0x50BC96:
		cid = "Apple, Inc.";
		break;
	case 0xB4C0F5:
		cid = "Shenzhen TINNO Mobile Technology Corp.";
		break;
	case 0x7412BB:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x985AEB:
		cid = "Apple, Inc.";
		break;
	case 0x2078F0:
		cid = "Apple, Inc.";
		break;
	case 0x78D75F:
		cid = "Apple, Inc.";
		break;
	case 0xE0ACCB:
		cid = "Apple, Inc.";
		break;
	case 0x98E0D9:
		cid = "Apple, Inc.";
		break;
	case 0xC0CECD:
		cid = "Apple, Inc.";
		break;
	case 0x70E72C:
		cid = "Apple, Inc.";
		break;
	case 0xD03311:
		cid = "Apple, Inc.";
		break;
	case 0x5CADCF:
		cid = "Apple, Inc.";
		break;
	case 0x006D52:
		cid = "Apple, Inc.";
		break;
	case 0x48437C:
		cid = "Apple, Inc.";
		break;
	case 0x34A395:
		cid = "Apple, Inc.";
		break;
	case 0x9CF387:
		cid = "Apple, Inc.";
		break;
	case 0xA85B78:
		cid = "Apple, Inc.";
		break;
	case 0x908D6C:
		cid = "Apple, Inc.";
		break;
	case 0x0C1539:
		cid = "Apple, Inc.";
		break;
	case 0xBC4CC4:
		cid = "Apple, Inc.";
		break;
	case 0x0CBC9F:
		cid = "Apple, Inc.";
		break;
	case 0xA45E60:
		cid = "Apple, Inc.";
		break;
	case 0x544E90:
		cid = "Apple, Inc.";
		break;
	case 0x9CE65E:
		cid = "Apple, Inc.";
		break;
	case 0x90DD5D:
		cid = "Apple, Inc.";
		break;
	case 0x08F69C:
		cid = "Apple, Inc.";
		break;
	case 0xD461DA:
		cid = "Apple, Inc.";
		break;
	case 0xC8D083:
		cid = "Apple, Inc.";
		break;
	case 0x88E9FE:
		cid = "Apple, Inc.";
		break;
	case 0x88AE07:
		cid = "Apple, Inc.";
		break;
	case 0x18AF8F:
		cid = "Apple, Inc.";
		break;
	case 0xC8B5B7:
		cid = "Apple, Inc.";
		break;
	case 0xA8BBCF:
		cid = "Apple, Inc.";
		break;
	case 0x90B21F:
		cid = "Apple, Inc.";
		break;
	case 0xB8E856:
		cid = "Apple, Inc.";
		break;
	case 0x1499E2:
		cid = "Apple, Inc.";
		break;
	case 0xB418D1:
		cid = "Apple, Inc.";
		break;
	case 0x80006E:
		cid = "Apple, Inc.";
		break;
	case 0x60D9C7:
		cid = "Apple, Inc.";
		break;
	case 0xC8F650:
		cid = "Apple, Inc.";
		break;
	case 0x1C1AC0:
		cid = "Apple, Inc.";
		break;
	case 0xE06678:
		cid = "Apple, Inc.";
		break;
	case 0x5C8D4E:
		cid = "Apple, Inc.";
		break;
	case 0xC0F2FB:
		cid = "Apple, Inc.";
		break;
	case 0x00F76F:
		cid = "Apple, Inc.";
		break;
	case 0xAC87A3:
		cid = "Apple, Inc.";
		break;
	case 0x542696:
		cid = "Apple, Inc.";
		break;
	case 0xD8D1CB:
		cid = "Apple, Inc.";
		break;
	case 0x64A3CB:
		cid = "Apple, Inc.";
		break;
	case 0x44FB42:
		cid = "Apple, Inc.";
		break;
	case 0xF41BA1:
		cid = "Apple, Inc.";
		break;
	case 0x3CE072:
		cid = "Apple, Inc.";
		break;
	case 0xE88D28:
		cid = "Apple, Inc.";
		break;
	case 0xCC785F:
		cid = "Apple, Inc.";
		break;
	case 0xAC3C0B:
		cid = "Apple, Inc.";
		break;
	case 0x88CB87:
		cid = "Apple, Inc.";
		break;
	case 0xEC3586:
		cid = "Apple, Inc.";
		break;
	case 0xF0C1F1:
		cid = "Apple, Inc.";
		break;
	case 0xF4F951:
		cid = "Apple, Inc.";
		break;
	case 0x8CFABA:
		cid = "Apple, Inc.";
		break;
	case 0x5C95AE:
		cid = "Apple, Inc.";
		break;
	case 0xE0C97A:
		cid = "Apple, Inc.";
		break;
	case 0xBC52B7:
		cid = "Apple, Inc.";
		break;
	case 0x14109F:
		cid = "Apple, Inc.";
		break;
	case 0x0CF893:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x14ABF0:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xACB313:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x306023:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001DD6:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x1C1B68:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x44E137:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xE83381:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x8461A0:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x601971:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0000CA:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001596:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0015A2:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001311:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x7C2634:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x1005B1:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x10868C:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001DD1:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0026D9:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x28C87A:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x54E2E0:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xA055DE:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xA0C562:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xFC6FB7:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x00D037:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x1835D1:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x4C38D8:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xA89FEC:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0CEAC9:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xF88B37:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x4434A7:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0018A4:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001A1B:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x00149A:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001371:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001DBE:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001E5A:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001D6B:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001CC1:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001C11:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001F7E:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x002495:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x2C9E5F:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xC8AA21:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x341FE4:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x400D10:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001ADB:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x002375:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0024A1:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xA4ED4E:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x002642:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0015CE:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x002040:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0011AE:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x000F9F:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x000B06:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x00152F:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x00111A:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001626:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x00CFC0:
		cid = "China Mobile Group Device Co.,Ltd.";
		break;
	case 0x0C73EB:
		cid = "IEEE Registration Authority";
		break;
	case 0x106530:
		cid = "Dell Inc.";
		break;
	case 0xB4E01D:
		cid = "CONCEPTION ELECTRONIQUE";
		break;
	case 0x1C0042:
		cid = "NARI Technology Co., Ltd.";
		break;
	case 0x701D08:
		cid = "99IOT Shenzhen co.,ltd";
		break;
	case 0x00E009:
		cid = "Stratus Technologies";
		break;
	case 0x300AC5:
		cid = "Ruio telecommunication technologies Co., Limited";
		break;
	case 0x3C24F0:
		cid = "IEEE Registration Authority";
		break;
	case 0xC88629:
		cid = "Shenzhen Duubee Intelligent Technologies Co.,LTD.";
		break;
	case 0xA0E617:
		cid = "MATIS";
		break;
	case 0x505BC2:
		cid = "Liteon Technology Corporation";
		break;
	case 0xD832E3:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x840D8E:
		cid = "Espressif Inc.";
		break;
	case 0xFC90FA:
		cid = "Independent Technologies";
		break;
	case 0xCCC92C:
		cid = "Schindler - PORT Technology";
		break;
	case 0x7C2EBD:
		cid = "Google, Inc.";
		break;
	case 0xE0BAB4:
		cid = "Arrcus, Inc";
		break;
	case 0x000ADB:
		cid = "Trilliant";
		break;
	case 0x3CF5CC:
		cid = "New H3C Technologies Co., Ltd";
		break;
	case 0x74EC42:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x2C584F:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x90A137:
		cid = "Beijing Splendidtel Communication Technology Co,. Ltd";
		break;
	case 0x78AFE4:
		cid = "Comau S.p.A";
		break;
	case 0xAC3B77:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x00C3F4:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xB88AEC:
		cid = "Nintendo Co.,Ltd";
		break;
	case 0xF4BF80:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x304596:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xF8C39E:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xD0D783:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xD8F3DB:
		cid = "Post CH AG";
		break;
	case 0x2811A5:
		cid = "Bose Corporation";
		break;
	case 0x308841:
		cid = "Sichuan AI-Link Technology Co., Ltd.";
		break;
	case 0x8050F6:
		cid = "ITEL MOBILE LIMITED";
		break;
	case 0x0C01DB:
		cid = "Infinix mobility limited";
		break;
	case 0x3CF4F9:
		cid = "Moda-InnoChips";
		break;
	case 0x401B5F:
		cid = "WEIFANG GOERTEK ELECTRONICS CO.,LTD";
		break;
	case 0xF04B3A:
		cid = "Juniper Networks";
		break;
	case 0xD058FC:
		cid = "BSkyB Ltd";
		break;
	case 0x74EB80:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xA82BB9:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x001017:
		cid = "Bosch Access Systems GmbH";
		break;
	case 0x74B91E:
		cid = "Nanjing Bestway Automation System Co., Ltd";
		break;
	case 0x60058A:
		cid = "Hitachi Metals, Ltd.";
		break;
	case 0x002106:
		cid = "RIM Testing Services";
		break;
	case 0x14579F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x144F8A:
		cid = "Intel Corporate";
		break;
	case 0x882D53:
		cid = "Baidu Online Network Technology (Beijing) Co., Ltd.";
		break;
	case 0xA4DA32:
		cid = "Texas Instruments";
		break;
	case 0x8C14B4:
		cid = "zte corporation";
		break;
	case 0x3C9872:
		cid = "Sercomm Corporation.";
		break;
	case 0x8C04FF:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0xFC9114:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0x500959:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0x14B7F8:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0xB42A0E:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0xB01886:
		cid = "SmarDTV";
		break;
	case 0x08952A:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0x88F7C7:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0x302432:
		cid = "Intel Corporate";
		break;
	case 0xA89969:
		cid = "Dell Inc.";
		break;
	case 0x880118:
		cid = "BLT Co";
		break;
	case 0x4C21D0:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x307512:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0xC43ABE:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x40B837:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x4040A7:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x84C7EA:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x8417EF:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0x105917:
		cid = "Tonal";
		break;
	case 0x388B59:
		cid = "Google, Inc.";
		break;
	case 0x94CE2C:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0xD05162:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x0025E7:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x402BA1:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x340A98:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x60F18A:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x0012EE:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x001620:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x289E97:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x24FAF3:
		cid = "Shanghai Flexem Technology Co.,Ltd.";
		break;
	case 0xACDE48:
		cid = "Private";
		break;
	case 0x0C8C24:
		cid = "SHENZHEN BILIAN ELECTRONIC CO.，LTD";
		break;
	case 0x7C6B9C:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x1CC3EB:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x30D659:
		cid = "Merging Technologies SA";
		break;
	case 0xC49500:
		cid = "Amazon Technologies Inc.";
		break;
	case 0xF0F08F:
		cid = "Nextek Solutions Pte Ltd";
		break;
	case 0xE4D124:
		cid = " Mojo Networks, Inc.";
		break;
	case 0x283A4D:
		cid = "Cloud Network Technology (Samoa) Limited";
		break;
	case 0x40313C:
		cid = "XIAOMI Electronics,CO.,LTD";
		break;
	case 0xCC3ADF:
		cid = "Private";
		break;
	case 0xB4CEFE:
		cid = "James Czekaj";
		break;
	case 0xE06267:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x201A06:
		cid = "COMPAL INFORMATION (KUNSHAN) CO., LTD.";
		break;
	case 0xB888E3:
		cid = "COMPAL INFORMATION (KUNSHAN) CO., LTD.";
		break;
	case 0x002622:
		cid = "COMPAL INFORMATION (KUNSHAN) CO., LTD.";
		break;
	case 0x001EEC:
		cid = "COMPAL INFORMATION (KUNSHAN) CO., LTD.";
		break;
	case 0xDC0EA1:
		cid = "COMPAL INFORMATION (KUNSHAN) CO., LTD.";
		break;
	case 0xFC4596:
		cid = "COMPAL INFORMATION (KUNSHAN) CO., LTD.";
		break;
	case 0x208984:
		cid = "COMPAL INFORMATION (KUNSHAN) CO., LTD.";
		break;
	case 0x5803FB:
		cid = "Hangzhou Hikvision Digital Technology Co.,Ltd.";
		break;
	case 0x58FDBE:
		cid = "Shenzhen Taikaida Technology Co., Ltd";
		break;
	case 0xF8CC6E:
		cid = "DEPO Electronics Ltd";
		break;
	case 0x806FB0:
		cid = "Texas Instruments";
		break;
	case 0x14942F:
		cid = "USYS CO.,LTD.";
		break;
	case 0x482CA0:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0xB869F4:
		cid = "Routerboard.com";
		break;
	case 0x342EB6:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x902BD2:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x9C7F57:
		cid = "UNIC Memory Technology Co Ltd";
		break;
	case 0xC46E7B:
		cid = "SHENZHEN RF-LINK TECHNOLOGY CO.,LTD.";
		break;
	case 0x28D0CB:
		cid = "Cambridge Communication Systems Ltd";
		break;
	case 0x44657F:
		cid = "Calix Inc.";
		break;
	case 0x001A31:
		cid = "SCAN COIN AB";
		break;
	case 0x704F08:
		cid = "Shenzhen Huisheng Information Technology Co., Ltd.";
		break;
	case 0xBCA58B:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x70FD46:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD07FA0:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xF09FFC:
		cid = "SHARP Corporation";
		break;
	case 0x3042A1:
		cid = "ilumisys Inc. DBA Toggled";
		break;
	case 0x20DE88:
		cid = "IC Realtime LLC";
		break;
	case 0x143719:
		cid = "PT Prakarsa Visi Valutama";
		break;
	case 0x582F40:
		cid = "Nintendo Co.,Ltd";
		break;
	case 0x6C6CD3:
		cid = "Cisco Systems, Inc";
		break;
	case 0x30168D:
		cid = "ProLon";
		break;
	case 0x8030E0:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0xE85D86:
		cid = "CHANG YOW TECHNOLOGIES INTERNATIONAL CO.,LTD.";
		break;
	case 0x1C25E1:
		cid = "China Mobile IOT Company Limited";
		break;
	case 0xAC5474:
		cid = "China Mobile IOT Company Limited";
		break;
	case 0x004084:
		cid = "Honeywell International HPS";
		break;
	case 0x645D86:
		cid = "Intel Corporate";
		break;
	case 0x8C9246:
		cid = "Oerlikon Textile Gmbh&Co.KG";
		break;
	case 0x7C240C:
		cid = "Telechips, Inc.";
		break;
	case 0xCCF0FD:
		cid = "China Mobile (Hangzhou) Information Technology Co., Ltd.";
		break;
	case 0x4C0143:
		cid = "eero inc.";
		break;
	case 0x9CAA1B:
		cid = "Microsoft Corporation";
		break;
	case 0x18D717:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x0C9A42:
		cid = "FN-LINK TECHNOLOGY LIMITED";
		break;
	case 0x604BAA:
		cid = "Magic Leap, Inc.";
		break;
	case 0x54812D:
		cid = "PAX Computer Technology(Shenzhen) Ltd.";
		break;
	case 0x30A1FA:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x88108F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x0C5331:
		cid = "ETH Zurich";
		break;
	case 0xF4631F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x24FB65:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xEC84B4:
		cid = "CIG SHANGHAI CO LTD";
		break;
	case 0xECB313:
		cid = "SHENZHEN GONGJIN ELECTRONICS CO.,LT";
		break;
	case 0x8CFE74:
		cid = "Ruckus Wireless";
		break;
	case 0x846A66:
		cid = "Sumitomo Kizai  Co.,Ltd.";
		break;
	case 0xDC3757:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0x009004:
		cid = "3COM EUROPE LTD";
		break;
	case 0x005099:
		cid = "3COM EUROPE LTD";
		break;
	case 0x08004E:
		cid = "3COM EUROPE LTD";
		break;
	case 0x00D096:
		cid = "3COM EUROPE LTD";
		break;
	case 0x00301E:
		cid = "3COM EUROPE LTD";
		break;
	case 0x000A5E:
		cid = "3COM";
		break;
	case 0x00068C:
		cid = "3COM";
		break;
	case 0x000103:
		cid = "3COM";
		break;
	case 0x02608C:
		cid = "3COM";
		break;
	case 0x001B6E:
		cid = "Keysight Technologies, Inc.";
		break;
	case 0x008CFA:
		cid = "INVENTEC CORPORATION";
		break;
	case 0xC423A2:
		cid = "PT. Emsonic Indonesia";
		break;
	case 0xB4CB57:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0xBCB22B:
		cid = "EM-Tech";
		break;
	case 0x94917F:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0xC8BAE9:
		cid = "QDIS";
		break;
	case 0xB86A97:
		cid = "Edgecore Networks Corporation";
		break;
	case 0x94298D:
		cid = "Shanghai AdaptComm Technology Co., Ltd.";
		break;
	case 0xEC79F2:
		cid = "Startel";
		break;
	case 0x283166:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x4C1265:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x00907F:
		cid = "WatchGuard Technologies, Inc.";
		break;
	case 0xF0B014:
		cid = "AVM Audiovisuelles Marketing und Computersysteme GmbH";
		break;
	case 0xA81087:
		cid = "Texas Instruments";
		break;
	case 0xAC8674:
		cid = "Open Mesh, Inc.";
		break;
	case 0x18E829:
		cid = "Ubiquiti Networks Inc.";
		break;
	case 0x181DEA:
		cid = "Intel Corporate";
		break;
	case 0xF0D7DC:
		cid = "Wesine (Wuhan) Technology Co., Ltd.";
		break;
	case 0x44E4EE:
		cid = "Wistron Neweb Corporation";
		break;
	case 0x1801F1:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x300A60:
		cid = "IEEE Registration Authority";
		break;
	case 0x2C79D7:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x04CF8C:
		cid = "XIAOMI Electronics,CO.,LTD";
		break;
	case 0x10C22F:
		cid = "China Entropy Co., Ltd.";
		break;
	case 0xC4FDE6:
		cid = "DRTECH";
		break;
	case 0x4447CC:
		cid = "Hangzhou Hikvision Digital Technology Co.,Ltd.";
		break;
	case 0x4CD98F:
		cid = "Dell Inc.";
		break;
	case 0xE89363:
		cid = "Nokia";
		break;
	case 0xE41D2D:
		cid = "Mellanox Technologies, Inc.";
		break;
	case 0xB0AE25:
		cid = "Varikorea";
		break;
	case 0x5846E1:
		cid = "Baxter International Inc";
		break;
	case 0x00D0BD:
		cid = "Lattice Semiconductor Corp. (LPA)";
		break;
	case 0xF08261:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xD084B0:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x00FEC8:
		cid = "Cisco Systems, Inc";
		break;
	case 0xEC2280:
		cid = "D-Link International";
		break;
	case 0x047863:
		cid = "Shanghai MXCHIP Information Technology Co., Ltd.";
		break;
	case 0x24BA13:
		cid = "RISO KAGAKU CORPORATION";
		break;
	case 0x24DA11:
		cid = "NO NDA Inc";
		break;
	case 0x70CA4D:
		cid = "Shenzhen lnovance Technology Co.,Ltd.";
		break;
	case 0xDCC0EB:
		cid = "ASSA ABLOY CÔTE PICARDE";
		break;
	case 0x001735:
		cid = "Intel Wireless Network Group";
		break;
	case 0x9CDFB1:
		cid = "Shenzhen Crave Communication Co., LTD";
		break;
	case 0x0CC731:
		cid = "Currant, Inc.";
		break;
	case 0x00142F:
		cid = "Savvius";
		break;
	case 0x2CDDA3:
		cid = "Point Grey Research Inc.";
		break;
	case 0x24FD5B:
		cid = "SmartThings, Inc.";
		break;
	case 0x2876CD:
		cid = "Funshion Online Technologies Co.,Ltd";
		break;
	case 0xF4F5D8:
		cid = "Google, Inc.";
		break;
	case 0xF4F5E8:
		cid = "Google, Inc.";
		break;
	case 0xF88FCA:
		cid = "Google, Inc.";
		break;
	case 0xBCD1D3:
		cid = "Shenzhen TINNO Mobile Technology Corp.";
		break;
	case 0xBC4434:
		cid = "Shenzhen TINNO Mobile Technology Corp.";
		break;
	case 0x0041D2:
		cid = "Cisco Systems, Inc";
		break;
	case 0x4CFB45:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xA4BA76:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x78E3B5:
		cid = "Hewlett Packard";
		break;
	case 0x984BE1:
		cid = "Hewlett Packard";
		break;
	case 0x68B599:
		cid = "Hewlett Packard";
		break;
	case 0x14D64D:
		cid = "D-Link International";
		break;
	case 0xC8BE19:
		cid = "D-Link International";
		break;
	case 0xBCF685:
		cid = "D-Link International";
		break;
	case 0xCCB255:
		cid = "D-Link International";
		break;
	case 0x84C9B2:
		cid = "D-Link International";
		break;
	case 0xDCD321:
		cid = "HUMAX Co., Ltd.";
		break;
	case 0xCC4EEC:
		cid = "HUMAX Co., Ltd.";
		break;
	case 0x0080E1:
		cid = "STMicroelectronics SRL";
		break;
	case 0x58DC6D:
		cid = "Exceptional Innovation, Inc.";
		break;
	case 0x00092D:
		cid = "HTC Corporation";
		break;
	case 0xF8DB7F:
		cid = "HTC Corporation";
		break;
	case 0xE899C4:
		cid = "HTC Corporation";
		break;
	case 0x7CB15D:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x18686A:
		cid = "zte corporation";
		break;
	case 0x0C0535:
		cid = "Juniper Systems";
		break;
	case 0x8851FB:
		cid = "Hewlett Packard";
		break;
	case 0xAC162D:
		cid = "Hewlett Packard";
		break;
	case 0xA0B3CC:
		cid = "Hewlett Packard";
		break;
	case 0xE4115B:
		cid = "Hewlett Packard";
		break;
	case 0xC8CBB8:
		cid = "Hewlett Packard";
		break;
	case 0x9457A5:
		cid = "Hewlett Packard";
		break;
	case 0x0001E7:
		cid = "Hewlett Packard";
		break;
	case 0x080009:
		cid = "Hewlett Packard";
		break;
	case 0x0080A0:
		cid = "Hewlett Packard";
		break;
	case 0xD48564:
		cid = "Hewlett Packard";
		break;
	case 0x3C4A92:
		cid = "Hewlett Packard";
		break;
	case 0x780AC7:
		cid = "Baofeng TV Co., Ltd.";
		break;
	case 0x001D73:
		cid = "BUFFALO.INC";
		break;
	case 0x001601:
		cid = "BUFFALO.INC";
		break;
	case 0x106F3F:
		cid = "BUFFALO.INC";
		break;
	case 0x8857EE:
		cid = "BUFFALO.INC";
		break;
	case 0x009C02:
		cid = "Hewlett Packard";
		break;
	case 0x78E7D1:
		cid = "Hewlett Packard";
		break;
	case 0x001B78:
		cid = "Hewlett Packard";
		break;
	case 0x001E0B:
		cid = "Hewlett Packard";
		break;
	case 0x2C6E85:
		cid = "Intel Corporate";
		break;
	case 0x00D0B7:
		cid = "Intel Corporation";
		break;
	case 0x0002B3:
		cid = "Intel Corporation";
		break;
	case 0x001111:
		cid = "Intel Corporation";
		break;
	case 0x001320:
		cid = "Intel Corporate";
		break;
	case 0x0012F0:
		cid = "Intel Corporate";
		break;
	case 0x9049FA:
		cid = "Intel Corporate";
		break;
	case 0xC8348E:
		cid = "Intel Corporate";
		break;
	case 0x00508B:
		cid = "Hewlett Packard";
		break;
	case 0x784859:
		cid = "Hewlett Packard";
		break;
	case 0x1458D0:
		cid = "Hewlett Packard";
		break;
	case 0x5065F3:
		cid = "Hewlett Packard";
		break;
	case 0xA0481C:
		cid = "Hewlett Packard";
		break;
	case 0xA01D48:
		cid = "Hewlett Packard";
		break;
	case 0x94B2CC:
		cid = "PIONEER CORPORATION";
		break;
	case 0x887F03:
		cid = "Comper Technology Investment Limited";
		break;
	case 0x0019E0:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x0023CD:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x002719:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x40169F:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x940C6D:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x74EA3A:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x90F652:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x10FEED:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xC46E1F:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x50FA84:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xF483CD:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x882593:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x808917:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x5C899A:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x1C994C:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0xF02765:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x20A783:
		cid = "miControl GmbH";
		break;
	case 0x005053:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00500F:
		cid = "Cisco Systems, Inc";
		break;
	case 0xD842AC:
		cid = "Shanghai Feixun Communication Co.,Ltd.";
		break;
	case 0x34CDBE:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xD46AA8:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x5439DF:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x4846FB:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x200BC7:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x104780:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x88308A:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x44A7CF:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x0013E0:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x344B50:
		cid = "zte corporation";
		break;
	case 0xFCC897:
		cid = "zte corporation";
		break;
	case 0x9CD24B:
		cid = "zte corporation";
		break;
	case 0xC864C7:
		cid = "zte corporation";
		break;
	case 0xD0154A:
		cid = "zte corporation";
		break;
	case 0x88E3AB:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x00664B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x68A0F6:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x5CF96A:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xB43052:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x88CEFA:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x582AF7:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xF48E92:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x40CBA8:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x087A4C:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xD46E5C:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x2469A5:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xC8D15E:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xF83DFF:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x308730:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x002568:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x30D17E:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x9C28EF:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x7C6097:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x60DE44:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x3400A3:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x643E8C:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x0016FE:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x0498F3:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x38C096:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0xE0750A:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0xB05947:
		cid = "Shenzhen Qihu Intelligent Technology Company Limited";
		break;
	case 0x00E04F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001011:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0010F6:
		cid = "Cisco Systems, Inc";
		break;
	case 0x80E01D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x80E86F:
		cid = "Cisco Systems, Inc";
		break;
	case 0xE4AA5D:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB0AA77:
		cid = "Cisco Systems, Inc";
		break;
	case 0x78BAF9:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0016B6:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x0018F8:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x00252E:
		cid = "Cisco SPVTG";
		break;
	case 0xA4A24A:
		cid = "Cisco SPVTG";
		break;
	case 0x602AD0:
		cid = "Cisco SPVTG";
		break;
	case 0x001BFB:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x00E08F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x203A07:
		cid = "Cisco Systems, Inc";
		break;
	case 0x34A84E:
		cid = "Cisco Systems, Inc";
		break;
	case 0xE4D3F1:
		cid = "Cisco Systems, Inc";
		break;
	case 0x1CE6C7:
		cid = "Cisco Systems, Inc";
		break;
	case 0xE02F6D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x8478AC:
		cid = "Cisco Systems, Inc";
		break;
	case 0x4403A7:
		cid = "Cisco Systems, Inc";
		break;
	case 0x6886A7:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB4E9B0:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000832:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB0FAEB:
		cid = "Cisco Systems, Inc";
		break;
	case 0x500604:
		cid = "Cisco Systems, Inc";
		break;
	case 0x70105C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x14DAE9:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x3C08F6:
		cid = "Cisco Systems, Inc";
		break;
	case 0xD072DC:
		cid = "Cisco Systems, Inc";
		break;
	case 0x28C7CE:
		cid = "Cisco Systems, Inc";
		break;
	case 0x6CFA89:
		cid = "Cisco Systems, Inc";
		break;
	case 0x58F39C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x346288:
		cid = "Cisco Systems, Inc";
		break;
	case 0x881DFC:
		cid = "Cisco Systems, Inc";
		break;
	case 0xC067AF:
		cid = "Cisco Systems, Inc";
		break;
	case 0x64E950:
		cid = "Cisco Systems, Inc";
		break;
	case 0x189C5D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000EA6:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x0013D4:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x002618:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x00248C:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x0050A2:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0050F0:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00905F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00902B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00100B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00100D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001014:
		cid = "Cisco Systems, Inc";
		break;
	case 0xD4B8FF:
		cid = "Home Control Singapore Pte Ltd";
		break;
	case 0xAC6462:
		cid = "zte corporation";
		break;
	case 0xC08488:
		cid = "Finis Inc";
		break;
	case 0x68E8EB:
		cid = "Linktel Technologies Co.,Ltd";
		break;
	case 0x20C3A4:
		cid = "RetailNext";
		break;
	case 0x780541:
		cid = "Queclink Wireless Solutions Co., Ltd";
		break;
	case 0xC02DEE:
		cid = "Cuff";
		break;
	case 0x54A3FA:
		cid = "BQT Solutions (Australia)Pty Ltd";
		break;
	case 0x9023EC:
		cid = "Availink, Inc.";
		break;
	case 0x3891D5:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x90DFFB:
		cid = "HOMERIDER SYSTEMS";
		break;
	case 0x3C831E:
		cid = "CKD Corporation";
		break;
	case 0x381C23:
		cid = "Hilan Technology CO.,LTD";
		break;
	case 0xE03676:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x3CB72B:
		cid = "PLUMgrid Inc";
		break;
	case 0x243184:
		cid = "SHARP Corporation";
		break;
	case 0x24DA9B:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x3052CB:
		cid = "Liteon Technology Corporation";
		break;
	case 0xB8B2EB:
		cid = "Googol Technology (HK) Limited";
		break;
	case 0xC40049:
		cid = "Kamama";
		break;
	case 0x50A9DE:
		cid = "Smartcom - Bulgaria AD";
		break;
	case 0xE8DED6:
		cid = "Intrising Networks, Inc.";
		break;
	case 0x8C10D4:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x089B4B:
		cid = "iKuai Networks";
		break;
	case 0x3C7873:
		cid = "Airsonics";
		break;
	case 0xC8F9C8:
		cid = "NewSharp Technology(SuZhou)Co,Ltd";
		break;
	case 0x3C5CC3:
		cid = "Shenzhen First Blue Chip Technology Ltd";
		break;
	case 0xA8741D:
		cid = "PHOENIX CONTACT Electronics GmbH";
		break;
	case 0xA4C138:
		cid = "Telink Semiconductor (Taipei) Co. Ltd.";
		break;
	case 0xD8EFCD:
		cid = "Nokia";
		break;
	case 0xEC0133:
		cid = "TRINUS SYSTEMS INC.";
		break;
	case 0x1C56FE:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x7CA23E:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x501AA5:
		cid = "GN Netcom A/S";
		break;
	case 0xF09A51:
		cid = "Shanghai Viroyal Electronic Technology Company Limited";
		break;
	case 0x9870E8:
		cid = "INNATECH SDN BHD";
		break;
	case 0x50DF95:
		cid = "Lytx";
		break;
	case 0x584925:
		cid = "E3 Enterprise";
		break;
	case 0x94F278:
		cid = "Elma Electronic";
		break;
	case 0xE8BDD1:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x3481F4:
		cid = "SST Taiwan Ltd.";
		break;
	case 0xF4B8A7:
		cid = "zte corporation";
		break;
	case 0x58F102:
		cid = "BLU Products Inc.";
		break;
	case 0xB869C2:
		cid = "Sunitec Enterprise Co., Ltd.";
		break;
	case 0x2CC548:
		cid = "IAdea Corporation";
		break;
	case 0x307CB2:
		cid = "ANOV FRANCE";
		break;
	case 0x90D8F3:
		cid = "zte corporation";
		break;
	case 0x444CA8:
		cid = "Arista Networks";
		break;
	case 0xFCE33C:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xBC6A2F:
		cid = "Henge Docks LLC";
		break;
	case 0xE4907E:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x48066A:
		cid = "Tempered Networks, Inc.";
		break;
	case 0x1CF03E:
		cid = "Wearhaus Inc.";
		break;
	case 0xDCDB70:
		cid = "Tonfunk Systementwicklung und Service GmbH";
		break;
	case 0xC47D46:
		cid = "FUJITSU LIMITED";
		break;
	case 0x68EDA4:
		cid = "Shenzhen Seavo Technology Co.,Ltd";
		break;
	case 0xB899B0:
		cid = "Cohere Technologies";
		break;
	case 0x80C5E6:
		cid = "Microsoft Corporation";
		break;
	case 0xD85DEF:
		cid = "Busch-Jaeger Elektro GmbH";
		break;
	case 0x10DF8B:
		cid = "Shenzhen CareDear Communication Technology Co.,Ltd";
		break;
	case 0x00A784:
		cid = "ITX security";
		break;
	case 0x800184:
		cid = "HTC Corporation";
		break;
	case 0x38FACA:
		cid = "Skyworth Digital Technology(Shenzhen) Co.,Ltd";
		break;
	case 0x44C69B:
		cid = "Wuhan Feng Tian Information Network CO.,LTD";
		break;
	case 0xC02567:
		cid = "Nexxt Solutions";
		break;
	case 0xB46D35:
		cid = "Dalian Seasky Automation Co;Ltd";
		break;
	case 0xB89ACD:
		cid = "ELITE OPTOELECTRONIC(ASIA)CO.,LTD";
		break;
	case 0x241C04:
		cid = "SHENZHEN JEHE TECHNOLOGY DEVELOPMENT CO., LTD.";
		break;
	case 0xF8CFC5:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0xBCF811:
		cid = "Xiamen DNAKE Technology Co.,Ltd";
		break;
	case 0xA8827F:
		cid = "CIBN Oriental Network(Beijing) CO.,Ltd";
		break;
	case 0x900A39:
		cid = "Wiio, Inc.";
		break;
	case 0xC4693E:
		cid = "Turbulence Design Inc.";
		break;
	case 0x1C8341:
		cid = "Hefei Bitland Information Technology Co.Ltd";
		break;
	case 0x4011DC:
		cid = "Sonance";
		break;
	case 0x249EAB:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xDC56E6:
		cid = "Shenzhen Bococom Technology Co.,LTD";
		break;
	case 0x5CA178:
		cid = "TableTop Media (dba Ziosk)";
		break;
	case 0x702A7D:
		cid = "EpSpot AB";
		break;
	case 0xB8B3DC:
		cid = "DEREK (SHAOGUAN) LIMITED";
		break;
	case 0x6C1E70:
		cid = "Guangzhou YBDS IT Co.,Ltd";
		break;
	case 0xC8E130:
		cid = "Milkyway Group Ltd";
		break;
	case 0x8833BE:
		cid = "Ivenix, Inc.";
		break;
	case 0x34CC28:
		cid = "Nexpring Co. LTD.,";
		break;
	case 0x144146:
		cid = "Honeywell (China) Co., LTD";
		break;
	case 0xF41563:
		cid = "F5 Networks, Inc.";
		break;
	case 0xC4EA1D:
		cid = "Technicolor";
		break;
	case 0x20E407:
		cid = "Spark srl";
		break;
	case 0x887384:
		cid = "Toshiba";
		break;
	case 0x584704:
		cid = " Shenzhen Webridge Technology Co.,Ltd";
		break;
	case 0xB856BD:
		cid = "ITT LLC";
		break;
	case 0x107873:
		cid = "Shenzhen Jinkeyi Communication Co., Ltd.";
		break;
	case 0xD45556:
		cid = "Fiber Mountain Inc.";
		break;
	case 0xF01E34:
		cid = "ORICO Technologies Co., Ltd";
		break;
	case 0x74A063:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xA89008:
		cid = "Beijing Yuecheng Technology Co. Ltd.";
		break;
	case 0x183864:
		cid = "CAP-TECH INTERNATIONAL CO., LTD.";
		break;
	case 0x08D34B:
		cid = "Techman Electronics (Changshu) Co., Ltd.";
		break;
	case 0xC808E9:
		cid = "LG Electronics";
		break;
	case 0x78ACBF:
		cid = "Igneous Systems";
		break;
	case 0x206274:
		cid = "Microsoft Corporation";
		break;
	case 0x5CCCFF:
		cid = "Techroutes Network Pvt Ltd";
		break;
	case 0x844BB7:
		cid = "Beijing Sankuai Online Technology Co.,Ltd";
		break;
	case 0x148F21:
		cid = "Garmin International";
		break;
	case 0x3C6A9D:
		cid = "Dexatek Technology LTD.";
		break;
	case 0x14893E:
		cid = "VIXTEL TECHNOLOGIES LIMTED";
		break;
	case 0x60F189:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x74A34A:
		cid = "ZIMI CORPORATION";
		break;
	case 0xD89341:
		cid = "General Electric Global Research";
		break;
	case 0xF4645D:
		cid = "Toshiba";
		break;
	case 0x30D587:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x1436C6:
		cid = "Lenovo Mobile Communication Technology Ltd.";
		break;
	case 0x04C09C:
		cid = "Tellabs Inc.";
		break;
	case 0x844464:
		cid = "ServerU Inc";
		break;
	case 0x589B0B:
		cid = "Shineway Technologies, Inc.";
		break;
	case 0xA48CDB:
		cid = "Lenovo";
		break;
	case 0x4062B6:
		cid = "Tele system communication";
		break;
	case 0x3C2C94:
		cid = "杭州德澜科技有限公司（HangZhou Delan Technology Co.,Ltd�?";
		break;
	case 0x78312B:
		cid = "zte corporation";
		break;
	case 0xC035C5:
		cid = "Prosoft Systems LTD";
		break;
	case 0xF8B2F3:
		cid = "GUANGZHOU BOSMA TECHNOLOGY CO.,LTD";
		break;
	case 0x1C7D22:
		cid = "Fuji Xerox Co., Ltd.";
		break;
	case 0x7C11CD:
		cid = "QianTang Technology";
		break;
	case 0x0492EE:
		cid = "iway AG";
		break;
	case 0xF02A23:
		cid = "Creative Next Design";
		break;
	case 0x8C9109:
		cid = "Toyoshima Electric Technoeogy(Suzhou) Co.,Ltd.";
		break;
	case 0x307350:
		cid = "Inpeco SA";
		break;
	case 0xE8CC18:
		cid = "D-Link International";
		break;
	case 0xB09137:
		cid = "ISis ImageStream Internet Solutions, Inc";
		break;
	case 0x3C1E13:
		cid = "HANGZHOU SUNRISE TECHNOLOGY CO., LTD";
		break;
	case 0xB4A828:
		cid = "Shenzhen Concox Information Technology Co., Ltd";
		break;
	case 0xA41242:
		cid = "NEC Platforms, Ltd.";
		break;
	case 0x404EEB:
		cid = "Higher Way Electronic Co., Ltd.";
		break;
	case 0x50BD5F:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x147590:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xECB907:
		cid = "CloudGenix Inc";
		break;
	case 0x5CF9F0:
		cid = "Atomos Engineering P/L";
		break;
	case 0xFCDBB3:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0xB8186F:
		cid = "ORIENTAL MOTOR CO., LTD.";
		break;
	case 0x1C9C26:
		cid = "Zoovel Technologies";
		break;
	case 0x9C3583:
		cid = "Nipro Diagnostics, Inc";
		break;
	case 0xC456FE:
		cid = "Lava International Ltd.";
		break;
	case 0xB89BE4:
		cid = "ABB Power Systems Power Generation";
		break;
	case 0xC0EEFB:
		cid = "OnePlus Tech (Shenzhen) Ltd";
		break;
	case 0x108A1B:
		cid = "RAONIX Inc.";
		break;
	case 0x8CF813:
		cid = "ORANGE POLSKA";
		break;
	case 0xB8F317:
		cid = "iSun Smasher Communications Private Limited";
		break;
	case 0x2442BC:
		cid = "Alinco,incorporated";
		break;
	case 0xC401CE:
		cid = "PRESITION (2000) CO., LTD.";
		break;
	case 0xD01242:
		cid = "BIOS Corporation";
		break;
	case 0x50F43C:
		cid = "Leeo Inc";
		break;
	case 0xB43934:
		cid = "Pen Generations, Inc.";
		break;
	case 0xDCC622:
		cid = "BUHEUNG SYSTEM";
		break;
	case 0xD062A0:
		cid = "China Essence Technology (Zhumadian) Co., Ltd.";
		break;
	case 0xCC10A3:
		cid = "Beijing Nan Bao Technology Co., Ltd.";
		break;
	case 0x2CA30E:
		cid = "POWER DRAGON DEVELOPMENT LIMITED";
		break;
	case 0x4CF5A0:
		cid = "Scalable Network Technologies Inc";
		break;
	case 0x084656:
		cid = "VEO-LABS";
		break;
	case 0x4488CB:
		cid = "Camco Technologies NV";
		break;
	case 0x5014B5:
		cid = "Richfit Information Technology Co., Ltd";
		break;
	case 0xCC3080:
		cid = "VAIO Corporation";
		break;
	case 0xF82441:
		cid = "Yeelink";
		break;
	case 0x6CBFB5:
		cid = "Noon Technology Co., Ltd";
		break;
	case 0x489D18:
		cid = "Flashbay Limited";
		break;
	case 0x8CB094:
		cid = "Airtech I&C Co., Ltd";
		break;
	case 0x70F196:
		cid = "Actiontec Electronics, Inc";
		break;
	case 0x6C6EFE:
		cid = "Core Logic Inc.";
		break;
	case 0xE4C62B:
		cid = "Airware";
		break;
	case 0x80F8EB:
		cid = "RayTight";
		break;
	case 0x94B40F:
		cid = "Aruba Networks";
		break;
	case 0x4C2C83:
		cid = "Zhejiang KaNong Network Technology Co.,Ltd.";
		break;
	case 0xE89606:
		cid = "testo Instruments (Shenzhen) Co., Ltd.";
		break;
	case 0xCC3F1D:
		cid = "Intesis Software SL";
		break;
	case 0x902181:
		cid = "Shanghai Huaqin Telecom Technology Co.,Ltd";
		break;
	case 0x600417:
		cid = "POSBANK CO.,LTD";
		break;
	case 0xA44AD3:
		cid = "ST Electronics(Shanghai) Co.,Ltd";
		break;
	case 0x2497ED:
		cid = "Techvision Intelligent Technology Limited";
		break;
	case 0x104E07:
		cid = "Shanghai Genvision Industries Co.,Ltd";
		break;
	case 0xFCD5D9:
		cid = "Shenzhen SDMC Technology Co., Ltd.";
		break;
	case 0x007532:
		cid = "INID BV";
		break;
	case 0x907EBA:
		cid = "UTEK TECHNOLOGY (SHENZHEN) CO.,LTD";
		break;
	case 0x488244:
		cid = "Life Fitness / Div. of Brunswick";
		break;
	case 0xA8F7E0:
		cid = "PLANET Technology Corporation";
		break;
	case 0x2C5BE1:
		cid = "Centripetal Networks, Inc";
		break;
	case 0xD87EB1:
		cid = "x.o.ware, inc.";
		break;
	case 0x4045DA:
		cid = "Spreadtrum Communications (Shanghai) Co., Ltd.";
		break;
	case 0x98BE94:
		cid = "IBM";
		break;
	case 0xD4B43E:
		cid = "Messcomp Datentechnik GmbH";
		break;
	case 0xA8E539:
		cid = "Moimstone Co.,Ltd";
		break;
	case 0x98F170:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x04C991:
		cid = "Phistek INC.";
		break;
	case 0x581F67:
		cid = "Open-m technology limited";
		break;
	case 0xBC25F0:
		cid = "3D Display Technologies Co., Ltd.";
		break;
	case 0x7CE524:
		cid = "Quirky, Inc.";
		break;
	case 0xD85DFB:
		cid = "Private";
		break;
	case 0x7CC4EF:
		cid = "Devialet";
		break;
	case 0x94AEE3:
		cid = "Belden Hirschmann Industries (Suzhou) Ltd.";
		break;
	case 0x44666E:
		cid = "IP-LINE";
		break;
	case 0x705B2E:
		cid = "M2Communication Inc.";
		break;
	case 0x0C8C8F:
		cid = "Kamo Technology Limited";
		break;
	case 0xF4FD2B:
		cid = "ZOYI Company";
		break;
	case 0xFCAA14:
		cid = "GIGA-BYTE TECHNOLOGY CO.,LTD.";
		break;
	case 0x50FEF2:
		cid = "Sify Technologies Ltd";
		break;
	case 0x3CD9CE:
		cid = "Eclipse WiFi";
		break;
	case 0xC80210:
		cid = "LG Innotek";
		break;
	case 0x702DD1:
		cid = "Newings Communication CO., LTD.";
		break;
	case 0xF4F646:
		cid = "Dediprog Technology Co. Ltd.";
		break;
	case 0xECD9D1:
		cid = "Shenzhen TG-NET Botone Technology Co.,Ltd.";
		break;
	case 0x748F4D:
		cid = "MEN Mikro Elektronik GmbH";
		break;
	case 0xA47E39:
		cid = "zte corporation";
		break;
	case 0x0C63FC:
		cid = "Nanjing Signway Technology Co., Ltd";
		break;
	case 0xACA9A0:
		cid = "Audioengine, Ltd.";
		break;
	case 0xA8A668:
		cid = "zte corporation";
		break;
	case 0x60E327:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xE4D332:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xA0DA92:
		cid = "Nanjing Glarun Atten Technology Co. Ltd.";
		break;
	case 0x6828BA:
		cid = "Dejai";
		break;
	case 0x48D18E:
		cid = "Metis Communication Co.,Ltd";
		break;
	case 0xA49F85:
		cid = "Lyve Minds, Inc";
		break;
	case 0x3481C4:
		cid = "AVM GmbH";
		break;
	case 0x085700:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x888914:
		cid = "All Components Incorporated";
		break;
	case 0xD8150D:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xA06518:
		cid = "VNPT TECHNOLOGY";
		break;
	case 0x748F1B:
		cid = "MasterImage 3D";
		break;
	case 0xF03A4B:
		cid = "Bloombase, Inc.";
		break;
	case 0xD82A15:
		cid = "Leitner SpA";
		break;
	case 0xC4291D:
		cid = "KLEMSAN ELEKTRIK ELEKTRONIK SAN.VE TIC.AS.";
		break;
	case 0x704E01:
		cid = "KWANGWON TECH CO., LTD.";
		break;
	case 0x848433:
		cid = "Paradox Engineering SA";
		break;
	case 0xD4319D:
		cid = "Sinwatec";
		break;
	case 0xDC052F:
		cid = "National Products Inc.";
		break;
	case 0xCC398C:
		cid = "Shiningtek";
		break;
	case 0x6C5F1C:
		cid = "Lenovo Mobile Communication Technology Ltd.";
		break;
	case 0xB42C92:
		cid = "Zhejiang Weirong Electronic Co., Ltd";
		break;
	case 0xFC1349:
		cid = "Global Apps Corp.";
		break;
	case 0x8C41F2:
		cid = "RDA Technologies Ltd.";
		break;
	case 0xFC07A0:
		cid = "LRE Medical GmbH";
		break;
	case 0xAC02CA:
		cid = "HI Solutions, Inc.";
		break;
	case 0xF490CA:
		cid = "Tensorcom";
		break;
	case 0x2C534A:
		cid = "Shenzhen Winyao Electronic Limited";
		break;
	case 0xCC856C:
		cid = "SHENZHEN MDK DIGITAL TECHNOLOGY CO.,LTD";
		break;
	case 0x60FFDD:
		cid = "C.E. ELECTRONICS, INC";
		break;
	case 0xFCBBA1:
		cid = "Shenzhen Minicreate Technology Co.,Ltd";
		break;
	case 0x50B695:
		cid = "Micropoint Biotechnologies,Inc.";
		break;
	case 0xB48547:
		cid = "Amptown System Company GmbH";
		break;
	case 0x3C25D7:
		cid = "Nokia Corporation";
		break;
	case 0x1889DF:
		cid = "CerebrEX Inc.";
		break;
	case 0xCC9F35:
		cid = "Transbit Sp. z o.o.";
		break;
	case 0x407875:
		cid = "IMBEL - Industria de Material Belico do Brasil";
		break;
	case 0x0C4F5A:
		cid = "ASA-RT s.r.l.";
		break;
	case 0xB4B542:
		cid = "Hubbell Power Systems, Inc.";
		break;
	case 0x54CDEE:
		cid = "ShenZhen Apexis Electronic Co.,Ltd";
		break;
	case 0xF8F005:
		cid = "Newport Media Inc.";
		break;
	case 0x98C0EB:
		cid = "Global Regency Ltd";
		break;
	case 0xD4224E:
		cid = "Alcatel Lucent";
		break;
	case 0x28DEF6:
		cid = "bioMerieux Inc.";
		break;
	case 0x88E8F8:
		cid = "YONG TAI ELECTRONIC (DONGGUAN) LTD.";
		break;
	case 0x2C073C:
		cid = "DEVLINE LIMITED";
		break;
	case 0x7CE4AA:
		cid = "Private";
		break;
	case 0x1820A6:
		cid = "Sage Co., Ltd.";
		break;
	case 0xBCF61C:
		cid = "Geomodeling Wuxi Technology Co. Ltd.";
		break;
	case 0x083F3E:
		cid = "WSH GmbH";
		break;
	case 0x6C09D6:
		cid = "Digiquest Electronics LTD";
		break;
	case 0x8C569D:
		cid = "Imaging Solutions Group";
		break;
	case 0xA43A69:
		cid = "Vers Inc";
		break;
	case 0x387B47:
		cid = "AKELA, Inc.";
		break;
	case 0x7CCD11:
		cid = "MS-Magnet";
		break;
	case 0x4CE1BB:
		cid = "Zhuhai HiFocus Technology Co., Ltd.";
		break;
	case 0x8CDE99:
		cid = "Comlab Inc.";
		break;
	case 0xB46698:
		cid = "Zealabs srl";
		break;
	case 0x283B96:
		cid = "Cool Control LTD";
		break;
	case 0x80D433:
		cid = "LzLabs GmbH";
		break;
	case 0x085AE0:
		cid = "Recovision Technology Co., Ltd.";
		break;
	case 0xBCEE7B:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0xFC09D8:
		cid = "ACTEON Group";
		break;
	case 0x0C1262:
		cid = "zte corporation";
		break;
	case 0x687CC8:
		cid = "Measurement Systems S. de R.L.";
		break;
	case 0xF015A0:
		cid = "KyungDong One Co., Ltd.";
		break;
	case 0xECF72B:
		cid = "HD DIGITAL TECH CO., LTD.";
		break;
	case 0xD8B6D6:
		cid = "Blu Tether Limited";
		break;
	case 0x847207:
		cid = "I&C Technology";
		break;
	case 0xE0AEB2:
		cid = "Bender GmbH &amp; Co.KG";
		break;
	case 0x2C553C:
		cid = "Gainspeed, Inc.";
		break;
	case 0xB43E3B:
		cid = "Viableware, Inc";
		break;
	case 0xF854AF:
		cid = "ECI Telecom Ltd.";
		break;
	case 0x2464EF:
		cid = "CYG SUNRI CO.,LTD.";
		break;
	case 0x50B888:
		cid = "wi2be Tecnologia S/A";
		break;
	case 0xB8C1A2:
		cid = "Dragon Path Technologies Co., Limited";
		break;
	case 0x50ED78:
		cid = "Changzhou Yongse Infotech Co.,Ltd";
		break;
	case 0x8CB7F7:
		cid = "Shenzhen UniStrong Science & Technology Co., Ltd";
		break;
	case 0x085240:
		cid = "EbV Elektronikbau- und Vertriebs GmbH";
		break;
	case 0x80F25E:
		cid = "Kyynel";
		break;
	case 0x844F03:
		cid = "Ablelink Electronics Ltd";
		break;
	case 0x94B9B4:
		cid = "Aptos Technology";
		break;
	case 0xD0B523:
		cid = "Bestcare Cloucal Corp.";
		break;
	case 0x783D5B:
		cid = "TELNET Redes Inteligentes S.A.";
		break;
	case 0xD0C42F:
		cid = "Tamagawa Seiki Co.,Ltd.";
		break;
	case 0x5CFFFF:
		cid = "Shenzhen Kezhonglong Optoelectronic Technology Co., Ltd";
		break;
	case 0xF0D3A7:
		cid = "CobaltRay Co., Ltd";
		break;
	case 0x847616:
		cid = "Addat s.r.o.";
		break;
	case 0xD46867:
		cid = "Neoventus Design Group";
		break;
	case 0x68692E:
		cid = "Zycoo Co.,Ltd";
		break;
	case 0x38BF2F:
		cid = "Espec Corp.";
		break;
	case 0x182012:
		cid = "Aztech Associates Inc.";
		break;
	case 0xC0F991:
		cid = "GME Standard Communications P/L";
		break;
	case 0x14EDA5:
		cid = "Wächter GmbH Sicherheitssysteme";
		break;
	case 0xE056F4:
		cid = "AxesNetwork Solutions inc.";
		break;
	case 0x385AA8:
		cid = "Beijing Zhongdun Security Technology Development Co.";
		break;
	case 0xFC3FAB:
		cid = "Henan Lanxin Technology Co., Ltd";
		break;
	case 0xF8FF5F:
		cid = "Shenzhen Communication Technology Co.,Ltd";
		break;
	case 0xDCC422:
		cid = "Systembase Limited";
		break;
	case 0xF4BD7C:
		cid = "Chengdu jinshi communication Co., LTD";
		break;
	case 0xC8F36B:
		cid = "Yamato Scale Co.,Ltd.";
		break;
	case 0x6C90B1:
		cid = "SanLogic Inc";
		break;
	case 0x845C93:
		cid = "Chabrier Services";
		break;
	case 0xD44C9C:
		cid = "Shenzhen YOOBAO Technology Co.Ltd";
		break;
	case 0xA88D7B:
		cid = "SunDroid Global limited.";
		break;
	case 0xA03B1B:
		cid = "Inspire Tech";
		break;
	case 0x3C6E63:
		cid = "Mitron OY";
		break;
	case 0x502E5C:
		cid = "HTC Corporation";
		break;
	case 0x20D21F:
		cid = "Wincal Technology Corp.";
		break;
	case 0xFC1E16:
		cid = "IPEVO corp";
		break;
	case 0x6C4B7F:
		cid = "Vossloh-Schwabe Deutschland GmbH";
		break;
	case 0x0CCB8D:
		cid = "ASCO Numatics GmbH";
		break;
	case 0x2847AA:
		cid = "Nokia Corporation";
		break;
	case 0x682DDC:
		cid = "Wuhan Changjiang Electro-Communication Equipment CO.,LTD";
		break;
	case 0x1C63B7:
		cid = "OpenProducts 237 AB";
		break;
	case 0xA0A23C:
		cid = "GPMS";
		break;
	case 0x708D09:
		cid = "Nokia Corporation";
		break;
	case 0xFCE1D9:
		cid = "Stable Imaging Solutions LLC";
		break;
	case 0x38B74D:
		cid = "Fijowave Limited";
		break;
	case 0xA0E5E9:
		cid = "enimai Inc";
		break;
	case 0x9CBB98:
		cid = "Shen Zhen RND Electronic Co.,LTD";
		break;
	case 0x345C40:
		cid = "Cargt Holdings LLC";
		break;
	case 0x34885D:
		cid = "Logitech Far East";
		break;
	case 0x6064A1:
		cid = "RADiflow Ltd.";
		break;
	case 0x8079AE:
		cid = "ShanDong Tecsunrise  Co.,Ltd";
		break;
	case 0x2C7155:
		cid = "HiveMotion";
		break;
	case 0x909916:
		cid = "ELVEES NeoTek OJSC";
		break;
	case 0xFC1BFF:
		cid = "V-ZUG AG";
		break;
	case 0xAC5036:
		cid = "Pi-Coral Inc";
		break;
	case 0xFC019E:
		cid = "VIEVU";
		break;
	case 0xF45F69:
		cid = "Matsufu Electronics distribution Company";
		break;
	case 0xF4A294:
		cid = "EAGLE WORLD DEVELOPMENT CO., LIMITED";
		break;
	case 0x2CCD69:
		cid = "Aqavi.com";
		break;
	case 0x947C3E:
		cid = "Polewall Norge AS";
		break;
	case 0xE0D1E6:
		cid = "Aliph dba Jawbone";
		break;
	case 0x28C671:
		cid = "Yota Devices OY";
		break;
	case 0xDC1792:
		cid = "Captivate Network";
		break;
	case 0x7C8306:
		cid = "Glen Dimplex Nordic as";
		break;
	case 0x907A0A:
		cid = "Gebr. Bode GmbH & Co KG";
		break;
	case 0x306112:
		cid = "PAV GmbH";
		break;
	case 0xA0C6EC:
		cid = "ShenZhen ANYK Technology Co.,LTD";
		break;
	case 0xC80258:
		cid = "ITW GSE ApS";
		break;
	case 0x1001CA:
		cid = "Ashley Butterworth";
		break;
	case 0x246AAB:
		cid = "IT-IS International";
		break;
	case 0x28F532:
		cid = "ADD-Engineering BV";
		break;
	case 0xFC4BBC:
		cid = "Sunplus Technology Co., Ltd.";
		break;
	case 0x142D8B:
		cid = "Incipio Technologies, Inc";
		break;
	case 0xCCE8AC:
		cid = "SOYEA Technology Co.,Ltd.";
		break;
	case 0x78D38D:
		cid = "HONGKONG YUNLINK TECHNOLOGY LIMITED";
		break;
	case 0x1C48F9:
		cid = "GN Netcom A/S";
		break;
	case 0x744BE9:
		cid = "EXPLORER HYPERTECH CO.,LTD";
		break;
	case 0xB836D8:
		cid = "Videoswitch";
		break;
	case 0xF835DD:
		cid = "Gemtek Technology Co., Ltd.";
		break;
	case 0x0CF019:
		cid = "Malgn Technology Co., Ltd.";
		break;
	case 0xD46A91:
		cid = "Snap AV";
		break;
	case 0xE8519D:
		cid = "Yeonhab Precision Co.,LTD";
		break;
	case 0x00B78D:
		cid = "Nanjing Shining Electric Automation Co., Ltd";
		break;
	case 0x68E166:
		cid = "Private";
		break;
	case 0x60FEF9:
		cid = "Thomas & Betts";
		break;
	case 0x78FE41:
		cid = "Socus networks";
		break;
	case 0x083571:
		cid = "CASwell INC.";
		break;
	case 0xDCF755:
		cid = "SITRONIK";
		break;
	case 0xACCA8E:
		cid = "ODA Technologies";
		break;
	case 0x6405BE:
		cid = "NEW LIGHT LED";
		break;
	case 0xE03E4A:
		cid = "Cavanagh Group International";
		break;
	case 0x6CB350:
		cid = "Anhui comhigher tech co.,ltd";
		break;
	case 0xA42305:
		cid = "Open Networking Laboratory";
		break;
	case 0x1C86AD:
		cid = "MCT CO., LTD.";
		break;
	case 0x882364:
		cid = "Watchnet DVR Inc";
		break;
	case 0xA05B21:
		cid = "ENVINET GmbH";
		break;
	case 0x50B8A2:
		cid = "ImTech Technologies LLC,";
		break;
	case 0xB04C05:
		cid = "Fresenius Medical Care Deutschland GmbH";
		break;
	case 0xA0EC80:
		cid = "zte corporation";
		break;
	case 0x9046B7:
		cid = "Vadaro Pte Ltd";
		break;
	case 0x1C08C1:
		cid = "Lg Innotek";
		break;
	case 0x201D03:
		cid = "Elatec GmbH";
		break;
	case 0xC06C6D:
		cid = "MagneMotion, Inc.";
		break;
	case 0x74CA25:
		cid = "Calxeda, Inc.";
		break;
	case 0xCCBD35:
		cid = "Steinel GmbH";
		break;
	case 0x788DF7:
		cid = "Hitron Technologies. Inc";
		break;
	case 0x6CECA1:
		cid = "SHENZHEN CLOU ELECTRONICS CO. LTD.";
		break;
	case 0xD862DB:
		cid = "Eno Inc.";
		break;
	case 0x68DB67:
		cid = "Nantong Coship Electronics Co., Ltd";
		break;
	case 0xBC261D:
		cid = "HONG KONG TECON TECHNOLOGY";
		break;
	case 0x888964:
		cid = "GSI Electronics Inc.";
		break;
	case 0x9CA577:
		cid = "Osorno Enterprises Inc.";
		break;
	case 0xC0C3B6:
		cid = "Automatic Systems";
		break;
	case 0xA8294C:
		cid = "Precision Optical Transceivers, Inc.";
		break;
	case 0xD0EB03:
		cid = "Zhehua technology limited";
		break;
	case 0xA0861D:
		cid = "Chengdu Fuhuaxin Technology co.,Ltd";
		break;
	case 0x9498A2:
		cid = "Shanghai LISTEN TECH.LTD";
		break;
	case 0x2CB693:
		cid = "Radware";
		break;
	case 0x88685C:
		cid = "Shenzhen ChuangDao & Perpetual Eternal Technology Co.,Ltd";
		break;
	case 0xB4FE8C:
		cid = "Centro Sicurezza Italia SpA";
		break;
	case 0xD82916:
		cid = "Ascent Communication Technology";
		break;
	case 0x6472D8:
		cid = "GooWi Technology Co.,Limited";
		break;
	case 0x84ACA4:
		cid = "Beijing Novel Super Digital TV Technology Co., Ltd";
		break;
	case 0x3C6FF7:
		cid = "EnTek Systems, Inc.";
		break;
	case 0xB838CA:
		cid = "Kyokko Tsushin System CO.,LTD";
		break;
	case 0x380FE4:
		cid = "Dedicated Network Partners Oy";
		break;
	case 0x847A88:
		cid = "HTC Corporation";
		break;
	case 0x5461EA:
		cid = "Zaplox AB";
		break;
	case 0x78324F:
		cid = "Millennium Group, Inc.";
		break;
	case 0xF05DC8:
		cid = "Duracell Powermat";
		break;
	case 0x48F925:
		cid = "Maestronic";
		break;
	case 0xC0885B:
		cid = "SnD Tech Co., Ltd.";
		break;
	case 0x64C667:
		cid = "Barnes&Noble";
		break;
	case 0xC47DCC:
		cid = "Zebra Technologies Inc";
		break;
	case 0x64535D:
		cid = "Frauscher Sensortechnik";
		break;
	case 0x105F06:
		cid = "Actiontec Electronics, Inc";
		break;
	case 0x841715:
		cid = "GP Electronics (HK) Ltd.";
		break;
	case 0x087999:
		cid = "AIM GmbH";
		break;
	case 0x84C2E4:
		cid = "Jiangsu Qinheng Co., Ltd.";
		break;
	case 0xC0B8B1:
		cid = "BitBox Ltd";
		break;
	case 0x0C722C:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xB01408:
		cid = "LIGHTSPEED INTERNATIONAL CO.";
		break;
	case 0xF8FEA8:
		cid = "Technico Japan Corporation";
		break;
	case 0xA8154D:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xD05099:
		cid = "ASRock Incorporation";
		break;
	case 0x78A106:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xA49EDB:
		cid = "AutoCrib, Inc.";
		break;
	case 0x282CB2:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xD43A65:
		cid = "IGRS Engineering Lab Ltd.";
		break;
	case 0x10B9FE:
		cid = "Lika srl";
		break;
	case 0xD42751:
		cid = "Infopia Co., Ltd";
		break;
	case 0xA895B0:
		cid = "Aker Subsea Ltd";
		break;
	case 0x5C20D0:
		cid = "Asoni Communication Co., Ltd.";
		break;
	case 0xE0C3F3:
		cid = "zte corporation";
		break;
	case 0x104D77:
		cid = "Innovative Computer Engineering";
		break;
	case 0x3C081E:
		cid = "Beijing Yupont Electric Power Technology Co.,Ltd";
		break;
	case 0x7CA15D:
		cid = "GN ReSound A/S";
		break;
	case 0xB4DD15:
		cid = "ControlThings Oy Ab";
		break;
	case 0x3C86A8:
		cid = "Sangshin elecom .co,, LTD";
		break;
	case 0xFCDD55:
		cid = "Shenzhen WeWins wireless Co.,Ltd";
		break;
	case 0xCC0DEC:
		cid = "Cisco SPVTG";
		break;
	case 0x68B094:
		cid = "INESA ELECTRON CO.,LTD";
		break;
	case 0x40E730:
		cid = "DEY Storage Systems, Inc.";
		break;
	case 0xA8D236:
		cid = "Lightware Visual Engineering";
		break;
	case 0x6C8686:
		cid = "Technonia";
		break;
	case 0x84E714:
		cid = "Liang Herng Enterprise,Co.Ltd.";
		break;
	case 0x303D08:
		cid = "GLINTT TES S.A.";
		break;
	case 0x9C541C:
		cid = "Shenzhen My-power Technology Co.,Ltd";
		break;
	case 0xE496AE:
		cid = "ALTOGRAPHICS Inc.";
		break;
	case 0xF80BD0:
		cid = "Datang Telecom communication terminal (Tianjin) Co., Ltd.";
		break;
	case 0x48B9C2:
		cid = "Teletics Inc.";
		break;
	case 0xD046DC:
		cid = "Southwest Research Institute";
		break;
	case 0x046E49:
		cid = "TaiYear Electronic Technology (Suzhou) Co., Ltd";
		break;
	case 0x08606E:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0xBC39A6:
		cid = "CSUN System Technology Co.,LTD";
		break;
	case 0xECB541:
		cid = "SHINANO E and E Co.Ltd.";
		break;
	case 0xD40057:
		cid = "MC Technologies GmbH";
		break;
	case 0x48B8DE:
		cid = "HOMEWINS TECHNOLOGY CO.,LTD.";
		break;
	case 0x1065CF:
		cid = "IQSIM";
		break;
	case 0x849DC5:
		cid = "Centera Photonics Inc.";
		break;
	case 0x580943:
		cid = "Private";
		break;
	case 0x547FA8:
		cid = "TELCO systems, s.r.o.";
		break;
	case 0x5474E6:
		cid = "Webtech Wireless";
		break;
	case 0xAC5D10:
		cid = "Pace Americas";
		break;
	case 0x88F490:
		cid = "Jetmobile Pte Ltd";
		break;
	case 0xE8A364:
		cid = "Signal Path International / Peachtree Audio";
		break;
	case 0xD0D6CC:
		cid = "Wintop";
		break;
	case 0x34C99D:
		cid = "EIDOLON COMMUNICATIONS TECHNOLOGY CO. LTD.";
		break;
	case 0x8C4AEE:
		cid = "GIGA TMS INC";
		break;
	case 0xF46DE2:
		cid = "zte corporation";
		break;
	case 0x04F8C2:
		cid = "Flaircomm Microelectronics, Inc.";
		break;
	case 0x0C93FB:
		cid = "BNS Solutions";
		break;
	case 0x38B5BD:
		cid = "E.G.O. Elektro-Ger";
		break;
	case 0xB85AF7:
		cid = "Ouya, Inc";
		break;
	case 0xE0D9A2:
		cid = "Hippih aps";
		break;
	case 0xF0F669:
		cid = "Motion Analysis Corporation";
		break;
	case 0xF8D7BF:
		cid = "REV Ritter GmbH";
		break;
	case 0x00B56D:
		cid = "David Electronics Co., LTD.";
		break;
	case 0xB461FF:
		cid = "Lumigon A/S";
		break;
	case 0x9038DF:
		cid = "Changzhou Tiannengbo System Co. Ltd.";
		break;
	case 0xCC593E:
		cid = "TOUMAZ LTD";
		break;
	case 0xAC8D14:
		cid = "Smartrove Inc";
		break;
	case 0x18673F:
		cid = "Hanover Displays Limited";
		break;
	case 0xA00ABF:
		cid = "Wieson Technologies Co., Ltd.";
		break;
	case 0x2091D9:
		cid = "I'M SPA";
		break;
	case 0x744D79:
		cid = "Arrive Systems Inc.";
		break;
	case 0xC83D97:
		cid = "Nokia Corporation";
		break;
	case 0x38192F:
		cid = "Nokia Corporation";
		break;
	case 0x141BF0:
		cid = "Intellimedia Systems Ltd";
		break;
	case 0xE45614:
		cid = "Suttle Apparatus";
		break;
	case 0x842BBC:
		cid = "Modelleisenbahn GmbH";
		break;
	case 0xE856D6:
		cid = "NCTech Ltd";
		break;
	case 0x4088E0:
		cid = "Beijing Ereneben Information Technology Limited Shenzhen Branch";
		break;
	case 0x1CF4CA:
		cid = "Private";
		break;
	case 0xF490EA:
		cid = "Deciso B.V.";
		break;
	case 0x942197:
		cid = "Stalmart Technology Limited";
		break;
	case 0xAC9403:
		cid = "Envision Peripherals Inc";
		break;
	case 0xA865B2:
		cid = "DONGGUAN YISHANG ELECTRONIC TECHNOLOGY CO., LIMITED";
		break;
	case 0x60B982:
		cid = "RO.VE.R. Laboratories S.p.A.";
		break;
	case 0xB46238:
		cid = "Exablox";
		break;
	case 0x40704A:
		cid = "Power Idea Technology Limited";
		break;
	case 0xA40BED:
		cid = "Carry Technology Co.,Ltd";
		break;
	case 0x0CD996:
		cid = "Cisco Systems, Inc";
		break;
	case 0xD82DE1:
		cid = "Tricascade Inc.";
		break;
	case 0xC438D3:
		cid = "TAGATEC CO.,LTD";
		break;
	case 0x547398:
		cid = "Toyo Electronics Corporation";
		break;
	case 0xE0AAB0:
		cid = "GENERAL VISION ELECTRONICS CO. LTD.";
		break;
	case 0x68B43A:
		cid = "WaterFurnace International, Inc.";
		break;
	case 0x543968:
		cid = "Edgewater Networks Inc";
		break;
	case 0x985E1B:
		cid = "ConversDigital Co., Ltd.";
		break;
	case 0xB8B7D7:
		cid = "2GIG Technologies";
		break;
	case 0x1048B1:
		cid = "Beijing Duokan Technology Limited";
		break;
	case 0x005D03:
		cid = "Xilinx, Inc";
		break;
	case 0x24EE3A:
		cid = "Chengdu Yingji Electronic Hi-tech Co Ltd";
		break;
	case 0xF82285:
		cid = "Cypress Technology CO., LTD.";
		break;
	case 0x8482F4:
		cid = "Beijing Huasun Unicreate Technology Co., Ltd";
		break;
	case 0x0CC47E:
		cid = "EUCAST Co., Ltd.";
		break;
	case 0xCCE798:
		cid = "My Social Stuff";
		break;
	case 0x50724D:
		cid = "BEG Brueck Electronic GmbH";
		break;
	case 0xB898B0:
		cid = "Atlona Inc.";
		break;
	case 0x2C625A:
		cid = "Finest Security Systems Co., Ltd";
		break;
	case 0x2074CF:
		cid = "Shenzhen Voxtech Co.,Ltd";
		break;
	case 0xACBD0B:
		cid = "IMAC CO.,LTD";
		break;
	case 0xD8D27C:
		cid = "JEMA ENERGY, SA";
		break;
	case 0x10F3DB:
		cid = "Gridco Systems, Inc.";
		break;
	case 0xB01203:
		cid = "Dynamics Hong Kong Limited";
		break;
	case 0x7093F8:
		cid = "Space Monkey, Inc.";
		break;
	case 0x305D38:
		cid = "Beissbarth";
		break;
	case 0x044A50:
		cid = "Ramaxel Technology (Shenzhen) limited company";
		break;
	case 0xA4466B:
		cid = "EOC Technology";
		break;
	case 0x3CF392:
		cid = "Virtualtek. Co. Ltd";
		break;
	case 0x889676:
		cid = "TTC MARCONI s.r.o.";
		break;
	case 0x149FE8:
		cid = "Lenovo Mobile Communication Technology Ltd.";
		break;
	case 0x70B599:
		cid = "Embedded Technologies s.r.o.";
		break;
	case 0xEC4C4D:
		cid = "ZAO NPK RoTeK";
		break;
	case 0xE8D483:
		cid = "ULTIMATE Europe Transportation Equipment GmbH";
		break;
	case 0xACD9D6:
		cid = "tci GmbH";
		break;
	case 0x7493A4:
		cid = "Zebra Technologies Corp.";
		break;
	case 0x9C0DAC:
		cid = "Tymphany HK Limited";
		break;
	case 0x8CD3A2:
		cid = "VisSim AS";
		break;
	case 0x647657:
		cid = "Innovative Security Designs";
		break;
	case 0x60455E:
		cid = "Liptel s.r.o.";
		break;
	case 0x944A09:
		cid = "BitWise Controls";
		break;
	case 0xE8102E:
		cid = "Really Simple Software, Inc";
		break;
	case 0xD48CB5:
		cid = "Cisco Systems, Inc";
		break;
	case 0xD41E35:
		cid = "TOHO Electronics INC.";
		break;
	case 0x700BC0:
		cid = "Dewav Technology Company";
		break;
	case 0x2CD444:
		cid = "FUJITSU LIMITED";
		break;
	case 0xEC1A59:
		cid = "Belkin International Inc.";
		break;
	case 0x60CBFB:
		cid = "AirScape Inc.";
		break;
	case 0x4C5427:
		cid = "Linepro Sp. z o.o.";
		break;
	case 0x3CEAFB:
		cid = "NSE AG";
		break;
	case 0x3476C5:
		cid = "I-O DATA DEVICE, INC.";
		break;
	case 0x407074:
		cid = "Life Technology (China) Co., Ltd";
		break;
	case 0x58BFEA:
		cid = "Cisco Systems, Inc";
		break;
	case 0x7C386C:
		cid = "Real Time Logic";
		break;
	case 0xD8AF3B:
		cid = "Hangzhou Bigbright Integrated communications system Co.,Ltd";
		break;
	case 0x78D34F:
		cid = "Pace-O-Matic, Inc.";
		break;
	case 0x784405:
		cid = "FUJITU(HONG KONG) ELECTRONIC Co.,LTD.";
		break;
	case 0xC03F2A:
		cid = "Biscotti, Inc.";
		break;
	case 0x44B382:
		cid = "Kuang-chi Institute of Advanced Technology";
		break;
	case 0xD80DE3:
		cid = "FXI TECHNOLOGIES AS";
		break;
	case 0x1CE165:
		cid = "Marshal Corporation";
		break;
	case 0x0CC0C0:
		cid = "MAGNETI MARELLI SISTEMAS ELECTRONICOS MEXICO";
		break;
	case 0xAC40EA:
		cid = "C&T Solution Inc.";
		break;
	case 0xBC8B55:
		cid = "NPP ELIKS America Inc. DBA T&M Atlantic";
		break;
	case 0x202598:
		cid = "Teleview";
		break;
	case 0x844915:
		cid = "vArmour Networks, Inc.";
		break;
	case 0xA04CC1:
		cid = "Helixtech Corp.";
		break;
	case 0x1CB243:
		cid = "TDC A/S";
		break;
	case 0x1C51B5:
		cid = "Techaya LTD";
		break;
	case 0x80DB31:
		cid = "Power Quotient International Co., Ltd.";
		break;
	case 0xAC0142:
		cid = "Uriel Technologies SIA";
		break;
	case 0xA007B6:
		cid = "Advanced Technical Support, Inc.";
		break;
	case 0x542A9C:
		cid = "LSY Defense, LLC.";
		break;
	case 0xF89955:
		cid = "Fortress Technology Inc";
		break;
	case 0xB827EB:
		cid = "Raspberry Pi Foundation";
		break;
	case 0xE88DF5:
		cid = "ZNYX Networks, Inc.";
		break;
	case 0x48EA63:
		cid = "Zhejiang Uniview Technologies Co., Ltd.";
		break;
	case 0x0CE5D3:
		cid = "DH electronics GmbH";
		break;
	case 0xC47130:
		cid = "Fon Technology S.L.";
		break;
	case 0x48D7FF:
		cid = "BLANKOM Antennentechnik GmbH";
		break;
	case 0xF47F35:
		cid = "Cisco Systems, Inc";
		break;
	case 0xA0F419:
		cid = "Nokia Corporation";
		break;
	case 0xBCC168:
		cid = "DinBox Sverige AB";
		break;
	case 0x6CAE8B:
		cid = "IBM Corporation";
		break;
	case 0xA4F7D0:
		cid = "LAN Accessories Co., Ltd.";
		break;
	case 0xD4EC0C:
		cid = "Harley-Davidson Motor Company";
		break;
	case 0x6CA96F:
		cid = "TransPacket AS";
		break;
	case 0x48ED80:
		cid = "daesung eltec";
		break;
	case 0xA086EC:
		cid = "SAEHAN HITEC Co., Ltd";
		break;
	case 0xBC4B79:
		cid = "SensingTek";
		break;
	case 0x2818FD:
		cid = "Aditya Infotech Ltd.";
		break;
	case 0xE42C56:
		cid = "Lilee Systems, Ltd.";
		break;
	case 0x50008C:
		cid = "Hong Kong Telecommunications (HKT) Limited";
		break;
	case 0xDCA8CF:
		cid = "New Spin Golf, LLC.";
		break;
	case 0x34BA9A:
		cid = "Asiatelco Technologies Co.";
		break;
	case 0x642DB7:
		cid = "SEUNGIL ELECTRONICS";
		break;
	case 0x008DDA:
		cid = "Link One Co., Ltd.";
		break;
	case 0x08B4CF:
		cid = "Abicom International";
		break;
	case 0x445F7A:
		cid = "Shihlin Electric & Engineering Corp.";
		break;
	case 0x28BA18:
		cid = "NextNav, LLC";
		break;
	case 0x2C36F8:
		cid = "Cisco Systems, Inc";
		break;
	case 0xAC3D05:
		cid = "Instorescreen Aisa";
		break;
	case 0xF48E09:
		cid = "Nokia Corporation";
		break;
	case 0xD443A8:
		cid = "Changzhou Haojie Electric Co., Ltd.";
		break;
	case 0xBCB852:
		cid = "Cybera, Inc.";
		break;
	case 0x70D6B6:
		cid = "Metrum Technologies";
		break;
	case 0x28D576:
		cid = "Premier Wireless, Inc.";
		break;
	case 0x6CE907:
		cid = "Nokia Corporation";
		break;
	case 0x94DF58:
		cid = "IJ Electron CO.,Ltd.";
		break;
	case 0x8C0CA3:
		cid = "Amper";
		break;
	case 0x28940F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x5CEB4E:
		cid = "R. STAHL HMI Systems GmbH";
		break;
	case 0xB8DAF7:
		cid = "Advanced Photonics, Inc.";
		break;
	case 0x2C36A0:
		cid = "Capisco Limited";
		break;
	case 0x800A06:
		cid = "COMTEC co.,ltd";
		break;
	case 0x20FABB:
		cid = "Cambridge Executive Limited";
		break;
	case 0x1C0B52:
		cid = "EPICOM S.A";
		break;
	case 0x747E2D:
		cid = "Beijing Thomson CITIC Digital Technology Co. LTD.";
		break;
	case 0xE80C75:
		cid = "Syncbak, Inc.";
		break;
	case 0x18D66A:
		cid = "Inmarsat";
		break;
	case 0xC85645:
		cid = "Intermas France";
		break;
	case 0x8C604F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x74FF7D:
		cid = "Wren Sound Systems, LLC";
		break;
	case 0x34FC6F:
		cid = "ALCEA";
		break;
	case 0xC0B357:
		cid = "Yoshiki Electronics Industry Ltd.";
		break;
	case 0xD8BF4C:
		cid = "Victory Concept Electronics Limited";
		break;
	case 0xC0DF77:
		cid = "Conrad Electronic SE";
		break;
	case 0xC86000:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x645299:
		cid = "The Chamberlain Group, Inc";
		break;
	case 0xBC125E:
		cid = "Beijing  WisVideo  INC.";
		break;
	case 0xC80718:
		cid = "TDSi";
		break;
	case 0xB4944E:
		cid = "WeTelecom Co., Ltd.";
		break;
	case 0x345B11:
		cid = "EVI HEAT AB";
		break;
	case 0x988BAD:
		cid = "Corintech Ltd.";
		break;
	case 0x4050E0:
		cid = "Milton Security Group LLC";
		break;
	case 0xC87CBC:
		cid = "Valink Co., Ltd.";
		break;
	case 0x409FC7:
		cid = "BAEKCHUN I&C Co., Ltd.";
		break;
	case 0xC87D77:
		cid = "Shenzhen Kingtech Communication Equipment Co.,Ltd";
		break;
	case 0xA078BA:
		cid = "Pantech Co., Ltd.";
		break;
	case 0xD4507A:
		cid = "CEIVA Logic, Inc";
		break;
	case 0x9CC7D1:
		cid = "SHARP Corporation";
		break;
	case 0x00B9F6:
		cid = "Shenzhen Super Rich Electronics Co.,Ltd";
		break;
	case 0x9C5C8D:
		cid = "FIREMAX INDÚSTRIA E COMÉRCIO DE PRODUTOS ELETRÔNICOS  LTDA";
		break;
	case 0xE01E07:
		cid = "Anite Telecoms  US. Inc";
		break;
	case 0xB06CBF:
		cid = "3ality Digital Systems GmbH";
		break;
	case 0x20AA4B:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x080D84:
		cid = "GECO, Inc.";
		break;
	case 0x88E712:
		cid = "Whirlpool Corporation";
		break;
	case 0x644BF0:
		cid = "CalDigit, Inc";
		break;
	case 0x2838CF:
		cid = "Gen2wave";
		break;
	case 0x50FC30:
		cid = "Treehouse Labs";
		break;
	case 0x70704C:
		cid = "Purple Communications, Inc";
		break;
	case 0xF47ACC:
		cid = "SolidFire, Inc.";
		break;
	case 0x24BC82:
		cid = "Dali Wireless, Inc.";
		break;
	case 0x64C5AA:
		cid = "South African Broadcasting Corporation";
		break;
	case 0x64ED62:
		cid = "WOORI SYSTEMS Co., Ltd";
		break;
	case 0xC4237A:
		cid = "WhizNets Inc.";
		break;
	case 0x8430E5:
		cid = "SkyHawke Technologies, LLC";
		break;
	case 0x2C002C:
		cid = "UNOWHY";
		break;
	case 0x0481AE:
		cid = "Clack Corporation";
		break;
	case 0xC09132:
		cid = "Patriot Memory";
		break;
	case 0xA898C6:
		cid = "Shinbo Co., Ltd.";
		break;
	case 0x006BA0:
		cid = "SHENZHEN UNIVERSAL INTELLISYS PTE LTD";
		break;
	case 0x502690:
		cid = "FUJITSU LIMITED";
		break;
	case 0xB4211D:
		cid = "Beijing GuangXin Technology Co., Ltd";
		break;
	case 0xE039D7:
		cid = "Plexxi, Inc.";
		break;
	case 0xFC946C:
		cid = "UBIVELOX";
		break;
	case 0x38DE60:
		cid = "Mohlenhoff GmbH";
		break;
	case 0x2839E7:
		cid = "Preceno Technology Pte.Ltd.";
		break;
	case 0x28D997:
		cid = "Yuduan Mobile Co., Ltd.";
		break;
	case 0x886B76:
		cid = "CHINA HOPEFUL GROUP HOPEFUL ELECTRIC CO.,LTD";
		break;
	case 0xA0CF5B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x18C451:
		cid = "Tucson Embedded Systems";
		break;
	case 0x582EFE:
		cid = "Lighting Science Group";
		break;
	case 0xF8D3A9:
		cid = "AXAN Networks";
		break;
	case 0x5CD4AB:
		cid = "Zektor";
		break;
	case 0xF8462D:
		cid = "SYNTEC Incorporation";
		break;
	case 0x58677F:
		cid = "Clare Controls Inc.";
		break;
	case 0xCCA374:
		cid = "Guangdong Guanglian Electronic Technology Co.Ltd";
		break;
	case 0x50F61A:
		cid = "Kunshan JADE Technologies co., Ltd.";
		break;
	case 0x20BBC6:
		cid = "Jabil Circuit Hungary Ltd.";
		break;
	case 0x2C9717:
		cid = "I.C.Y. B.V.";
		break;
	case 0x64E84F:
		cid = "Serialway Communication Technology Co. Ltd";
		break;
	case 0x941D1C:
		cid = "TLab West Systems AB";
		break;
	case 0x40667A:
		cid = "mediola - connected living AG";
		break;
	case 0x64808B:
		cid = "VG Controls, Inc.";
		break;
	case 0x7C6B52:
		cid = "Tigaro Wireless";
		break;
	case 0x046D42:
		cid = "Bryston Ltd.";
		break;
	case 0xD0CF5E:
		cid = "Energy Micro AS";
		break;
	case 0x644D70:
		cid = "dSPACE GmbH";
		break;
	case 0x807693:
		cid = "Newag SA";
		break;
	case 0xFC1794:
		cid = "InterCreative Co., Ltd";
		break;
	case 0x181420:
		cid = "TEB SAS";
		break;
	case 0xD03110:
		cid = "Ingenic Semiconductor Co.,Ltd";
		break;
	case 0xAC81F3:
		cid = "Nokia Corporation";
		break;
	case 0x94C6EB:
		cid = "NOVA electronics, Inc.";
		break;
	case 0x10F9EE:
		cid = "Nokia Corporation";
		break;
	case 0x80971B:
		cid = "Altenergy Power System,Inc.";
		break;
	case 0x1071F9:
		cid = "Cloud Telecomputers, LLC";
		break;
	case 0xC47B2F:
		cid = "Beijing JoinHope Image Technology Ltd.";
		break;
	case 0x18F650:
		cid = "Multimedia Pacific Limited";
		break;
	case 0x704AAE:
		cid = "Xstream Flow (Pty) Ltd";
		break;
	case 0x9C934E:
		cid = "Xerox Corporation";
		break;
	case 0x3C26D5:
		cid = "Sotera Wireless";
		break;
	case 0xFC2E2D:
		cid = "Lorom Industrial Co.LTD.";
		break;
	case 0xE84E06:
		cid = "EDUP INTERNATIONAL (HK) CO., LTD";
		break;
	case 0xE8C320:
		cid = "Austco Communication Systems Pty Ltd";
		break;
	case 0xD8973B:
		cid = "Artesyn Embedded Technologies";
		break;
	case 0x008D4E:
		cid = "CJSC NII STT";
		break;
	case 0x10C586:
		cid = "BIO SOUND LAB CO., LTD.";
		break;
	case 0xE8BA70:
		cid = "Cisco Systems, Inc";
		break;
	case 0x6473E2:
		cid = "Arbiter Systems, Inc.";
		break;
	case 0x00A1DE:
		cid = "ShenZhen ShiHua Technology CO.,LTD";
		break;
	case 0x04E1C8:
		cid = "IMS Soluções em Energia Ltda.";
		break;
	case 0xE4DD79:
		cid = "En-Vision America, Inc.";
		break;
	case 0x60190C:
		cid = "RRAMAC";
		break;
	case 0x34A709:
		cid = "Trevil srl";
		break;
	case 0xF80332:
		cid = "Khomp";
		break;
	case 0xC40F09:
		cid = "Hermes electronic GmbH";
		break;
	case 0x908D1D:
		cid = "GH Technologies";
		break;
	case 0xCCB55A:
		cid = "Fraunhofer ITWM";
		break;
	case 0x587521:
		cid = "CJSC RTSoft";
		break;
	case 0x64D989:
		cid = "Cisco Systems, Inc";
		break;
	case 0x44D3CA:
		cid = "Cisco Systems, Inc";
		break;
	case 0x24DAB6:
		cid = "Sistemas de Gestión Energética S.A. de C.V";
		break;
	case 0xB8F5E7:
		cid = "WayTools, LLC";
		break;
	case 0x148A70:
		cid = "ADS GmbH";
		break;
	case 0xFC0012:
		cid = "Toshiba Samsung Storage Technolgoy Korea Corporation";
		break;
	case 0xF44450:
		cid = "BND Co., Ltd.";
		break;
	case 0x644346:
		cid = "GuangDong Quick Network Computer CO.,LTD";
		break;
	case 0xFCE892:
		cid = "Hangzhou Lancable Technology Co.,Ltd";
		break;
	case 0xB8B42E:
		cid = "Gionee Communication Equipment Co,Ltd.ShenZhen";
		break;
	case 0xA84041:
		cid = "Dragino Technology Co., Limited";
		break;
	case 0xDCF05D:
		cid = "Letta Teknoloji";
		break;
	case 0xD05A0F:
		cid = "I-BT DIGITAL CO.,LTD";
		break;
	case 0x7CDD20:
		cid = "IOXOS Technologies S.A.";
		break;
	case 0xA0E9DB:
		cid = "Ningbo FreeWings Technologies Co.,Ltd";
		break;
	case 0x9C7BD2:
		cid = "NEOLAB Convergence";
		break;
	case 0x900D66:
		cid = "Digimore Electronics Co., Ltd";
		break;
	case 0x48C862:
		cid = "Simo Wireless,Inc.";
		break;
	case 0x0CF3EE:
		cid = "EM Microelectronic";
		break;
	case 0xF0C27C:
		cid = "Mianyang Netop Telecom Equipment Co.,Ltd.";
		break;
	case 0xBC35E5:
		cid = "Hydro Systems Company";
		break;
	case 0x283410:
		cid = "Enigma Diagnostics Limited";
		break;
	case 0x28CCFF:
		cid = "Corporacion Empresarial Altra SL";
		break;
	case 0x14B73D:
		cid = "ARCHEAN Technologies";
		break;
	case 0xA433D1:
		cid = "Fibrlink Communications Co.,Ltd.";
		break;
	case 0x84DE3D:
		cid = "Crystal Vision Ltd";
		break;
	case 0xB4AA4D:
		cid = "Ensequence, Inc.";
		break;
	case 0x040A83:
		cid = "Alcatel-Lucent";
		break;
	case 0xB42A39:
		cid = "ORBIT MERRET, spol. s r. o.";
		break;
	case 0x18AEBB:
		cid = "Siemens Convergence Creators GmbH&Co.KG";
		break;
	case 0x3891FB:
		cid = "Xenox Holding BV";
		break;
	case 0x50FAAB:
		cid = "L-tek d.o.o.";
		break;
	case 0xA8E018:
		cid = "Nokia Corporation";
		break;
	case 0x44AAE8:
		cid = "Nanotec Electronic GmbH & Co. KG";
		break;
	case 0xD8DF0D:
		cid = "beroNet GmbH";
		break;
	case 0xD8C068:
		cid = "Netgenetech.co.,ltd.";
		break;
	case 0x50E549:
		cid = "GIGA-BYTE TECHNOLOGY CO.,LTD.";
		break;
	case 0xA8FCB7:
		cid = "Consolidated Resource Imaging";
		break;
	case 0xF87B8C:
		cid = "Amped Wireless";
		break;
	case 0x44D2CA:
		cid = "Anvia TV Oy";
		break;
	case 0x4C1A3A:
		cid = "PRIMA Research And Production Enterprise Ltd.";
		break;
	case 0xAC0613:
		cid = "Senselogix Ltd";
		break;
	case 0xCCF67A:
		cid = "Ayecka Communication Systems LTD";
		break;
	case 0x00BB8E:
		cid = "HME Co., Ltd.";
		break;
	case 0xC0A26D:
		cid = "Abbott Point of Care";
		break;
	case 0x205B2A:
		cid = "Private";
		break;
	case 0xF8769B:
		cid = "Neopis Co., Ltd.";
		break;
	case 0x08E672:
		cid = "JEBSEE ELECTRONICS CO.,LTD.";
		break;
	case 0x58E476:
		cid = "CENTRON COMMUNICATIONS TECHNOLOGIES FUJIAN CO.,LTD";
		break;
	case 0xB435F7:
		cid = "Zhejiang Pearmain Electronics Co.ltd.";
		break;
	case 0x0C6E4F:
		cid = "PrimeVOLT Co., Ltd.";
		break;
	case 0x685B36:
		cid = "POWERTECH INDUSTRIAL CO., LTD.";
		break;
	case 0x983000:
		cid = "Beijing KEMACOM Technologies Co., Ltd.";
		break;
	case 0xF81D93:
		cid = "Longdhua(Beijing) Controls Technology Co.,Ltd";
		break;
	case 0xD0EB9E:
		cid = "Seowoo Inc.";
		break;
	case 0x8C5FDF:
		cid = "Beijing Railway Signal Factory";
		break;
	case 0x586D8F:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x14C21D:
		cid = "Sabtech Industries";
		break;
	case 0x74B00C:
		cid = "Network Video Technologies, Inc";
		break;
	case 0xC88439:
		cid = "Sunrise Technologies";
		break;
	case 0x44E4D9:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0054AF:
		cid = "Continental Automotive Systems Inc.";
		break;
	case 0xEC7D9D:
		cid = "MEI";
		break;
	case 0x9C95F8:
		cid = "SmartDoor Systems, LLC";
		break;
	case 0xD075BE:
		cid = "Reno A&E";
		break;
	case 0x7C6C39:
		cid = "PIXSYS SRL";
		break;
	case 0x9C5D95:
		cid = "VTC Electronics Corp.";
		break;
	case 0xDC05ED:
		cid = "Nabtesco  Corporation";
		break;
	case 0xFC8329:
		cid = "Trei technics";
		break;
	case 0x94E848:
		cid = "FYLDE MICRO LTD";
		break;
	case 0xAC5E8C:
		cid = "Utillink";
		break;
	case 0xBC99BC:
		cid = "FonSee Technology Inc.";
		break;
	case 0x986022:
		cid = "EMW Co., Ltd.";
		break;
	case 0x803457:
		cid = "OT Systems Limited";
		break;
	case 0xB83D4E:
		cid = "Shenzhen Cultraview Digital Technology Co.,Ltd Shanghai Branch";
		break;
	case 0xCCF3A5:
		cid = "Chi Mei Communication Systems, Inc";
		break;
	case 0xC4242E:
		cid = "Galvanic Applied Sciences Inc";
		break;
	case 0x6400F1:
		cid = "Cisco Systems, Inc";
		break;
	case 0x04C5A4:
		cid = "Cisco Systems, Inc";
		break;
	case 0x3CA72B:
		cid = "MRV Communications (Networks) LTD";
		break;
	case 0x584C19:
		cid = "Chongqing Guohong Technology Development Company Limited";
		break;
	case 0xD0A311:
		cid = "Neuberger Gebäudeautomation GmbH";
		break;
	case 0x10A13B:
		cid = "FUJIKURA RUBBER LTD.";
		break;
	case 0xF4E142:
		cid = "Delta Elektronika BV";
		break;
	case 0xF00248:
		cid = "SmarteBuilding";
		break;
	case 0x2CDD0C:
		cid = "Discovergy GmbH";
		break;
	case 0x40B2C8:
		cid = "Nortel Networks";
		break;
	case 0x486B91:
		cid = "Fleetwood Group Inc.";
		break;
	case 0xF43814:
		cid = "Shanghai Howell Electronic Co.,Ltd";
		break;
	case 0x20AA25:
		cid = "IP-NET LLC";
		break;
	case 0xECBBAE:
		cid = "Digivoice Tecnologia em Eletronica Ltda";
		break;
	case 0xDC2008:
		cid = "ASD Electronics Ltd";
		break;
	case 0x088DC8:
		cid = "Ryowa Electronics Co.,Ltd";
		break;
	case 0xD491AF:
		cid = "Electroacustica General Iberica, S.A.";
		break;
	case 0x1CDF0F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x34DF2A:
		cid = "Fujikon Industrial Co.,Limited";
		break;
	case 0xC88447:
		cid = "Beautiful Enterprise Co., Ltd";
		break;
	case 0xC88B47:
		cid = "Nolangroup S.P.A con Socio Unico";
		break;
	case 0x24BA30:
		cid = "Technical Consumer Products, Inc.";
		break;
	case 0x74D675:
		cid = "WYMA Tecnologia";
		break;
	case 0xD01CBB:
		cid = "Beijing Ctimes Digital Technology Co., Ltd.";
		break;
	case 0x9481A4:
		cid = "Azuray Technologies";
		break;
	case 0xBCE09D:
		cid = "Eoslink";
		break;
	case 0x346F92:
		cid = "White Rodgers Division";
		break;
	case 0x8CDB25:
		cid = "ESG Solutions";
		break;
	case 0x641A22:
		cid = "Heliospectra AB";
		break;
	case 0x30142D:
		cid = "Piciorgros GmbH";
		break;
	case 0xE441E6:
		cid = "Ottec Technology GmbH";
		break;
	case 0x10E2D5:
		cid = "Qi Hardware Inc.";
		break;
	case 0x7CDA84:
		cid = "Dongnian Networks Inc.";
		break;
	case 0xA036FA:
		cid = "Ettus Research LLC";
		break;
	case 0xEC836C:
		cid = "RM Tech Co., Ltd.";
		break;
	case 0x6083B2:
		cid = "GkWare e.K.";
		break;
	case 0x80D019:
		cid = "Embed, Inc";
		break;
	case 0xD41296:
		cid = "Anobit Technologies Ltd.";
		break;
	case 0xB8FF6F:
		cid = "Shanghai Typrotech Technology Co.Ltd";
		break;
	case 0xDC9C52:
		cid = "Sapphire Technology Limited.";
		break;
	case 0x68122D:
		cid = "Special Instrument Development Co., Ltd.";
		break;
	case 0x649B24:
		cid = "V Technology Co., Ltd.";
		break;
	case 0x0475F5:
		cid = "CSST";
		break;
	case 0xBC20BA:
		cid = "Inspur (Shandong) Electronic Information Co., Ltd";
		break;
	case 0x249442:
		cid = "OPEN ROAD SOLUTIONS , INC.";
		break;
	case 0xE0F379:
		cid = "Vaddio";
		break;
	case 0xB09AE2:
		cid = "STEMMER IMAGING GmbH";
		break;
	case 0xCCD811:
		cid = "Aiconn Technology Corporation";
		break;
	case 0x78D004:
		cid = "Neousys Technology Inc.";
		break;
	case 0x78A051:
		cid = "iiNet Labs Pty Ltd";
		break;
	case 0x58A76F:
		cid = "iD corporation";
		break;
	case 0x44599F:
		cid = "Criticare Systems, Inc";
		break;
	case 0x3C2F3A:
		cid = "SFORZATO Corp.";
		break;
	case 0xEC9233:
		cid = "Eddyfi NDT Inc";
		break;
	case 0xECE90B:
		cid = "SISTEMA SOLUCOES ELETRONICAS LTDA - EASYTECH";
		break;
	case 0xA08C9B:
		cid = "Xtreme Technologies Corp";
		break;
	case 0x607688:
		cid = "Velodyne";
		break;
	case 0x980EE4:
		cid = "Private";
		break;
	case 0xE828D5:
		cid = "Cots Technology";
		break;
	case 0x08D5C0:
		cid = "Seers Technology Co., Ltd";
		break;
	case 0x8CB64F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x6C33A9:
		cid = "Magicjack LP";
		break;
	case 0x08B7EC:
		cid = "Wireless Seismic";
		break;
	case 0xBC71C1:
		cid = "XTrillion, Inc.";
		break;
	case 0x0C469D:
		cid = "MS Sedco";
		break;
	case 0xE0E8E8:
		cid = "Olive Telecommunication Pvt. Ltd";
		break;
	case 0x0C3C65:
		cid = "Dome Imaging Inc";
		break;
	case 0x942053:
		cid = "Nokia Corporation";
		break;
	case 0xD49C8E:
		cid = "University of FUKUI";
		break;
	case 0x2CB0DF:
		cid = "Soliton Technologies Pvt Ltd";
		break;
	case 0x5CF3FC:
		cid = "IBM Corp";
		break;
	case 0xD43D67:
		cid = "Carma Industries Inc.";
		break;
	case 0x00BD27:
		cid = "Exar Corp.";
		break;
	case 0xC8A729:
		cid = "SYStronics Co., Ltd.";
		break;
	case 0x6C9CE9:
		cid = "Nimble Storage";
		break;
	case 0x700258:
		cid = "01DB-METRAVIB";
		break;
	case 0x20FDF1:
		cid = "3COM EUROPE LTD";
		break;
	case 0x389592:
		cid = "Beijing Tendyron Corporation";
		break;
	case 0x705EAA:
		cid = "Action Target, Inc.";
		break;
	case 0x0C8D98:
		cid = "TOP EIGHT IND CORP";
		break;
	case 0x30493B:
		cid = "Nanjing Z-Com Wireless Co.,Ltd";
		break;
	case 0x68DB96:
		cid = "OPWILL Technologies CO .,LTD";
		break;
	case 0x00F860:
		cid = "PT. Panggung Electric Citrabuana";
		break;
	case 0xFCEDB9:
		cid = "Arrayent";
		break;
	case 0x44ED57:
		cid = "Longicorn, inc.";
		break;
	case 0xC8A1B6:
		cid = "Shenzhen Longway Technologies Co., Ltd";
		break;
	case 0x641E81:
		cid = "Dowslake Microsystems";
		break;
	case 0x88ACC1:
		cid = "Generiton Co., Ltd.";
		break;
	case 0x785712:
		cid = "Mobile Integration Workgroup";
		break;
	case 0x380A0A:
		cid = "Sky-City Communication and Electronics Limited Company";
		break;
	case 0x141BBD:
		cid = "Volex Inc.";
		break;
	case 0x78C6BB:
		cid = "Innovasic, Inc.";
		break;
	case 0xDC4EDE:
		cid = "SHINYEI TECHNOLOGY CO., LTD.";
		break;
	case 0x888B5D:
		cid = "Storage Appliance Corporation";
		break;
	case 0xF0F842:
		cid = "KEEBOX, Inc.";
		break;
	case 0x78A714:
		cid = "Amphenol";
		break;
	case 0xF450EB:
		cid = "Telechips Inc";
		break;
	case 0x988EDD:
		cid = "TE Connectivity Limerick";
		break;
	case 0x98FC11:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x180C77:
		cid = "Westinghouse Electric Company, LLC";
		break;
	case 0xACA016:
		cid = "Cisco Systems, Inc";
		break;
	case 0xE4AD7D:
		cid = "SCL Elements";
		break;
	case 0x40D40E:
		cid = "Biodata Ltd";
		break;
	case 0x7C051E:
		cid = "RAFAEL LTD.";
		break;
	case 0x58570D:
		cid = "Danfoss Solar Inverters";
		break;
	case 0x0C826A:
		cid = "Wuhan Huagong Genuine Optics Technology Co., Ltd";
		break;
	case 0x38C7BA:
		cid = "CS Services Co.,Ltd.";
		break;
	case 0x70D57E:
		cid = "Scalar Corporation";
		break;
	case 0x7866AE:
		cid = "ZTEC Instruments, Inc.";
		break;
	case 0x78818F:
		cid = "Server Racks Australia Pty Ltd";
		break;
	case 0xE0589E:
		cid = "Laerdal Medical";
		break;
	case 0x44D63D:
		cid = "Talari Networks";
		break;
	case 0x58FD20:
		cid = "Bravida Sakerhet AB";
		break;
	case 0x9835B8:
		cid = "Assembled Products Corporation";
		break;
	case 0x240B2A:
		cid = "Viettel Group";
		break;
	case 0x68E41F:
		cid = "Unglaube Identech GmbH";
		break;
	case 0x84F64C:
		cid = "Cross Point BV";
		break;
	case 0x90513F:
		cid = "Elettronica Santerno SpA";
		break;
	case 0x7CA29B:
		cid = "D.SignT GmbH & Co. KG";
		break;
	case 0x34AAEE:
		cid = "Mikrovisatos Servisas UAB";
		break;
	case 0xA40CC3:
		cid = "Cisco Systems, Inc";
		break;
	case 0x34E0D7:
		cid = "DONGGUAN QISHENG ELECTRONICS INDUSTRIAL CO., LTD";
		break;
	case 0x40520D:
		cid = "Pico Technology";
		break;
	case 0x543131:
		cid = "Raster Vision Ltd";
		break;
	case 0x90E0F0:
		cid = "IEEE 1722a Working Group";
		break;
	case 0x1C6F65:
		cid = "GIGA-BYTE TECHNOLOGY CO.,LTD.";
		break;
	case 0xF0AD4E:
		cid = "Globalscale Technologies, Inc.";
		break;
	case 0x903D5A:
		cid = "Shenzhen Wision Technology Holding Limited";
		break;
	case 0x609AA4:
		cid = "GVI SECURITY INC.";
		break;
	case 0xF0ED1E:
		cid = "Bilkon Bilgisayar Kontrollu Cih. Im.Ltd.";
		break;
	case 0x24A937:
		cid = "PURE Storage";
		break;
	case 0x348302:
		cid = "iFORCOM Co., Ltd";
		break;
	case 0x949C55:
		cid = "Alta Data Technologies";
		break;
	case 0x389F83:
		cid = "OTN Systems N.V.";
		break;
	case 0x8C541D:
		cid = "LGE";
		break;
	case 0x003A9D:
		cid = "NEC Platforms, Ltd.";
		break;
	case 0x905446:
		cid = "TES ELECTRONIC SOLUTIONS";
		break;
	case 0xDC7B94:
		cid = "Cisco Systems, Inc";
		break;
	case 0x68234B:
		cid = "Nihon Dengyo Kousaku";
		break;
	case 0x18422F:
		cid = "Alcatel Lucent";
		break;
	case 0xA4BE61:
		cid = "EutroVision System, Inc.";
		break;
	case 0xE06290:
		cid = "Jinan Jovision Science & Technology Co., Ltd.";
		break;
	case 0xA01859:
		cid = "Shenzhen Yidashi Electronics Co Ltd";
		break;
	case 0x042234:
		cid = "Wireless Standard Extensions";
		break;
	case 0x7812B8:
		cid = "ORANTEK LIMITED";
		break;
	case 0xF0B6EB:
		cid = "Poslab Technology Co., Ltd.";
		break;
	case 0xFCCCE4:
		cid = "Ascon Ltd.";
		break;
	case 0x34862A:
		cid = "Heinz Lackmann GmbH & Co KG";
		break;
	case 0x842141:
		cid = "Shenzhen Ginwave Technologies Ltd.";
		break;
	case 0xB4ED54:
		cid = "Wohler Technologies";
		break;
	case 0x544249:
		cid = "Sony Corporation";
		break;
	case 0x24DBAD:
		cid = "ShopperTrak RCT Corporation";
		break;
	case 0xCC69B0:
		cid = "Global Traffic Technologies, LLC";
		break;
	case 0x2872C5:
		cid = "Smartmatic Corp";
		break;
	case 0xB8A3E0:
		cid = "BenRui Technology Co.,Ltd";
		break;
	case 0xB8F732:
		cid = "Aryaka Networks Inc";
		break;
	case 0x70828E:
		cid = "OleumTech Corporation";
		break;
	case 0x502A7E:
		cid = "Smart electronic GmbH";
		break;
	case 0xF0264C:
		cid = "Dr. Sigrist AG";
		break;
	case 0x3C1CBE:
		cid = "JADAK LLC";
		break;
	case 0xA8995C:
		cid = "aizo ag";
		break;
	case 0xF445ED:
		cid = "Portable Innovation Technology Ltd.";
		break;
	case 0x6C32DE:
		cid = "Indieon Technologies Pvt. Ltd.";
		break;
	case 0xFCCF62:
		cid = "IBM Corp";
		break;
	case 0xB09074:
		cid = "Fulan Electronics Limited";
		break;
	case 0x2CA835:
		cid = "RIM";
		break;
	case 0x94F692:
		cid = "Geminico co.,Ltd.";
		break;
	case 0x8C736E:
		cid = "FUJITSU LIMITED";
		break;
	case 0x30EFD1:
		cid = "Alstom Strongwish (Shenzhen) Co., Ltd.";
		break;
	case 0xC835B8:
		cid = "Ericsson, EAB/RWI/K";
		break;
	case 0x243C20:
		cid = "Dynamode Group";
		break;
	case 0x70D5E7:
		cid = "Wellcore Corporation";
		break;
	case 0x3CF72A:
		cid = "Nokia Corporation";
		break;
	case 0xFCE192:
		cid = "Sichuan Jinwangtong Electronic Science&Technology Co,.Ltd";
		break;
	case 0xF8912A:
		cid = "GLP German Light Products GmbH";
		break;
	case 0xE02630:
		cid = "Intrigue Technologies, Inc.";
		break;
	case 0x8C9236:
		cid = "Aus.Linx Technology Co., Ltd.";
		break;
	case 0x4012E4:
		cid = "Compass-EOS";
		break;
	case 0xF8DC7A:
		cid = "Variscite LTD";
		break;
	case 0x003A9C:
		cid = "Cisco Systems, Inc";
		break;
	case 0xE8E776:
		cid = "Shenzhen Kootion Technology Co., Ltd";
		break;
	case 0x702F97:
		cid = "Aava Mobile Oy";
		break;
	case 0x9018AE:
		cid = "Shanghai Meridian Technologies, Co. Ltd.";
		break;
	case 0x0494A1:
		cid = "CATCH THE WIND INC";
		break;
	case 0x2C3427:
		cid = "ERCO & GENER";
		break;
	case 0xB42CBE:
		cid = "Direct Payment Solutions Limited";
		break;
	case 0xF47626:
		cid = "Viltechmeda UAB";
		break;
	case 0xEC4476:
		cid = "Cisco Systems, Inc";
		break;
	case 0x9CEBE8:
		cid = "BizLink (Kunshan) Co.,Ltd";
		break;
	case 0x88ED1C:
		cid = "Cudo Communication Co., Ltd.";
		break;
	case 0xB05B1F:
		cid = "THERMO FISHER SCIENTIFIC S.P.A.";
		break;
	case 0x743256:
		cid = "NT-ware Systemprg GmbH";
		break;
	case 0x003AAF:
		cid = "BlueBit Ltd.";
		break;
	case 0xC0BAE6:
		cid = "Application Solutions (Electronics and Vision) Ltd";
		break;
	case 0x20BFDB:
		cid = "DVL";
		break;
	case 0x889821:
		cid = "TERAON";
		break;
	case 0xCC5076:
		cid = "Ocom Communications, Inc.";
		break;
	case 0x7C2CF3:
		cid = "Secure Electrans Ltd";
		break;
	case 0x304174:
		cid = "ALTEC LANSING LLC";
		break;
	case 0x7830E1:
		cid = "UltraClenz, LLC";
		break;
	case 0xFCFBFB:
		cid = "Cisco Systems, Inc";
		break;
	case 0x1C129D:
		cid = "IEEE PES PSRC/SUB    ";
		break;
	case 0xB40832:
		cid = "TC Communications";
		break;
	case 0x002720:
		cid = "NEW-SOL COM";
		break;
	case 0x002712:
		cid = "MaxVision LLC";
		break;
	case 0x00270F:
		cid = "Envisionnovation Inc";
		break;
	case 0x0026D7:
		cid = "KM Electornic Technology Co., Ltd.";
		break;
	case 0x0026D1:
		cid = "S Squared Innovations Inc.";
		break;
	case 0x0026CB:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0026C4:
		cid = "Cadmos microsystems S.r.l.";
		break;
	case 0x0026BE:
		cid = "Schoonderbeek Elektronica Systemen B.V.";
		break;
	case 0x0026B2:
		cid = "Setrix GmbH";
		break;
	case 0x0026AC:
		cid = "Shanghai LUSTER Teraband photonic Co., Ltd.";
		break;
	case 0x0026B1:
		cid = "Navis Auto Motive Systems, Inc.";
		break;
	case 0x0026A7:
		cid = "CONNECT SRL";
		break;
	case 0x0026A1:
		cid = "Megger";
		break;
	case 0x0026A2:
		cid = "Instrumentation Technology Systems";
		break;
	case 0x00269B:
		cid = "SOKRAT Ltd.";
		break;
	case 0x002695:
		cid = "ZT Group Int'l Inc";
		break;
	case 0x00268F:
		cid = "MTA SpA";
		break;
	case 0x6C8CDB:
		cid = "Otus Technologies Ltd";
		break;
	case 0x401597:
		cid = "Protect America, Inc.";
		break;
	case 0x60391F:
		cid = "ABB Ltd";
		break;
	case 0xA07332:
		cid = "Cashmaster International Limited";
		break;
	case 0x7C7BE4:
		cid = "Z'SEDAI KENKYUSHO CORPORATION";
		break;
	case 0x40EF4C:
		cid = "Fihonest communication co.,Ltd";
		break;
	case 0x24CF21:
		cid = "Shenzhen State Micro Technology Co., Ltd";
		break;
	case 0x04B3B6:
		cid = "Seamap (UK) Ltd";
		break;
	case 0x10BAA5:
		cid = "GANA I&C CO., LTD";
		break;
	case 0x586ED6:
		cid = "Private";
		break;
	case 0xE09153:
		cid = "XAVi Technologies Corp.";
		break;
	case 0xCC0080:
		cid = "BETTINI SRL";
		break;
	case 0x644BC3:
		cid = "Shanghai WOASiS Telecommunications Ltd., Co.";
		break;
	case 0x0CE709:
		cid = "Fox Crypto B.V.";
		break;
	case 0x002703:
		cid = "Testech Electronics Pte Ltd";
		break;
	case 0x0026FD:
		cid = "Interactive Intelligence";
		break;
	case 0x0026F6:
		cid = "Military Communication Institute";
		break;
	case 0x0026F0:
		cid = "cTrixs International GmbH.";
		break;
	case 0x0026EA:
		cid = "Cheerchip Electronic Technology (ShangHai) Co., Ltd.";
		break;
	case 0x0026E3:
		cid = "DTI";
		break;
	case 0x0026DD:
		cid = "Fival Science & Technology Co.,Ltd.";
		break;
	case 0x0026DE:
		cid = "FDI MATELEC";
		break;
	case 0x54B620:
		cid = "SUHDOL E&C Co.Ltd.";
		break;
	case 0xC4AAA1:
		cid = "SUMMIT DEVELOPMENT, spol.s r.o.";
		break;
	case 0x78C40E:
		cid = "H&D Wireless";
		break;
	case 0x9C5B96:
		cid = "NMR Corporation";
		break;
	case 0xE4FFDD:
		cid = "ELECTRON INDIA";
		break;
	case 0xF852DF:
		cid = "VNL Europe AB";
		break;
	case 0x1CF061:
		cid = "SCAPS GmbH";
		break;
	case 0xA893E6:
		cid = "JIANGXI JINGGANGSHAN CKING COMMUNICATION TECHNOLOGY CO.,LTD";
		break;
	case 0x00267C:
		cid = "Metz-Werke GmbH & Co KG";
		break;
	case 0x002676:
		cid = "COMMidt AS";
		break;
	case 0x00266F:
		cid = "Coordiwise Technology Corp.";
		break;
	case 0x002670:
		cid = "Cinch Connectors";
		break;
	case 0x002663:
		cid = "Shenzhen Huitaiwei Tech. Ltd, co.";
		break;
	case 0x0025CD:
		cid = "Skylane Optics";
		break;
	case 0x0025C8:
		cid = "S-Access GmbH";
		break;
	case 0x0025C7:
		cid = "altek Corporation";
		break;
	case 0x0025C1:
		cid = "Nawoo Korea Corp.";
		break;
	case 0x0025BA:
		cid = "Alcatel-Lucent IPD";
		break;
	case 0x0025B5:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0025AE:
		cid = "Microsoft Corporation";
		break;
	case 0x0025A8:
		cid = "Kontron (BeiJing) Technology Co.,Ltd";
		break;
	case 0x0025A7:
		cid = "Comverge, Inc.";
		break;
	case 0x00262B:
		cid = "Wongs Electronics Co. Ltd.";
		break;
	case 0x002625:
		cid = "MediaSputnik";
		break;
	case 0x00261E:
		cid = "QINGBANG ELEC(SZ) CO., LTD";
		break;
	case 0x002619:
		cid = "FRC";
		break;
	case 0x002612:
		cid = "Space Exploration Technologies";
		break;
	case 0x00260B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00260C:
		cid = "Dataram";
		break;
	case 0x0025FF:
		cid = "CreNova Multimedia Co., Ltd";
		break;
	case 0x002606:
		cid = "RAUMFELD GmbH";
		break;
	case 0x0025F9:
		cid = "GMK electronic design GmbH";
		break;
	case 0x0025A2:
		cid = "Alta Definicion LINCEO S.L.";
		break;
	case 0x002596:
		cid = "GIGAVISION srl";
		break;
	case 0x00259B:
		cid = "Beijing PKUNITY Microsystems Technology Co., Ltd";
		break;
	case 0x002595:
		cid = "Northwest Signal Supply, Inc";
		break;
	case 0x00258F:
		cid = "Trident Microsystems, Inc.";
		break;
	case 0x002585:
		cid = "KOKUYO S&T Co., Ltd.";
		break;
	case 0x00257B:
		cid = "STJ  ELECTRONICS  PVT  LTD";
		break;
	case 0x002574:
		cid = "KUNIMI MEDIA DEVICE Co., Ltd.";
		break;
	case 0x00264F:
		cid = "Krüger &Gothe GmbH";
		break;
	case 0x002648:
		cid = "Emitech Corp.";
		break;
	case 0x002644:
		cid = "Thomson Telecom Belgium";
		break;
	case 0x00263E:
		cid = "Trapeze Networks";
		break;
	case 0x002638:
		cid = "Xia Men Joyatech Co., Ltd.";
		break;
	case 0x00263D:
		cid = "MIA Corporation";
		break;
	case 0x002631:
		cid = "COMMTACT LTD";
		break;
	case 0x00256F:
		cid = "Dantherm Power";
		break;
	case 0x002562:
		cid = "interbro Co. Ltd.";
		break;
	case 0x00255C:
		cid = "NEC Corporation";
		break;
	case 0x00254F:
		cid = "ELETTROLAB Srl";
		break;
	case 0x002518:
		cid = "Power PLUS Communications AG";
		break;
	case 0x002513:
		cid = "CXP DIGITAL BV";
		break;
	case 0x002505:
		cid = "eks Engel GmbH & Co. KG";
		break;
	case 0x0024F9:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0024F2:
		cid = "Uniphone Telecommunication Co., Ltd.";
		break;
	case 0x0024ED:
		cid = "YT Elec. Co,.Ltd.";
		break;
	case 0x0024E6:
		cid = "In Motion Technology Inc.";
		break;
	case 0x0024E1:
		cid = "Convey Computer Corp.";
		break;
	case 0x0024DF:
		cid = "Digitalbox Europe GmbH";
		break;
	case 0x0024DA:
		cid = "Innovar Systems Limited";
		break;
	case 0x002549:
		cid = "Jeorich Tech. Co.,Ltd.";
		break;
	case 0x002538:
		cid = "Samsung Electronics Co., Ltd., Memory Division";
		break;
	case 0x002542:
		cid = "Pittasoft";
		break;
	case 0x002530:
		cid = "Aetas Systems Inc.";
		break;
	case 0x002529:
		cid = "COMELIT GROUP S.P.A";
		break;
	case 0x002522:
		cid = "ASRock Incorporation";
		break;
	case 0x00251D:
		cid = "DSA Encore, LLC";
		break;
	case 0x0025F5:
		cid = "DVS Korea, Co., Ltd";
		break;
	case 0x0025F0:
		cid = "Suga Electronics Limited";
		break;
	case 0x0025EA:
		cid = "Iphion BV";
		break;
	case 0x0025E4:
		cid = "OMNI-WiFi, LLC";
		break;
	case 0x0025E0:
		cid = "CeedTec Sdn Bhd";
		break;
	case 0x0025DA:
		cid = "Secura Key";
		break;
	case 0x0025D9:
		cid = "DataFab Systems Inc.";
		break;
	case 0x002410:
		cid = "NUETEQ Technology,Inc.";
		break;
	case 0x002409:
		cid = "The Toro Company";
		break;
	case 0x0023FD:
		cid = "AFT Atlas Fahrzeugtechnik GmbH";
		break;
	case 0x0023F6:
		cid = "Softwell Technology Co., Ltd.";
		break;
	case 0x0023EC:
		cid = "Algorithmix GmbH";
		break;
	case 0x0023E7:
		cid = "Hinke A/S";
		break;
	case 0x002387:
		cid = "ThinkFlood, Inc.";
		break;
	case 0x002381:
		cid = "Lengda Technology(Xiamen) Co.,Ltd.";
		break;
	case 0x00237B:
		cid = "WHDI LLC";
		break;
	case 0x002372:
		cid = "MORE STAR INDUSTRIAL GROUP LIMITED";
		break;
	case 0x0024CE:
		cid = "Exeltech Inc";
		break;
	case 0x0024D3:
		cid = "QUALICA Inc.";
		break;
	case 0x0024C7:
		cid = "Mobilarm Ltd";
		break;
	case 0x0024C2:
		cid = "Asumo Co.,Ltd.";
		break;
	case 0x0024BC:
		cid = "HuRob Co.,Ltd";
		break;
	case 0x0024B7:
		cid = "GridPoint, Inc.";
		break;
	case 0x0024AB:
		cid = "A7 Engineering, Inc.";
		break;
	case 0x0024A6:
		cid = "TELESTAR DIGITAL GmbH";
		break;
	case 0x00249A:
		cid = "Beijing Zhongchuang Telecommunication Test Co., Ltd.";
		break;
	case 0x00249F:
		cid = "RIM Testing Services";
		break;
	case 0x002487:
		cid = "Blackboard Inc.";
		break;
	case 0x002498:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002485:
		cid = "ConteXtream Ltd";
		break;
	case 0x002480:
		cid = "Meteocontrol GmbH";
		break;
	case 0x00244A:
		cid = "Voyant International";
		break;
	case 0x002449:
		cid = "Shen Zhen Lite Star Electronics Technology Co., Ltd";
		break;
	case 0x002443:
		cid = "Nortel Networks";
		break;
	case 0x002439:
		cid = "Digital Barriers Advanced Technologies";
		break;
	case 0x002479:
		cid = "Optec Displays, Inc.";
		break;
	case 0x00246D:
		cid = "Weinzierl Engineering GmbH";
		break;
	case 0x002474:
		cid = "Autronica Fire And Securirty";
		break;
	case 0x002468:
		cid = "Sumavision Technologies Co.,Ltd";
		break;
	case 0x002466:
		cid = "Unitron nv";
		break;
	case 0x002461:
		cid = "Shin Wang Tech.";
		break;
	case 0x00245C:
		cid = "Design-Com Technologies Pty. Ltd.";
		break;
	case 0x00244F:
		cid = "Asantron Technologies Ltd.";
		break;
	case 0x0023BB:
		cid = "Schmitt Industries";
		break;
	case 0x0023BA:
		cid = "Chroma";
		break;
	case 0x0023B5:
		cid = "ORTANA LTD";
		break;
	case 0x00239B:
		cid = "Elster Solutions, LLC";
		break;
	case 0x002396:
		cid = "ANDES TECHNOLOGY CORPORATION";
		break;
	case 0x002391:
		cid = "Maxian";
		break;
	case 0x00238C:
		cid = "Private";
		break;
	case 0x002432:
		cid = "Neostar Technology Co.,LTD";
		break;
	case 0x002429:
		cid = "MK MASTER INC.";
		break;
	case 0x00241C:
		cid = "FuGang Electronic (DG) Co.,Ltd";
		break;
	case 0x002428:
		cid = "EnergyICT";
		break;
	case 0x002416:
		cid = "Any Use";
		break;
	case 0x0023E0:
		cid = "INO Therapeutics LLC";
		break;
	case 0x0023DA:
		cid = "Industrial Computer Source (Deutschland)GmbH";
		break;
	case 0x0023C8:
		cid = "TEAM-R";
		break;
	case 0x0023C7:
		cid = "AVSystem";
		break;
	case 0x0023C1:
		cid = "Securitas Direct AB";
		break;
	case 0x0021DC:
		cid = "TECNOALARM S.r.l.";
		break;
	case 0x0021D6:
		cid = "LXI Consortium";
		break;
	case 0x0021CF:
		cid = "The Crypto Group";
		break;
	case 0x0021C9:
		cid = "Wavecom Asia Pacific Limited";
		break;
	case 0x0021CA:
		cid = "ART System Co., Ltd.";
		break;
	case 0x0021C3:
		cid = "CORNELL Communications, Inc.";
		break;
	case 0x002334:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00232E:
		cid = "Kedah Electronics Engineering, LLC";
		break;
	case 0x002329:
		cid = "DDRdrive LLC";
		break;
	case 0x002322:
		cid = "KISS Teknical Solutions, Inc.";
		break;
	case 0x002325:
		cid = "IOLAN Holding";
		break;
	case 0x002319:
		cid = "Sielox LLC";
		break;
	case 0x002270:
		cid = "ABK North America, LLC";
		break;
	case 0x002317:
		cid = "Lasercraft Inc";
		break;
	case 0x002310:
		cid = "LNC Technology Co., Ltd.";
		break;
	case 0x002273:
		cid = "Techway";
		break;
	case 0x002274:
		cid = "FamilyPhone AB";
		break;
	case 0x00226F:
		cid = "3onedata Technology Co. Ltd.";
		break;
	case 0x00226A:
		cid = "Honeywell";
		break;
	case 0x002260:
		cid = "AFREEY Inc.";
		break;
	case 0x00225B:
		cid = "Teradici Corporation";
		break;
	case 0x002256:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002255:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00224D:
		cid = "MITAC INTERNATIONAL CORP.";
		break;
	case 0x002252:
		cid = "ZOLL Lifecor Corporation";
		break;
	case 0x002246:
		cid = "Evoc Intelligent Technology Co.,Ltd.";
		break;
	case 0x002366:
		cid = "Beijing Siasun Electronic System Co.,Ltd.";
		break;
	case 0x00236B:
		cid = "Xembedded, Inc.";
		break;
	case 0x002359:
		cid = "Benchmark Electronics ( Thailand ) Public Company Limited";
		break;
	case 0x00235F:
		cid = "Silicon Micro Sensors GmbH";
		break;
	case 0x002353:
		cid = "F E T Elettronica snc";
		break;
	case 0x00234C:
		cid = "KTC AB";
		break;
	case 0x002304:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0022F3:
		cid = "SHARP Corporation";
		break;
	case 0x0022EE:
		cid = "Algo Communication Products Ltd";
		break;
	case 0x0022E7:
		cid = "WPS Parking Systems";
		break;
	case 0x0022E1:
		cid = "ZORT Labs, LLC.";
		break;
	case 0x0022E2:
		cid = "WABTEC Transit Division";
		break;
	case 0x0022DB:
		cid = "Translogic Corporation";
		break;
	case 0x0022A1:
		cid = "Huawei Symantec Technologies Co.,Ltd.";
		break;
	case 0x00229B:
		cid = "AverLogic Technologies, Inc.";
		break;
	case 0x00229C:
		cid = "Verismo Networks Inc";
		break;
	case 0x002295:
		cid = "SGM Technology for lighting spa";
		break;
	case 0x00228E:
		cid = "TV-NUMERIC";
		break;
	case 0x002289:
		cid = "Optosecurity Inc.";
		break;
	case 0x002282:
		cid = "8086 Consultancy";
		break;
	case 0x00227C:
		cid = "Woori SMT Co.,ltd";
		break;
	case 0x002279:
		cid = "Nippon Conlux Co., Ltd.";
		break;
	case 0x00223C:
		cid = "RATIO Entwicklungen GmbH";
		break;
	case 0x002236:
		cid = "VECTOR SP. Z O.O.";
		break;
	case 0x002230:
		cid = "FutureLogic Inc.";
		break;
	case 0x002229:
		cid = "Compumedics Ltd";
		break;
	case 0x00221D:
		cid = "Freegene Technology LTD";
		break;
	case 0x002224:
		cid = "Good Will Instrument Co., Ltd.";
		break;
	case 0x002223:
		cid = "TimeKeeping Systems, Inc.";
		break;
	case 0x002216:
		cid = "SHIBAURA VENDING MACHINE CORPORATION";
		break;
	case 0x002217:
		cid = "Neat Electronics";
		break;
	case 0x002211:
		cid = "Rohati Systems";
		break;
	case 0x00220A:
		cid = "OnLive, Inc";
		break;
	case 0x002204:
		cid = "KORATEK";
		break;
	case 0x0021FF:
		cid = "Cyfrowy Polsat SA";
		break;
	case 0x0021F5:
		cid = "Western Engravers Supply, Inc.";
		break;
	case 0x0021EF:
		cid = "Kapsys";
		break;
	case 0x0021EE:
		cid = "Full Spectrum Inc.";
		break;
	case 0x0022D4:
		cid = "ComWorth Co., Ltd.";
		break;
	case 0x0022CA:
		cid = "Anviz Biometric Tech. Co., Ltd.";
		break;
	case 0x0022C5:
		cid = "INFORSON Co,Ltd.";
		break;
	case 0x0022C0:
		cid = "Shenzhen Forcelink Electronic Co, Ltd";
		break;
	case 0x0022BB:
		cid = "beyerdynamic GmbH & Co. KG";
		break;
	case 0x0022AE:
		cid = "Mattel Inc.";
		break;
	case 0x0022AD:
		cid = "TELESIS TECHNOLOGIES, INC.";
		break;
	case 0x0022A8:
		cid = "Ouman Oy";
		break;
	case 0x002132:
		cid = "Masterclock, Inc.";
		break;
	case 0x00212C:
		cid = "SemIndia System Private Limited";
		break;
	case 0x002131:
		cid = "Blynke Inc.";
		break;
	case 0x00211F:
		cid = "SHINSUNG DELTATECH CO.,LTD.";
		break;
	case 0x002120:
		cid = "Sequel Technologies";
		break;
	case 0x002125:
		cid = "KUK JE TONG SHIN Co.,LTD";
		break;
	case 0x002112:
		cid = "WISCOM SYSTEM CO.,LTD";
		break;
	case 0x001FB9:
		cid = "Paltronics";
		break;
	case 0x001FB7:
		cid = "WiMate Technologies Corp.";
		break;
	case 0x001FB8:
		cid = "Universal Remote Control, Inc.";
		break;
	case 0x001FB2:
		cid = "Sontheim Industrie Elektronik GmbH";
		break;
	case 0x001FAB:
		cid = "I.S HIGH TECH.INC";
		break;
	case 0x001FA6:
		cid = "Stilo srl";
		break;
	case 0x001FA1:
		cid = "Gtran Inc";
		break;
	case 0x001F9C:
		cid = "LEDCO";
		break;
	case 0x00215E:
		cid = "IBM Corp";
		break;
	case 0x002151:
		cid = "Millinet Co., Ltd.";
		break;
	case 0x002152:
		cid = "General Satellite Research & Development Limited";
		break;
	case 0x002157:
		cid = "National Datacast, Inc.";
		break;
	case 0x00214B:
		cid = "Shenzhen HAMP Science & Technology Co.,Ltd";
		break;
	case 0x002145:
		cid = "Semptian Technologies Ltd.";
		break;
	case 0x002144:
		cid = "SS Telecoms";
		break;
	case 0x00213C:
		cid = "AliphCom";
		break;
	case 0x00213B:
		cid = "Berkshire Products, Inc";
		break;
	case 0x002190:
		cid = "Goliath Solutions";
		break;
	case 0x002189:
		cid = "AppTech, Inc.";
		break;
	case 0x002184:
		cid = "POWERSOFT SRL";
		break;
	case 0x00217D:
		cid = "PYXIS S.R.L.";
		break;
	case 0x002177:
		cid = "W. L. Gore & Associates";
		break;
	case 0x002176:
		cid = "YMax Telecom Ltd.";
		break;
	case 0x002171:
		cid = "Wesung TNC Co., Ltd.";
		break;
	case 0x002164:
		cid = "Special Design Bureau for Seismic Instrumentation";
		break;
	case 0x002103:
		cid = "GHI Electronics, LLC";
		break;
	case 0x001FFA:
		cid = "Coretree, Co, Ltd";
		break;
	case 0x001FF5:
		cid = "Kongsberg Defence & Aerospace";
		break;
	case 0x001FF4:
		cid = "Power Monitors, Inc.";
		break;
	case 0x001FEE:
		cid = "ubisys technologies GmbH";
		break;
	case 0x001FE7:
		cid = "Simet";
		break;
	case 0x001FDB:
		cid = "Network Supply Corp.,";
		break;
	case 0x001FD1:
		cid = "OPTEX CO.,LTD.";
		break;
	case 0x001FCA:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001FBE:
		cid = "Shenzhen Mopnet Industrial Co.,Ltd";
		break;
	case 0x001F62:
		cid = "JSC Stilsoft";
		break;
	case 0x001F67:
		cid = "Hitachi,Ltd.";
		break;
	case 0x001F55:
		cid = "Honeywell Security (China) Co., Ltd.";
		break;
	case 0x001F56:
		cid = "DIGITAL FORECAST";
		break;
	case 0x001F4F:
		cid = "Thinkware Co. Ltd.";
		break;
	case 0x001F48:
		cid = "Mojix Inc.";
		break;
	case 0x001F43:
		cid = "ENTES ELEKTRONIK";
		break;
	case 0x001F8E:
		cid = "Metris USA Inc.";
		break;
	case 0x001F88:
		cid = "FMS Force Measuring Systems AG";
		break;
	case 0x001F81:
		cid = "Accel Semiconductor Corp";
		break;
	case 0x001B58:
		cid = "ACE CAD Enterprise Co., Ltd.";
		break;
	case 0x001F78:
		cid = "Blue Fox Porini Textile";
		break;
	case 0x001F6E:
		cid = "Vtech Engineering Corporation";
		break;
	case 0x001F68:
		cid = "Martinsson Elektronik AB";
		break;
	case 0x0021BC:
		cid = "ZALA COMPUTER";
		break;
	case 0x0021B7:
		cid = "Lexmark International Inc.";
		break;
	case 0x0021B0:
		cid = "Tyco Telecommunications";
		break;
	case 0x0021A4:
		cid = "Dbii Networks";
		break;
	case 0x00219A:
		cid = "Cambridge Visual Networks Ltd";
		break;
	case 0x002196:
		cid = "Telsey  S.p.A.";
		break;
	case 0x001E4B:
		cid = "City Theatrical";
		break;
	case 0x001E47:
		cid = "PT. Hariff Daya Tunggal Engineering";
		break;
	case 0x001E41:
		cid = "Microwave Communication & Component, Inc.";
		break;
	case 0x001E2E:
		cid = "SIRTI S.p.A.";
		break;
	case 0x001E27:
		cid = "SBN TECH Co.,Ltd.";
		break;
	case 0x001E28:
		cid = "Lumexis Corporation";
		break;
	case 0x001DF2:
		cid = "Netflix, Inc.";
		break;
	case 0x001DEB:
		cid = "DINEC International";
		break;
	case 0x001DEC:
		cid = "Marusys";
		break;
	case 0x001DE6:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001DDA:
		cid = "Mikroelektronika spol. s r. o.";
		break;
	case 0x001DDF:
		cid = "Sunitec Enterprise Co., Ltd.";
		break;
	case 0x001DC7:
		cid = "L-3 Communications Geneva Aerospace";
		break;
	case 0x001DC0:
		cid = "Enphase Energy";
		break;
	case 0x001ED8:
		cid = "Digital United Inc.";
		break;
	case 0x001ED2:
		cid = "Ray Shine Video Technology Inc";
		break;
	case 0x001ED1:
		cid = "Keyprocessor B.V.";
		break;
	case 0x001ECC:
		cid = "CDVI";
		break;
	case 0x001EC5:
		cid = "Middle Atlantic Products Inc";
		break;
	case 0x001EBF:
		cid = "Haas Automation Inc.";
		break;
	case 0x001EB9:
		cid = "Sing Fai Technology Limited";
		break;
	case 0x001EB2:
		cid = "LG innotek";
		break;
	case 0x001F2E:
		cid = "Triangle Research Int'l Pte Ltd";
		break;
	case 0x001F2D:
		cid = "Electro-Optical Imaging, Inc.";
		break;
	case 0x001F27:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001F14:
		cid = "NexG";
		break;
	case 0x001F1B:
		cid = "RoyalTek Company Ltd.";
		break;
	case 0x001F0D:
		cid = "L3 Communications - Telemetry West";
		break;
	case 0x001F0E:
		cid = "Japan Kyastem Co., Ltd";
		break;
	case 0x001E22:
		cid = "ARVOO Imaging Products BV";
		break;
	case 0x001E1B:
		cid = "Digital Stream Technology, Inc.";
		break;
	case 0x001E16:
		cid = "Keytronix";
		break;
	case 0x001E15:
		cid = "Beech Hill Electronics";
		break;
	case 0x001E11:
		cid = "ELELUX INTERNATIONAL LTD";
		break;
	case 0x001E05:
		cid = "Xseed Technologies & Computing";
		break;
	case 0x001E0C:
		cid = "Sherwood Information Partners, Inc.";
		break;
	case 0x001DFE:
		cid = "Palm, Inc";
		break;
	case 0x001DF9:
		cid = "Cybiotronics (Far East) Limited";
		break;
	case 0x001EAD:
		cid = "Wingtech Group Limited";
		break;
	case 0x001EA2:
		cid = "Symx Systems, Inc.";
		break;
	case 0x001EA7:
		cid = "Actiontec Electronics, Inc";
		break;
	case 0x001EA1:
		cid = "Brunata a/s";
		break;
	case 0x001E9B:
		cid = "San-Eisha, Ltd.";
		break;
	case 0x001E94:
		cid = "SUPERCOM TECHNOLOGY CORPORATION";
		break;
	case 0x001E8F:
		cid = "CANON INC.";
		break;
	case 0x001E87:
		cid = "Realease Limited";
		break;
	case 0x001EFC:
		cid = "JSC MASSA-K";
		break;
	case 0x001F08:
		cid = "RISCO LTD";
		break;
	case 0x001EF5:
		cid = "Hitek Automated Inc.";
		break;
	case 0x001EFB:
		cid = "Trio Motion Technology Ltd";
		break;
	case 0x001EE9:
		cid = "Stoneridge Electronics AB";
		break;
	case 0x001EEE:
		cid = "ETL Systems Ltd";
		break;
	case 0x001E7B:
		cid = "R.I.CO. S.r.l.";
		break;
	case 0x001E76:
		cid = "Thermo Fisher Scientific";
		break;
	case 0x001E6A:
		cid = "Beijing Bluexon Technology Co.,Ltd";
		break;
	case 0x001E71:
		cid = "MIrcom Group of Companies";
		break;
	case 0x001E63:
		cid = "Vibro-Meter SA";
		break;
	case 0x001E5E:
		cid = "COmputime Ltd.";
		break;
	case 0x001E57:
		cid = "ALCOMA, spol. s r.o.";
		break;
	case 0x001E51:
		cid = "Converter Industry Srl";
		break;
	case 0x001DB9:
		cid = "Wellspring Wireless";
		break;
	case 0x001DB4:
		cid = "KUMHO ENG CO.,LTD";
		break;
	case 0x001D9E:
		cid = "AXION TECHNOLOGIES";
		break;
	case 0x001DA3:
		cid = "SabiOso";
		break;
	case 0x001D9D:
		cid = "ARTJOY INTERNATIONAL LIMITED";
		break;
	case 0x001D45:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001D3E:
		cid = "SAKA TECHNO SCIENCE CO.,LTD";
		break;
	case 0x001D37:
		cid = "Thales-Panda Transportation System";
		break;
	case 0x001D32:
		cid = "Longkay Communication & Technology (Shanghai) Co. Ltd";
		break;
	case 0x001D2B:
		cid = "Wuhan Pont Technology CO. , LTD";
		break;
	case 0x001D1F:
		cid = "Siauliu Tauro Televizoriai, JSC";
		break;
	case 0x001D26:
		cid = "Rockridgesound Technology Co.";
		break;
	case 0x001D1A:
		cid = "OvisLink S.A.";
		break;
	case 0x001D7A:
		cid = "Wideband Semiconductor, Inc.";
		break;
	case 0x001D74:
		cid = "Tianjin China-Silicon Microelectronics Co., Ltd.";
		break;
	case 0x001D62:
		cid = "InPhase Technologies";
		break;
	case 0x001D61:
		cid = "BIJ Corporation";
		break;
	case 0x001D5B:
		cid = "Tecvan Informática Ltda";
		break;
	case 0x001D54:
		cid = "Sunnic Technology & Merchandise INC.";
		break;
	case 0x001D4A:
		cid = "Carestream Health, Inc.";
		break;
	case 0x001CE8:
		cid = "Cummins Inc";
		break;
	case 0x001CE4:
		cid = "EleSy JSC";
		break;
	case 0x001CDD:
		cid = "COWBELL ENGINEERING CO., LTD.";
		break;
	case 0x001CDE:
		cid = "Interactive Multimedia eXchange Inc.";
		break;
	case 0x001CD8:
		cid = "BlueAnt Wireless";
		break;
	case 0x001CD1:
		cid = "Waves Audio LTD";
		break;
	case 0x001CCB:
		cid = "Forth Corporation Public Company Limited";
		break;
	case 0x001CC5:
		cid = "3Com Ltd";
		break;
	case 0x001D14:
		cid = "SPERADTONE INFORMATION TECHNOLOGY LIMITED";
		break;
	case 0x001D07:
		cid = "Shenzhen Sang Fei Consumer Communications Co.,Ltd";
		break;
	case 0x001D01:
		cid = "Neptune Digital";
		break;
	case 0x001CEE:
		cid = "SHARP Corporation";
		break;
	case 0x001CF5:
		cid = "Wiseblue Technology Limited";
		break;
	case 0x001CB9:
		cid = "KWANG SUNG ELECTRONICS CO., LTD.";
		break;
	case 0x001CAF:
		cid = "Plato Networks Inc.";
		break;
	case 0x001CB4:
		cid = "Iridium Satellite LLC";
		break;
	case 0x001C9F:
		cid = "Razorstream, LLC";
		break;
	case 0x001C99:
		cid = "Shunra Software Ltd.";
		break;
	case 0x001C8C:
		cid = "DIAL TECHNOLOGY LTD.";
		break;
	case 0x001C93:
		cid = "ExaDigm Inc";
		break;
	case 0x001C87:
		cid = "Uriver Inc.";
		break;
	case 0x001C82:
		cid = "Genew Technologies";
		break;
	case 0x001C1A:
		cid = "Thomas Instrumentation, Inc";
		break;
	case 0x001C0E:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001C13:
		cid = "OPTSYS TECHNOLOGY CO., LTD.";
		break;
	case 0x001C07:
		cid = "Cwlinux Limited";
		break;
	case 0x001C00:
		cid = "Entry Point, LLC";
		break;
	case 0x001BF4:
		cid = "KENWIN INDUSTRIAL(HK) LTD.";
		break;
	case 0x001BEF:
		cid = "Blossoms Digital Technology Co.,Ltd.";
		break;
	case 0x001BE2:
		cid = "AhnLab,Inc.";
		break;
	case 0x001C7D:
		cid = "Excelpoint Manufacturing Pte Ltd";
		break;
	case 0x001C78:
		cid = "WYPLAY SAS";
		break;
	case 0x001C65:
		cid = "JoeScan, Inc.";
		break;
	case 0x001C67:
		cid = "Pumpkin Networks, Inc.";
		break;
	case 0x001C66:
		cid = "UCAMP CO.,LTD";
		break;
	case 0x001C60:
		cid = "CSP Frontier Technologies,Inc.";
		break;
	case 0x001C54:
		cid = "Hillstone Networks Inc";
		break;
	case 0x001C59:
		cid = "DEVON IT";
		break;
	case 0x001C4F:
		cid = "MACAB AB";
		break;
	case 0x001C37:
		cid = "Callpod, Inc.";
		break;
	case 0x001C3C:
		cid = "Seon Design Inc.";
		break;
	case 0x001C30:
		cid = "Mode Lighting (UK ) Ltd.";
		break;
	case 0x001C2B:
		cid = "Alertme.com Limited";
		break;
	case 0x001C2A:
		cid = "Envisacor Technologies Inc.";
		break;
	case 0x001C29:
		cid = "CORE DIGITAL ELECTRONICS CO., LTD";
		break;
	case 0x001C24:
		cid = "Formosa Wireless Systems Corp.";
		break;
	case 0x001C1F:
		cid = "Quest Retail Technology Pty Ltd";
		break;
	case 0x001D97:
		cid = "Alertus Technologies LLC";
		break;
	case 0x001D90:
		cid = "EMCO Flow Systems";
		break;
	case 0x001D84:
		cid = "Gateway, Inc.";
		break;
	case 0x001D67:
		cid = "AMEC";
		break;
	case 0x001A93:
		cid = "ERCO Leuchten GmbH";
		break;
	case 0x001A98:
		cid = "Asotel Communication Limited Taiwan Branch";
		break;
	case 0x001A8E:
		cid = "3Way Networks Ltd";
		break;
	case 0x001A7D:
		cid = "cyber-blue(HK)Ltd";
		break;
	case 0x001A82:
		cid = "PROBA Building Automation Co.,LTD";
		break;
	case 0x001A7C:
		cid = "Hirschmann Multimedia B.V.";
		break;
	case 0x001A78:
		cid = "ubtos";
		break;
	case 0x001A7B:
		cid = "Teleco, Inc.";
		break;
	case 0x001A71:
		cid = "Diostech Co., Ltd.";
		break;
	case 0x001A6C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001A65:
		cid = "Seluxit";
		break;
	case 0x001B7D:
		cid = "CXR Anderson Jacobson";
		break;
	case 0x001B71:
		cid = "Telular Corp.";
		break;
	case 0x001B6A:
		cid = "Powerwave Technologies Sweden AB";
		break;
	case 0x001B65:
		cid = "China Gridcom Co., Ltd";
		break;
	case 0x001B5E:
		cid = "BPL Limited";
		break;
	case 0x001B57:
		cid = "SEMINDIA SYSTEMS PRIVATE LIMITED";
		break;
	case 0x001B46:
		cid = "Blueone Technology Co.,Ltd";
		break;
	case 0x001B4B:
		cid = "SANION Co., Ltd.";
		break;
	case 0x001BAD:
		cid = "iControl Incorporated";
		break;
	case 0x001BA6:
		cid = "intotech inc.";
		break;
	case 0x001BA1:
		cid = "Åmic AB";
		break;
	case 0x001B93:
		cid = "JC Decaux SA DNT";
		break;
	case 0x001B95:
		cid = "VIDEO SYSTEMS SRL";
		break;
	case 0x001B9A:
		cid = "Apollo Fire Detectors Ltd";
		break;
	case 0x001B94:
		cid = "T.E.M.A. S.p.A.";
		break;
	case 0x001B8E:
		cid = "Hulu Sweden AB";
		break;
	case 0x001B89:
		cid = "EMZA Visual Sense Ltd.";
		break;
	case 0x001B8A:
		cid = "2M Electronic A/S";
		break;
	case 0x001BD1:
		cid = "SOGESTMATIC";
		break;
	case 0x001BD6:
		cid = "Kelvin Hughes Ltd";
		break;
	case 0x001BCF:
		cid = "Dataupia Corporation";
		break;
	case 0x001BD0:
		cid = "IDENTEC SOLUTIONS";
		break;
	case 0x001BCA:
		cid = "Beijing Run Technology LTD. Company";
		break;
	case 0x001BC3:
		cid = "Mobisolution Co.,Ltd";
		break;
	case 0x001BBE:
		cid = "ICOP Digital";
		break;
	case 0x001BB4:
		cid = "Airvod Limited";
		break;
	case 0x001B14:
		cid = "Carex Lighting Equipment Factory";
		break;
	case 0x001B0D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001B06:
		cid = "Ateliers R. LAUMONIER";
		break;
	case 0x001B08:
		cid = "Danfoss Drives A/S";
		break;
	case 0x001B01:
		cid = "Applied Radio Technologies";
		break;
	case 0x001AF5:
		cid = "PENTAONE. CO., LTD.";
		break;
	case 0x001AFA:
		cid = "Welch Allyn, Inc.";
		break;
	case 0x001AE4:
		cid = "Medicis Technologies Corporation";
		break;
	case 0x001ADD:
		cid = "PePWave Ltd";
		break;
	case 0x001AD1:
		cid = "FARGO CO., LTD.";
		break;
	case 0x001AD8:
		cid = "AlsterAero GmbH";
		break;
	case 0x001ACA:
		cid = "Tilera Corporation";
		break;
	case 0x001ACC:
		cid = "Celestial Semiconductor, Ltd";
		break;
	case 0x001ABB:
		cid = "Fontal Technology Incorporation";
		break;
	case 0x001AC0:
		cid = "JOYBIEN TECHNOLOGIES CO., LTD.";
		break;
	case 0x001A60:
		cid = "Wave Electronics Co.,Ltd.";
		break;
	case 0x001A55:
		cid = "ACA-Digital Corporation";
		break;
	case 0x001A5A:
		cid = "Korea Electric Power Data Network  (KDN) Co., Ltd";
		break;
	case 0x001A4E:
		cid = "NTI AG / LinMot";
		break;
	case 0x001A53:
		cid = "Zylaya";
		break;
	case 0x001A42:
		cid = "Techcity Technology co., Ltd.";
		break;
	case 0x001A47:
		cid = "Agami Systems, Inc.";
		break;
	case 0x001A3B:
		cid = "Doah Elecom Inc.";
		break;
	case 0x001B3F:
		cid = "ProCurve Networking by HP";
		break;
	case 0x001B3A:
		cid = "SIMS Corp.";
		break;
	case 0x001B2C:
		cid = "ATRON electronic GmbH";
		break;
	case 0x001B27:
		cid = "Merlin CSI";
		break;
	case 0x001B20:
		cid = "TPine Technology";
		break;
	case 0x001B19:
		cid = "IEEE I&M Society TC9";
		break;
	case 0x001AB4:
		cid = "FFEI Ltd.";
		break;
	case 0x001AAF:
		cid = "BLUSENS TECHNOLOGY";
		break;
	case 0x001AA8:
		cid = "Mamiya Digital Imaging Co., Ltd.";
		break;
	case 0x001A9F:
		cid = "A-Link Ltd";
		break;
	case 0x001AA6:
		cid = "Telefunken Radio Communication Systems GmbH &CO.KG";
		break;
	case 0x00193F:
		cid = "RDI technology(Shenzhen) Co.,LTD";
		break;
	case 0x001933:
		cid = "Strix Systems, Inc.";
		break;
	case 0x001938:
		cid = "UMB Communications Co., Ltd.";
		break;
	case 0x00192D:
		cid = "Nokia Corporation";
		break;
	case 0x001926:
		cid = "BitsGen Co., Ltd.";
		break;
	case 0x001928:
		cid = "Siemens AG, Transportation Systems";
		break;
	case 0x00190E:
		cid = "Atech Technology Co., Ltd.";
		break;
	case 0x001913:
		cid = "Chuang-Yi Network Equipment Co.Ltd.";
		break;
	case 0x001915:
		cid = "TECOM Co., Ltd.";
		break;
	case 0x00191A:
		cid = "IRLINK";
		break;
	case 0x001993:
		cid = "Changshu Switchgear MFG. Co.,Ltd. (Former Changshu Switchgea";
		break;
	case 0x001998:
		cid = "SATO CORPORATION";
		break;
	case 0x00198E:
		cid = "Oticon A/S";
		break;
	case 0x001980:
		cid = "Gridpoint Systems";
		break;
	case 0x00197B:
		cid = "Picotest Corp.";
		break;
	case 0x001968:
		cid = "Digital Video Networks(Shanghai) CO. LTD.";
		break;
	case 0x00196D:
		cid = "Raybit Systems Korea, Inc";
		break;
	case 0x00196F:
		cid = "SensoPart GmbH";
		break;
	case 0x001952:
		cid = "ACOGITO Co., Ltd";
		break;
	case 0x001957:
		cid = "Saafnet Canada Inc.";
		break;
	case 0x001946:
		cid = "Cianet Industria e Comercio S/A";
		break;
	case 0x001944:
		cid = "Fossil Partners, L.P.";
		break;
	case 0x001A2F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001A36:
		cid = "Aipermon GmbH & Co. KG";
		break;
	case 0x001A25:
		cid = "DELTA DORE";
		break;
	case 0x001A17:
		cid = "Teak Technologies, Inc.";
		break;
	case 0x001A19:
		cid = "Computer Engineering Limited";
		break;
	case 0x001A12:
		cid = "Essilor";
		break;
	case 0x001A0B:
		cid = "BONA TECHNOLOGY INC.";
		break;
	case 0x001A06:
		cid = "OpVista, Inc.";
		break;
	case 0x0018CD:
		cid = "Erae Electronics Industry Co., Ltd";
		break;
	case 0x0018D2:
		cid = "High-Gain Antennas LLC";
		break;
	case 0x0018D9:
		cid = "Santosha Internatonal, Inc";
		break;
	case 0x0018C1:
		cid = "Almitec Informática e Comércio";
		break;
	case 0x0018C8:
		cid = "ISONAS Inc.";
		break;
	case 0x0018BC:
		cid = "ZAO NVP Bolid";
		break;
	case 0x0018B5:
		cid = "Magna Carta";
		break;
	case 0x0018AE:
		cid = "TVT CO.,LTD";
		break;
	case 0x001902:
		cid = "Cambridge Consultants Ltd";
		break;
	case 0x001907:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0018FD:
		cid = "Optimal Technologies International Inc.";
		break;
	case 0x0018F1:
		cid = "Chunichi Denshi Co.,LTD.";
		break;
	case 0x0018EA:
		cid = "Alltec GmbH";
		break;
	case 0x0018EC:
		cid = "Welding Technology Corporation";
		break;
	case 0x0018E5:
		cid = "Adhoco AG";
		break;
	case 0x0018A2:
		cid = "XIP Technology AB";
		break;
	case 0x0018A9:
		cid = "Ethernet Direct Corporation";
		break;
	case 0x00189D:
		cid = "Navcast Inc.";
		break;
	case 0x001893:
		cid = "SHENZHEN PHOTON BROADBAND TECHNOLOGY CO.,LTD";
		break;
	case 0x001898:
		cid = "KINGSTATE ELECTRONICS CORPORATION";
		break;
	case 0x001891:
		cid = "Zhongshan General K-mate Electronics Co., Ltd";
		break;
	case 0x00188C:
		cid = "Mobile Action Technology Inc.";
		break;
	case 0x0019C8:
		cid = "AnyDATA Corporation";
		break;
	case 0x0019C3:
		cid = "Qualitrol";
		break;
	case 0x0019BE:
		cid = "Altai Technologies Limited";
		break;
	case 0x0019BC:
		cid = "ELECTRO CHANCE SRL";
		break;
	case 0x0019A4:
		cid = "Austar Technology (hang zhou) Co.,Ltd";
		break;
	case 0x0019A9:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0019AB:
		cid = "Raycom CO ., LTD";
		break;
	case 0x0019B0:
		cid = "HanYang System";
		break;
	case 0x0019FA:
		cid = "Cable Vision Electronics CO., LTD.";
		break;
	case 0x0019FF:
		cid = "Finnzymes";
		break;
	case 0x0019EC:
		cid = "Sagamore Systems, Inc.";
		break;
	case 0x0019F3:
		cid = "Cetis, Inc";
		break;
	case 0x0019F8:
		cid = "Embedded Systems Design, Inc.";
		break;
	case 0x0019E5:
		cid = "Lynx Studio Technology, Inc.";
		break;
	case 0x0019E7:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0019CD:
		cid = "Chengdu ethercom information technology Ltd.";
		break;
	case 0x0019D4:
		cid = "ICX Technologies";
		break;
	case 0x0019D9:
		cid = "Zeutschel GmbH";
		break;
	case 0x001823:
		cid = "Delta Electronics, Inc.";
		break;
	case 0x001817:
		cid = "D. E. Shaw Research, LLC";
		break;
	case 0x00181E:
		cid = "GDX Technologies Ltd.";
		break;
	case 0x001812:
		cid = "Beijing Xinwei Telecom Technology Co., Ltd.";
		break;
	case 0x001806:
		cid = "Hokkei Industries Co., Ltd.";
		break;
	case 0x00180B:
		cid = "Brilliant Telecommunications";
		break;
	case 0x001805:
		cid = "Beijing InHand Networking Technology Co.,Ltd.";
		break;
	case 0x0017B8:
		cid = "NOVATRON CO., LTD.";
		break;
	case 0x0017BD:
		cid = "Tibetsystem";
		break;
	case 0x0017B1:
		cid = "ACIST Medical Systems, Inc.";
		break;
	case 0x0017AA:
		cid = "elab-experience inc.";
		break;
	case 0x0017AC:
		cid = "O'Neil Product Development Inc.";
		break;
	case 0x0017A5:
		cid = "Ralink Technology Corp";
		break;
	case 0x0017A0:
		cid = "RoboTech srl";
		break;
	case 0x00170F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001705:
		cid = "Methode Electronics";
		break;
	case 0x00170A:
		cid = "INEW DIGITAL COMPANY";
		break;
	case 0x0016F9:
		cid = "CETRTA POT, d.o.o., Kranj";
		break;
	case 0x0016F7:
		cid = "L-3 Communications, Aviation Recorders";
		break;
	case 0x0016E6:
		cid = "GIGA-BYTE TECHNOLOGY CO.,LTD.";
		break;
	case 0x00178F:
		cid = "NINGBO YIDONG ELECTRONIC CO.,LTD.";
		break;
	case 0x001794:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00178D:
		cid = "Checkpoint Systems, Inc.";
		break;
	case 0x00177C:
		cid = "Smartlink Network Systems Limited";
		break;
	case 0x001781:
		cid = "Greystone Data System, Inc.";
		break;
	case 0x001788:
		cid = "Philips Lighting BV";
		break;
	case 0x00176C:
		cid = "Pivot3, Inc.";
		break;
	case 0x001770:
		cid = "Arti Industrial Electronics Ltd.";
		break;
	case 0x001775:
		cid = "TTE Germany GmbH";
		break;
	case 0x001760:
		cid = "Naito Densei Machida MFG.CO.,LTD";
		break;
	case 0x001767:
		cid = "Earforce AS";
		break;
	case 0x00185A:
		cid = "uControl, Inc.";
		break;
	case 0x00185F:
		cid = "TAC Inc.";
		break;
	case 0x001861:
		cid = "Ooma, Inc.";
		break;
	case 0x001866:
		cid = "Leutron Vision";
		break;
	case 0x001853:
		cid = "Atera Networks LTD.";
		break;
	case 0x00184E:
		cid = "Lianhe Technologies, Inc.";
		break;
	case 0x001847:
		cid = "AceNet Technology Inc.";
		break;
	case 0x00183B:
		cid = "CENITS Co., Ltd.";
		break;
	case 0x001840:
		cid = "3 Phoenix, Inc.";
		break;
	case 0x001842:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001825:
		cid = "Private";
		break;
	case 0x00182A:
		cid = "Taiwan Video & Monitor";
		break;
	case 0x001836:
		cid = "Reliance Electric Limited";
		break;
	case 0x001759:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001754:
		cid = "Arkino HiTOP Corporation Limited";
		break;
	case 0x001746:
		cid = "Freedom9 Inc.";
		break;
	case 0x001748:
		cid = "Neokoros Brasil Ltda";
		break;
	case 0x00174D:
		cid = "DYNAMIC NETWORK FACTORY, INC.";
		break;
	case 0x001741:
		cid = "DEFIDEV";
		break;
	case 0x001733:
		cid = "SFR";
		break;
	case 0x00172E:
		cid = "FXC Inc.";
		break;
	case 0x001727:
		cid = "Thermo Ramsey Italia s.r.l.";
		break;
	case 0x001722:
		cid = "Hanazeder Electronic GmbH";
		break;
	case 0x00171B:
		cid = "Innovation Lab Corp.";
		break;
	case 0x001714:
		cid = "BR Controls Nederland bv";
		break;
	case 0x001716:
		cid = "Qno Technology Inc.";
		break;
	case 0x0017F4:
		cid = "ZERON ALLIANCE";
		break;
	case 0x0017F9:
		cid = "Forcom Sp. z o.o.";
		break;
	case 0x001800:
		cid = "UNIGRAND LTD";
		break;
	case 0x0017ED:
		cid = "WooJooIT Ltd.";
		break;
	case 0x0017DA:
		cid = "Spans Logic";
		break;
	case 0x0017E1:
		cid = "DACOS Technologies Co., Ltd.";
		break;
	case 0x0017D0:
		cid = "Opticom Communications, LLC";
		break;
	case 0x0017C4:
		cid = "Quanta Microsystems, INC.";
		break;
	case 0x001880:
		cid = "Maxim Integrated Products";
		break;
	case 0x00186D:
		cid = "Zhenjiang Sapphire Electronic Industry CO.";
		break;
	case 0x001872:
		cid = "Expertise Engineering";
		break;
	case 0x001874:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001879:
		cid = "dSys";
		break;
	case 0x001686:
		cid = "Karl Storz Imaging";
		break;
	case 0x00167F:
		cid = "Bluebird Soft Inc.";
		break;
	case 0x001681:
		cid = "Vector Informatik GmbH";
		break;
	case 0x001674:
		cid = "EuroCB (Phils.), Inc.";
		break;
	case 0x001672:
		cid = "Zenway enterprise ltd";
		break;
	case 0x001666:
		cid = "Quantier Communication Inc.";
		break;
	case 0x00165F:
		cid = "Fairmount Automation";
		break;
	case 0x0016AA:
		cid = "Kei Communication Technology Inc.";
		break;
	case 0x0016AF:
		cid = "Shenzhen Union Networks Equipment Co.,Ltd.";
		break;
	case 0x0016A5:
		cid = "Tandberg Storage ASA";
		break;
	case 0x001699:
		cid = "Tonic DVB Marketing Ltd";
		break;
	case 0x0016A0:
		cid = "Auto-Maskin";
		break;
	case 0x001692:
		cid = "Scientific-Atlanta, Inc.";
		break;
	case 0x001694:
		cid = "Sennheiser Communications A/S";
		break;
	case 0x00168D:
		cid = "KORWIN CO., Ltd.";
		break;
	case 0x00165A:
		cid = "Harman Specialty Group";
		break;
	case 0x001653:
		cid = "LEGO System A/S IE Electronics Division";
		break;
	case 0x00164C:
		cid = "PLANET INT Co., Ltd";
		break;
	case 0x001647:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001642:
		cid = "Pangolin";
		break;
	case 0x00163D:
		cid = "Tsinghua Tongfang Legend Silicon Tech. Co., Ltd.";
		break;
	case 0x001631:
		cid = "Xteam";
		break;
	case 0x00162F:
		cid = "Geutebrück GmbH";
		break;
	case 0x001630:
		cid = "Vativ Technologies";
		break;
	case 0x0015F5:
		cid = "Sustainable Energy Systems";
		break;
	case 0x0015F4:
		cid = "Eventide";
		break;
	case 0x0015EE:
		cid = "Omnex Control Systems";
		break;
	case 0x0015F3:
		cid = "PELTOR AB";
		break;
	case 0x0015E7:
		cid = "Quantec Tontechnik";
		break;
	case 0x0015E2:
		cid = "Dr.Ing. Herbert Knauer GmbH";
		break;
	case 0x0015DD:
		cid = "IP Control Systems Ltd.";
		break;
	case 0x0015D8:
		cid = "Interlink Electronics";
		break;
	case 0x0015CA:
		cid = "TeraRecon, Inc.";
		break;
	case 0x001598:
		cid = "Kolektor group";
		break;
	case 0x001593:
		cid = "U4EA Technologies Inc.";
		break;
	case 0x00158C:
		cid = "Liab ApS";
		break;
	case 0x001586:
		cid = "Xiamen Overseas Chinese Electronic Co., Ltd.";
		break;
	case 0x001585:
		cid = "Aonvision Technolopy Corp.";
		break;
	case 0x001587:
		cid = "Takenaka Seisakusho Co.,Ltd";
		break;
	case 0x001580:
		cid = "U-WAY CORPORATION";
		break;
	case 0x00157B:
		cid = "Leuze electronic GmbH + Co. KG";
		break;
	case 0x001576:
		cid = "LABiTec - Labor Biomedical Technologies GmbH";
		break;
	case 0x00156A:
		cid = "DG2L Technologies Pvt. Ltd.";
		break;
	case 0x00156F:
		cid = "Xiranet Communications GmbH";
		break;
	case 0x0016DF:
		cid = "Lundinova AB";
		break;
	case 0x0016DA:
		cid = "Futronic Technology Co. Ltd.";
		break;
	case 0x0016D5:
		cid = "Synccom Co., Ltd";
		break;
	case 0x0016C9:
		cid = "NAT Seattle, Inc.";
		break;
	case 0x0016D0:
		cid = "ATech elektronika d.o.o.";
		break;
	case 0x0016BD:
		cid = "ATI Industrial Automation";
		break;
	case 0x0016C2:
		cid = "Avtec Systems Inc";
		break;
	case 0x0016BB:
		cid = "Law-Chain Computer Technology Co Ltd";
		break;
	case 0x00162A:
		cid = "Antik computers & communications s.r.o.";
		break;
	case 0x001623:
		cid = "Interval Media";
		break;
	case 0x001617:
		cid = "MSI";
		break;
	case 0x00161E:
		cid = "Woojinnet";
		break;
	case 0x00160D:
		cid = "Be Here Corporation";
		break;
	case 0x001606:
		cid = "Ideal Industries";
		break;
	case 0x0015FA:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001563:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001557:
		cid = "Olivetti";
		break;
	case 0x00155C:
		cid = "Dresser Wayne";
		break;
	case 0x00154B:
		cid = "Wonde Proud Technology Co., Ltd";
		break;
	case 0x001550:
		cid = "Nits Technology Inc";
		break;
	case 0x001545:
		cid = "SEECODE Co., Ltd.";
		break;
	case 0x00153E:
		cid = "Q-Matic Sweden AB";
		break;
	case 0x0015BC:
		cid = "Develco";
		break;
	case 0x0015B5:
		cid = "CI Network Corp.";
		break;
	case 0x0015B0:
		cid = "AUTOTELENET CO.,LTD";
		break;
	case 0x0015AB:
		cid = "PRO CO SOUND INC";
		break;
	case 0x0015A6:
		cid = "Digital Electronics Products Ltd.";
		break;
	case 0x00159F:
		cid = "Terascala, Inc.";
		break;
	case 0x001532:
		cid = "Consumer Technologies Group, LLC";
		break;
	case 0x001539:
		cid = "Technodrive srl";
		break;
	case 0x00152B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00152D:
		cid = "TenX Networks, LLC";
		break;
	case 0x00152C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00151F:
		cid = "Multivision Intelligent Surveillance (Hong Kong) Ltd";
		break;
	case 0x00151A:
		cid = "Hunter Engineering Company";
		break;
	case 0x001515:
		cid = "Leipold+Co.GmbH";
		break;
	case 0x001510:
		cid = "Techsphere Co., Ltd";
		break;
	case 0x001453:
		cid = "ADVANTECH TECHNOLOGIES CO.,LTD";
		break;
	case 0x00144E:
		cid = "SRISA";
		break;
	case 0x001442:
		cid = "ATTO CORPORATION";
		break;
	case 0x001449:
		cid = "Sichuan Changhong Electric Ltd.";
		break;
	case 0x00143D:
		cid = "Aevoe Inc.";
		break;
	case 0x00143C:
		cid = "Rheinmetall Canada Inc.";
		break;
	case 0x00143B:
		cid = "Sensovation AG";
		break;
	case 0x001436:
		cid = "Qwerty Elektronik AB";
		break;
	case 0x0014AB:
		cid = "Senhai Electronic Technology Co., Ltd.";
		break;
	case 0x0014B0:
		cid = "Naeil Community";
		break;
	case 0x0014A9:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0014AA:
		cid = "Ashly Audio, Inc.";
		break;
	case 0x00149D:
		cid = "Sound ID Inc.";
		break;
	case 0x001498:
		cid = "Viking Design Technology";
		break;
	case 0x00148A:
		cid = "Elin Ebg Traction Gmbh";
		break;
	case 0x001491:
		cid = "Daniels Electronics Ltd. dbo Codan Rado Communications";
		break;
	case 0x001485:
		cid = "Giga-Byte";
		break;
	case 0x00147E:
		cid = "InnerWireless";
		break;
	case 0x001466:
		cid = "Kleinhenz Elektronik GmbH";
		break;
	case 0x00146B:
		cid = "Anagran, Inc.";
		break;
	case 0x00145F:
		cid = "ADITEC CO. LTD";
		break;
	case 0x001458:
		cid = "HS Automatic ApS";
		break;
	case 0x0014E6:
		cid = "AIM Infrarotmodule GmbH";
		break;
	case 0x0014E0:
		cid = "LET'S Corporation";
		break;
	case 0x0014D4:
		cid = "K Technology Corporation";
		break;
	case 0x0014D9:
		cid = "IP Fabrics, Inc.";
		break;
	case 0x0014CD:
		cid = "DigitalZone Co., Ltd.";
		break;
	case 0x0014C1:
		cid = "U.S. Robotics Corporation";
		break;
	case 0x0014C6:
		cid = "Quixant Ltd";
		break;
	case 0x0014BA:
		cid = "Carvers SA de CV";
		break;
	case 0x0014B5:
		cid = "PHYSIOMETRIX,INC";
		break;
	case 0x0013C7:
		cid = "IONOS Co.,Ltd.";
		break;
	case 0x0013C0:
		cid = "Trix Tecnologia Ltda.";
		break;
	case 0x0013B6:
		cid = "Sling Media, Inc.";
		break;
	case 0x0013AF:
		cid = "NUMA Technology,Inc.";
		break;
	case 0x0013B0:
		cid = "Jablotron";
		break;
	case 0x0013AA:
		cid = "ALS  & TEC Ltd.";
		break;
	case 0x00139E:
		cid = "Ciara Technologies Inc.";
		break;
	case 0x001502:
		cid = "BETA tech";
		break;
	case 0x001509:
		cid = "Plus Technology Co., Ltd";
		break;
	case 0x0014FD:
		cid = "Thecus Technology Corp.";
		break;
	case 0x0014EF:
		cid = "TZero Technologies, Inc.";
		break;
	case 0x0014F1:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0014F0:
		cid = "Business Security OL AB";
		break;
	case 0x0014EA:
		cid = "S Digm Inc. (Safe Paradigm Inc.)";
		break;
	case 0x0014E5:
		cid = "Alticast";
		break;
	case 0x001423:
		cid = "J-S Co. NEUROCOM";
		break;
	case 0x001419:
		cid = "SIDSA";
		break;
	case 0x001412:
		cid = "S-TEC electronics AG";
		break;
	case 0x001409:
		cid = "MAGNETI MARELLI   S.E. S.p.A.";
		break;
	case 0x00140A:
		cid = "WEPIO Co., Ltd.";
		break;
	case 0x0013FD:
		cid = "Nokia Danmark A/S";
		break;
	case 0x0013F8:
		cid = "Dex Security Solutions";
		break;
	case 0x0013F1:
		cid = "AMOD Technology Co., Ltd.";
		break;
	case 0x0013F7:
		cid = "SMC Networks, Inc.";
		break;
	case 0x0013E7:
		cid = "Halcro";
		break;
	case 0x0013DB:
		cid = "SHOEI Electric Co.,Ltd";
		break;
	case 0x0013CC:
		cid = "Tall Maple Systems";
		break;
	case 0x001284:
		cid = "Lab33 Srl";
		break;
	case 0x00127E:
		cid = "Digital Lifestyles Group, Inc.";
		break;
	case 0x001277:
		cid = "Korenix Technologies Co., Ltd.";
		break;
	case 0x001272:
		cid = "Redux Communications Ltd.";
		break;
	case 0x001271:
		cid = "Measurement Computing Corp";
		break;
	case 0x00126B:
		cid = "Ascalade Communications Limited";
		break;
	case 0x001264:
		cid = "daum electronic gmbh";
		break;
	case 0x00125A:
		cid = "Microsoft Corporation";
		break;
	case 0x00125F:
		cid = "AWIND Inc.";
		break;
	case 0x001255:
		cid = "NetEffect Incorporated";
		break;
	case 0x00124E:
		cid = "XAC AUTOMATION CORP.";
		break;
	case 0x001242:
		cid = "Millennial Net";
		break;
	case 0x001236:
		cid = "ConSentry Networks";
		break;
	case 0x00123B:
		cid = "KeRo Systems ApS";
		break;
	case 0x001368:
		cid = "Saab Danmark A/S";
		break;
	case 0x00135C:
		cid = "OnSite Systems, Inc.";
		break;
	case 0x001355:
		cid = "TOMEN Cyber-business Solutions, Inc.";
		break;
	case 0x001356:
		cid = "FLIR Radiation Inc";
		break;
	case 0x001350:
		cid = "Silver Spring Networks, Inc";
		break;
	case 0x001344:
		cid = "Fargo Electronics Inc.";
		break;
	case 0x001343:
		cid = "Matsushita Electronic Components (Europe) GmbH";
		break;
	case 0x00133D:
		cid = "Micro Memory Curtiss Wright Co";
		break;
	case 0x00138B:
		cid = "Phantom Technologies LLC";
		break;
	case 0x001390:
		cid = "Termtek Computer Co., Ltd";
		break;
	case 0x001376:
		cid = "Tabor Electronics Ltd.";
		break;
	case 0x00137B:
		cid = "Movon Corporation";
		break;
	case 0x001382:
		cid = "Cetacea Networks Corporation";
		break;
	case 0x001387:
		cid = "27M Technologies AB";
		break;
	case 0x00136F:
		cid = "PacketMotion, Inc.";
		break;
	case 0x001375:
		cid = "American Security Products Co.";
		break;
	case 0x001363:
		cid = "Verascape, Inc.";
		break;
	case 0x0012FA:
		cid = "THX LTD";
		break;
	case 0x001301:
		cid = "IronGate S.L.";
		break;
	case 0x001307:
		cid = "Paravirtual Corporation";
		break;
	case 0x0012F5:
		cid = "Imarda New Zealand Limited";
		break;
	case 0x0012EB:
		cid = "PDH Solutions, LLC";
		break;
	case 0x0012DE:
		cid = "Radio Components Sweden AB";
		break;
	case 0x0012DD:
		cid = "Shengqu Information Technology (Shanghai) Co., Ltd.";
		break;
	case 0x0012E4:
		cid = "ZIEHL industrie-electronik GmbH + Co KG";
		break;
	case 0x0012AF:
		cid = "ELPRO Technologies";
		break;
	case 0x0012A8:
		cid = "intec GmbH";
		break;
	case 0x0012A2:
		cid = "VITA";
		break;
	case 0x0012A1:
		cid = "BluePacket Communications Co., Ltd.";
		break;
	case 0x00129C:
		cid = "Yulinet";
		break;
	case 0x001290:
		cid = "KYOWA Electric & Machinery Corp.";
		break;
	case 0x001295:
		cid = "Aiware Inc.";
		break;
	case 0x00132A:
		cid = "Sitronics Telecom Solutions";
		break;
	case 0x001331:
		cid = "CellPoint Connect";
		break;
	case 0x001336:
		cid = "Tianjin 712 Communication Broadcasting co., ltd.";
		break;
	case 0x001324:
		cid = "Schneider Electric Ultra Terminal";
		break;
	case 0x001314:
		cid = "Asiamajor Inc.";
		break;
	case 0x001319:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00131A:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00130D:
		cid = "GALILEO AVIONICA";
		break;
	case 0x001308:
		cid = "Nuvera Fuel Cells";
		break;
	case 0x00122F:
		cid = "Sanei Electric Inc.";
		break;
	case 0x001235:
		cid = "Andrew Corporation";
		break;
	case 0x00122B:
		cid = "Virbiage Pty Ltd";
		break;
	case 0x001212:
		cid = "PLUS  Corporation";
		break;
	case 0x0012D8:
		cid = "International Games System Co., Ltd.";
		break;
	case 0x0012CB:
		cid = "CSS Inc.";
		break;
	case 0x0012C5:
		cid = "V-Show  Technology (China) Co.,Ltd";
		break;
	case 0x0012CC:
		cid = "Bitatek CO., LTD";
		break;
	case 0x0012B4:
		cid = "Work Microwave GmbH";
		break;
	case 0x0012BB:
		cid = "Telecommunications Industry Association TR-41 Committee";
		break;
	case 0x001206:
		cid = "iQuest (NZ) Ltd";
		break;
	case 0x00120B:
		cid = "Chinasys Technologies Limited";
		break;
	case 0x00120C:
		cid = "CE-Infosys Pte Ltd";
		break;
	case 0x0011FF:
		cid = "Digitro Tecnologia Ltda";
		break;
	case 0x0011FA:
		cid = "Rane Corporation";
		break;
	case 0x0011F0:
		cid = "Wideful Limited";
		break;
	case 0x0011EF:
		cid = "Conitec Datensysteme GmbH";
		break;
	case 0x0011E9:
		cid = "STARNEX CO., LTD.";
		break;
	case 0x001187:
		cid = "Category Solutions, Inc";
		break;
	case 0x001182:
		cid = "IMI Norgren Ltd";
		break;
	case 0x001181:
		cid = "InterEnergy Co.Ltd,";
		break;
	case 0x00117B:
		cid = "Büchi  Labortechnik AG";
		break;
	case 0x00116F:
		cid = "Netforyou Co., LTD.";
		break;
	case 0x001168:
		cid = "HomeLogic LLC";
		break;
	case 0x00115E:
		cid = "ProMinent Dosiertechnik GmbH";
		break;
	case 0x001157:
		cid = "Oki Electric Industry Co., Ltd.";
		break;
	case 0x000FB2:
		cid = "Broadband Pacenet (India) Pvt. Ltd.";
		break;
	case 0x000FA5:
		cid = "BWA Technology GmbH";
		break;
	case 0x000FB1:
		cid = "Cognio Inc.";
		break;
	case 0x000FAC:
		cid = "IEEE 802.11";
		break;
	case 0x000F9C:
		cid = "Panduit Corp";
		break;
	case 0x000FA0:
		cid = "CANON KOREA BUSINESS SOLUTIONS INC.";
		break;
	case 0x000F97:
		cid = "Avanex Corporation";
		break;
	case 0x000F8A:
		cid = "WideView";
		break;
	case 0x000F89:
		cid = "Winnertec System Co., Ltd.";
		break;
	case 0x000F90:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000FD7:
		cid = "Harman Music Group";
		break;
	case 0x000FD1:
		cid = "Applied Wireless Identifications Group, Inc.";
		break;
	case 0x000FD2:
		cid = "EWA Technologies, Inc.";
		break;
	case 0x000FC4:
		cid = "NST co.,LTD.";
		break;
	case 0x000FCB:
		cid = "3Com Ltd";
		break;
	case 0x000FBF:
		cid = "DGT Sp. z o.o.";
		break;
	case 0x000FB8:
		cid = "CallURL Inc.";
		break;
	case 0x0011DD:
		cid = "FROMUS TEC. Co., Ltd.";
		break;
	case 0x0011E2:
		cid = "Hua Jung Components Co., Ltd.";
		break;
	case 0x0011CF:
		cid = "Thrane & Thrane A/S";
		break;
	case 0x0011D6:
		cid = "HandEra, Inc.";
		break;
	case 0x0011D0:
		cid = "Tandberg Data ASA";
		break;
	case 0x0011CA:
		cid = "Long Range Systems, Inc.";
		break;
	case 0x0011C3:
		cid = "Transceiving System Technology Corporation";
		break;
	case 0x0011B7:
		cid = "Octalix B.V.";
		break;
	case 0x0011BE:
		cid = "AGP Telecom Co. Ltd";
		break;
	case 0x0011BD:
		cid = "Bombardier Transportation";
		break;
	case 0x001105:
		cid = "Sunplus Technology Co., Ltd.";
		break;
	case 0x00110C:
		cid = "Atmark Techno, Inc.";
		break;
	case 0x000FF9:
		cid = "Valcretec, Inc.";
		break;
	case 0x000FFA:
		cid = "Optinel Systems, Inc.";
		break;
	case 0x000FFF:
		cid = "Control4";
		break;
	case 0x000FF1:
		cid = "nex-G Systems Pte.Ltd";
		break;
	case 0x000FE4:
		cid = "Pantech Co.,Ltd";
		break;
	case 0x000FEA:
		cid = "Giga-Byte Technology Co.,LTD.";
		break;
	case 0x000FE3:
		cid = "Damm Cellular Systems A/S";
		break;
	case 0x0011AB:
		cid = "TRUSTABLE TECHNOLOGY CO.,LTD.";
		break;
	case 0x0011B0:
		cid = "Fortelink Inc.";
		break;
	case 0x0011A4:
		cid = "JStream Technologies Inc.";
		break;
	case 0x001198:
		cid = "Prism Media Products Limited";
		break;
	case 0x00119D:
		cid = "Diginfo Technology Corporation";
		break;
	case 0x00119E:
		cid = "Solectron Brazil";
		break;
	case 0x00118E:
		cid = "Halytech Mace";
		break;
	case 0x001193:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001152:
		cid = "Eidsvoll Electronics AS";
		break;
	case 0x00114F:
		cid = "US Digital Television, Inc";
		break;
	case 0x001149:
		cid = "Proliphix Inc.";
		break;
	case 0x001142:
		cid = "e-SMARTCOM  INC.";
		break;
	case 0x00113D:
		cid = "KN SOLTEC CO.,LTD.";
		break;
	case 0x00113C:
		cid = "Micronas GmbH";
		break;
	case 0x001136:
		cid = "Goodrich Sensor Systems";
		break;
	case 0x00112C:
		cid = "IZT GmbH";
		break;
	case 0x001130:
		cid = "Allied Telesis (Hong Kong) Ltd.";
		break;
	case 0x00111F:
		cid = "Doremi Labs, Inc.";
		break;
	case 0x001112:
		cid = "Honeywell CMSS";
		break;
	case 0x001118:
		cid = "BLX IC Design Corp., Ltd.";
		break;
	case 0x000F58:
		cid = "Adder Technology Limited";
		break;
	case 0x000F52:
		cid = "YORK Refrigeration, Marine & Controls";
		break;
	case 0x000F57:
		cid = "CABLELOGIC Co., Ltd.";
		break;
	case 0x000F45:
		cid = "Stretch, Inc.";
		break;
	case 0x000F46:
		cid = "SINAR AG";
		break;
	case 0x000F4B:
		cid = "Oracle Corporation";
		break;
	case 0x000F37:
		cid = "Xambala Incorporated";
		break;
	case 0x000F3F:
		cid = "Big Bear Networks";
		break;
	case 0x000F3B:
		cid = "Fuji System Machines Co., Ltd.";
		break;
	case 0x000F31:
		cid = "Allied Vision Technologies Canada Inc";
		break;
	case 0x000F32:
		cid = "Lootom Telcovideo Network Wuxi Co Ltd";
		break;
	case 0x000F2B:
		cid = "GREENBELL SYSTEMS";
		break;
	case 0x000E98:
		cid = "HME Clear-Com LTD.";
		break;
	case 0x000E93:
		cid = "Milénio 3 Sistemas Electrónicos, Lda.";
		break;
	case 0x000E8C:
		cid = "Siemens AG A&D ET";
		break;
	case 0x000E86:
		cid = "Alcatel North America";
		break;
	case 0x000E80:
		cid = "Thomson Technology Inc";
		break;
	case 0x000E85:
		cid = "Catalyst Enterprises, Inc.";
		break;
	case 0x000E74:
		cid = "Solar Telecom. Tech";
		break;
	case 0x000E79:
		cid = "Ample Communications Inc.";
		break;
	case 0x000F24:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000F12:
		cid = "Panasonic Europe Ltd.";
		break;
	case 0x000F18:
		cid = "Industrial Control Systems";
		break;
	case 0x000F11:
		cid = "Prodrive B.V.";
		break;
	case 0x000F0C:
		cid = "SYNCHRONIC ENGINEERING";
		break;
	case 0x000EFF:
		cid = "Megasolution,Inc.";
		break;
	case 0x000F00:
		cid = "Legra Systems, Inc.";
		break;
	case 0x000F05:
		cid = "3B SYSTEM INC.";
		break;
	case 0x000F7D:
		cid = "Xirrus";
		break;
	case 0x000F84:
		cid = "Astute Networks, Inc.";
		break;
	case 0x000F77:
		cid = "DENTUM CO.,LTD";
		break;
	case 0x000F71:
		cid = "Sanmei Electronics Co.,Ltd";
		break;
	case 0x000F78:
		cid = "Datacap Systems Inc";
		break;
	case 0x000F65:
		cid = "icube Corp.";
		break;
	case 0x000F5E:
		cid = "Veo";
		break;
	case 0x000E71:
		cid = "Gemstar Technology Development Ltd.";
		break;
	case 0x000E6C:
		cid = "Device Drivers Limited";
		break;
	case 0x000E65:
		cid = "TransCore";
		break;
	case 0x000E5F:
		cid = "activ-net GmbH & Co. KG";
		break;
	case 0x000E60:
		cid = "360SUN Digital Broadband Corporation";
		break;
	case 0x000E52:
		cid = "Optium Corporation";
		break;
	case 0x000E46:
		cid = "Niigata Seimitsu Co.,Ltd.";
		break;
	case 0x000E4D:
		cid = "Numesa Inc.";
		break;
	case 0x000E3F:
		cid = "Soronti, Inc.";
		break;
	case 0x000EC5:
		cid = "Digital Multitools Inc";
		break;
	case 0x000EB8:
		cid = "Iiga co.,Ltd";
		break;
	case 0x000EB7:
		cid = "Knovative, Inc.";
		break;
	case 0x000EBE:
		cid = "B&B Electronics Manufacturing Co.";
		break;
	case 0x000EB2:
		cid = "Micro-Research Finland Oy";
		break;
	case 0x000EAB:
		cid = "Cray Inc";
		break;
	case 0x000EA5:
		cid = "BLIP Systems";
		break;
	case 0x000E9F:
		cid = "TEMIC SDS GmbH";
		break;
	case 0x000E0A:
		cid = "SAKUMA DESIGN OFFICE";
		break;
	case 0x000E12:
		cid = "Adaptive Micro Systems Inc.";
		break;
	case 0x000E04:
		cid = "CMA/Microdialysis AB";
		break;
	case 0x000DF7:
		cid = "Space Dynamics Lab";
		break;
	case 0x000DFE:
		cid = "Hauppauge Computer Works, Inc.";
		break;
	case 0x000DF1:
		cid = "IONIX INC.";
		break;
	case 0x000DEB:
		cid = "CompXs Limited";
		break;
	case 0x000DF2:
		cid = "Private";
		break;
	case 0x000DE4:
		cid = "DIGINICS, Inc.";
		break;
	case 0x000EF9:
		cid = "REA Elektronik GmbH";
		break;
	case 0x000EF2:
		cid = "Infinico Corporation";
		break;
	case 0x000EE0:
		cid = "Mcharge";
		break;
	case 0x000EDF:
		cid = "PLX Technology";
		break;
	case 0x000EE6:
		cid = "Adimos Systems LTD";
		break;
	case 0x000ECA:
		cid = "WTSS Inc";
		break;
	case 0x000ED1:
		cid = "Osaka Micro Computer.";
		break;
	case 0x000EDA:
		cid = "C-TECH UNITED CORP.";
		break;
	case 0x000ED6:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000E37:
		cid = "Harms & Wende GmbH & Co.KG";
		break;
	case 0x000E38:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000E31:
		cid = "Olympus Soft Imaging Solutions GmbH";
		break;
	case 0x000E2A:
		cid = "Private";
		break;
	case 0x000E25:
		cid = "Hannae Technology Co., Ltd";
		break;
	case 0x000E18:
		cid = "MyA Technology";
		break;
	case 0x000E17:
		cid = "Private";
		break;
	case 0x000E0E:
		cid = "ESA elettronica S.P.A.";
		break;
	case 0x000C7E:
		cid = "Tellium Incorporated";
		break;
	case 0x000C86:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000C81:
		cid = "Schneider Electric (Australia)";
		break;
	case 0x000C72:
		cid = "Tempearl Industrial Co., Ltd.";
		break;
	case 0x000C79:
		cid = "Extel Communications P/L";
		break;
	case 0x000C66:
		cid = "Pronto Networks Inc";
		break;
	case 0x000C6B:
		cid = "Kurz Industrie-Elektronik GmbH";
		break;
	case 0x000C6D:
		cid = "Edwards Ltd.";
		break;
	case 0x000DDF:
		cid = "Japan Image & Network Inc.";
		break;
	case 0x000DD2:
		cid = "Simrad Optronics ASA";
		break;
	case 0x000DD1:
		cid = "Stryker Corporation";
		break;
	case 0x000DD8:
		cid = "BBN";
		break;
	case 0x000DCC:
		cid = "NEOSMART Corp.";
		break;
	case 0x000DBF:
		cid = "TekTone Sound & Signal Mfg., Inc.";
		break;
	case 0x000DC0:
		cid = "Spagat AS";
		break;
	case 0x000DC5:
		cid = "EchoStar Global B.V.";
		break;
	case 0x000DB9:
		cid = "PC Engines GmbH";
		break;
	case 0x000D8C:
		cid = "Shanghai Wedone Digital Ltd. CO.";
		break;
	case 0x000D8B:
		cid = "T&D Corporation";
		break;
	case 0x000D85:
		cid = "Tapwave, Inc.";
		break;
	case 0x000D86:
		cid = "Huber + Suhner AG";
		break;
	case 0x000D7E:
		cid = "Axiowave Networks, Inc.";
		break;
	case 0x000D78:
		cid = "Engineering & Security";
		break;
	case 0x000D77:
		cid = "FalconStor Software";
		break;
	case 0x000D6B:
		cid = "Mita-Teknik A/S";
		break;
	case 0x000D65:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000D5F:
		cid = "Minds Inc";
		break;
	case 0x000D66:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000CB1:
		cid = "Salland Engineering (Europe) BV";
		break;
	case 0x000CB7:
		cid = "Nanjing Huazhuo Electronics Co., Ltd.";
		break;
	case 0x000CBE:
		cid = "Innominate Security Technologies AG";
		break;
	case 0x000CC3:
		cid = "BeWAN systems";
		break;
	case 0x000CB2:
		cid = "UNION co., ltd.";
		break;
	case 0x000CA5:
		cid = "Naman NZ LTd";
		break;
	case 0x000CAC:
		cid = "Citizen Watch Co., Ltd.";
		break;
	case 0x000C94:
		cid = "United Electronic Industries, Inc. (EUI)";
		break;
	case 0x000C99:
		cid = "HITEL LINK Co.,Ltd";
		break;
	case 0x000CA0:
		cid = "StorCase Technology, Inc.";
		break;
	case 0x000C8D:
		cid = "MATRIX VISION GmbH";
		break;
	case 0x000C92:
		cid = "WolfVision Gmbh";
		break;
	case 0x000D32:
		cid = "DispenseSource, Inc.";
		break;
	case 0x000D31:
		cid = "Compellent Technologies, Inc.";
		break;
	case 0x000D25:
		cid = "SANDEN CORPORATION";
		break;
	case 0x000D1F:
		cid = "AV Digital";
		break;
	case 0x000D19:
		cid = "ROBE Show lighting";
		break;
	case 0x000D20:
		cid = "ASAHIKASEI TECHNOSYSTEM CO.,LTD.";
		break;
	case 0x000D0D:
		cid = "ITSupported, LLC";
		break;
	case 0x000D12:
		cid = "AXELL Corporation";
		break;
	case 0x000DB2:
		cid = "Ammasso, Inc.";
		break;
	case 0x000DAD:
		cid = "Dataprobe, Inc.";
		break;
	case 0x000D9E:
		cid = "TOKUDEN OHIZUMI SEISAKUSYO Co.,Ltd.";
		break;
	case 0x000DA5:
		cid = "Fabric7 Systems, Inc";
		break;
	case 0x000D99:
		cid = "Orbital Sciences Corp.; Launch Systems Group";
		break;
	case 0x000D58:
		cid = "Private";
		break;
	case 0x000D4C:
		cid = "Outline Electronics Ltd.";
		break;
	case 0x000D53:
		cid = "Beijing 5w Communication Corp.";
		break;
	case 0x000D3F:
		cid = "VTI Instruments Corporation";
		break;
	case 0x000D44:
		cid = "Audio BU - Logitech";
		break;
	case 0x000D38:
		cid = "NISSIN INC.";
		break;
	case 0x000CD1:
		cid = "SFOM Technology Corp.";
		break;
	case 0x000CD6:
		cid = "PARTNER TECH";
		break;
	case 0x000CDD:
		cid = "AOS technologies AG";
		break;
	case 0x000CCA:
		cid = "HGST a Western Digital Company";
		break;
	case 0x000CC4:
		cid = "Tiptel AG";
		break;
	case 0x000D00:
		cid = "Seaway Networks Inc.";
		break;
	case 0x000D06:
		cid = "Compulogic Limited";
		break;
	case 0x000CFA:
		cid = "Digital Systems Corp";
		break;
	case 0x000CFF:
		cid = "MRO-TEK LIMITED";
		break;
	case 0x000CED:
		cid = "Real Digital Media";
		break;
	case 0x000CEE:
		cid = "jp-embedded";
		break;
	case 0x000CF3:
		cid = "CALL IMAGE SA";
		break;
	case 0x000CE7:
		cid = "MediaTek Inc.";
		break;
	case 0x000CE3:
		cid = "Option International N.V.";
		break;
	case 0x000B01:
		cid = "DAIICHI ELECTRONICS CO., LTD.";
		break;
	case 0x000AF0:
		cid = "SHIN-OH ELECTRONICS CO., LTD. R&D";
		break;
	case 0x000AF5:
		cid = "Airgo Networks, Inc.";
		break;
	case 0x000AEC:
		cid = "Koatsu Gas Kogyo Co., Ltd.";
		break;
	case 0x000AE5:
		cid = "ScottCare Corporation";
		break;
	case 0x000AE7:
		cid = "ELIOP S.A.";
		break;
	case 0x000AE0:
		cid = "Fujitsu Softek";
		break;
	case 0x000AC8:
		cid = "ZPSYS CO.,LTD. (Planning&Management)";
		break;
	case 0x000ACD:
		cid = "Sunrich Technology Limited";
		break;
	case 0x000AD4:
		cid = "CoreBell Systems Inc.";
		break;
	case 0x000B5E:
		cid = "Audio Engineering Society Inc.";
		break;
	case 0x000B63:
		cid = "Kaleidescape";
		break;
	case 0x000B55:
		cid = "ADInstruments";
		break;
	case 0x000B5A:
		cid = "HyperEdge";
		break;
	case 0x000B52:
		cid = "JOYMAX ELECTRONICS CO. LTD.";
		break;
	case 0x000B4D:
		cid = "Emuzed";
		break;
	case 0x000B41:
		cid = "Ing. Büro Dr. Beutlhauser";
		break;
	case 0x000B46:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000B33:
		cid = "Vivato Technologies";
		break;
	case 0x000B3A:
		cid = "QuStream Corporation";
		break;
	case 0x000B3F:
		cid = "Anthology Solutions Inc.";
		break;
	case 0x000B95:
		cid = "eBet Gaming Systems Pty Ltd";
		break;
	case 0x000B8F:
		cid = "AKITA ELECTRONICS SYSTEMS CO.,LTD.";
		break;
	case 0x000B89:
		cid = "Top Global Technology, Ltd.";
		break;
	case 0x000B8E:
		cid = "Ascent Corporation";
		break;
	case 0x000B90:
		cid = "ADVA Optical Networking Ltd.";
		break;
	case 0x000B7D:
		cid = "SOLOMON EXTREME INTERNATIONAL LTD.";
		break;
	case 0x000B82:
		cid = "Grandstream Networks, Inc.";
		break;
	case 0x000B6F:
		cid = "Media Streaming Networks Inc";
		break;
	case 0x000B76:
		cid = "ET&T Technology Co. Ltd.";
		break;
	case 0x000AC1:
		cid = "Futuretel";
		break;
	case 0x000AC6:
		cid = "Overture Networks.";
		break;
	case 0x000AAE:
		cid = "Rosemount Process Analytical";
		break;
	case 0x000AB3:
		cid = "Fa. GIRA";
		break;
	case 0x000AB5:
		cid = "Digital Electronic Network";
		break;
	case 0x000ABA:
		cid = "Arcon Technology Limited";
		break;
	case 0x000AA2:
		cid = "SYSTEK INC.";
		break;
	case 0x000AA7:
		cid = "FEI Electron Optics";
		break;
	case 0x000A8F:
		cid = "Aska International Inc.";
		break;
	case 0x000A94:
		cid = "ShangHai cellink CO., LTD";
		break;
	case 0x000C4E:
		cid = "Winbest Technology CO,LT";
		break;
	case 0x000C53:
		cid = "Private";
		break;
	case 0x000C5A:
		cid = "IBSmm Embedded Electronics Consulting";
		break;
	case 0x000C5F:
		cid = "Avtec, Inc.";
		break;
	case 0x000C47:
		cid = "SK Teletech(R&D Planning Team)";
		break;
	case 0x000C4C:
		cid = "Arcor AG&Co.";
		break;
	case 0x000C3E:
		cid = "Crest Audio";
		break;
	case 0x000C37:
		cid = "Geomation, Inc.";
		break;
	case 0x000C2D:
		cid = "FullWave Technology Co., Ltd.";
		break;
	case 0x000C1A:
		cid = "Quest Technical Solutions Inc.";
		break;
	case 0x000C1E:
		cid = "Global Cache";
		break;
	case 0x000C23:
		cid = "Beijing Lanchuan Tech. Co., Ltd.";
		break;
	case 0x000C0E:
		cid = "XtremeSpectrum, Inc.";
		break;
	case 0x000C15:
		cid = "CyberPower Systems, Inc.";
		break;
	case 0x000C09:
		cid = "Hitachi IE Systems Co., Ltd";
		break;
	case 0x000BD3:
		cid = "cd3o";
		break;
	case 0x000BC7:
		cid = "ICET S.p.A.";
		break;
	case 0x000BCE:
		cid = "Free2move AB";
		break;
	case 0x000BC2:
		cid = "Corinex Communication Corp.";
		break;
	case 0x000BBB:
		cid = "Etin Systems Co., Ltd";
		break;
	case 0x000BC0:
		cid = "China IWNComm Co., Ltd.";
		break;
	case 0x000BAF:
		cid = "WOOJU COMMUNICATIONS Co,.Ltd";
		break;
	case 0x000BB4:
		cid = "RDC Semiconductor Inc.,";
		break;
	case 0x000BA5:
		cid = "Quasar Cipta Mandiri, PT";
		break;
	case 0x000BAA:
		cid = "Aiphone co.,Ltd";
		break;
	case 0x000B9E:
		cid = "Yasing Technology Corp.";
		break;
	case 0x000B27:
		cid = "Scion Corporation";
		break;
	case 0x000B1B:
		cid = "Systronix, Inc.";
		break;
	case 0x000B20:
		cid = "Hirata corporation";
		break;
	case 0x000B22:
		cid = "Environmental Systems and Services";
		break;
	case 0x000B14:
		cid = "ViewSonic Corporation";
		break;
	case 0x000B0D:
		cid = "Air2U, Inc.";
		break;
	case 0x000B0F:
		cid = "Bosch Rexroth";
		break;
	case 0x000B08:
		cid = "Pillar Data Systems";
		break;
	case 0x000AFC:
		cid = "Core Tec Communications, LLC";
		break;
	case 0x000BF6:
		cid = "Nitgen Co., Ltd";
		break;
	case 0x000BFB:
		cid = "D-NET International Corporation";
		break;
	case 0x000C02:
		cid = "ABB Oy";
		break;
	case 0x000BEA:
		cid = "Zultys Technologies";
		break;
	case 0x000BEF:
		cid = "Code Corporation";
		break;
	case 0x000BE3:
		cid = "Key Stream Co., Ltd.";
		break;
	case 0x000BE8:
		cid = "AOIP";
		break;
	case 0x000BE9:
		cid = "Actel Corporation";
		break;
	case 0x000BD7:
		cid = "DORMA Time + Access GmbH";
		break;
	case 0x000BDC:
		cid = "AKCP";
		break;
	case 0x000994:
		cid = "Cronyx Engineering";
		break;
	case 0x000999:
		cid = "CP GEORGES RENAULT";
		break;
	case 0x000987:
		cid = "NISHI NIPPON ELECTRIC WIRE & CABLE CO.,LTD.";
		break;
	case 0x000988:
		cid = "Nudian Electron Co., Ltd.";
		break;
	case 0x00098D:
		cid = "Velocity Semiconductor";
		break;
	case 0x000981:
		cid = "Newport Networks";
		break;
	case 0x000975:
		cid = "fSONA Communications Corporation";
		break;
	case 0x00097A:
		cid = "Louis Design Labs.";
		break;
	case 0x000968:
		cid = "TECHNOVENTURE, INC.";
		break;
	case 0x000962:
		cid = "Sonitor Technologies AS";
		break;
	case 0x000A9B:
		cid = "TB Group Inc";
		break;
	case 0x000A9A:
		cid = "Aiptek International Inc";
		break;
	case 0x000A80:
		cid = "Telkonet Inc.";
		break;
	case 0x000A82:
		cid = "TATSUTA SYSTEM ELECTRONICS CO.,LTD.";
		break;
	case 0x000A87:
		cid = "Integrated Micromachines Inc.";
		break;
	case 0x000A7B:
		cid = "Cornelius Consult";
		break;
	case 0x000A6D:
		cid = "EKS Elektronikservice GmbH";
		break;
	case 0x000A6F:
		cid = "ZyFLEX Technologies Inc";
		break;
	case 0x000A74:
		cid = "Manticom Networks Inc.";
		break;
	case 0x000A61:
		cid = "Cellinx Systems Inc.";
		break;
	case 0x0009C3:
		cid = "NETAS";
		break;
	case 0x0009B9:
		cid = "Action Imaging Solutions";
		break;
	case 0x0009BA:
		cid = "MAKU Informationstechik GmbH";
		break;
	case 0x0009AC:
		cid = "LANVOICE";
		break;
	case 0x0009B3:
		cid = "MCM Systems Ltd";
		break;
	case 0x0009A7:
		cid = "Bang & Olufsen A/S";
		break;
	case 0x00099A:
		cid = "ELMO COMPANY, LIMITED";
		break;
	case 0x0009A0:
		cid = "Microtechno Corporation";
		break;
	case 0x0009ED:
		cid = "CipherOptics";
		break;
	case 0x0009F2:
		cid = "Cohu, Inc., Electronics Division";
		break;
	case 0x0009E6:
		cid = "Cyber Switching Inc.";
		break;
	case 0x0009E0:
		cid = "XEMICS S.A.";
		break;
	case 0x0009DA:
		cid = "Control Module Inc.";
		break;
	case 0x0009CD:
		cid = "HUDSON SOFT CO.,LTD.";
		break;
	case 0x0009C7:
		cid = "Movistec";
		break;
	case 0x0009CE:
		cid = "SpaceBridge Semiconductor Corp.";
		break;
	case 0x0009D3:
		cid = "Western DataCom Co., Inc.";
		break;
	case 0x000901:
		cid = "Shenzhen Shixuntong Information & Technoligy Co";
		break;
	case 0x0008FC:
		cid = "Gigaphoton Inc.";
		break;
	case 0x0008F9:
		cid = "Artesyn Embedded Technologies";
		break;
	case 0x0008F4:
		cid = "Bluetake Technology Co., Ltd.";
		break;
	case 0x0008EB:
		cid = "ROMWin Co.,Ltd.";
		break;
	case 0x0008E4:
		cid = "Envenergy Inc";
		break;
	case 0x0008DF:
		cid = "Alistel Inc.";
		break;
	case 0x0008D8:
		cid = "Dowkey Microwave";
		break;
	case 0x0008D2:
		cid = "ZOOM Networks Inc.";
		break;
	case 0x0008CC:
		cid = "Remotec, Inc.";
		break;
	case 0x0008D1:
		cid = "KAREL INC.";
		break;
	case 0x000967:
		cid = "Tachyon, Inc";
		break;
	case 0x00096E:
		cid = "GIANT ELECTRONICS LTD.";
		break;
	case 0x00095E:
		cid = "Masstech Group Inc.";
		break;
	case 0x000959:
		cid = "Sitecsoft";
		break;
	case 0x00094D:
		cid = "Braintree Communications Pty Ltd";
		break;
	case 0x000952:
		cid = "Auerswald GmbH & Co. KG";
		break;
	case 0x000946:
		cid = "Cluster Labs GmbH";
		break;
	case 0x000940:
		cid = "AGFEO GmbH & Co. KG";
		break;
	case 0x00093F:
		cid = "Double-Win Enterpirse CO., LTD";
		break;
	case 0x000933:
		cid = "Ophit Co.Ltd.";
		break;
	case 0x000A5C:
		cid = "Carel s.p.a.";
		break;
	case 0x000A50:
		cid = "REMOTEK CORPORATION";
		break;
	case 0x000A55:
		cid = "MARKEM Corporation";
		break;
	case 0x000A4E:
		cid = "UNITEK Electronics INC.";
		break;
	case 0x000A42:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000A49:
		cid = "F5 Networks, Inc.";
		break;
	case 0x000A36:
		cid = "Synelec Telecom Multimedia";
		break;
	case 0x000A3B:
		cid = "GCT Semiconductor, Inc";
		break;
	case 0x000A3D:
		cid = "Elo Sistemas Eletronicos S.A.";
		break;
	case 0x000A2F:
		cid = "Artnix Inc.";
		break;
	case 0x000927:
		cid = "TOYOKEIKI CO.,LTD.";
		break;
	case 0x00092E:
		cid = "B&Tech System Inc.";
		break;
	case 0x000920:
		cid = "EpoX COMPUTER CO.,LTD.";
		break;
	case 0x00091B:
		cid = "Digital Generation Inc.";
		break;
	case 0x000914:
		cid = "COMPUTROLS INC.";
		break;
	case 0x00090E:
		cid = "Helix Technology Inc.";
		break;
	case 0x000908:
		cid = "VTech Technology Corp.";
		break;
	case 0x00090D:
		cid = "LEADER ELECTRONICS CORP.";
		break;
	case 0x000A20:
		cid = "SVA Networks, Inc.";
		break;
	case 0x000A25:
		cid = "CERAGON NETWORKS";
		break;
	case 0x000A14:
		cid = "TECO a.s.";
		break;
	case 0x000A19:
		cid = "Valere Power, Inc.";
		break;
	case 0x000A0D:
		cid = "FCI Deutschland GmbH";
		break;
	case 0x000A12:
		cid = "Azylex Technology, Inc";
		break;
	case 0x0009F9:
		cid = "ART JAPAN CO., LTD.";
		break;
	case 0x0009FC:
		cid = "IPFLEX Inc.";
		break;
	case 0x000A03:
		cid = "ENDESA SERVICIOS, S.L.";
		break;
	case 0x000705:
		cid = "Endress & Hauser GmbH & Co";
		break;
	case 0x0006F8:
		cid = "The Boeing Company";
		break;
	case 0x0006FF:
		cid = "Sheba Systems Co., Ltd.";
		break;
	case 0x0006FD:
		cid = "Comjet Information Systems Corp.";
		break;
	case 0x0006E7:
		cid = "Bit Blitz Communications Inc.";
		break;
	case 0x0006ED:
		cid = "Inara Networks";
		break;
	case 0x0006DC:
		cid = "Syabas Technology (Amquest)";
		break;
	case 0x0006E1:
		cid = "Techno Trade s.a";
		break;
	case 0x0006E6:
		cid = "DongYang Telecom Co., Ltd.";
		break;
	case 0x0006CF:
		cid = "Thales Avionics In-Flight Systems, LLC";
		break;
	case 0x0006D6:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0006D5:
		cid = "Diamond Systems Corp.";
		break;
	case 0x0006C9:
		cid = "Technical Marketing Research, Inc.";
		break;
	case 0x0007B1:
		cid = "Equator Technologies";
		break;
	case 0x0007B8:
		cid = "Corvalent Corporation";
		break;
	case 0x0007B2:
		cid = "Transaccess S.A.";
		break;
	case 0x0007A4:
		cid = "GN Netcom Ltd.";
		break;
	case 0x0007AA:
		cid = "Quantum Data Inc.";
		break;
	case 0x00079D:
		cid = "Musashi Co., Ltd.";
		break;
	case 0x00079E:
		cid = "Ilinx Co., Ltd.";
		break;
	case 0x000774:
		cid = "GuangZhou Thinker Technology Co. Ltd.";
		break;
	case 0x000791:
		cid = "International Data Communications, Inc.";
		break;
	case 0x000798:
		cid = "Selea SRL";
		break;
	case 0x000797:
		cid = "Netpower Co., Ltd.";
		break;
	case 0x00078B:
		cid = "Wegener Communications, Inc.";
		break;
	case 0x000785:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00077B:
		cid = "Millimetrix Broadband Networks";
		break;
	case 0x000856:
		cid = "Gamatronic Electronic Industries Ltd.";
		break;
	case 0x00082D:
		cid = "Indus Teqsite Private Limited";
		break;
	case 0x000821:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000814:
		cid = "TIL Technologies";
		break;
	case 0x00081A:
		cid = "Sanrad Intelligence Storage Communications (2000) Ltd.";
		break;
	case 0x00080F:
		cid = "Proximion Fiber Optics AB";
		break;
	case 0x000809:
		cid = "Systemonic AG";
		break;
	case 0x000803:
		cid = "Cos Tron";
		break;
	case 0x0007FF:
		cid = "Gluon Networks";
		break;
	case 0x0007F9:
		cid = "Sensaphone";
		break;
	case 0x000894:
		cid = "InnoVISION Multimedia Ltd.";
		break;
	case 0x00088F:
		cid = "ADVANCED DIGITAL TECHNOLOGY";
		break;
	case 0x000888:
		cid = "OULLIM Information Technology Inc,.";
		break;
	case 0x000882:
		cid = "SIGMA CORPORATION";
		break;
	case 0x00087C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000875:
		cid = "Acorp Electronics Corp.";
		break;
	case 0x000870:
		cid = "Rasvia Systems, Inc.";
		break;
	case 0x00086F:
		cid = "Resources Computer Network Ltd.";
		break;
	case 0x000869:
		cid = "Command-e Technology Co.,Ltd.";
		break;
	case 0x000863:
		cid = "Entrisphere Inc.";
		break;
	case 0x00085D:
		cid = "Aastra";
		break;
	case 0x000862:
		cid = "NEC Eluminant Technologies, Inc.";
		break;
	case 0x000850:
		cid = "Arizona Instrument Corp.";
		break;
	case 0x000738:
		cid = "Young Technology Co., Ltd.";
		break;
	case 0x00073F:
		cid = "Woojyun Systec Co., Ltd.";
		break;
	case 0x00072C:
		cid = "Fabricom";
		break;
	case 0x000733:
		cid = "DANCONTROL Engineering";
		break;
	case 0x000732:
		cid = "AAEON Technology Inc.";
		break;
	case 0x000716:
		cid = "J & S Marine Ltd.";
		break;
	case 0x00071B:
		cid = "CDVI Americas Ltd";
		break;
	case 0x000722:
		cid = "The Nielsen Company";
		break;
	case 0x00070A:
		cid = "Unicom Automation Co., Ltd.";
		break;
	case 0x00070F:
		cid = "Fujant, Inc.";
		break;
	case 0x000709:
		cid = "Westerstrand Urfabrik AB";
		break;
	case 0x000702:
		cid = "Varian Medical Systems";
		break;
	case 0x0006F3:
		cid = "AcceLight Networks";
		break;
	case 0x0006C3:
		cid = "Schindler Elevator Ltd.";
		break;
	case 0x0006C8:
		cid = "Sumitomo Metal Micro Devices, Inc.";
		break;
	case 0x0006BF:
		cid = "Accella Technologies Co., Ltd.";
		break;
	case 0x0006B9:
		cid = "A5TEK Corp.";
		break;
	case 0x0006B2:
		cid = "Linxtek Co.";
		break;
	case 0x0006AC:
		cid = "Intersoft Co.";
		break;
	case 0x0006A6:
		cid = "Artistic Licence Engineering Ltd";
		break;
	case 0x0006A2:
		cid = "Microtune, Inc.";
		break;
	case 0x000695:
		cid = "Ensure Technologies, Inc.";
		break;
	case 0x00069C:
		cid = "Transmode Systems AB";
		break;
	case 0x000696:
		cid = "Advent Networks";
		break;
	case 0x0007F3:
		cid = "Thinkengine Networks";
		break;
	case 0x0007EC:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0007F2:
		cid = "IOA Corporation";
		break;
	case 0x0007E6:
		cid = "edgeflow Canada Inc.";
		break;
	case 0x0007E0:
		cid = "Palm Inc.";
		break;
	case 0x0007D9:
		cid = "Splicecom";
		break;
	case 0x0007DA:
		cid = "Neuro Telecom Co., Ltd.";
		break;
	case 0x0007D3:
		cid = "SPGPrints B.V.";
		break;
	case 0x0007CA:
		cid = "Creatix Polymedia Ges Fur Kommunikaitonssysteme";
		break;
	case 0x0007C4:
		cid = "JEAN Co. Ltd.";
		break;
	case 0x0007BE:
		cid = "DataLogic SpA";
		break;
	case 0x00077E:
		cid = "Elrest GmbH";
		break;
	case 0x00076F:
		cid = "Synoptics Limited";
		break;
	case 0x00076E:
		cid = "Sinetica Corporation Limited";
		break;
	case 0x00076A:
		cid = "NEXTEYE Co., Ltd.";
		break;
	case 0x00075E:
		cid = "Ametek Power Instruments";
		break;
	case 0x000765:
		cid = "Jade Quantum Technologies, Inc.";
		break;
	case 0x000764:
		cid = "YoungWoo Telecom Co. Ltd.";
		break;
	case 0x000757:
		cid = "Topcall International AG";
		break;
	case 0x000758:
		cid = "Dragonwave";
		break;
	case 0x000752:
		cid = "Rhythm Watch Co., Ltd.";
		break;
	case 0x00074B:
		cid = "Daihen Corporation";
		break;
	case 0x000745:
		cid = "Radlan Computer Communications Ltd.";
		break;
	case 0x0008C2:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0008BB:
		cid = "NetExcell";
		break;
	case 0x0008B5:
		cid = "TAI GUEN ENTERPRISE CO., LTD";
		break;
	case 0x0008B6:
		cid = "RouteFree, Inc.";
		break;
	case 0x0008AF:
		cid = "Novatec Corporation";
		break;
	case 0x0008A9:
		cid = "SangSang Technology, Inc.";
		break;
	case 0x0008A8:
		cid = "Systec Co., Ltd.";
		break;
	case 0x0008A3:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00089C:
		cid = "Elecs Industry Co., Ltd.";
		break;
	case 0x000690:
		cid = "Euracom Communication GmbH";
		break;
	case 0x00068F:
		cid = "Telemonitor, Inc.";
		break;
	case 0x000689:
		cid = "yLez Technologies Pte Ltd";
		break;
	case 0x000683:
		cid = "Bravara Communications, Inc.";
		break;
	case 0x00D0B9:
		cid = "MICROTEK INTERNATIONAL, INC.";
		break;
	case 0x00067D:
		cid = "Takasago Ltd.";
		break;
	case 0x000675:
		cid = "Banderacom, Inc.";
		break;
	case 0x000679:
		cid = "Konami Corporation";
		break;
	case 0x000663:
		cid = "Human Technology Co., Ltd.";
		break;
	case 0x00066F:
		cid = "Korea Data Systems";
		break;
	case 0x000662:
		cid = "MBM Technology Ltd.";
		break;
	case 0x000669:
		cid = "Datasound Laboratories Ltd";
		break;
	case 0x00055A:
		cid = "Power Dsine Ltd.";
		break;
	case 0x00065C:
		cid = "Malachite Technologies, Inc.";
		break;
	case 0x000610:
		cid = "Abeona Networks Inc";
		break;
	case 0x000616:
		cid = "Tel Net Co., Ltd.";
		break;
	case 0x00060A:
		cid = "Blue2space";
		break;
	case 0x000604:
		cid = "@Track Communications, Inc.";
		break;
	case 0x00CBBD:
		cid = "Cambridge Broadband Networks Ltd.";
		break;
	case 0x000603:
		cid = "Baker Hughes Inc.";
		break;
	case 0xA06A00:
		cid = "Verilink Corporation";
		break;
	case 0x0005F5:
		cid = "Geospace Technologies";
		break;
	case 0x000601:
		cid = "Otanikeiki Co., Ltd.";
		break;
	case 0x0005E8:
		cid = "TurboWave, Inc.";
		break;
	case 0x0005F4:
		cid = "System Base Co., Ltd.";
		break;
	case 0x0005FB:
		cid = "ShareGate, Inc.";
		break;
	case 0x0005DB:
		cid = "PSI Nentec GmbH";
		break;
	case 0x0005DF:
		cid = "Electronic Innovation, Inc.";
		break;
	case 0x0005CF:
		cid = "Thunder River Technologies, Inc.";
		break;
	case 0x0005C9:
		cid = "LG Innotek Co., Ltd.";
		break;
	case 0x0005D5:
		cid = "Speedcom Wireless";
		break;
	case 0x0005BC:
		cid = "Resource Data Management Ltd";
		break;
	case 0x0005C2:
		cid = "Soronti, Inc.";
		break;
	case 0x0005B0:
		cid = "Korea Computer Technology Co., Ltd.";
		break;
	case 0x00059C:
		cid = "Kleinknecht GmbH, Ing. Büro";
		break;
	case 0x0005B6:
		cid = "INSYS Microelectronics GmbH";
		break;
	case 0x0005A2:
		cid = "CELOX Networks";
		break;
	case 0x0005AC:
		cid = "Northern Digital, Inc.";
		break;
	case 0x0004E5:
		cid = "Glonet Systems, Inc.";
		break;
	case 0x0004D9:
		cid = "Titan Electronics, Inc.";
		break;
	case 0x0004D3:
		cid = "Toyokeiki Co., Ltd.";
		break;
	case 0x0004CC:
		cid = "Peek Traffic B.V.";
		break;
	case 0x0004C0:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0004B9:
		cid = "S.I. Soubou, Inc.";
		break;
	case 0x0004BA:
		cid = "KDD Media Will Corporation";
		break;
	case 0x0004AF:
		cid = "Digital Fountain, Inc.";
		break;
	case 0x0004B4:
		cid = "CIAC";
		break;
	case 0x0004B3:
		cid = "Videotek, Inc.";
		break;
	case 0x0004A6:
		cid = "SAF Tehnika Ltd.";
		break;
	case 0x0004A0:
		cid = "Verity Instruments, Inc.";
		break;
	case 0x00050C:
		cid = "Network Photonics, Inc.";
		break;
	case 0x000512:
		cid = "Zebra Technologies Inc";
		break;
	case 0x000506:
		cid = "Reddo Networks AB";
		break;
	case 0x0004F6:
		cid = "Amphus";
		break;
	case 0x0004F5:
		cid = "SnowShore Networks, Inc.";
		break;
	case 0x0004E9:
		cid = "Infiniswitch Corporation";
		break;
	case 0x0004F0:
		cid = "International Computers, Ltd";
		break;
	case 0x0004EF:
		cid = "Polestar Corp.";
		break;
	case 0x0004DF:
		cid = "Teracom Telematica Ltda.";
		break;
	case 0x000553:
		cid = "DVC Company, Inc.";
		break;
	case 0x000548:
		cid = "Disco Corporation";
		break;
	case 0x00054D:
		cid = "Brans Technologies, Inc.";
		break;
	case 0x000542:
		cid = "Otari, Inc.";
		break;
	case 0x00053C:
		cid = "XIRCOM";
		break;
	case 0x00052F:
		cid = "Leviton Network Solutions";
		break;
	case 0x00053B:
		cid = "Harbour Networks Ltd., Co. Beijing";
		break;
	case 0x000535:
		cid = "Chip PC Ltd.";
		break;
	case 0x000529:
		cid = "Shanghai Broadan Communication Technology Co., Ltd";
		break;
	case 0x000523:
		cid = "AVL List GmbH";
		break;
	case 0x000522:
		cid = "LEA*D Corporation, Inc.";
		break;
	case 0x00051C:
		cid = "Xnet Technology Corp.";
		break;
	case 0x000516:
		cid = "SMART Modular Technologies";
		break;
	case 0x000650:
		cid = "Tiburon Networks, Inc.";
		break;
	case 0x000656:
		cid = "Tactel AB";
		break;
	case 0x00062D:
		cid = "TouchStar Technologies, L.L.C.";
		break;
	case 0x000649:
		cid = "3M Deutschland GmbH";
		break;
	case 0x000643:
		cid = "SONO Computer Co., Ltd.";
		break;
	case 0x00064A:
		cid = "Honeywell Co., Ltd. (KOREA)";
		break;
	case 0x00063F:
		cid = "Everex Communications Inc.";
		break;
	case 0x000639:
		cid = "Newtec";
		break;
	case 0x000633:
		cid = "Cross Match Technologies GmbH";
		break;
	case 0x000626:
		cid = "MWE GmbH";
		break;
	case 0x00061D:
		cid = "MIP Telecom, Inc.";
		break;
	case 0x000623:
		cid = "MGE UPS Systems France";
		break;
	case 0x000589:
		cid = "National Datacomputer";
		break;
	case 0x000595:
		cid = "Alesis Corporation";
		break;
	case 0x00058F:
		cid = "CLCsoft co.";
		break;
	case 0x000596:
		cid = "Genotech Co., Ltd.";
		break;
	case 0x00057D:
		cid = "Sun Communications, Inc.";
		break;
	case 0x00057C:
		cid = "RCO Security AB";
		break;
	case 0x000583:
		cid = "ImageCom Limited";
		break;
	case 0x000573:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000572:
		cid = "Deonet Co., Ltd.";
		break;
	case 0x00056C:
		cid = "Hung Chang Co., Ltd.";
		break;
	case 0x000566:
		cid = "Secui.com Corporation";
		break;
	case 0x000560:
		cid = "LEADER COMM.CO., LTD";
		break;
	case 0x000559:
		cid = "Intracom S.A.";
		break;
	case 0x0004A5:
		cid = "Barco Projection Systems NV";
		break;
	case 0x000499:
		cid = "Chino Corporation";
		break;
	case 0x00048D:
		cid = " Teo Technologies, Inc";
		break;
	case 0x000493:
		cid = "Tsinghua Unisplendour Co., Ltd.";
		break;
	case 0x000484:
		cid = "Amann GmbH";
		break;
	case 0x00048A:
		cid = "Temia Vertriebs GmbH";
		break;
	case 0x00047A:
		cid = "AXXESSIT ASA";
		break;
	case 0x000474:
		cid = "LEGRAND";
		break;
	case 0x00046E:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000473:
		cid = "Photonex Corporation";
		break;
	case 0x000467:
		cid = "Wuhan Research Institute of MII";
		break;
	case 0x000461:
		cid = "EPOX Computer Co., Ltd.";
		break;
	case 0x0003D9:
		cid = "Secheron SA";
		break;
	case 0x0003D2:
		cid = "Crossbeam Systems, Inc.";
		break;
	case 0x0003CD:
		cid = "Clovertech, Inc.";
		break;
	case 0x0003CA:
		cid = "MTS Systems Corp.";
		break;
	case 0x0003C6:
		cid = "ICUE Systems, Inc.";
		break;
	case 0x0003BF:
		cid = "Centerpoint Broadband Technologies, Inc.";
		break;
	case 0x0003BA:
		cid = "Oracle Corporation";
		break;
	case 0x0003AF:
		cid = "Paragea Communications";
		break;
	case 0x0003B4:
		cid = "Macrotek International Corp.";
		break;
	case 0x0003AC:
		cid = "Fronius Schweissmaschinen";
		break;
	case 0x0003A8:
		cid = "IDOT Computers, Inc.";
		break;
	case 0x0003A1:
		cid = "HIPER Information & Communication, Inc.";
		break;
	case 0x000399:
		cid = "Dongju Informations & Communications Co., Ltd.";
		break;
	case 0x00039C:
		cid = "OptiMight Communications, Inc.";
		break;
	case 0x000390:
		cid = "Digital Video Communications, Inc.";
		break;
	case 0x000395:
		cid = "California Amplifier";
		break;
	case 0x000380:
		cid = "SSH Communications Security Corp.";
		break;
	case 0x000374:
		cid = "Control Microsystems";
		break;
	case 0x0002F0:
		cid = "AME Optimedia Technology Co., Ltd.";
		break;
	case 0x000379:
		cid = "Proscend Communications, Inc.";
		break;
	case 0x000371:
		cid = "Acomz Networks Corp.";
		break;
	case 0x00036D:
		cid = "Runtop, Inc.";
		break;
	case 0x0002E3:
		cid = "LITE-ON Communications, Inc.";
		break;
	case 0x0002DE:
		cid = "Astrodesign, Inc.";
		break;
	case 0x0002DB:
		cid = "NETSEC";
		break;
	case 0x0002D7:
		cid = "EMPEG Ltd";
		break;
	case 0x0002D2:
		cid = "Workstation AG";
		break;
	case 0x000223:
		cid = "ClickTV";
		break;
	case 0x0002CB:
		cid = "TriState Ltd.";
		break;
	case 0x0002C4:
		cid = "Vector International BVBA";
		break;
	case 0x0002BF:
		cid = "dotRocket, Inc.";
		break;
	case 0x0002BB:
		cid = "Continuous Computing Corp";
		break;
	case 0x0002BC:
		cid = "LVL 7 Systems, Inc.";
		break;
	case 0x0002B6:
		cid = "Acrosser Technology Co., Ltd.";
		break;
	case 0x0002AF:
		cid = "TeleCruz Technology, Inc.";
		break;
	case 0x0002AA:
		cid = "PLcom Co., Ltd.";
		break;
	case 0x00045B:
		cid = "Techsan Electronics Co., Ltd.";
		break;
	case 0x00044E:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00044F:
		cid = "Schubert System Elektronik Gmbh";
		break;
	case 0x000454:
		cid = "Quadriga UK";
		break;
	case 0x000445:
		cid = "LMS Skalar Instruments GmbH";
		break;
	case 0x00044A:
		cid = "iPolicy Networks, Inc.";
		break;
	case 0x000444:
		cid = "Western Multiplex Corporation";
		break;
	case 0x00043E:
		cid = "Telencomm";
		break;
	case 0x000432:
		cid = "Voyetra Turtle Beach, Inc.";
		break;
	case 0x000437:
		cid = "Powin Information Technology, Inc.";
		break;
	case 0x00042B:
		cid = "IT Access Co., Ltd.";
		break;
	case 0x000361:
		cid = "Widcomm, Inc.";
		break;
	case 0x00035A:
		cid = "Photron Limited";
		break;
	case 0x000355:
		cid = "TeraBeam Internet Systems";
		break;
	case 0x000353:
		cid = "Mitac, Inc.";
		break;
	case 0x00034F:
		cid = "Sur-Gard Security";
		break;
	case 0x00034A:
		cid = "RIAS Corporation";
		break;
	case 0x000346:
		cid = "Hitachi Kokusai Electric, Inc.";
		break;
	case 0x000344:
		cid = "Tietech.Co., Ltd.";
		break;
	case 0x000343:
		cid = "Martin Professional A/S";
		break;
	case 0x000334:
		cid = "Newport Electronics";
		break;
	case 0x000337:
		cid = "Vaone, Inc.";
		break;
	case 0x00033C:
		cid = "Daiden Co., Ltd.";
		break;
	case 0x000329:
		cid = "F3, Inc.";
		break;
	case 0x000330:
		cid = "Imagenics, Co., Ltd.";
		break;
	case 0x000321:
		cid = "Reco Research Co., Ltd.";
		break;
	case 0x000324:
		cid = "SANYO Consumer Electronics Co., Ltd.";
		break;
	case 0x00031B:
		cid = "Cellvision Systems, Inc.";
		break;
	case 0x0001A8:
		cid = "Welltech Computer Co., Ltd.";
		break;
	case 0x00030F:
		cid = "Digital China (Shanghai) Networks Ltd.";
		break;
	case 0x000314:
		cid = "Teleware Network Systems";
		break;
	case 0x00030C:
		cid = "Telesoft Technologies Ltd.";
		break;
	case 0x000308:
		cid = "AM Communications, Inc.";
		break;
	case 0x0002FC:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000301:
		cid = "EXFO";
		break;
	case 0x0002F9:
		cid = "MIMOS Berhad";
		break;
	case 0x0002F5:
		cid = "VIVE Synergies, Inc.";
		break;
	case 0x0002EA:
		cid = "Focus Enhancements";
		break;
	case 0x000269:
		cid = "Nadatel Co., Ltd";
		break;
	case 0x000265:
		cid = "Virditech Co. Ltd.";
		break;
	case 0x00025E:
		cid = "High Technology Ltd";
		break;
	case 0x000259:
		cid = "Tsann Kuen China (Shanghai)Enterprise Co., Ltd. IT Group";
		break;
	case 0x000255:
		cid = "IBM Corp";
		break;
	case 0x000249:
		cid = "Aviv Infocom Co, Ltd.";
		break;
	case 0x000250:
		cid = "Geyser Networks, Inc.";
		break;
	case 0x000242:
		cid = "Videoframe Systems";
		break;
	case 0x000244:
		cid = "SURECOM Technology Co.";
		break;
	case 0x00022C:
		cid = "ABB Bomem, Inc.";
		break;
	case 0x00023A:
		cid = "ZSK Stickmaschinen GmbH";
		break;
	case 0x000425:
		cid = "Atmel Corporation";
		break;
	case 0x000419:
		cid = "Fibercycle Networks, Inc.";
		break;
	case 0x00041A:
		cid = "Ines Test and Measurement GmbH & CoKG";
		break;
	case 0x000414:
		cid = "Umezawa Musen Denki Co., Ltd.";
		break;
	case 0x000407:
		cid = "Topcon Positioning Systems, Inc.";
		break;
	case 0x0003F7:
		cid = "Plast-Control GmbH";
		break;
	case 0x0003FE:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0003FD:
		cid = "Cisco Systems, Inc";
		break;
	case 0x000401:
		cid = "Osaki Electric Co., Ltd.";
		break;
	case 0x0003F0:
		cid = "Redfern Broadband Networks";
		break;
	case 0x0003EB:
		cid = "Atrica";
		break;
	case 0x0003E5:
		cid = "Hermstedt SG";
		break;
	case 0x0002A3:
		cid = "ABB Switzerland Ltd, Power Systems";
		break;
	case 0x000298:
		cid = "Broadframe Corporation";
		break;
	case 0x000292:
		cid = "Logic Innovations, Inc.";
		break;
	case 0x00028D:
		cid = "Movita Technologies, Inc.";
		break;
	case 0x000283:
		cid = "Spectrum Controls, Inc.";
		break;
	case 0x000277:
		cid = "Cash Systemes Industrie";
		break;
	case 0x00027C:
		cid = "Trilithic, Inc.";
		break;
	case 0x000275:
		cid = "SMART Technologies, Inc.";
		break;
	case 0x000270:
		cid = "Crewave Co., Ltd.";
		break;
	case 0x000104:
		cid = "DVICO Co., Ltd.";
		break;
	case 0x000110:
		cid = "Gotham Networks";
		break;
	case 0x00010C:
		cid = "System Talks Inc.";
		break;
	case 0x000113:
		cid = "OLYMPUS CORPORATION";
		break;
	case 0x000100:
		cid = "EQUIP'TRANS";
		break;
	case 0x00B0AC:
		cid = "SIAE-Microelettronica S.p.A.";
		break;
	case 0x00B017:
		cid = "InfoGear Technology Corp.";
		break;
	case 0x0030F0:
		cid = "Uniform Industrial Corp.";
		break;
	case 0x00B080:
		cid = "Mannesmann Ipulsys B.V.";
		break;
	case 0x00B09A:
		cid = "Morrow Technologies Corp.";
		break;
	case 0x00B091:
		cid = "Transmeta Corp.";
		break;
	case 0x0030BE:
		cid = "City-Net Technology, Inc.";
		break;
	case 0x000233:
		cid = "Mantra Communications, Inc.";
		break;
	case 0x00022F:
		cid = "P-Cube, Ltd.";
		break;
	case 0x000227:
		cid = "ESD Electronic System Design GmbH";
		break;
	case 0x00021F:
		cid = "Aculab PLC";
		break;
	case 0x00021B:
		cid = "Kollmorgen-Servotronix";
		break;
	case 0x00020C:
		cid = "Metro-Optix";
		break;
	case 0x000218:
		cid = "Advanced Scientific Corp";
		break;
	case 0x000213:
		cid = "S.D.E.L.";
		break;
	case 0x00020F:
		cid = "AATR";
		break;
	case 0x0001F9:
		cid = "TeraGlobal Communications Corp.";
		break;
	case 0x000200:
		cid = "Net & Sys Co., Ltd.";
		break;
	case 0x0001FC:
		cid = "Keyence Corporation";
		break;
	case 0x0001F3:
		cid = "QPS, Inc.";
		break;
	case 0x0001E4:
		cid = "Sitera, Inc.";
		break;
	case 0x0001EB:
		cid = "C-COM Corporation";
		break;
	case 0x0001F0:
		cid = "Tridium, Inc.";
		break;
	case 0x0001D4:
		cid = "Leisure Time, Inc.";
		break;
	case 0x0001D8:
		cid = "Teltronics, Inc.";
		break;
	case 0x0001C6:
		cid = "Quarry Technologies";
		break;
	case 0x0001CC:
		cid = "Japan Total Design Communication Co., Ltd.";
		break;
	case 0x0001D1:
		cid = "CoNet Communications, Inc.";
		break;
	case 0x0001B3:
		cid = "Precision Electronic Manufacturing";
		break;
	case 0x000160:
		cid = "ELMEX Co., LTD.";
		break;
	case 0x00015E:
		cid = "BEST TECHNOLOGY CO., LTD.";
		break;
	case 0x000162:
		cid = "Cygnet Technologies, Inc.";
		break;
	case 0x000169:
		cid = "Celestix Networks Pte Ltd.";
		break;
	case 0x000175:
		cid = "Radiant Communications Corp.";
		break;
	case 0x000159:
		cid = "S1 Corporation";
		break;
	case 0x000165:
		cid = "AirSwitch Corporation";
		break;
	case 0x000171:
		cid = "Allied Data Technologies";
		break;
	case 0x000157:
		cid = "SYSWAVE CO., LTD";
		break;
	case 0x000153:
		cid = "ARCHTEK TELECOM CORPORATION";
		break;
	case 0x003038:
		cid = "XCP, INC.";
		break;
	case 0x0030DB:
		cid = "Mindready Solutions, Inc.";
		break;
	case 0x00306A:
		cid = "PENTA MEDIA CO., LTD.";
		break;
	case 0x003021:
		cid = "HSING TECH. ENTERPRISE CO.,LTD";
		break;
	case 0x0030EA:
		cid = "TeraForce Technology Corporation";
		break;
	case 0x0030F4:
		cid = "STARDOT TECHNOLOGIES";
		break;
	case 0x003087:
		cid = "VEGA GRIESHABER KG";
		break;
	case 0x003000:
		cid = "ALLWELL TECHNOLOGY CORP.";
		break;
	case 0x003034:
		cid = "SET ENGINEERING";
		break;
	case 0x00308D:
		cid = "Pinnacle Systems, Inc.";
		break;
	case 0x00304B:
		cid = "ORBACOM SYSTEMS, INC.";
		break;
	case 0x0030FA:
		cid = "TELICA, INC.";
		break;
	case 0x0001B1:
		cid = "General Bandwidth";
		break;
	case 0x0001BB:
		cid = "Frequentis";
		break;
	case 0x0001B7:
		cid = "Centos, Inc.";
		break;
	case 0x0001AF:
		cid = "Artesyn Embedded Technologies";
		break;
	case 0x0001AB:
		cid = "Main Street Networks";
		break;
	case 0x000191:
		cid = "SYRED Data Systems";
		break;
	case 0x00019D:
		cid = "E-Control Systems, Inc.";
		break;
	case 0x0001A4:
		cid = "Microlink Corporation";
		break;
	case 0x000199:
		cid = "HeiSei Electronics";
		break;
	case 0x0001A0:
		cid = "Infinilink Corporation";
		break;
	case 0x00017C:
		cid = "AG-E GmbH";
		break;
	case 0x000188:
		cid = "LXCO Technologies ag";
		break;
	case 0x000178:
		cid = "MARGI Systems, Inc.";
		break;
	case 0x00018B:
		cid = "NetLinks Co., Ltd.";
		break;
	case 0x0030F5:
		cid = "Wild Lab. Ltd.";
		break;
	case 0x000184:
		cid = "SIEB & MEYER AG";
		break;
	case 0x00303E:
		cid = "Radcom Ltd.";
		break;
	case 0x0030D7:
		cid = "Innovative Systems, L.L.C.";
		break;
	case 0x0030FC:
		cid = "Terawave Communications, Inc.";
		break;
	case 0x00300F:
		cid = "IMT - Information Management T";
		break;
	case 0x003004:
		cid = "LEADTEK RESEARCH INC.";
		break;
	case 0x003018:
		cid = "Jetway Information Co., Ltd.";
		break;
	case 0x003088:
		cid = "Ericsson";
		break;
	case 0x0030CA:
		cid = "Discovery Com";
		break;
	case 0x00304F:
		cid = "PLANET Technology Corporation";
		break;
	case 0x00014B:
		cid = "Ennovate Networks, Inc.";
		break;
	case 0x00012C:
		cid = "Aravox Technologies, Inc.";
		break;
	case 0x000134:
		cid = "Selectron Systems AG";
		break;
	case 0x00013B:
		cid = "BNA SYSTEMS";
		break;
	case 0x000147:
		cid = "Zhone Technologies";
		break;
	case 0x00012B:
		cid = "TELENET Co., Ltd.";
		break;
	case 0x00011C:
		cid = "Universal Talkware Corporation";
		break;
	case 0x00011F:
		cid = "RC Networks, Inc.";
		break;
	case 0x003045:
		cid = "Village Networks, Inc. (VNI)";
		break;
	case 0x0030BB:
		cid = "CacheFlow, Inc.";
		break;
	case 0x003053:
		cid = "Basler AG";
		break;
	case 0x003072:
		cid = "Intellibyte Inc.";
		break;
	case 0x0030B1:
		cid = "TrunkNet";
		break;
	case 0x0030A7:
		cid = "SCHWEITZER ENGINEERING";
		break;
	case 0x00D086:
		cid = "FOVEON, INC.";
		break;
	case 0x00D05A:
		cid = "SYMBIONICS, LTD.";
		break;
	case 0x00D01A:
		cid = "URMET  TLC S.P.A.";
		break;
	case 0x00D0F3:
		cid = "SOLARI DI UDINE SPA";
		break;
	case 0x00D089:
		cid = "DYNACOLOR, INC.";
		break;
	case 0x00D08D:
		cid = "PHOENIX GROUP, INC.";
		break;
	case 0x00D09C:
		cid = "KAPADIA COMMUNICATIONS";
		break;
	case 0x00D0FE:
		cid = "ASTRAL POINT";
		break;
	case 0x00D0DC:
		cid = "MODULAR MINING SYSTEMS, INC.";
		break;
	case 0x00D062:
		cid = "DIGIGRAM";
		break;
	case 0x00D0A7:
		cid = "TOKYO SOKKI KENKYUJO CO., LTD.";
		break;
	case 0x00D032:
		cid = "YANO ELECTRIC CO., LTD.";
		break;
	case 0x00D054:
		cid = "SAS INSTITUTE INC.";
		break;
	case 0x00D0EB:
		cid = "LIGHTERA NETWORKS, INC.";
		break;
	case 0x00D01E:
		cid = "PINGTEL CORP.";
		break;
	case 0x00D0A9:
		cid = "SHINANO KENSHI CO., LTD.";
		break;
	case 0x0030E9:
		cid = "GMA COMMUNICATION MANUFACT'G";
		break;
	case 0x003027:
		cid = "KERBANGO, INC.";
		break;
	case 0x0030F6:
		cid = "SECURELOGIX CORPORATION";
		break;
	case 0x0030B6:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0030B2:
		cid = "L-3 Sonoma EO";
		break;
	case 0x0030D6:
		cid = "MSC VERTRIEBS GMBH";
		break;
	case 0x003008:
		cid = "AVIO DIGITAL, INC.";
		break;
	case 0x00306D:
		cid = "LUCENT TECHNOLOGIES";
		break;
	case 0x0030E4:
		cid = "CHIYODA SYSTEM RIKEN";
		break;
	case 0x00301A:
		cid = "SMARTBRIDGES PTE. LTD.";
		break;
	case 0x0030CD:
		cid = "CONEXANT SYSTEMS, INC.";
		break;
	case 0x003001:
		cid = "SMP";
		break;
	case 0x0030E1:
		cid = "Network Equipment Technologies, Inc.";
		break;
	case 0x0050A7:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00D0EE:
		cid = "DICTAPHONE CORPORATION";
		break;
	case 0x00D0B8:
		cid = "Iomega Corporation";
		break;
	case 0x005045:
		cid = "RIOWORKS SOLUTIONS, INC.";
		break;
	case 0x00507C:
		cid = "VIDEOCON AG";
		break;
	case 0x005065:
		cid = "TDK-Lambda Corporation";
		break;
	case 0x0050F4:
		cid = "SIGMATEK GMBH & CO. KG";
		break;
	case 0x005076:
		cid = "IBM Corp";
		break;
	case 0x005075:
		cid = "KESTREL SOLUTIONS";
		break;
	case 0x005090:
		cid = "DCTRI";
		break;
	case 0x0050ED:
		cid = "ANDA NETWORKS";
		break;
	case 0x005096:
		cid = "SALIX TECHNOLOGIES, INC.";
		break;
	case 0x00509B:
		cid = "SWITCHCORE AB";
		break;
	case 0x0050A9:
		cid = "MOLDAT WIRELESS TECHNOLGIES";
		break;
	case 0x00503C:
		cid = "TSINGHUA NOVEL ELECTRONICS";
		break;
	case 0x005030:
		cid = "FUTURE PLUS SYSTEMS";
		break;
	case 0x005037:
		cid = "KOGA ELECTRONICS CO.";
		break;
	case 0x00501F:
		cid = "MRG SYSTEMS, LTD.";
		break;
	case 0x005092:
		cid = "Rigaku Corporation Osaka Plant";
		break;
	case 0x00501C:
		cid = "JATOM SYSTEMS, INC.";
		break;
	case 0x00505C:
		cid = "TUNDO CORPORATION";
		break;
	case 0x005068:
		cid = "ELECTRONIC INDUSTRIES ASSOCIATION";
		break;
	case 0x00501A:
		cid = "IQinVision";
		break;
	case 0x005063:
		cid = "OY COMSEL SYSTEM AB";
		break;
	case 0x0050DE:
		cid = "SIGNUM SYSTEMS CORP.";
		break;
	case 0x00507B:
		cid = "MERLOT COMMUNICATIONS";
		break;
	case 0x005078:
		cid = "MEGATON HOUSE, LTD.";
		break;
	case 0x00508F:
		cid = "ASITA TECHNOLOGIES INT'L LTD.";
		break;
	case 0x005057:
		cid = "BROADBAND ACCESS SYSTEMS";
		break;
	case 0x005087:
		cid = "TERASAKI ELECTRIC CO., LTD.";
		break;
	case 0x00D03E:
		cid = "ROCKETCHIPS, INC.";
		break;
	case 0x00D03F:
		cid = "AMERICAN COMMUNICATION";
		break;
	case 0x00D033:
		cid = "DALIAN DAXIAN NETWORK";
		break;
	case 0x00D090:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00D0B6:
		cid = "CRESCENT NETWORKS, INC.";
		break;
	case 0x00D0D2:
		cid = "EPILOG CORPORATION";
		break;
	case 0x0050B6:
		cid = "GOOD WAY IND. CO., LTD.";
		break;
	case 0x0050FF:
		cid = "HAKKO ELECTRONICS CO., LTD.";
		break;
	case 0x005032:
		cid = "PICAZO COMMUNICATIONS, INC.";
		break;
	case 0x0050F9:
		cid = "Sensormatic Electronics LLC";
		break;
	case 0x0050F6:
		cid = "PAN-INTERNATIONAL INDUSTRIAL CORP.";
		break;
	case 0x00506C:
		cid = "Beijer Electronics Products AB";
		break;
	case 0x0050A5:
		cid = "CAPITOL BUSINESS SYSTEMS, LTD.";
		break;
	case 0x005000:
		cid = "NEXO COMMUNICATIONS, INC.";
		break;
	case 0x00D066:
		cid = "WINTRISS ENGINEERING CORP.";
		break;
	case 0x00D06F:
		cid = "KMC CONTROLS";
		break;
	case 0x00D04B:
		cid = "LA CIE GROUP S.A.";
		break;
	case 0x00D002:
		cid = "DITECH CORPORATION";
		break;
	case 0x00D0A6:
		cid = "LANBIRD TECHNOLOGY CO., LTD.";
		break;
	case 0x00D0DE:
		cid = "PHILIPS MULTIMEDIA NETWORK";
		break;
	case 0x00D083:
		cid = "INVERTEX, INC.";
		break;
	case 0x00D038:
		cid = "FIVEMERE, LTD.";
		break;
	case 0x00D00C:
		cid = "SNIJDER MICRO SYSTEMS";
		break;
	case 0x00D0F2:
		cid = "MONTEREY NETWORKS";
		break;
	case 0x00D07B:
		cid = "COMCAM INTERNATIONAL INC";
		break;
	case 0x00D05D:
		cid = "INTELLIWORXX, INC.";
		break;
	case 0x00D00D:
		cid = "MICROMERITICS INSTRUMENT";
		break;
	case 0x00D04C:
		cid = "EUROTEL TELECOM LTD.";
		break;
	case 0x00D0FD:
		cid = "OPTIMA TELE.COM, INC.";
		break;
	case 0x0030D8:
		cid = "SITEK";
		break;
	case 0x003062:
		cid = "IP Video Networks Inc";
		break;
	case 0x003081:
		cid = "ALTOS C&C";
		break;
	case 0x00D0B0:
		cid = "BITSWITCH LTD.";
		break;
	case 0x00D044:
		cid = "ALIDIAN NETWORKS, INC.";
		break;
	case 0x00D004:
		cid = "PENTACOM LTD.";
		break;
	case 0x00D045:
		cid = "KVASER AB";
		break;
	case 0x00D0D0:
		cid = "ZHONGXING TELECOM LTD.";
		break;
	case 0x00902C:
		cid = "DATA & CONTROL EQUIPMENT LTD.";
		break;
	case 0x009049:
		cid = "ENTRIDIA CORPORATION";
		break;
	case 0x009043:
		cid = "Tattile SRL";
		break;
	case 0x009076:
		cid = "FMT AIRCRAFT GATE SUPPORT SYSTEMS AB";
		break;
	case 0x009017:
		cid = "Zypcom, Inc";
		break;
	case 0x00907B:
		cid = "E-TECH, INC.";
		break;
	case 0x00102A:
		cid = "ZF MICROSYSTEMS, INC.";
		break;
	case 0x00107D:
		cid = "AURORA COMMUNICATIONS, LTD.";
		break;
	case 0x00101C:
		cid = "OHM TECHNOLOGIES INTL, LLC";
		break;
	case 0x00106C:
		cid = "EDNT GmbH";
		break;
	case 0x0010D4:
		cid = "STORAGE COMPUTER CORPORATION";
		break;
	case 0x0010BF:
		cid = "InterAir Wireless";
		break;
	case 0x001036:
		cid = "INTER-TEL INTEGRATED SYSTEMS";
		break;
	case 0x001026:
		cid = "ACCELERATED NETWORKS, INC.";
		break;
	case 0x000629:
		cid = "IBM Corp";
		break;
	case 0x001004:
		cid = "THE BRANTLEY COILE COMPANY,INC";
		break;
	case 0x00103A:
		cid = "DIAMOND NETWORK TECH";
		break;
	case 0x0010D8:
		cid = "CALISTA";
		break;
	case 0x001031:
		cid = "OBJECTIVE COMMUNICATIONS, INC.";
		break;
	case 0x00107E:
		cid = "BACHMANN ELECTRONIC GmbH";
		break;
	case 0x0010C0:
		cid = "ARMA, Inc.";
		break;
	case 0x001016:
		cid = "T.SQWARE";
		break;
	case 0x00103D:
		cid = "PHASECOM, LTD.";
		break;
	case 0x0010C2:
		cid = "WILLNET, INC.";
		break;
	case 0x00107A:
		cid = "AmbiCom, Inc.";
		break;
	case 0x0010C4:
		cid = "MEDIA GLOBAL LINKS CO., LTD.";
		break;
	case 0x0010EB:
		cid = "SELSIUS SYSTEMS, INC.";
		break;
	case 0x0010FE:
		cid = "DIGITAL EQUIPMENT CORPORATION";
		break;
	case 0x00102E:
		cid = "NETWORK SYSTEMS & TECHNOLOGIES PVT. LTD.";
		break;
	case 0x00103E:
		cid = "NETSCHOOLS CORPORATION";
		break;
	case 0x001049:
		cid = "ShoreTel, Inc";
		break;
	case 0x00105E:
		cid = "Spirent plc, Service Assurance Broadband";
		break;
	case 0x005088:
		cid = "AMANO CORPORATION";
		break;
	case 0x0050A8:
		cid = "OpenCon Systems, Inc.";
		break;
	case 0x005062:
		cid = "KOUWELL ELECTRONICS CORP.  **";
		break;
	case 0x0050B1:
		cid = "GIDDINGS & LEWIS";
		break;
	case 0x00500C:
		cid = "e-Tek Labs, Inc.";
		break;
	case 0x005091:
		cid = "NETACCESS, INC.";
		break;
	case 0x005097:
		cid = "MMC-EMBEDDED COMPUTERTECHNIK GmbH";
		break;
	case 0x0050AF:
		cid = "INTERGON, INC.";
		break;
	case 0x0050EB:
		cid = "ALPHA-TOP CORPORATION";
		break;
	case 0x0050BC:
		cid = "HAMMER STORAGE SOLUTIONS";
		break;
	case 0x0090C3:
		cid = "TOPIC SEMICONDUCTOR CORP.";
		break;
	case 0x0090EC:
		cid = "PYRESCOM";
		break;
	case 0x00903B:
		cid = "TriEMS Research Lab, Inc.";
		break;
	case 0x009074:
		cid = "ARGON NETWORKS, INC.";
		break;
	case 0x0090C1:
		cid = "Peco II, Inc.";
		break;
	case 0x0010D3:
		cid = "GRIPS ELECTRONIC GMBH";
		break;
	case 0x0010ED:
		cid = "SUNDANCE TECHNOLOGY, INC.";
		break;
	case 0x001023:
		cid = "Network Equipment Technologies";
		break;
	case 0x00104E:
		cid = "CEOLOGIC";
		break;
	case 0x0010FB:
		cid = "ZIDA TECHNOLOGIES LIMITED";
		break;
	case 0x0010AD:
		cid = "SOFTRONICS USB, INC.";
		break;
	case 0x0010D5:
		cid = "IMASDE CANARIAS, S.A.";
		break;
	case 0x0010E5:
		cid = "SOLECTRON TEXAS";
		break;
	case 0x00909D:
		cid = "NovaTech Process Solutions, LLC";
		break;
	case 0x009038:
		cid = "FOUNTAIN TECHNOLOGIES, INC.";
		break;
	case 0x0090C5:
		cid = "INTERNET MAGIC, INC.";
		break;
	case 0x0090AD:
		cid = "ASPECT ELECTRONICS, INC.";
		break;
	case 0x009097:
		cid = "Sycamore Networks";
		break;
	case 0x009008:
		cid = "HanA Systems Inc.";
		break;
	case 0x0090D4:
		cid = "BindView Development Corp.";
		break;
	case 0x009089:
		cid = "SOFTCOM MICROSYSTEMS, INC.";
		break;
	case 0x0090C4:
		cid = "JAVELIN SYSTEMS, INC.";
		break;
	case 0x009014:
		cid = "ROTORK INSTRUMENTS, LTD.";
		break;
	case 0x0090B5:
		cid = "NIKON CORPORATION";
		break;
	case 0x0090C6:
		cid = "OPTIM SYSTEMS, INC.";
		break;
	case 0x00909B:
		cid = "MARKEM-IMAJE";
		break;
	case 0x00905B:
		cid = "RAYMOND AND LAE ENGINEERING";
		break;
	case 0x0090E8:
		cid = "MOXA TECHNOLOGIES CORP., LTD.";
		break;
	case 0x0090A1:
		cid = "Flying Pig Systems/High End Systems Inc.";
		break;
	case 0x0090FD:
		cid = "CopperCom, Inc.";
		break;
	case 0x0090AC:
		cid = "OPTIVISION, INC.";
		break;
	case 0x00902A:
		cid = "COMMUNICATION DEVICES, INC.";
		break;
	case 0x009098:
		cid = "SBC DESIGNS, INC.";
		break;
	case 0x0090CF:
		cid = "NORTEL";
		break;
	case 0x00900F:
		cid = "KAWASAKI HEAVY INDUSTRIES, LTD";
		break;
	case 0x009036:
		cid = "ens, inc.";
		break;
	case 0x0090E9:
		cid = "JANZ COMPUTER AG";
		break;
	case 0x009032:
		cid = "PELCOMBE GROUP LTD.";
		break;
	case 0x0090B8:
		cid = "ROHDE & SCHWARZ GMBH & CO. KG";
		break;
	case 0x0090BE:
		cid = "IBC/INTEGRATED BUSINESS COMPUTERS";
		break;
	case 0x009062:
		cid = "ICP VORTEX COMPUTERSYSTEME GmbH";
		break;
	case 0x00108F:
		cid = "RAPTOR SYSTEMS";
		break;
	case 0x001089:
		cid = "WebSonic";
		break;
	case 0x001086:
		cid = "ATTO Technology, Inc.";
		break;
	case 0x001027:
		cid = "L-3 COMMUNICATIONS EAST";
		break;
	case 0x0010B8:
		cid = "ISHIGAKI COMPUTER SYSTEM CO.";
		break;
	case 0x00104C:
		cid = "Teledyne LeCroy, Inc";
		break;
	case 0x001001:
		cid = "Citel";
		break;
	case 0x0010CF:
		cid = "FIBERLANE COMMUNICATIONS";
		break;
	case 0x001068:
		cid = "COMOS TELECOM";
		break;
	case 0x001067:
		cid = "Ericsson";
		break;
	case 0x0010F1:
		cid = "I-O CORPORATION";
		break;
	case 0x001073:
		cid = "TECHNOBOX, INC.";
		break;
	case 0x00E0C0:
		cid = "SEIWA ELECTRIC MFG. CO., LTD.";
		break;
	case 0x00E046:
		cid = "BENTLY NEVADA CORP.";
		break;
	case 0x00E015:
		cid = "HEIWA CORPORATION";
		break;
	case 0x00E065:
		cid = "OPTICAL ACCESS INTERNATIONAL";
		break;
	case 0x00E069:
		cid = "JAYCOR";
		break;
	case 0x00E087:
		cid = "LeCroy - Networking Productions Division";
		break;
	case 0x00E049:
		cid = "MICROWI ELECTRONIC GmbH";
		break;
	case 0x00E050:
		cid = "EXECUTONE INFORMATION SYSTEMS, INC.";
		break;
	case 0x00E064:
		cid = "SAMSUNG ELECTRONICS";
		break;
	case 0x00E012:
		cid = "PLUTO TECHNOLOGIES INTERNATIONAL INC.";
		break;
	case 0x00E0D8:
		cid = "LANBit Computer, Inc.";
		break;
	case 0x00E02D:
		cid = "InnoMediaLogic, Inc.";
		break;
	case 0x00E0A9:
		cid = "FUNAI ELECTRIC CO., LTD.";
		break;
	case 0x00E035:
		cid = "Artesyn Embedded Technologies";
		break;
	case 0x00E060:
		cid = "SHERWOOD";
		break;
	case 0x00E0A2:
		cid = "MICROSLATE INC.";
		break;
	case 0x00E0CE:
		cid = "ARN";
		break;
	case 0x00E05F:
		cid = "e-Net, Inc.";
		break;
	case 0x00E0C7:
		cid = "EUROTECH SRL";
		break;
	case 0x00E0C4:
		cid = "HORNER ELECTRIC, INC.";
		break;
	case 0x00E04D:
		cid = "INTERNET INITIATIVE JAPAN, INC";
		break;
	case 0x00607F:
		cid = "AURORA TECHNOLOGIES, INC.";
		break;
	case 0x00E039:
		cid = "PARADYNE CORP.";
		break;
	case 0x006091:
		cid = "FIRST PACIFIC NETWORKS, INC.";
		break;
	case 0x006002:
		cid = "SCREEN SUBTITLING SYSTEMS, LTD";
		break;
	case 0x006061:
		cid = "WHISTLE COMMUNICATIONS CORP.";
		break;
	case 0x00E0A1:
		cid = "HIMA PAUL HILDEBRANDT GmbH Co. KG";
		break;
	case 0x00E028:
		cid = "APTIX CORPORATION";
		break;
	case 0x00E0F2:
		cid = "ARLOTTO COMNET, INC.";
		break;
	case 0x00E020:
		cid = "TECNOMEN OY";
		break;
	case 0x00E0C5:
		cid = "BCOM ELECTRONICS INC.";
		break;
	case 0x00E0EE:
		cid = "MAREL HF";
		break;
	case 0x00E0AC:
		cid = "MIDSCO, INC.";
		break;
	case 0x00E002:
		cid = "CROSSROADS SYSTEMS, INC.";
		break;
	case 0x00E057:
		cid = "HAN MICROTELECOM. CO., LTD.";
		break;
	case 0x00E0F0:
		cid = "ABLER TECHNOLOGY, INC.";
		break;
	case 0x00E0B7:
		cid = "PI GROUP, LTD.";
		break;
	case 0x0010B1:
		cid = "FOR-A CO., LTD.";
		break;
	case 0x001041:
		cid = "BRISTOL BABCOCK, INC.";
		break;
	case 0x0010F7:
		cid = "IRIICHI TECHNOLOGIES Inc.";
		break;
	case 0x0010E6:
		cid = "APPLIED INTELLIGENT SYSTEMS, INC.";
		break;
	case 0x00101E:
		cid = "MATSUSHITA ELECTRONIC INSTRUMENTS CORP.";
		break;
	case 0x0010F2:
		cid = "ANTEC";
		break;
	case 0x0010BE:
		cid = "MARCH NETWORKS CORPORATION";
		break;
	case 0x006058:
		cid = "COPPER MOUNTAIN COMMUNICATIONS, INC.";
		break;
	case 0x00601B:
		cid = "MESA ELECTRONICS";
		break;
	case 0x0060FF:
		cid = "QuVis, Inc.";
		break;
	case 0x006056:
		cid = "NETWORK TOOLS, INC.";
		break;
	case 0x0060D8:
		cid = "ELMIC SYSTEMS, INC.";
		break;
	case 0x00607A:
		cid = "DVS GMBH";
		break;
	case 0x0060E3:
		cid = "ARBIN INSTRUMENTS";
		break;
	case 0x00E0FD:
		cid = "A-TREND TECHNOLOGY CO., LTD.";
		break;
	case 0x00E0FB:
		cid = "LEIGHTRONIX, INC.";
		break;
	case 0x00E0D3:
		cid = "DATENTECHNIK GmbH";
		break;
	case 0x00E05E:
		cid = "JAPAN AVIATION ELECTRONICS INDUSTRY, LTD.";
		break;
	case 0x00E0E5:
		cid = "CINCO NETWORKS, INC.";
		break;
	case 0x00A0FD:
		cid = "SCITEX DIGITAL PRINTING, INC.";
		break;
	case 0x00A0F5:
		cid = "RADGUARD LTD.";
		break;
	case 0x00A022:
		cid = "CENTRE FOR DEVELOPMENT OF ADVANCED COMPUTING";
		break;
	case 0x00A087:
		cid = "Microsemi Corporation";
		break;
	case 0x00A007:
		cid = "APEXX TECHNOLOGY, INC.";
		break;
	case 0x00A066:
		cid = "ISA CO., LTD.";
		break;
	case 0x00A0AB:
		cid = "NETCS INFORMATIONSTECHNIK GMBH";
		break;
	case 0x00A0D8:
		cid = "SPECTRA - TEK";
		break;
	case 0x00A01A:
		cid = "BINAR ELEKTRONIK AB";
		break;
	case 0x00A0E8:
		cid = "REUTERS HOLDINGS PLC";
		break;
	case 0x00A076:
		cid = "CARDWARE LAB, INC.";
		break;
	case 0x00A0A3:
		cid = "RELIABLE POWER METERS";
		break;
	case 0x00A055:
		cid = "Data Device Corporation";
		break;
	case 0x00A065:
		cid = "Symantec Corporation";
		break;
	case 0x00A044:
		cid = "NTT IT CO., LTD.";
		break;
	case 0x0060EF:
		cid = "FLYTECH TECHNOLOGY CO., LTD.";
		break;
	case 0x006098:
		cid = "HT COMMUNICATIONS";
		break;
	case 0x0060F7:
		cid = "DATAFUSION SYSTEMS";
		break;
	case 0x0060DE:
		cid = "Kayser-Threde GmbH";
		break;
	case 0x0060D0:
		cid = "SNMP RESEARCH INCORPORATED";
		break;
	case 0x006079:
		cid = "Mainstream Data, Inc.";
		break;
	case 0x006020:
		cid = "PIVOTAL NETWORKING, INC.";
		break;
	case 0x0005A8:
		cid = "WYLE ELECTRONICS";
		break;
	case 0x0060B7:
		cid = "CHANNELMATIC, INC.";
		break;
	case 0x0060A3:
		cid = "CONTINUUM TECHNOLOGY CORP.";
		break;
	case 0x006050:
		cid = "INTERNIX INC.";
		break;
	case 0x0060E0:
		cid = "AXIOM TECHNOLOGY CO., LTD.";
		break;
	case 0x0060A8:
		cid = "TIDOMAT AB";
		break;
	case 0x00A056:
		cid = "MICROPROSS";
		break;
	case 0x00A051:
		cid = "ANGIA COMMUNICATIONS. INC.";
		break;
	case 0x00A0A6:
		cid = "M.I. SYSTEMS, K.K.";
		break;
	case 0x00A05F:
		cid = "BTG Electronics Design BV";
		break;
	case 0x00A094:
		cid = "COMSAT CORPORATION";
		break;
	case 0x00A010:
		cid = "SYSLOGIC DATENTECHNIK AG";
		break;
	case 0x00A063:
		cid = "JRL SYSTEMS, INC.";
		break;
	case 0x00A08F:
		cid = "DESKNET SYSTEMS, INC.";
		break;
	case 0x00A0CC:
		cid = "LITE-ON COMMUNICATIONS, INC.";
		break;
	case 0x00A090:
		cid = "TimeStep Corporation";
		break;
	case 0x00A0F7:
		cid = "V.I COMPUTER CORP.";
		break;
	case 0x00A09C:
		cid = "Xyplex, Inc.";
		break;
	case 0x00A092:
		cid = "H. BOLLMANN MANUFACTURERS, LTD";
		break;
	case 0x00A04D:
		cid = "EDA INSTRUMENTS, INC.";
		break;
	case 0x00A0DB:
		cid = "FISHER & PAYKEL PRODUCTION";
		break;
	case 0x00A0A5:
		cid = "TEKNOR MICROSYSTEME, INC.";
		break;
	case 0x00A018:
		cid = "CREATIVE CONTROLLERS, INC.";
		break;
	case 0x00A09F:
		cid = "COMMVISION CORP.";
		break;
	case 0x00A06B:
		cid = "DMS DORSCH MIKROSYSTEM GMBH";
		break;
	case 0x006051:
		cid = "QUALITY SEMICONDUCTOR";
		break;
	case 0x00605E:
		cid = "LIBERTY TECHNOLOGY NETWORKING";
		break;
	case 0x0060C6:
		cid = "DCS AG";
		break;
	case 0x00609E:
		cid = "ASC X3 - INFORMATION TECHNOLOGY STANDARDS SECRETARIATS";
		break;
	case 0x006084:
		cid = "DIGITAL VIDEO";
		break;
	case 0x00602D:
		cid = "ALERTON TECHNOLOGIES, INC.";
		break;
	case 0x006093:
		cid = "VARIAN";
		break;
	case 0x0060E2:
		cid = "QUEST ENGINEERING & DEVELOPMENT";
		break;
	case 0x00A039:
		cid = "ROSS TECHNOLOGY, INC.";
		break;
	case 0x00A06D:
		cid = "MANNESMANN TALLY CORPORATION";
		break;
	case 0x00608E:
		cid = "HE ELECTRONICS, TECHNOLOGIE & SYSTEMTECHNIK GmbH";
		break;
	case 0x0060F0:
		cid = "JOHNSON & JOHNSON MEDICAL, INC";
		break;
	case 0x0060D2:
		cid = "LUCENT TECHNOLOGIES TAIWAN TELECOMMUNICATIONS CO., LTD.";
		break;
	case 0x006077:
		cid = "PRISA NETWORKS";
		break;
	case 0x0060AB:
		cid = "LARSCOM INCORPORATED";
		break;
	case 0x0060E9:
		cid = "ATOP TECHNOLOGIES, INC.";
		break;
	case 0x00608B:
		cid = "ConferTech International";
		break;
	case 0x0060C3:
		cid = "NETVISION CORPORATION";
		break;
	case 0x00A0A0:
		cid = "COMPACT DATA, LTD.";
		break;
	case 0x00A08B:
		cid = "ASTON ELECTRONIC DESIGNS LTD.";
		break;
	case 0x00A0AA:
		cid = "SPACELABS MEDICAL";
		break;
	case 0x00A04F:
		cid = "AMERITEC CORP.";
		break;
	case 0x00A073:
		cid = "COM21, INC.";
		break;
	case 0x00A084:
		cid = "Dataplex Pty Ltd";
		break;
	case 0x00A034:
		cid = "AXEL";
		break;
	case 0x00C0BC:
		cid = "TELECOM AUSTRALIA/CSSC";
		break;
	case 0x00C0EF:
		cid = "ABIT CORPORATION";
		break;
	case 0x00C03C:
		cid = "TOWER TECH S.R.L.";
		break;
	case 0x00C061:
		cid = "SOLECTEK CORPORATION";
		break;
	case 0x00C074:
		cid = "TOYODA AUTOMATIC LOOM";
		break;
	case 0x00C07F:
		cid = "NUPON COMPUTING CORP.";
		break;
	case 0x00C027:
		cid = "CIPHER SYSTEMS, INC.";
		break;
	case 0x00C025:
		cid = "DATAPRODUCTS CORPORATION";
		break;
	case 0x00C022:
		cid = "LASERMASTER TECHNOLOGIES, INC.";
		break;
	case 0x00C0E6:
		cid = "Verilink Corporation";
		break;
	case 0x00C05C:
		cid = "ELONEX PLC";
		break;
	case 0x00C0C1:
		cid = "QUAD/GRAPHICS, INC.";
		break;
	case 0x00C091:
		cid = "JABIL CIRCUIT, INC.";
		break;
	case 0x00C0F5:
		cid = "METACOMP, INC.";
		break;
	case 0x00C042:
		cid = "DATALUX CORP.";
		break;
	case 0x00C089:
		cid = "TELINDUS DISTRIBUTION";
		break;
	case 0x00C09D:
		cid = "DISTRIBUTED SYSTEMS INT'L, INC";
		break;
	case 0x00C0A5:
		cid = "DICKENS DATA SYSTEMS";
		break;
	case 0x00C0E3:
		cid = "OSITECH COMMUNICATIONS, INC.";
		break;
	case 0x00C071:
		cid = "AREANEX COMMUNICATIONS, INC.";
		break;
	case 0x00C0AF:
		cid = "TEKLOGIX INC.";
		break;
	case 0x00209F:
		cid = "MERCURY COMPUTER SYSTEMS, INC.";
		break;
	case 0x0020B7:
		cid = "NAMAQUA COMPUTERWARE";
		break;
	case 0x00201B:
		cid = "NORTHERN TELECOM/NETWORK";
		break;
	case 0x0020C0:
		cid = "PULSE ELECTRONICS, INC.";
		break;
	case 0x00208D:
		cid = "CMD TECHNOLOGY";
		break;
	case 0x0020DD:
		cid = "Cybertec Pty Ltd";
		break;
	case 0x0020BD:
		cid = "NIOBRARA R & D CORPORATION";
		break;
	case 0x0020E6:
		cid = "LIDKOPING MACHINE TOOLS AB";
		break;
	case 0x002047:
		cid = "STEINBRECHER CORP.";
		break;
	case 0x002072:
		cid = "WORKLINK INNOVATIONS";
		break;
	case 0x0020B8:
		cid = "PRIME OPTION, INC.";
		break;
	case 0x002092:
		cid = "CHESS ENGINEERING B.V.";
		break;
	case 0x0020B9:
		cid = "METRICOM, INC.";
		break;
	case 0x00206B:
		cid = "KONICA MINOLTA HOLDINGS, INC.";
		break;
	case 0x0020FC:
		cid = "MATROX";
		break;
	case 0x00C003:
		cid = "GLOBALNET COMMUNICATIONS";
		break;
	case 0x00C0C3:
		cid = "ACUSON COMPUTED SONOGRAPHY";
		break;
	case 0x00C04D:
		cid = "MITEC, INC.";
		break;
	case 0x00C055:
		cid = "MODULAR COMPUTING TECHNOLOGIES";
		break;
	case 0x00C067:
		cid = "UNITED BARCODE INDUSTRIES";
		break;
	case 0x00C0B4:
		cid = "MYSON TECHNOLOGY, INC.";
		break;
	case 0x00C080:
		cid = "NETSTAR, INC.";
		break;
	case 0x00C015:
		cid = "NEW MEDIA CORPORATION";
		break;
	case 0x0070B3:
		cid = "DATA RECALL LTD.";
		break;
	case 0x00E6D3:
		cid = "NIXDORF COMPUTER CORP.";
		break;
	case 0x00C083:
		cid = "TRACE MOUNTAIN PRODUCTS, INC.";
		break;
	case 0x00C005:
		cid = "LIVINGSTON ENTERPRISES, INC.";
		break;
	case 0x00C0C8:
		cid = "MICRO BYTE PTY. LTD.";
		break;
	case 0x00C090:
		cid = "PRAIM S.R.L.";
		break;
	case 0x00C011:
		cid = "INTERACTIVE COMPUTING DEVICES";
		break;
	case 0x00C0FD:
		cid = "PROSUM";
		break;
	case 0x00C041:
		cid = "DIGITAL TRANSMISSION SYSTEMS";
		break;
	case 0x00C00F:
		cid = "QUANTUM SOFTWARE SYSTEMS LTD.";
		break;
	case 0x00C076:
		cid = "I-DATA INTERNATIONAL A-S";
		break;
	case 0x00C0C6:
		cid = "PERSONAL MEDIA CORP.";
		break;
	case 0x00C03B:
		cid = "MULTIACCESS COMPUTING CORP.";
		break;
	case 0x0020F4:
		cid = "SPECTRIX CORPORATION";
		break;
	case 0x00204E:
		cid = "NETWORK SECURITY SYSTEMS, INC.";
		break;
	case 0x002027:
		cid = "MING FORTUNE INDUSTRY CO., LTD";
		break;
	case 0x0020ED:
		cid = "GIGA-BYTE TECHNOLOGY CO., LTD.";
		break;
	case 0x002096:
		cid = "Invensys";
		break;
	case 0x0020BB:
		cid = "ZAX CORPORATION";
		break;
	case 0x00204D:
		cid = "INOVIS GMBH";
		break;
	case 0x002089:
		cid = "T3PLUS NETWORKING, INC.";
		break;
	case 0x00205F:
		cid = "GAMMADATA COMPUTER GMBH";
		break;
	case 0x002035:
		cid = "IBM Corp";
		break;
	case 0x0020E2:
		cid = "INFORMATION RESOURCE ENGINEERING";
		break;
	case 0x002058:
		cid = "ALLIED SIGNAL INC.";
		break;
	case 0x002081:
		cid = "TITAN ELECTRONICS";
		break;
	case 0x00201D:
		cid = "KATANA PRODUCTS";
		break;
	case 0x0020CF:
		cid = "TEST & MEASUREMENT SYSTEMS INC";
		break;
	case 0x002043:
		cid = "NEURON COMPANY LIMITED";
		break;
	case 0x002018:
		cid = "CIS TECHNOLOGY INC.";
		break;
	case 0x002031:
		cid = "Tattile SRL";
		break;
	case 0x0020DE:
		cid = "JAPAN DIGITAL LABORAT'Y CO.LTD";
		break;
	case 0x0020F7:
		cid = "CYBERDATA CORPORATION";
		break;
	case 0x0020EE:
		cid = "GTECH CORPORATION";
		break;
	case 0x00208C:
		cid = "GALAXY NETWORKS, INC.";
		break;
	case 0x002063:
		cid = "WIPRO INFOTECH LTD.";
		break;
	case 0x0020DC:
		cid = "DENSITRON TAIWAN LTD.";
		break;
	case 0x002078:
		cid = "RUNTOP, INC.";
		break;
	case 0x002042:
		cid = "DATAMETRICS CORP.";
		break;
	case 0x0020F8:
		cid = "CARRERA COMPUTERS, INC.";
		break;
	case 0x00200C:
		cid = "ADASTRA SYSTEMS CORP.";
		break;
	case 0x0020C4:
		cid = "INET,INC.";
		break;
	case 0x00C099:
		cid = "YOSHIKI INDUSTRIAL CO.,LTD.";
		break;
	case 0x00C0FC:
		cid = "ELASTIC REALITY, INC.";
		break;
	case 0x00C0D0:
		cid = "RATOC SYSTEM INC.";
		break;
	case 0x00C07A:
		cid = "PRIVA B.V.";
		break;
	case 0x000701:
		cid = "RACAL-DATACOM";
		break;
	case 0x00C09C:
		cid = "HIOKI E.E. CORPORATION";
		break;
	case 0x00C004:
		cid = "JAPAN BUSINESS COMPUTER CO.LTD";
		break;
	case 0x00C062:
		cid = "IMPULSE TECHNOLOGY";
		break;
	case 0x000267:
		cid = "NODE RUNNER, INC.";
		break;
	case 0x002064:
		cid = "PROTEC MICROSYSTEMS, INC.";
		break;
	case 0x002032:
		cid = "ALCATEL TAISEL";
		break;
	case 0x00207F:
		cid = "KYOEI SANGYO CO., LTD.";
		break;
	case 0x002077:
		cid = "KARDIOS SYSTEMS CORP.";
		break;
	case 0x002068:
		cid = "ISDYNE";
		break;
	case 0x00202A:
		cid = "N.V. DZINE";
		break;
	case 0x008006:
		cid = "COMPUADD CORPORATION";
		break;
	case 0x0080EF:
		cid = "RATIONAL";
		break;
	case 0x0080C4:
		cid = "DOCUMENT TECHNOLOGIES, INC.";
		break;
	case 0x008095:
		cid = "BASIC MERTON HANDELSGES.M.B.H.";
		break;
	case 0x008053:
		cid = "INTELLICOM, INC.";
		break;
	case 0x008026:
		cid = "NETWORK PRODUCTS CORPORATION";
		break;
	case 0x0080FE:
		cid = "AZURE TECHNOLOGIES, INC.";
		break;
	case 0x008028:
		cid = "TRADPOST (HK) LTD";
		break;
	case 0x0080C0:
		cid = "PENRIL DATACOMM";
		break;
	case 0x0080F5:
		cid = "Quantel Ltd";
		break;
	case 0x00401D:
		cid = "INVISIBLE SOFTWARE, INC.";
		break;
	case 0x0040BD:
		cid = "STARLIGHT NETWORKS, INC.";
		break;
	case 0x00406D:
		cid = "LANCO, INC.";
		break;
	case 0x00404D:
		cid = "TELECOMMUNICATIONS TECHNIQUES";
		break;
	case 0x0040A5:
		cid = "CLINICOMP INTL.";
		break;
	case 0x004059:
		cid = "YOSHIDA KOGYO K. K.";
		break;
	case 0x004021:
		cid = "RASTER GRAPHICS";
		break;
	case 0x004081:
		cid = "MANNESMANN SCANGRAPHIC GMBH";
		break;
	case 0x00404A:
		cid = "WEST AUSTRALIAN DEPARTMENT";
		break;
	case 0x00400A:
		cid = "PIVOTAL TECHNOLOGIES, INC.";
		break;
	case 0x004032:
		cid = "DIGITAL COMMUNICATIONS";
		break;
	case 0x004042:
		cid = "N.A.T. GMBH";
		break;
	case 0x0040C2:
		cid = "APPLIED COMPUTING DEVICES";
		break;
	case 0x00403C:
		cid = "FORKS, INC.";
		break;
	case 0x0040C4:
		cid = "KINKEI SYSTEM CORPORATION";
		break;
	case 0x0040D1:
		cid = "FUKUDA DENSHI CO., LTD.";
		break;
	case 0x004024:
		cid = "COMPAC INC.";
		break;
	case 0x0040B6:
		cid = "COMPUTERM  CORPORATION";
		break;
	case 0x00403F:
		cid = "SSANGYONG COMPUTER SYSTEMS";
		break;
	case 0x004003:
		cid = "Emerson Process Management Power & Water Solutions, Inc.";
		break;
	case 0x004090:
		cid = "ANSEL COMMUNICATIONS";
		break;
	case 0x00409A:
		cid = "NETWORK EXPRESS, INC.";
		break;
	case 0x0040DE:
		cid = "Elsag Datamat spa";
		break;
	case 0x004063:
		cid = "VIA TECHNOLOGIES, INC.";
		break;
	case 0x00406C:
		cid = "COPERNIQUE";
		break;
	case 0x0040DF:
		cid = "DIGALOG SYSTEMS, INC.";
		break;
	case 0x004015:
		cid = "ASCOM INFRASYS AG";
		break;
	case 0x008056:
		cid = "SPHINX Electronics GmbH & Co KG";
		break;
	case 0x008060:
		cid = "NETWORK INTERFACE CORPORATION";
		break;
	case 0x00805E:
		cid = "LSI LOGIC CORPORATION";
		break;
	case 0x008093:
		cid = "XYRON CORPORATION";
		break;
	case 0x00C05D:
		cid = "L&N TECHNOLOGIES";
		break;
	case 0x00C0E4:
		cid = "SIEMENS BUILDING";
		break;
	case 0x00C01B:
		cid = "SOCKET COMMUNICATIONS, INC.";
		break;
	case 0x00C06E:
		cid = "HAFT TECHNOLOGY, INC.";
		break;
	case 0x00406F:
		cid = "SYNC RESEARCH INC.";
		break;
	case 0x00401F:
		cid = "COLORGRAPH LTD";
		break;
	case 0x0040CF:
		cid = "STRAWBERRY TREE, INC.";
		break;
	case 0x0040F7:
		cid = "Polaroid Corporation";
		break;
	case 0x004037:
		cid = "SEA-ILAN, INC.";
		break;
	case 0x0040CC:
		cid = "SILCOM MANUF'G TECHNOLOGY INC.";
		break;
	case 0x004052:
		cid = "STAR TECHNOLOGIES, INC.";
		break;
	case 0x00407A:
		cid = "SOCIETE D'EXPLOITATION DU CNIT";
		break;
	case 0x004089:
		cid = "MEIDENSHA CORPORATION";
		break;
	case 0x00405A:
		cid = "GOLDSTAR INFORMATION & COMM.";
		break;
	case 0x00404C:
		cid = "HYPERTEC PTY LTD.";
		break;
	case 0x00C0CB:
		cid = "CONTROL TECHNOLOGY CORPORATION";
		break;
	case 0x00C09A:
		cid = "PHOTONICS CORPORATION";
		break;
	case 0x00C01A:
		cid = "COROMETRICS MEDICAL SYSTEMS";
		break;
	case 0x00404B:
		cid = "MAPLE COMPUTER SYSTEMS";
		break;
	case 0x004055:
		cid = "METRONIX GMBH";
		break;
	case 0x004045:
		cid = "TWINHEAD CORPORATION";
		break;
	case 0x00401A:
		cid = "FUJI ELECTRIC CO., LTD.";
		break;
	case 0x0040B9:
		cid = "MACQ ELECTRONIQUE SA";
		break;
	case 0x0040C7:
		cid = "RUBY TECH CORPORATION";
		break;
	case 0x004004:
		cid = "ICM CO. LTD.";
		break;
	case 0x004070:
		cid = "INTERWARE CO., LTD.";
		break;
	case 0x008057:
		cid = "ADSOFT, LTD.";
		break;
	case 0x00807A:
		cid = "AITECH SYSTEMS LTD.";
		break;
	case 0x0080AA:
		cid = "MAXPEED";
		break;
	case 0x00C0E7:
		cid = "FIBERDATA AB";
		break;
	case 0x00800A:
		cid = "JAPAN COMPUTER CORP.";
		break;
	case 0x00806E:
		cid = "NIPPON STEEL CORPORATION";
		break;
	case 0x008010:
		cid = "COMMODORE INTERNATIONAL";
		break;
	case 0x0080DA:
		cid = "Bruel & Kjaer Sound & Vibration Measurement A/S";
		break;
	case 0x0080BC:
		cid = "HITACHI ENGINEERING CO., LTD";
		break;
	case 0x008000:
		cid = "MULTITECH SYSTEMS, INC.";
		break;
	case 0x0080A1:
		cid = "MICROTEST, INC.";
		break;
	case 0x0080D0:
		cid = "COMPUTER PERIPHERALS, INC.";
		break;
	case 0x00807D:
		cid = "EQUINOX SYSTEMS INC.";
		break;
	case 0x008063:
		cid = "Hirschmann Automation and Control GmbH";
		break;
	case 0x00804E:
		cid = "APEX COMPUTER COMPANY";
		break;
	case 0x00800E:
		cid = "ATLANTIX CORPORATION";
		break;
	case 0x00806F:
		cid = "ONELAN LTD.";
		break;
	case 0x008098:
		cid = "TDK CORPORATION";
		break;
	case 0x00809C:
		cid = "LUXCOM, INC.";
		break;
	case 0x008065:
		cid = "CYBERGRAPHIC SYSTEMS PTY LTD.";
		break;
	case 0x008016:
		cid = "WANDEL AND GOLTERMANN";
		break;
	case 0x0080E6:
		cid = "PEER NETWORKS, INC.";
		break;
	case 0x0080A2:
		cid = "CREATIVE ELECTRONIC SYSTEMS";
		break;
	case 0x0080E0:
		cid = "XTP SYSTEMS, INC.";
		break;
	case 0x008050:
		cid = "ZIATECH CORPORATION";
		break;
	case 0x0000E0:
		cid = "QUADRAM CORP.";
		break;
	case 0x000057:
		cid = "SCITEX CORPORATION LTD.";
		break;
	case 0x0000D6:
		cid = "PUNCH LINE HOLDING";
		break;
	case 0x0000C8:
		cid = "ALTOS COMPUTER SYSTEMS";
		break;
	case 0x000098:
		cid = "CROSSCOMM CORPORATION";
		break;
	case 0x00007D:
		cid = "Oracle Corporation";
		break;
	case 0x0000A2:
		cid = "Bay Networks";
		break;
	case 0x000038:
		cid = "CSS LABS";
		break;
	case 0x000061:
		cid = "GATEWAY COMMUNICATIONS";
		break;
	case 0x000043:
		cid = "MICRO TECHNOLOGY";
		break;
	case 0x0000E7:
		cid = "Star Gate Technologies";
		break;
	case 0x0000F3:
		cid = "GANDALF DATA LIMITED";
		break;
	case 0x00002C:
		cid = "AUTOTOTE LIMITED";
		break;
	case 0x00002A:
		cid = "TRW - SEDD/INP";
		break;
	case 0x0000F1:
		cid = "MAGNA COMPUTER CORPORATION";
		break;
	case 0x000083:
		cid = "TADPOLE TECHNOLOGY PLC";
		break;
	case 0x000020:
		cid = "DATAINDUSTRIER DIAB AB";
		break;
	case 0x00007A:
		cid = "DANA COMPUTER INC.";
		break;
	case 0x00007C:
		cid = "AMPERE INCORPORATED";
		break;
	case 0x00008A:
		cid = "DATAHOUSE INFORMATION SYSTEMS";
		break;
	case 0x000068:
		cid = "ROSEMOUNT CONTROLS";
		break;
	case 0x0000DF:
		cid = "BELL & HOWELL PUB SYS DIV";
		break;
	case 0x000062:
		cid = "BULL HN INFORMATION SYSTEMS";
		break;
	case 0x0000AD:
		cid = "BRUKER INSTRUMENTS INC.";
		break;
	case 0x0000D0:
		cid = "DEVELCON ELECTRONICS LTD.";
		break;
	case 0x000093:
		cid = "PROTEON INC.";
		break;
	case 0x008008:
		cid = "DYNATECH COMPUTER SYSTEMS";
		break;
	case 0x0080FF:
		cid = "SOC. DE TELEINFORMATIQUE RTC";
		break;
	case 0x000070:
		cid = "HCL LIMITED";
		break;
	case 0x00008E:
		cid = "SOLBOURNE COMPUTER, INC.";
		break;
	case 0x0000DC:
		cid = "HAYES MICROCOMPUTER PRODUCTS";
		break;
	case 0x000024:
		cid = "CONNECT AS";
		break;
	case 0x008030:
		cid = "NEXUS ELECTRONICS";
		break;
	case 0x008022:
		cid = "SCAN-OPTICS";
		break;
	case 0x000041:
		cid = "ICE CORPORATION";
		break;
	case 0x00001E:
		cid = "TELSIST INDUSTRIA ELECTRONICA";
		break;
	case 0x00807B:
		cid = "ARTEL COMMUNICATIONS CORP.";
		break;
	case 0x00802E:
		cid = "CASTLE ROCK COMPUTING";
		break;
	case 0x0080F9:
		cid = "HEURIKON CORPORATION";
		break;
	case 0x008005:
		cid = "CACTUS COMPUTER INC.";
		break;
	case 0x00801D:
		cid = "INTEGRATED INFERENCE MACHINES";
		break;
	case 0x008015:
		cid = "SEIKO SYSTEMS, INC.";
		break;
	case 0x008034:
		cid = "SMT GOUPIL";
		break;
	case 0x0080C9:
		cid = "ALBERTA MICROELECTRONIC CENTRE";
		break;
	case 0x00800B:
		cid = "CSK CORPORATION";
		break;
	case 0x000016:
		cid = "DU PONT PIXEL SYSTEMS     .";
		break;
	case 0x00005C:
		cid = "TELEMATICS INTERNATIONAL INC.";
		break;
	case 0x0000AC:
		cid = "CONWARE COMPUTER CONSULTING";
		break;
	case 0x0000F2:
		cid = "SPIDER COMMUNICATIONS";
		break;
	case 0x000030:
		cid = "VG LABORATORY SYSTEMS LTD";
		break;
	case 0x000035:
		cid = "SPECTRAGRAPHICS CORPORATION";
		break;
	case 0x020701:
		cid = "RACAL-DATACOM";
		break;
	case 0x080011:
		cid = "TEKTRONIX INC.";
		break;
	case 0x080040:
		cid = "FERRANTI COMPUTER SYS. LIMITED";
		break;
	case 0x08003B:
		cid = "TORUS SYSTEMS LIMITED";
		break;
	case 0x08003D:
		cid = "CADNETIX CORPORATIONS";
		break;
	case 0x080039:
		cid = "SPIDER SYSTEMS LIMITED";
		break;
	case 0x080030:
		cid = "NETWORK RESEARCH CORPORATION / ROYAL MELBOURNE INST OF TECH / CERN";
		break;
	case 0x00009B:
		cid = "INFORMATION INTERNATIONAL, INC";
		break;
	case 0x00DD0F:
		cid = "UNGERMANN-BASS INC.";
		break;
	case 0x000001:
		cid = "XEROX CORPORATION";
		break;
	case 0x080021:
		cid = "3M COMPANY";
		break;
	case 0xAA0004:
		cid = "DIGITAL EQUIPMENT CORPORATION";
		break;
	case 0x08000C:
		cid = "MIKLYN DEVELOPMENT CO.";
		break;
	case 0x00DD08:
		cid = "UNGERMANN-BASS INC.";
		break;
	case 0x0000A0:
		cid = "SANYO Electric Co., Ltd.";
		break;
	case 0x08007F:
		cid = "CARNEGIE-MELLON UNIVERSITY";
		break;
	case 0x080082:
		cid = "VERITAS SOFTWARE";
		break;
	case 0x08007B:
		cid = "SANYO ELECTRIC CO. LTD.";
		break;
	case 0x00DD0C:
		cid = "UNGERMANN-BASS INC.";
		break;
	case 0x000005:
		cid = "XEROX CORPORATION";
		break;
	case 0x0000AA:
		cid = "XEROX CORPORATION";
		break;
	case 0x00406B:
		cid = "SYSGEN";
		break;
	case 0xAA0001:
		cid = "DIGITAL EQUIPMENT CORPORATION";
		break;
	case 0x080001:
		cid = "COMPUTERVISION CORPORATION";
		break;
	case 0x000053:
		cid = "COMPUCORP";
		break;
	case 0x08004B:
		cid = "Planning Research Corp.";
		break;
	case 0x080003:
		cid = "ADVANCED COMPUTER COMM.";
		break;
	case 0x080074:
		cid = "CASIO COMPUTER CO. LTD.";
		break;
	case 0x08005E:
		cid = "COUNTERPOINT COMPUTER INC.";
		break;
	case 0x08005A:
		cid = "IBM Corp";
		break;
	case 0x080056:
		cid = "STANFORD LINEAR ACCEL. CENTER";
		break;
	case 0x080053:
		cid = "MIDDLE EAST TECH. UNIVERSITY";
		break;
	case 0x08004F:
		cid = "CYGNET SYSTEMS";
		break;
	case 0x00194B:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x001F95:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x000E59:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xA01B29:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x90013B:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xE46F13:
		cid = "D-Link International";
		break;
	case 0x94C150:
		cid = "2Wire Inc";
		break;
	case 0x60FE20:
		cid = "2Wire Inc";
		break;
	case 0x989096:
		cid = "Dell Inc.";
		break;
	case 0xB82A72:
		cid = "Dell Inc.";
		break;
	case 0x00D09E:
		cid = "2Wire Inc";
		break;
	case 0x000D72:
		cid = "2Wire Inc";
		break;
	case 0x000F1F:
		cid = "Dell Inc.";
		break;
	case 0x14FEB5:
		cid = "Dell Inc.";
		break;
	case 0x0015C5:
		cid = "Dell Inc.";
		break;
	case 0xD4AE52:
		cid = "Dell Inc.";
		break;
	case 0xB0E754:
		cid = "2Wire Inc";
		break;
	case 0xB8E625:
		cid = "2Wire Inc";
		break;
	case 0x549F35:
		cid = "Dell Inc.";
		break;
	case 0x64006A:
		cid = "Dell Inc.";
		break;
	case 0xB4E10F:
		cid = "Dell Inc.";
		break;
	case 0x0023AE:
		cid = "Dell Inc.";
		break;
	case 0x9CD917:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x9068C3:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x408805:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0xAC2B6E:
		cid = "Intel Corporate";
		break;
	case 0xF8F1B6:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x00216A:
		cid = "Intel Corporate";
		break;
	case 0x001E64:
		cid = "Intel Corporate";
		break;
	case 0x0016EB:
		cid = "Intel Corporate";
		break;
	case 0x0018DE:
		cid = "Intel Corporate";
		break;
	case 0x681729:
		cid = "Intel Corporate";
		break;
	case 0x5C514F:
		cid = "Intel Corporate";
		break;
	case 0xB808CF:
		cid = "Intel Corporate";
		break;
	case 0xC8F733:
		cid = "Intel Corporate";
		break;
	case 0x4851B7:
		cid = "Intel Corporate";
		break;
	case 0x5CC5D4:
		cid = "Intel Corporate";
		break;
	case 0x7CCCB8:
		cid = "Intel Corporate";
		break;
	case 0xF40669:
		cid = "Intel Corporate";
		break;
	case 0x3CA9F4:
		cid = "Intel Corporate";
		break;
	case 0x28B2BD:
		cid = "Intel Corporate";
		break;
	case 0x08D40C:
		cid = "Intel Corporate";
		break;
	case 0x843A4B:
		cid = "Intel Corporate";
		break;
	case 0x0CD292:
		cid = "Intel Corporate";
		break;
	case 0x78929C:
		cid = "Intel Corporate";
		break;
	case 0x6805CA:
		cid = "Intel Corporate";
		break;
	case 0xACA31E:
		cid = "Aruba Networks";
		break;
	case 0x9C1C12:
		cid = "Aruba Networks";
		break;
	case 0x001A1E:
		cid = "Aruba Networks";
		break;
	case 0x28C2DD:
		cid = "AzureWave Technology Inc.";
		break;
	case 0x84D47E:
		cid = "Aruba Networks";
		break;
	case 0xA85840:
		cid = "Cambridge Industries(Group) Co.,Ltd.";
		break;
	case 0x002243:
		cid = "AzureWave Technology Inc.";
		break;
	case 0x74F06D:
		cid = "AzureWave Technology Inc.";
		break;
	case 0x44D832:
		cid = "AzureWave Technology Inc.";
		break;
	case 0x781881:
		cid = "AzureWave Technology Inc.";
		break;
	case 0xB0EE45:
		cid = "AzureWave Technology Inc.";
		break;
	case 0x240A64:
		cid = "AzureWave Technology Inc.";
		break;
	case 0xD0E782:
		cid = "AzureWave Technology Inc.";
		break;
	case 0x0C4C39:
		cid = "MitraStar Technology Corp.";
		break;
	case 0x002423:
		cid = "AzureWave Technologies (Shanghai) Inc.";
		break;
	case 0xA81D16:
		cid = "AzureWave Technology Inc.";
		break;
	case 0x38A53C:
		cid = "COMECER Netherlands";
		break;
	case 0x001D8B:
		cid = "ADB Broadband Italia";
		break;
	case 0xA4526F:
		cid = "ADB Broadband Italia";
		break;
	case 0x581243:
		cid = "AcSiP Technology Corp.";
		break;
	case 0x0026B8:
		cid = "Actiontec Electronics, Inc";
		break;
	case 0x0030F1:
		cid = "Accton Technology Corp";
		break;
	case 0x001974:
		cid = "16063";
		break;
	case 0xECF00E:
		cid = "AboCom";
		break;
	case 0x3039F2:
		cid = "ADB Broadband Italia";
		break;
	case 0x000827:
		cid = "ADB Broadband Italia";
		break;
	case 0x9097D5:
		cid = "Espressif Inc.";
		break;
	case 0x18FE34:
		cid = "Espressif Inc.";
		break;
	case 0x54F6C5:
		cid = "FUJIAN STAR-NET COMMUNICATION CO.,LTD";
		break;
	case 0x5C338E:
		cid = "Alpha Networks Inc.";
		break;
	case 0x001AEB:
		cid = "Allied Telesis R&D Center K.K.";
		break;
	case 0xA43111:
		cid = "ZIV";
		break;
	case 0x5C93A2:
		cid = "Liteon Technology Corporation";
		break;
	case 0xE8C74F:
		cid = "Liteon Technology Corporation";
		break;
	case 0xE8F724:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0x701A04:
		cid = "Liteon Technology Corporation";
		break;
	case 0x48D224:
		cid = "Liteon Technology Corporation";
		break;
	case 0x2CD05A:
		cid = "Liteon Technology Corporation";
		break;
	case 0x74E543:
		cid = "Liteon Technology Corporation";
		break;
	case 0xA4DB30:
		cid = "Liteon Technology Corporation";
		break;
	case 0xB8EE65:
		cid = "Liteon Technology Corporation";
		break;
	case 0x001DBA:
		cid = "Sony Corporation";
		break;
	case 0x78843C:
		cid = "Sony Corporation";
		break;
	case 0x04E676:
		cid = "AMPAK Technology, Inc.";
		break;
	case 0x0022F4:
		cid = "AMPAK Technology, Inc.";
		break;
	case 0x080046:
		cid = "Sony Corporation";
		break;
	case 0x000D92:
		cid = "ARIMA Communications Corp.";
		break;
	case 0x009096:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0x0011F5:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0xDCD87C:
		cid = "Beijing Jingdong Century Trading Co., LTD.";
		break;
	case 0x001C4A:
		cid = "AVM GmbH";
		break;
	case 0x000B6A:
		cid = "Asiarock Technology Limited";
		break;
	case 0x40BA61:
		cid = "ARIMA Communications Corp.";
		break;
	case 0x1883BF:
		cid = "Arcadyan Technology Corporation";
		break;
	case 0x9C80DF:
		cid = "Arcadyan Technology Corporation";
		break;
	case 0x001CCC:
		cid = "BlackBerry RTS";
		break;
	case 0x94EBCD:
		cid = "BlackBerry RTS";
		break;
	case 0x644FB0:
		cid = "Hyunjin.com";
		break;
	case 0x001A2A:
		cid = "Arcadyan Technology Corporation";
		break;
	case 0x001D19:
		cid = "Arcadyan Technology Corporation";
		break;
	case 0x88252C:
		cid = "Arcadyan Technology Corporation";
		break;
	case 0xA4E4B8:
		cid = "BlackBerry RTS";
		break;
	case 0x58671A:
		cid = "Barnes&Noble";
		break;
	case 0xBC0543:
		cid = "AVM GmbH";
		break;
	case 0x002675:
		cid = "Aztech Electronics Pte Ltd";
		break;
	case 0x001F3F:
		cid = "AVM GmbH";
		break;
	case 0x0020D6:
		cid = "Breezecom, Ltd.";
		break;
	case 0x001018:
		cid = "Broadcom";
		break;
	case 0x001BE9:
		cid = "Broadcom";
		break;
	case 0x008077:
		cid = "Brother industries, LTD.";
		break;
	case 0x029D8E:
		cid = "CARDIAC RECORDERS, INC.";
		break;
	case 0xFC2F40:
		cid = "Calxeda, Inc.";
		break;
	case 0x0026E4:
		cid = "Canal +";
		break;
	case 0x389496:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x0CB319:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x08EE8B:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xA89FBA:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xFC1910:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x083D88:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x5C2E59:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x646CB2:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xF884F2:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x14B484:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x608F5C:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x4CBCA5:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x78595E:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xB0D09C:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x4CA56D:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xA48431:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE4F8EF:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x1432D1:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE458E7:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x8CBFA6:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x7840E4:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x9000DB:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x183A2D:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x08373D:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x50F520:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xA4EBD3:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x28987B:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xF40E22:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x9C3AAF:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x0270B3:
		cid = "DATA RECALL LTD.";
		break;
	case 0x000FF6:
		cid = "DARFON LIGHTING CORP";
		break;
	case 0x702559:
		cid = "CyberTAN Technology Inc.";
		break;
	case 0x0090D6:
		cid = "Crystal Group, Inc.";
		break;
	case 0x001DAA:
		cid = "DrayTek Corp.";
		break;
	case 0x02CF1C:
		cid = "Communication Machinery Corporation";
		break;
	case 0x0C75BD:
		cid = "Cisco Systems, Inc";
		break;
	case 0x38F0C8:
		cid = "Livestream";
		break;
	case 0x0C1167:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001982:
		cid = "SmarDTV";
		break;
	case 0x10C6FC:
		cid = "Garmin International";
		break;
	case 0x00E000:
		cid = "FUJITSU LIMITED";
		break;
	case 0x00000E:
		cid = "FUJITSU LIMITED";
		break;
	case 0x002326:
		cid = "FUJITSU LIMITED";
		break;
	case 0x0007CB:
		cid = "FREEBOX SAS";
		break;
	case 0x3C591E:
		cid = "TCL King Electrical Appliances (Huizhou) Co., Ltd";
		break;
	case 0x002682:
		cid = "Gemtek Technology Co., Ltd.";
		break;
	case 0x001A73:
		cid = "Gemtek Technology Co., Ltd.";
		break;
	case 0x00904B:
		cid = "Gemtek Technology Co., Ltd.";
		break;
	case 0xD86BF7:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0xA4C0E1:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x34AF2C:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x8CCDE8:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x9CE635:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x600194:
		cid = "Espressif Inc.";
		break;
	case 0xF44D17:
		cid = "GOLDCARD HIGH-TECH CO.,LTD.";
		break;
	case 0x001E35:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x001FC5:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x0021BD:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x002709:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0xE84ECE:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x0009BF:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x001AE9:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x001CBE:
		cid = "Nintendo Co., Ltd.";
		break;
	case 0x002403:
		cid = "Nokia Danmark A/S";
		break;
	case 0x002265:
		cid = "Nokia Danmark A/S";
		break;
	case 0x0019B7:
		cid = "Nokia Danmark A/S";
		break;
	case 0x002404:
		cid = "Nokia Danmark A/S";
		break;
	case 0x0002EE:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001C9A:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001F01:
		cid = "Nokia Danmark A/S";
		break;
	case 0x000EED:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001E3A:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001A89:
		cid = "Nokia Danmark A/S";
		break;
	case 0x0021AA:
		cid = "Nokia Danmark A/S";
		break;
	case 0x002669:
		cid = "Nokia Danmark A/S";
		break;
	case 0x0022FD:
		cid = "Nokia Danmark A/S";
		break;
	case 0x002109:
		cid = "Nokia Danmark A/S";
		break;
	case 0x002108:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001D6E:
		cid = "Nokia Danmark A/S";
		break;
	case 0x001B33:
		cid = "Nokia Danmark A/S";
		break;
	case 0xECF35B:
		cid = "Nokia Corporation";
		break;
	case 0xEC9B5B:
		cid = "Nokia Corporation";
		break;
	case 0xBCC6DB:
		cid = "Nokia Corporation";
		break;
	case 0xB83241:
		cid = "Wuhan Tianyu Information Industry Co., Ltd.";
		break;
	case 0x9897D1:
		cid = "MitraStar Technology Corp.";
		break;
	case 0x94C960:
		cid = "Zhongshan B&T technology.co.,ltd";
		break;
	case 0x001479:
		cid = "NEC Magnus Communications,Ltd.";
		break;
	case 0x0821EF:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xA0CBFD:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x34145F:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xB462AD:
		cid = "Elysia Germany GmbH";
		break;
	case 0x747818:
		cid = "Jurumani Solutions";
		break;
	case 0x803896:
		cid = "SHARP Corporation";
		break;
	case 0x80D160:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0x686E23:
		cid = "Wi3 Inc.";
		break;
	case 0xB8A175:
		cid = "Roku, Inc.";
		break;
	case 0x0080E5:
		cid = "NetApp";
		break;
	case 0x002340:
		cid = "MiXTelematics";
		break;
	case 0x00AF1F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x4CCC6A:
		cid = "Micro-Star INTL CO., LTD.";
		break;
	case 0x985BB0:
		cid = "KMDATA INC.";
		break;
	case 0x6C8FB5:
		cid = "Microsoft Mobile Oy";
		break;
	case 0x245EBE:
		cid = "QNAP Systems, Inc.";
		break;
	case 0xA89352:
		cid = "SHANGHAI ZHONGMI COMMUNICATION TECHNOLOGY CO.,LTD";
		break;
	case 0xAC5F3E:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0x70661B:
		cid = "Sonova AG";
		break;
	case 0x1C98EC:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0x9C9D5D:
		cid = "Raden Inc";
		break;
	case 0xE8FD72:
		cid = "SHANGHAI LINGUO TECHNOLOGY CO., LTD.";
		break;
	case 0x98BB1E:
		cid = "BYD Precision Manufacture Company Ltd.";
		break;
	case 0xEC438B:
		cid = "YAPTV";
		break;
	case 0x1866DA:
		cid = "Dell Inc.";
		break;
	case 0x981FB1:
		cid = "Shenzhen Lemon Network Technology Co.,Ltd";
		break;
	case 0x40476A:
		cid = "AG Acquisition Corp. d.b.a. ASTRO Gaming";
		break;
	case 0xA4BF01:
		cid = "Intel Corporate";
		break;
	case 0x509EA7:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xDCCF96:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x0004C6:
		cid = "YAMAHA MOTOR CO.,LTD";
		break;
	case 0x14D11F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x54511B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x68536C:
		cid = "SPnS Co.,Ltd";
		break;
	case 0x005BA1:
		cid = "shanghai huayuan chuangxin software CO., LTD.";
		break;
	case 0xB07E70:
		cid = "Zadara Storage Ltd.";
		break;
	case 0x405EE1:
		cid = "Shenzhen H&T Intelligent Control Co.,Ltd.";
		break;
	case 0x10F005:
		cid = "Intel Corporate";
		break;
	case 0xD463FE:
		cid = "Arcadyan Corporation";
		break;
	case 0x9466E7:
		cid = "WOM Engineering";
		break;
	case 0xF8A188:
		cid = "LED Roadway Lighting";
		break;
	case 0x001174:
		cid = " Mojo Networks, Inc.";
		break;
	case 0xBC15AC:
		cid = "Vodafone Italia S.p.A.";
		break;
	case 0x140C5B:
		cid = "PLNetworks";
		break;
	case 0xD0B0CD:
		cid = "Moen";
		break;
	case 0x0071C2:
		cid = "PEGATRON CORPORATION";
		break;
	case 0xDCFE07:
		cid = "PEGATRON CORPORATION";
		break;
	case 0xE47E66:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x9C741A:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xEC93ED:
		cid = "DDoS-Guard LTD";
		break;
	case 0x4C72B9:
		cid = "PEGATRON CORPORATION";
		break;
	case 0xF462D0:
		cid = "Not for Radio, LLC";
		break;
	case 0x94513D:
		cid = "iSmart Alarm, Inc.";
		break;
	case 0xC89CDC:
		cid = "Elitegroup Computer Systems Co.,Ltd.";
		break;
	case 0x002511:
		cid = "Elitegroup Computer Systems Co.,Ltd.";
		break;
	case 0x000E03:
		cid = "Emulex Corporation";
		break;
	case 0x001BB9:
		cid = "Elitegroup Computer Systems Co.,Ltd.";
		break;
	case 0x001921:
		cid = "Elitegroup Computer Systems Co.,Ltd.";
		break;
	case 0x00142A:
		cid = "Elitegroup Computer Systems Co.,Ltd.";
		break;
	case 0x0001F4:
		cid = "Enterasys";
		break;
	case 0x487ADA:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x1C7370:
		cid = "Neotech";
		break;
	case 0x200A5E:
		cid = "Xiangshan Giant Eagle Technology Developing Co., Ltd.";
		break;
	case 0x30E37A:
		cid = "Intel Corporate";
		break;
	case 0x4CA003:
		cid = "T-21 Technologies LLC";
		break;
	case 0xF0EE58:
		cid = "PACE Telematics GmbH";
		break;
	case 0xA08CFD:
		cid = "Hewlett Packard";
		break;
	case 0x4000E0:
		cid = "Derek(Shaoguan)Limited";
		break;
	case 0x001397:
		cid = "Oracle Corporation";
		break;
	case 0x00A0A4:
		cid = "Oracle Corporation";
		break;
	case 0xA4E597:
		cid = "Gessler GmbH";
		break;
	case 0x0024F4:
		cid = "Kaminario, Ltd.";
		break;
	case 0x001D08:
		cid = "Jiangsu Yinhe  Electronics Co.,Ltd.";
		break;
	case 0x0018D7:
		cid = "JAVAD GNSS, Inc.";
		break;
	case 0x001C6C:
		cid = "30805";
		break;
	case 0x00A0B0:
		cid = "I-O DATA DEVICE, INC.";
		break;
	case 0x00E0CF:
		cid = "INTEGRATED DEVICE";
		break;
	case 0x547F54:
		cid = "INGENICO";
		break;
	case 0x48C049:
		cid = "Broad Telecom SA";
		break;
	case 0xDC38E1:
		cid = "Juniper Networks";
		break;
	case 0x40A677:
		cid = "Juniper Networks";
		break;
	case 0x0C8610:
		cid = "Juniper Networks";
		break;
	case 0xEC3EF7:
		cid = "Juniper Networks";
		break;
	case 0x0014F6:
		cid = "Juniper Networks";
		break;
	case 0x00121E:
		cid = "Juniper Networks";
		break;
	case 0x0010DB:
		cid = "Juniper Networks";
		break;
	case 0x307C5E:
		cid = "Juniper Networks";
		break;
	case 0x841888:
		cid = "Juniper Networks";
		break;
	case 0x40B4F0:
		cid = "Juniper Networks";
		break;
	case 0x002688:
		cid = "Juniper Networks";
		break;
	case 0x0017CB:
		cid = "Juniper Networks";
		break;
	case 0xE0A3AC:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xE00EDA:
		cid = "Cisco Systems, Inc";
		break;
	case 0x6C2483:
		cid = "Microsoft Mobile Oy";
		break;
	case 0x848319:
		cid = "Hangzhou Zero Zero Technology Co., Ltd.";
		break;
	case 0x001F20:
		cid = "Logitech Europe SA";
		break;
	case 0x882012:
		cid = "LMI Technologies";
		break;
	case 0x002382:
		cid = "Lih Rong electronic Enterprise Co., Ltd.";
		break;
	case 0x88795B:
		cid = "Konka Group Co., Ltd.";
		break;
	case 0x001A34:
		cid = "Konka Group Co., Ltd.";
		break;
	case 0x20A90E:
		cid = "TCT mobile ltd";
		break;
	case 0x8C99E6:
		cid = "TCT mobile ltd";
		break;
	case 0x745C9F:
		cid = "TCT mobile ltd";
		break;
	case 0x0CBD51:
		cid = "TCT mobile ltd";
		break;
	case 0xE42D02:
		cid = "TCT mobile ltd";
		break;
	case 0x3CE5A6:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x3C8C40:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0xB04519:
		cid = "TCT mobile ltd";
		break;
	case 0xA81559:
		cid = "Breathometer, Inc.";
		break;
	case 0xC09727:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0x2C5A8D:
		cid = "SYSTRONIK Elektronik u. Systemtechnik GmbH";
		break;
	case 0x8C897A:
		cid = "AUGTEK";
		break;
	case 0x54EDA3:
		cid = "Navdy, Inc.";
		break;
	case 0x046565:
		cid = "Testop";
		break;
	case 0x042758:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x3C92DC:
		cid = "Octopod Technology Co. Ltd.";
		break;
	case 0x6038E0:
		cid = "Belkin International Inc.";
		break;
	case 0xF0FDA0:
		cid = "Acurix Networks Pty Ltd";
		break;
	case 0x3876D1:
		cid = "Euronda SpA";
		break;
	case 0xC48F07:
		cid = "Shenzhen Yihao Hulian Science and Technology Co., Ltd.";
		break;
	case 0x009E1E:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002550:
		cid = "Riverbed Technology, Inc.";
		break;
	case 0xD85B2A:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xACC33A:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xF45B73:
		cid = "Wanjiaan Interconnected Technology Co., Ltd";
		break;
	case 0x0021E2:
		cid = "visago Systems & Controls GmbH & Co. KG";
		break;
	case 0x28F10E:
		cid = "Dell Inc.";
		break;
	case 0xC4A366:
		cid = "zte corporation";
		break;
	case 0x0014B4:
		cid = "General Dynamics United Kingdom Ltd";
		break;
	case 0xA0B437:
		cid = " GD Mission Systems";
		break;
	case 0x5052D2:
		cid = "Hangzhou Telin Technologies Co., Limited";
		break;
	case 0x1CD6BD:
		cid = "LEEDARSON LIGHTING CO., LTD.";
		break;
	case 0x9CDD1F:
		cid = "Intelligent Steward Co.,Ltd";
		break;
	case 0x00EBD5:
		cid = "Cisco Systems, Inc";
		break;
	case 0x1C7B23:
		cid = "Qingdao Hisense Communications Co.,Ltd.";
		break;
	case 0x90CF7D:
		cid = "Qingdao Hisense Communications Co.,Ltd.";
		break;
	case 0xF8F082:
		cid = "NAG LLC";
		break;
	case 0x40F413:
		cid = "Rubezh";
		break;
	case 0x2C094D:
		cid = "Raptor Engineering, LLC";
		break;
	case 0x88797E:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x40C729:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xAC040B:
		cid = "Peloton Interactive, Inc";
		break;
	case 0x006074:
		cid = "QSC LLC";
		break;
	case 0x34ED0B:
		cid = " Shanghai XZ-COM.CO.,Ltd.";
		break;
	case 0x0010C1:
		cid = "OI ELECTRIC CO.,LTD";
		break;
	case 0x206A8A:
		cid = "Wistron Infocomm (Zhongshan) Corporation";
		break;
	case 0xF0DEF1:
		cid = "Wistron Infocomm (Zhongshan) Corporation";
		break;
	case 0xF80F41:
		cid = "Wistron Infocomm (Zhongshan) Corporation";
		break;
	case 0x94DF4E:
		cid = "Wistron InfoComm(Kunshan)Co.,Ltd.";
		break;
	case 0x48A9D2:
		cid = "Wistron Neweb Corporation";
		break;
	case 0x683E34:
		cid = "MEIZU Technology Co., Ltd.";
		break;
	case 0x001EC0:
		cid = "Microchip Technology Inc.";
		break;
	case 0x3C0771:
		cid = "Sony Corporation";
		break;
	case 0xD8D43C:
		cid = "Sony Corporation";
		break;
	case 0x00A012:
		cid = "Telco Systems, Inc.";
		break;
	case 0x94611E:
		cid = "Wata Electronics Co.,Ltd.";
		break;
	case 0x5CA86A:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x000A68:
		cid = "Solarflare Communications Inc";
		break;
	case 0x0CD502:
		cid = "Westell Technologies Inc.";
		break;
	case 0x001636:
		cid = "QUANTA COMPUTER INC.";
		break;
	case 0x00C09F:
		cid = "QUANTA COMPUTER INC.";
		break;
	case 0x54AB3A:
		cid = "QUANTA COMPUTER INC.";
		break;
	case 0x089E01:
		cid = "QUANTA COMPUTER INC.";
		break;
	case 0x00199D:
		cid = "Vizio, Inc";
		break;
	case 0x6C0B84:
		cid = "Universal Global Scientific Industrial Co., Ltd.";
		break;
	case 0xE4509A:
		cid = "HW Communications Ltd";
		break;
	case 0x702900:
		cid = "Shenzhen ChipTrip Technology Co,Ltd";
		break;
	case 0x204C03:
		cid = "Aruba Networks";
		break;
	case 0x90F052:
		cid = "MEIZU Technology Co., Ltd.";
		break;
	case 0x000E1E:
		cid = "QLogic Corporation";
		break;
	case 0xD8EB97:
		cid = "TRENDnet, Inc.";
		break;
	case 0x146102:
		cid = "Alpine Electronics, Inc.";
		break;
	case 0x9003B7:
		cid = "PARROT SA";
		break;
	case 0x0CFE45:
		cid = "Sony Interactive Entertainment Inc.";
		break;
	case 0xF8D0AC:
		cid = "Sony Interactive Entertainment Inc.";
		break;
	case 0x00D9D1:
		cid = "Sony Interactive Entertainment Inc.";
		break;
	case 0x00041F:
		cid = "Sony Interactive Entertainment Inc.";
		break;
	case 0x001D0D:
		cid = "Sony Interactive Entertainment Inc.";
		break;
	case 0x7CC709:
		cid = "SHENZHEN RF-LINK TECHNOLOGY CO.,LTD.";
		break;
	case 0x38B8EB:
		cid = "IEEE Registration Authority";
		break;
	case 0x38FDFE:
		cid = "IEEE Registration Authority";
		break;
	case 0x7C477C:
		cid = "IEEE Registration Authority";
		break;
	case 0x50FF99:
		cid = "IEEE Registration Authority";
		break;
	case 0x6891D0:
		cid = "IEEE Registration Authority";
		break;
	case 0x283638:
		cid = "IEEE Registration Authority";
		break;
	case 0x2C6A6F:
		cid = "IEEE Registration Authority";
		break;
	case 0xBC3400:
		cid = "IEEE Registration Authority";
		break;
	case 0xB437D1:
		cid = "IEEE Registration Authority";
		break;
	case 0xD455BE:
		cid = "SHENZHEN FAST TECHNOLOGIES CO.,LTD";
		break;
	case 0xF40E11:
		cid = "IEEE Registration Authority";
		break;
	case 0xA43BFA:
		cid = "IEEE Registration Authority";
		break;
	case 0xCC1BE0:
		cid = "IEEE Registration Authority";
		break;
	case 0x807B85:
		cid = "IEEE Registration Authority";
		break;
	case 0x549A11:
		cid = "IEEE Registration Authority";
		break;
	case 0xB8D812:
		cid = "IEEE Registration Authority";
		break;
	case 0x1CCAE3:
		cid = "IEEE Registration Authority";
		break;
	case 0x7419F8:
		cid = "IEEE Registration Authority";
		break;
	case 0x1C21D1:
		cid = "IEEE Registration Authority";
		break;
	case 0x80E4DA:
		cid = "IEEE Registration Authority";
		break;
	case 0x2CD141:
		cid = "IEEE Registration Authority";
		break;
	case 0x8CA6DF:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x00E091:
		cid = "LG Electronics";
		break;
	case 0x6CD032:
		cid = "LG Electronics";
		break;
	case 0xC041F6:
		cid = "LG ELECTRONICS INC";
		break;
	case 0x404AD4:
		cid = "Widex A/S";
		break;
	case 0x0022CF:
		cid = "PLANEX COMMUNICATIONS INC.";
		break;
	case 0xA84E3F:
		cid = "Hitron Technologies. Inc";
		break;
	case 0x00A742:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001478:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x00167A:
		cid = "Skyworth Overseas Development Ltd.";
		break;
	case 0x28BE03:
		cid = "TCT mobile ltd";
		break;
	case 0xF4C613:
		cid = "Alcatel-Lucent Shanghai Bell Co., Ltd";
		break;
	case 0xD826B9:
		cid = "Guangdong Coagent Electronics S&amp;T Co.,Ltd.";
		break;
	case 0xFCB0C4:
		cid = "Shanghai DareGlobal Technologies Co.,Ltd";
		break;
	case 0x24AF4A:
		cid = "Alcatel-Lucent IPD";
		break;
	case 0x001AF0:
		cid = "Alcatel-Lucent IPD";
		break;
	case 0xAC9CE4:
		cid = "Alcatel-Lucent Shanghai Bell Co., Ltd";
		break;
	case 0xD84710:
		cid = "Sichuan Changhong Electric Ltd.";
		break;
	case 0x000E40:
		cid = "Nortel Networks";
		break;
	case 0x001158:
		cid = "Nortel Networks";
		break;
	case 0x0011F9:
		cid = "Nortel Networks";
		break;
	case 0x000F6A:
		cid = "Nortel Networks";
		break;
	case 0x001283:
		cid = "Nortel Networks";
		break;
	case 0x000438:
		cid = "Nortel Networks";
		break;
	case 0x002347:
		cid = "ProCurve Networking by HP";
		break;
	case 0x002561:
		cid = "ProCurve Networking by HP";
		break;
	case 0x008058:
		cid = "PRINTER SYSTEMS CORP.";
		break;
	case 0x00140D:
		cid = "Nortel Networks";
		break;
	case 0x001765:
		cid = "Nortel Networks";
		break;
	case 0x0018B0:
		cid = "Nortel Networks";
		break;
	case 0x001B25:
		cid = "Nortel Networks";
		break;
	case 0x001DAF:
		cid = "Nortel Networks";
		break;
	case 0x00166D:
		cid = "Yulong Computer Telecommunication Scientific (Shenzhen) Co.,Ltd";
		break;
	case 0x0016F2:
		cid = "Dmobile System Co., Ltd.";
		break;
	case 0x000138:
		cid = "XAVi Technologies Corp.";
		break;
	case 0x3C9157:
		cid = "Yulong Computer Telecommunication Scientific (Shenzhen) Co.,Ltd";
		break;
	case 0x0000D8:
		cid = "Novell, Inc.";
		break;
	case 0x001087:
		cid = "XSTREAMIS PLC";
		break;
	case 0x7C0623:
		cid = "Ultra Electronics Sonar System Division";
		break;
	case 0x002555:
		cid = "Visonic Technologies 1993 Ltd.";
		break;
	case 0x48FD8E:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x244427:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xB4A984:
		cid = "Symantec Corporation";
		break;
	case 0x34074F:
		cid = "AccelStor, Inc.";
		break;
	case 0x58E876:
		cid = "IEEE Registration Authority";
		break;
	case 0x3C2DB7:
		cid = "Texas Instruments";
		break;
	case 0x0023D4:
		cid = "Texas Instruments";
		break;
	case 0x001831:
		cid = "Texas Instruments";
		break;
	case 0xD08CB5:
		cid = "Texas Instruments";
		break;
	case 0xB4EED4:
		cid = "Texas Instruments";
		break;
	case 0xCC8CE3:
		cid = "Texas Instruments";
		break;
	case 0x102EAF:
		cid = "Texas Instruments";
		break;
	case 0x647BD4:
		cid = "Texas Instruments";
		break;
	case 0x0017E8:
		cid = "Texas Instruments";
		break;
	case 0x0017E6:
		cid = "Texas Instruments";
		break;
	case 0xB0B448:
		cid = "Texas Instruments";
		break;
	case 0x505663:
		cid = "Texas Instruments";
		break;
	case 0x3C7DB1:
		cid = "Texas Instruments";
		break;
	case 0x40984E:
		cid = "Texas Instruments";
		break;
	case 0x0012D1:
		cid = "Texas Instruments";
		break;
	case 0x88C255:
		cid = "Texas Instruments";
		break;
	case 0xE0C79D:
		cid = "Texas Instruments";
		break;
	case 0x9059AF:
		cid = "Texas Instruments";
		break;
	case 0xB4994C:
		cid = "Texas Instruments";
		break;
	case 0x70FF76:
		cid = "Texas Instruments";
		break;
	case 0x507224:
		cid = "Texas Instruments";
		break;
	case 0x506583:
		cid = "Texas Instruments";
		break;
	case 0xBC282C:
		cid = "e-Smart Systems Pvt. Ltd";
		break;
	case 0x546C0E:
		cid = "Texas Instruments";
		break;
	case 0xD8E72B:
		cid = "NetScout Systems, Inc.";
		break;
	case 0x04FEA1:
		cid = "Fihonest communication co.,Ltd";
		break;
	case 0x2CAC44:
		cid = "CONEXTOP";
		break;
	case 0xA8BD27:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0x981E0F:
		cid = "Jeelan (Shanghai Jeelan Technology Information Inc";
		break;
	case 0x548CA0:
		cid = "Liteon Technology Corporation";
		break;
	case 0x001CA8:
		cid = "AirTies Wireless Networks";
		break;
	case 0x0017D5:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x001247:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE4121D:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x684898:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xF409D8:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0xB479A7:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0x002339:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD487D8:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x184617:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x5001BB:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x380A94:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD857EF:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x1C66AA:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x58C38B:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x001EE2:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x001C43:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x001D25:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x3C5A37:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x549B12:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x3C8BFE:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x00265D:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD4E8B2:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x0808C2:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xB0C4E7:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD890E8:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x34AA8B:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x24C696:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x181EB0:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x20D390:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x343111:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x34BE00:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x78521A:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x18D276:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x7825AD:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xF4D9FB:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x0017C9:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x00166B:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x00166C:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE47CF9:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x90187C:
		cid = "SAMSUNG ELECTRO MECHANICS CO., LTD.";
		break;
	case 0xFC1F19:
		cid = "SAMSUNG ELECTRO MECHANICS CO., LTD.";
		break;
	case 0x50CCF8:
		cid = "SAMSUNG ELECTRO MECHANICS CO., LTD.";
		break;
	case 0x980C82:
		cid = "SAMSUNG ELECTRO MECHANICS CO., LTD.";
		break;
	case 0x002119:
		cid = "SAMSUNG ELECTRO MECHANICS CO., LTD.";
		break;
	case 0x002454:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x20D5BF:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x30CDA7:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x5C0A5B:
		cid = "SAMSUNG ELECTRO MECHANICS CO., LTD.";
		break;
	case 0x543530:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x300ED5:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xD02788:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x0014A4:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x0016CE:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x001DD9:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x001FE2:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x002269:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x40490F:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x28565A:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x001F3A:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x506313:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x78E400:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x8C7CB5:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xEC55F9:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xC03896:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x2C337A:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xACD1B8:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x48E244:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x30F772:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x90489A:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x9439E5:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x5C8613:
		cid = "Beijing Zhoenet Technology Co., Ltd";
		break;
	case 0xC8B21E:
		cid = "CHIPSEA TECHNOLOGIES (SHENZHEN) CORP.";
		break;
	case 0x503F98:
		cid = "CMITECH";
		break;
	case 0xB072BF:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x600B03:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0xA41437:
		cid = "Hangzhou Hikvision Digital Technology Co.,Ltd.";
		break;
	case 0x884CCF:
		cid = "Pulzze Systems, Inc";
		break;
	case 0x38521A:
		cid = "Nokia";
		break;
	case 0x84DBFC:
		cid = "Nokia";
		break;
	case 0x143E60:
		cid = "Nokia";
		break;
	case 0xD4E33F:
		cid = "Nokia";
		break;
	case 0x5454CF:
		cid = "PROBEDIGITAL CO.,LTD";
		break;
	case 0xF0D5BF:
		cid = "Intel Corporate";
		break;
	case 0xC87E75:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x00233A:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x1C9D3E:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0x748A69:
		cid = "Korea Image Technology Co., Ltd";
		break;
	case 0x30B64F:
		cid = "Juniper Networks";
		break;
	case 0xDC0D30:
		cid = "Shenzhen Feasycom Technology Co., Ltd.";
		break;
	case 0x008731:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB4EFFA:
		cid = "Lemobile Information Technology (Beijing) Co., Ltd.";
		break;
	case 0x9495A0:
		cid = "Google, Inc.";
		break;
	case 0x0005EE:
		cid = "Vanderbilt International (SWE) AB";
		break;
	case 0x38D547:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x383A21:
		cid = "IEEE Registration Authority";
		break;
	case 0x4CF95D:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x8421F1:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x707990:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xCCFD17:
		cid = "TCT mobile ltd";
		break;
	case 0x3C8BCD:
		cid = "Alcatel-Lucent Shanghai Bell Co., Ltd";
		break;
	case 0xE43ED7:
		cid = "Arcadyan Corporation";
		break;
	case 0x248894:
		cid = "shenzhen lensun Communication Technology LTD";
		break;
	case 0x60A4D0:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x00B0CE:
		cid = "Viveris Technologies";
		break;
	case 0xE00DB9:
		cid = "Cree, Inc.";
		break;
	case 0x40FE0D:
		cid = "MAXIO";
		break;
	case 0x9840BB:
		cid = "Dell Inc.";
		break;
	case 0xE04FBD:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO.,LTD";
		break;
	case 0x00B0E1:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0006F4:
		cid = "Prime Electronics & Satellitics Inc.";
		break;
	case 0xACE77B:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO.,LTD";
		break;
	case 0x24A43C:
		cid = "Ubiquiti Networks Inc.";
		break;
	case 0xD4E90B:
		cid = "CVT CO.,LTD";
		break;
	case 0x788A20:
		cid = "Ubiquiti Networks Inc.";
		break;
	case 0x28EE52:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x905C44:
		cid = "Compal Broadband Networks, Inc.";
		break;
	case 0xFC372B:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO.,LTD";
		break;
	case 0x0CD86C:
		cid = "SHENZHEN FAST TECHNOLOGIES CO.,LTD";
		break;
	case 0x4CE173:
		cid = "IEEE Registration Authority";
		break;
	case 0x8C60E7:
		cid = "MPGIO CO.,LTD";
		break;
	case 0x2C0E3D:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0x24C44A:
		cid = "zte corporation";
		break;
	case 0xB83A9D:
		cid = "Alarm.com";
		break;
	case 0x00BBC1:
		cid = "CANON INC.";
		break;
	case 0x1C14B3:
		cid = "Airwire Technologies";
		break;
	case 0x2CC260:
		cid = "Oracle Corporation";
		break;
	case 0x407183:
		cid = "Juniper Networks";
		break;
	case 0x0059DC:
		cid = "Cisco Systems, Inc";
		break;
	case 0x1CC0E1:
		cid = "IEEE Registration Authority";
		break;
	case 0x00749C:
		cid = "Ruijie Networks Co.,LTD";
		break;
	case 0x00271C:
		cid = "MERCURY CORPORATION";
		break;
	case 0xE0D9E3:
		cid = "Eltex Enterprise Ltd.";
		break;
	case 0x5098F3:
		cid = "Rheem Australia Pty Ltd";
		break;
	case 0x701CE7:
		cid = "Intel Corporate";
		break;
	case 0xCC9470:
		cid = "Kinestral Technologies, Inc.";
		break;
	case 0xF0219D:
		cid = "Cal-Comp Electronics & Communications Company Ltd.";
		break;
	case 0x000B2E:
		cid = "Cal-Comp Electronics & Communications Company Ltd.";
		break;
	case 0x885BDD:
		cid = "Aerohive Networks Inc.";
		break;
	case 0x08EA44:
		cid = "Aerohive Networks Inc.";
		break;
	case 0x506B8D:
		cid = "Nutanix";
		break;
	case 0x0038DF:
		cid = "Cisco Systems, Inc";
		break;
	case 0x006BF1:
		cid = "Cisco Systems, Inc";
		break;
	case 0x20D25F:
		cid = "SmartCap Technologies";
		break;
	case 0x3CFA43:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x145F94:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x4C11BF:
		cid = "Zhejiang Dahua Technology Co., Ltd.";
		break;
	case 0x000064:
		cid = "Yokogawa Digital Computer Corporation";
		break;
	case 0x0023F7:
		cid = "Private";
		break;
	case 0x90D7BE:
		cid = "Wavelab Global Inc.";
		break;
	case 0x686975:
		cid = "Angler Labs Inc";
		break;
	case 0x002448:
		cid = "SpiderCloud Wireless, Inc";
		break;
	case 0x7C03C9:
		cid = "Shenzhen YOUHUA Technology Co., Ltd";
		break;
	case 0x64DB43:
		cid = "Motorola (Wuhan) Mobility Technologies Communication Co., Ltd.";
		break;
	case 0xD058A8:
		cid = "zte corporation";
		break;
	case 0xD071C4:
		cid = "zte corporation";
		break;
	case 0x48F07B:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x3C80AA:
		cid = "Ransnet Singapore Pte Ltd";
		break;
	case 0x7CEBAE:
		cid = "Ridgeline Instruments";
		break;
	case 0xE89EB4:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0xD4970B:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x64CC2E:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0xB0E235:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x38A4ED:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0xF48B32:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0xAC83F3:
		cid = "AMPAK Technology, Inc.";
		break;
	case 0x18DBF2:
		cid = "Dell Inc.";
		break;
	case 0x000048:
		cid = "Seiko Epson Corporation";
		break;
	case 0xC0BFC0:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xA08CF8:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x54B56C:
		cid = "Xi'an NovaStar Tech Co., Ltd";
		break;
	case 0xFC3CE9:
		cid = "Tsingtong Technologies Co, Ltd.";
		break;
	case 0x04B648:
		cid = "ZENNER";
		break;
	case 0xFC10C6:
		cid = "Taicang T&W Electronics";
		break;
	case 0x344CC8:
		cid = "Echodyne Corp";
		break;
	case 0x948FEE:
		cid = "Verizon Telematics";
		break;
	case 0x5C4A1F:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO., LTD";
		break;
	case 0x0C8DDB:
		cid = "Cisco Meraki";
		break;
	case 0xB0F963:
		cid = "Hangzhou H3C Technologies Co., Limited";
		break;
	case 0x98B6E9:
		cid = "Nintendo Co.,Ltd";
		break;
	case 0x8809AF:
		cid = "Masimo Corporation";
		break;
	case 0x00E06C:
		cid = "Ultra Electronics Command & Control Systems";
		break;
	case 0x009058:
		cid = "Ultra Electronics Command & Control Systems";
		break;
	case 0xF8983A:
		cid = "Leeman International (HongKong) Limited";
		break;
	case 0x4CECEF:
		cid = "Soraa, Inc.";
		break;
	case 0x702D84:
		cid = "i4C Innovations";
		break;
	case 0xCC9F7A:
		cid = "Chiun Mai Communication Systems, Inc";
		break;
	case 0x446246:
		cid = "Comat AG";
		break;
	case 0xC8AA55:
		cid = "Hunan Comtom Electronic Incorporated Co.,Ltd";
		break;
	case 0x142FFD:
		cid = "LT SECURITY INC";
		break;
	case 0x000D2C:
		cid = "Net2Edge Limited";
		break;
	case 0xECE154:
		cid = "Beijing Unisound Information Technology Co.,Ltd.";
		break;
	case 0x60C658:
		cid = "PHYTRONIX Co.,Ltd.";
		break;
	case 0x38454C:
		cid = "Light Labs, Inc.";
		break;
	case 0xC894BB:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xD0FF98:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x5004B8:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x10B1F8:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x14ABC5:
		cid = "Intel Corporate";
		break;
	case 0xA462DF:
		cid = "DS Global. Co., LTD";
		break;
	case 0x50D213:
		cid = "CviLux Corporation";
		break;
	case 0x44D437:
		cid = "Inteno Broadband Technology AB";
		break;
	case 0x78AF58:
		cid = "GIMASI SA";
		break;
	case 0x00071C:
		cid = "AT&T";
		break;
	case 0x2C9AA4:
		cid = "Eolo SpA";
		break;
	case 0x002183:
		cid = "ANDRITZ HYDRO GmbH";
		break;
	case 0x8404D2:
		cid = "Kirale Technologies SL";
		break;
	case 0x083E5D:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x749CE3:
		cid = "KodaCloud Canada, Inc";
		break;
	case 0xCC2D21:
		cid = "Tenda Technology Co.,Ltd.Dongguan branch";
		break;
	case 0x8C78D7:
		cid = "SHENZHEN FAST TECHNOLOGIES CO.,LTD";
		break;
	case 0x3CBD3E:
		cid = "Beijing Xiaomi Electronics Co., Ltd.";
		break;
	case 0x2C4D54:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x349672:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x00179B:
		cid = "CHANT SINCERE CO.,LTD";
		break;
	case 0x080027:
		cid = "PCS Systemtechnik GmbH";
		break;
	case 0x348446:
		cid = "Ericsson AB";
		break;
	case 0xA4A1C2:
		cid = "Ericsson AB";
		break;
	case 0xB0F1EC:
		cid = "AMPAK Technology, Inc.";
		break;
	case 0xB0C46C:
		cid = "Senseit";
		break;
	case 0x148951:
		cid = "LCFC(HeFei) Electronics Technology co., ltd";
		break;
	case 0xF87588:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xBC3F8F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x04DEF2:
		cid = "Shenzhen ECOM Technology Co. Ltd";
		break;
	case 0x00D071:
		cid = "ECHELON CORP.";
		break;
	case 0x0030C5:
		cid = "CADENCE DESIGN SYSTEMS, INC.";
		break;
	case 0x504061:
		cid = "Nokia";
		break;
	case 0x54E3F6:
		cid = "Alcatel-Lucent";
		break;
	case 0xB0C205:
		cid = "BIONIME";
		break;
	case 0x0C61CF:
		cid = "Texas Instruments";
		break;
	case 0x7C2664:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xE47DEB:
		cid = "Shanghai Notion Information Technology CO.,LTD.";
		break;
	case 0xA002DC:
		cid = "Amazon Technologies Inc.";
		break;
	case 0x0C47C9:
		cid = "Amazon Technologies Inc.";
		break;
	case 0x747548:
		cid = "Amazon Technologies Inc.";
		break;
	case 0xAC63BE:
		cid = "Amazon Technologies Inc.";
		break;
	case 0x40FA7F:
		cid = "Preh Car Connect GmbH";
		break;
	case 0xF8AB05:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xC0028D:
		cid = "WINSTAR Display CO.,Ltd";
		break;
	case 0xD83214:
		cid = "Tenda Technology Co.,Ltd.Dongguan branch";
		break;
	case 0x7C787E:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xC0D3C0:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xF097E5:
		cid = "TAMIO, INC";
		break;
	case 0xF4E4AD:
		cid = "zte corporation";
		break;
	case 0xF85971:
		cid = "Intel Corporate";
		break;
	case 0xF49634:
		cid = "Intel Corporate";
		break;
	case 0x144FD7:
		cid = "IEEE Registration Authority";
		break;
	case 0x6C4B90:
		cid = "LiteON";
		break;
	case 0xF8FF0B:
		cid = "Electronic Technology Inc.";
		break;
	case 0x38F135:
		cid = "SensorTec-Canada";
		break;
	case 0x90F305:
		cid = "HUMAX Co., Ltd.";
		break;
	case 0x00093A:
		cid = "Molex";
		break;
	case 0x98AAFC:
		cid = "IEEE Registration Authority";
		break;
	case 0xB8D50B:
		cid = "Sunitec Enterprise Co.,Ltd";
		break;
	case 0x28A6DB:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xC8F86D:
		cid = "Alcatel-Lucent Shanghai Bell Co., Ltd";
		break;
	case 0xD45F25:
		cid = "Shenzhen YOUHUA Technology Co., Ltd";
		break;
	case 0x9CE951:
		cid = "Shenzhen Sang Fei Consumer Communications Ltd., Co.";
		break;
	case 0xDC0856:
		cid = "Alcatel-Lucent Enterprise";
		break;
	case 0xE8FDE8:
		cid = "CeLa Link Corporation";
		break;
	case 0x181212:
		cid = "Cepton Technologies";
		break;
	case 0x08ED02:
		cid = "IEEE Registration Authority";
		break;
	case 0xB4417A:
		cid = "SHENZHEN GONGJIN ELECTRONICS CO.,LT";
		break;
	case 0xF4DE0C:
		cid = "ESPOD Ltd.";
		break;
	case 0xBC8AE8:
		cid = "QING DAO HAIER TELECOM CO.,LTD.";
		break;
	case 0x440444:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0xC09F05:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0xCC2D83:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x38295A:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x4C1A3D:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0xA81B5A:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0xDC6DCD:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x70D379:
		cid = "Cisco Systems, Inc";
		break;
	case 0x7C4F7D:
		cid = "Sawwave";
		break;
	case 0x185207:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO., LTD";
		break;
	case 0x9874DA:
		cid = "Infinix mobility limited";
		break;
	case 0x143F27:
		cid = "Noccela Oy";
		break;
	case 0x64351C:
		cid = "e-CON SYSTEMS INDIA PVT LTD";
		break;
	case 0x0CB912:
		cid = "JM-DATA GmbH";
		break;
	case 0x1893D7:
		cid = "Texas Instruments";
		break;
	case 0xEC363F:
		cid = "Markov Corporation";
		break;
	case 0x54FA3E:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x0C8910:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xFCF136:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x981DFA:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x84A466:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x1867B0:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xCCB11A:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xB8BBAF:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x60C5AD:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x28395E:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xC4AE12:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x10D07A:
		cid = "AMPAK Technology, Inc.";
		break;
	case 0xB877C3:
		cid = "METER Group";
		break;
	case 0xF07485:
		cid = "NGD Systems, Inc.";
		break;
	case 0x2C3AE8:
		cid = "Espressif Inc.";
		break;
	case 0xDC74A8:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xC087EB:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE8B6C2:
		cid = "Juniper Networks";
		break;
	case 0x74F61C:
		cid = "HTC Corporation";
		break;
	case 0x3438B7:
		cid = "HUMAX Co., Ltd.";
		break;
	case 0x5C1A6F:
		cid = "Cambridge Industries(Group) Co.,Ltd.";
		break;
	case 0xB089C2:
		cid = "Zyptonite";
		break;
	case 0xF0D4F6:
		cid = "Lars Thrane A/S";
		break;
	case 0x487D2E:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x0403D6:
		cid = "Nintendo Co.,Ltd";
		break;
	case 0xA0AFBD:
		cid = "Intel Corporate";
		break;
	case 0x34D954:
		cid = "WiBotic Inc.";
		break;
	case 0x6C60EB:
		cid = "ZHI YUAN ELECTRONICS CO., LIMITED";
		break;
	case 0xAC4E2E:
		cid = "Shenzhen JingHanDa Electronics Co.Ltd";
		break;
	case 0xB40016:
		cid = " INGENICO TERMINALS SAS";
		break;
	case 0x0027E3:
		cid = "Cisco Systems, Inc";
		break;
	case 0xA0341B:
		cid = "TrackR, Inc";
		break;
	case 0xFCA667:
		cid = "Amazon Technologies Inc.";
		break;
	case 0x784501:
		cid = "Biamp Systems";
		break;
	case 0x488D36:
		cid = "Arcadyan Corporation";
		break;
	case 0x986F60:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x4C189A:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0xE45D52:
		cid = "Avaya Inc";
		break;
	case 0x38BB3C:
		cid = "Avaya Inc";
		break;
	case 0xC057BC:
		cid = "Avaya Inc";
		break;
	case 0xD47856:
		cid = "Avaya Inc";
		break;
	case 0x14612F:
		cid = "Avaya Inc";
		break;
	case 0x707C69:
		cid = "Avaya Inc";
		break;
	case 0xA47886:
		cid = "Avaya Inc";
		break;
	case 0x44322A:
		cid = "Avaya Inc";
		break;
	case 0x048A15:
		cid = "Avaya Inc";
		break;
	case 0x6CA849:
		cid = "Avaya Inc";
		break;
	case 0xA4251B:
		cid = "Avaya Inc";
		break;
	case 0x00040D:
		cid = "Avaya Inc";
		break;
	case 0xFC8399:
		cid = "Avaya Inc";
		break;
	case 0x60313B:
		cid = "Sunnovo International Limited";
		break;
	case 0x001CFA:
		cid = "Alarm.com";
		break;
	case 0xB4E62A:
		cid = "LG Innotek";
		break;
	case 0xE45AA2:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0xECDF3A:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0xF470AB:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x50184C:
		cid = "Platina Systems Inc.";
		break;
	case 0xCC4639:
		cid = "WAAV, Inc.";
		break;
	case 0xE4A749:
		cid = "Palo Alto Networks";
		break;
	case 0x786D94:
		cid = "Palo Alto Networks";
		break;
	case 0x30B164:
		cid = "Power Electronics International Inc.";
		break;
	case 0x18B430:
		cid = "Nest Labs Inc.";
		break;
	case 0x3CF591:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x602101:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x604762:
		cid = "Beijing Sensoro Technology Co.,Ltd.";
		break;
	case 0x7CE2CA:
		cid = "Juniper Networks";
		break;
	case 0xB0DFC1:
		cid = "Tenda Technology Co.,Ltd.Dongguan branch";
		break;
	case 0x70788B:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0x7065A3:
		cid = "Kandao lightforge Co., Ltd.";
		break;
	case 0x706E6D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001DCC:
		cid = "Ayon Cyber Security, Inc";
		break;
	case 0xFC2F6B:
		cid = "Everspin Technologies, Inc.";
		break;
	case 0x2CC5D3:
		cid = "Ruckus Wireless";
		break;
	case 0xF8E71E:
		cid = "Ruckus Wireless";
		break;
	case 0x1CB9C4:
		cid = "Ruckus Wireless";
		break;
	case 0xC0C520:
		cid = "Ruckus Wireless";
		break;
	case 0xB4C170:
		cid = "Yi chip Microelectronics (Hangzhou) Co., Ltd";
		break;
	case 0x540237:
		cid = "Teltronic AG";
		break;
	case 0xA89675:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x94F128:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0xA47B9D:
		cid = "Espressif Inc.";
		break;
	case 0x608E08:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x7C2EDD:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x3CF7A4:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x342D0D:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x94FBB2:
		cid = "SHENZHEN GONGJIN ELECTRONICS CO.,LT";
		break;
	case 0xEC3DFD:
		cid = "SHENZHEN BILIAN ELECTRONIC CO.，LTD";
		break;
	case 0x18742E:
		cid = "Amazon Technologies Inc.";
		break;
	case 0x001885:
		cid = "Avigilon Corporation";
		break;
	case 0x8886C2:
		cid = "STABILO International GmbH";
		break;
	case 0x04FA3F:
		cid = "Opticore Inc.";
		break;
	case 0x94D029:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x308454:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0xFC7F56:
		cid = "CoSyst Control Systems GmbH";
		break;
	case 0x8C2505:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x4C49E3:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x28D436:
		cid = "Jiangsu dewosi electric co., LTD";
		break;
	case 0x149346:
		cid = "PNI sensor corporation";
		break;
	case 0x00C064:
		cid = "General Datacomm LLC";
		break;
	case 0x601283:
		cid = "TSB REAL TIME LOCATION SYSTEMS S.L.";
		break;
	case 0xE06089:
		cid = "Cloudleaf, Inc.";
		break;
	case 0x001219:
		cid = "General Datacomm LLC";
		break;
	case 0xBC54FC:
		cid = "SHENZHEN MERCURY COMMUNICATION TECHNOLOGIES CO.,LTD.";
		break;
	case 0x547595:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x28F537:
		cid = "IEEE Registration Authority";
		break;
	case 0x18BC5A:
		cid = "Zhejiang Tmall Technology Co., Ltd.";
		break;
	case 0x00869C:
		cid = "Palo Alto Networks";
		break;
	case 0x00139D:
		cid = "MaxLinear Hispania S.L.U.";
		break;
	case 0x4C16FC:
		cid = "Juniper Networks";
		break;
	case 0x748EF8:
		cid = "Brocade Communications Systems, Inc.";
		break;
	case 0x48C1AC:
		cid = "PLANTRONICS, INC.";
		break;
	case 0x0CE0E4:
		cid = "PLANTRONICS, INC.";
		break;
	case 0x000389:
		cid = "PLANTRONICS, INC.";
		break;
	case 0xE422A5:
		cid = "PLANTRONICS, INC.";
		break;
	case 0x609C9F:
		cid = "Brocade Communications Systems, Inc.";
		break;
	case 0x000088:
		cid = "Brocade Communications Systems, Inc.";
		break;
	case 0x000480:
		cid = "Brocade Communications Systems, Inc.";
		break;
	case 0x00E052:
		cid = "Brocade Communications Systems, Inc.";
		break;
	case 0x100D7F:
		cid = "NETGEAR";
		break;
	case 0x6CB0CE:
		cid = "NETGEAR";
		break;
	case 0x506A03:
		cid = "NETGEAR";
		break;
	case 0xB07FB9:
		cid = "NETGEAR";
		break;
	case 0x08028E:
		cid = "NETGEAR";
		break;
	case 0x001F33:
		cid = "NETGEAR";
		break;
	case 0xC03F0E:
		cid = "NETGEAR";
		break;
	case 0x0024B2:
		cid = "NETGEAR";
		break;
	case 0x204E7F:
		cid = "NETGEAR";
		break;
	case 0x841B5E:
		cid = "NETGEAR";
		break;
	case 0xA021B7:
		cid = "NETGEAR";
		break;
	case 0x74E60F:
		cid = "TECNO MOBILE LIMITED";
		break;
	case 0xD8C497:
		cid = "Quanta Computer Inc.";
		break;
	case 0x444E6D:
		cid = "AVM Audiovisuelles Marketing und Computersysteme GmbH";
		break;
	case 0x409922:
		cid = "AzureWave Technology Inc.";
		break;
	case 0xB8DB1C:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0x3C10E6:
		cid = "PHAZR Inc.";
		break;
	case 0xB80B9D:
		cid = "ROPEX Industrie-Elektronik GmbH";
		break;
	case 0x001526:
		cid = "Remote Technologies Inc";
		break;
	case 0x34008A:
		cid = "IEEE Registration Authority";
		break;
	case 0x00D060:
		cid = "Panasonic Europe Ltd.";
		break;
	case 0x001987:
		cid = "Panasonic Mobile Communications Co.,Ltd.";
		break;
	case 0xBCC342:
		cid = "Panasonic Communications Co., Ltd.";
		break;
	case 0x705812:
		cid = "Panasonic Corporation AVC Networks Company";
		break;
	case 0xCC7EE7:
		cid = "Panasonic Corporation AVC Networks Company";
		break;
	case 0x84253F:
		cid = "silex technology, Inc.";
		break;
	case 0x40D63C:
		cid = "Equitech Industrial(DongGuan)Co.,Ltd";
		break;
	case 0x40017A:
		cid = "Cisco Systems, Inc";
		break;
	case 0xFC017C:
		cid = "Hon Hai Precision Ind. Co.,Ltd.";
		break;
	case 0x28840E:
		cid = "silicon valley immigration service";
		break;
	case 0x00C0EE:
		cid = "KYOCERA Display Corporation";
		break;
	case 0xCC5A53:
		cid = "Cisco Systems, Inc";
		break;
	case 0x940006:
		cid = "jinyoung";
		break;
	case 0x5C6776:
		cid = "IDS Imaging Development Systems GmbH";
		break;
	case 0xA875E2:
		cid = "Aventura Technologies, Inc.";
		break;
	case 0xDC0C2D:
		cid = "WEIFANG GOERTEK ELECTRONICS CO.,LTD";
		break;
	case 0x904E91:
		cid = "IEEE Registration Authority";
		break;
	case 0x2C279E:
		cid = "IEEE Registration Authority";
		break;
	case 0x38D620:
		cid = "Limidea Concept Pte. Ltd.";
		break;
	case 0x00173A:
		cid = "Cloudastructure Inc";
		break;
	case 0x745C4B:
		cid = "GN Audio A/S";
		break;
	case 0x64FB50:
		cid = "RoomReady/Zdi, Inc.";
		break;
	case 0x5C2BF5:
		cid = "Vivint Wireless Inc.";
		break;
	case 0x00FC8B:
		cid = "Amazon Technologies Inc.";
		break;
	case 0x10F163:
		cid = "TNK CO.,LTD";
		break;
	case 0x940E6B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x38378B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x98F5A9:
		cid = "OHSUNG";
		break;
	case 0xCC2237:
		cid = "IEEE Registration Authority";
		break;
	case 0x5033F0:
		cid = "YICHEN (SHENZHEN) TECHNOLOGY CO.LTD";
		break;
	case 0xC850E9:
		cid = "Raisecom Technology CO., LTD";
		break;
	case 0x90FD9F:
		cid = "Silicon Laboratories";
		break;
	case 0x50F722:
		cid = "Cisco Systems, Inc";
		break;
	case 0xBC4101:
		cid = "Shenzhen TINNO Mobile Technology Corp.";
		break;
	case 0x5C8D2D:
		cid = "Shanghai Wellpay Information Technology Co., Ltd";
		break;
	case 0xBC825D:
		cid = "MITSUMI ELECTRIC CO.,LTD.";
		break;
	case 0x5CA176:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO., LTD";
		break;
	case 0xC8E7F0:
		cid = "Juniper Networks";
		break;
	case 0x24F5A2:
		cid = "Belkin International Inc.";
		break;
	case 0x087808:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xD03169:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xBC5451:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x741AE0:
		cid = "IEEE Registration Authority";
		break;
	case 0xACF85C:
		cid = "Private";
		break;
	case 0xA039EE:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xA44027:
		cid = "zte corporation";
		break;
	case 0x1C1161:
		cid = "Ciena Corporation";
		break;
	case 0x4C82CF:
		cid = "Dish Technologies Corp";
		break;
	case 0xF0C9D1:
		cid = "GD Midea Air-Conditioning Equipment Co.,Ltd.";
		break;
	case 0xD49CF4:
		cid = "Palo Alto Networks";
		break;
	case 0x3C574F:
		cid = "China Mobile Group Device Co.,Ltd.";
		break;
	case 0xF8C120:
		cid = "Xi'an Link-Science Technology Co.,Ltd";
		break;
	case 0x903A72:
		cid = "Ruckus Wireless";
		break;
	case 0x3CE824:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xE8ABF3:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x7006AC:
		cid = "Eastcompeace Technology Co., Ltd";
		break;
	case 0x506F77:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x609813:
		cid = "Shanghai Visking Digital Technology Co. LTD";
		break;
	case 0x8C4CAD:
		cid = "Evoluzn Inc.";
		break;
	case 0xA4D4B2:
		cid = "Shenzhen MeiG Smart Technology Co.,Ltd";
		break;
	case 0xDCE533:
		cid = "IEEE Registration Authority";
		break;
	case 0x8CF710:
		cid = "AMPAK Technology, Inc.";
		break;
	case 0x38E1AA:
		cid = "zte corporation";
		break;
	case 0x18A28A:
		cid = "Essel-T Co., Ltd";
		break;
	case 0x38DEAD:
		cid = "Intel Corporate";
		break;
	case 0x74E182:
		cid = "Texas Instruments";
		break;
	case 0x40BD32:
		cid = "Texas Instruments";
		break;
	case 0x3C1710:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xC8FAE1:
		cid = "ARQ Digital LLC";
		break;
	case 0x80AD16:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x044EAF:
		cid = "LG Innotek";
		break;
	case 0xDCA333:
		cid = "Shenzhen YOUHUA Technology Co., Ltd";
		break;
	case 0xBCDDC2:
		cid = "Espressif Inc.";
		break;
	case 0xFC7C02:
		cid = "Phicomm (Shanghai) Co., Ltd.";
		break;
	case 0x88A9A7:
		cid = "IEEE Registration Authority";
		break;
	case 0xF0E3DC:
		cid = "Tecon MT, LLC";
		break;
	case 0x30B216:
		cid = "ABB AG - Power Grids - Grid Automation";
		break;
	case 0x00D0CE:
		cid = "iSystem Labs";
		break;
	case 0x00BE75:
		cid = "Cisco Systems, Inc";
		break;
	case 0x504EDC:
		cid = "Ping Communication";
		break;
	case 0x20677C:
		cid = "Hewlett Packard Enterprise";
		break;
	case 0xC42C4F:
		cid = "Qingdao Hisense Mobile Communication Technology Co,Ltd";
		break;
	case 0x24CACB:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x44FFBA:
		cid = "zte corporation";
		break;
	case 0x0023A8:
		cid = "Marshall Electronics";
		break;
	case 0xB481BF:
		cid = "Meta-Networks, LLC";
		break;
	case 0x0CAE7D:
		cid = "Texas Instruments";
		break;
	case 0x641CAE:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x4050B5:
		cid = "Shenzhen New Species Technology Co., Ltd.";
		break;
	case 0x4CD0CB:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x38BAF8:
		cid = "Intel Corporate";
		break;
	case 0xA4E975:
		cid = "Apple, Inc.";
		break;
	case 0xC0A53E:
		cid = "Apple, Inc.";
		break;
	case 0x9800C6:
		cid = "Apple, Inc.";
		break;
	case 0x787B8A:
		cid = "Apple, Inc.";
		break;
	case 0x3866F0:
		cid = "Apple, Inc.";
		break;
	case 0x20EE28:
		cid = "Apple, Inc.";
		break;
	case 0x08F4AB:
		cid = "Apple, Inc.";
		break;
	case 0x8C8590:
		cid = "Apple, Inc.";
		break;
	case 0x68EF43:
		cid = "Apple, Inc.";
		break;
	case 0xCC2DB7:
		cid = "Apple, Inc.";
		break;
	case 0xD4A33D:
		cid = "Apple, Inc.";
		break;
	case 0xE4E0A6:
		cid = "Apple, Inc.";
		break;
	case 0x70EF00:
		cid = "Apple, Inc.";
		break;
	case 0xB0CA68:
		cid = "Apple, Inc.";
		break;
	case 0x9810E8:
		cid = "Apple, Inc.";
		break;
	case 0xB49CDF:
		cid = "Apple, Inc.";
		break;
	case 0xDCA4CA:
		cid = "Apple, Inc.";
		break;
	case 0x8C8FE9:
		cid = "Apple, Inc.";
		break;
	case 0x98CA33:
		cid = "Apple, Inc.";
		break;
	case 0xFC253F:
		cid = "Apple, Inc.";
		break;
	case 0x183451:
		cid = "Apple, Inc.";
		break;
	case 0xC0847A:
		cid = "Apple, Inc.";
		break;
	case 0x64200C:
		cid = "Apple, Inc.";
		break;
	case 0x74E1B6:
		cid = "Apple, Inc.";
		break;
	case 0x0C771A:
		cid = "Apple, Inc.";
		break;
	case 0x00F4B9:
		cid = "Apple, Inc.";
		break;
	case 0xC8334B:
		cid = "Apple, Inc.";
		break;
	case 0xB8F6B1:
		cid = "Apple, Inc.";
		break;
	case 0xC09F42:
		cid = "Apple, Inc.";
		break;
	case 0x189EFC:
		cid = "Apple, Inc.";
		break;
	case 0x6C3E6D:
		cid = "Apple, Inc.";
		break;
	case 0x8C2DAA:
		cid = "Apple, Inc.";
		break;
	case 0xE4E4AB:
		cid = "Apple, Inc.";
		break;
	case 0x58404E:
		cid = "Apple, Inc.";
		break;
	case 0xDC0C5C:
		cid = "Apple, Inc.";
		break;
	case 0x2C200B:
		cid = "Apple, Inc.";
		break;
	case 0x609AC1:
		cid = "Apple, Inc.";
		break;
	case 0xF07960:
		cid = "Apple, Inc.";
		break;
	case 0x9C8BA0:
		cid = "Apple, Inc.";
		break;
	case 0x28A02B:
		cid = "Apple, Inc.";
		break;
	case 0xB44BD2:
		cid = "Apple, Inc.";
		break;
	case 0x9C4FDA:
		cid = "Apple, Inc.";
		break;
	case 0x1C5CF2:
		cid = "Apple, Inc.";
		break;
	case 0x3871DE:
		cid = "Apple, Inc.";
		break;
	case 0xBC5436:
		cid = "Apple, Inc.";
		break;
	case 0x5CF938:
		cid = "Apple, Inc.";
		break;
	case 0x4C3275:
		cid = "Apple, Inc.";
		break;
	case 0x2CF0A2:
		cid = "Apple, Inc.";
		break;
	case 0xECADB8:
		cid = "Apple, Inc.";
		break;
	case 0x9801A7:
		cid = "Apple, Inc.";
		break;
	case 0xB48B19:
		cid = "Apple, Inc.";
		break;
	case 0xE49A79:
		cid = "Apple, Inc.";
		break;
	case 0x406C8F:
		cid = "Apple, Inc.";
		break;
	case 0x00C610:
		cid = "Apple, Inc.";
		break;
	case 0x70DEE2:
		cid = "Apple, Inc.";
		break;
	case 0x182032:
		cid = "Apple, Inc.";
		break;
	case 0x6CC26B:
		cid = "Apple, Inc.";
		break;
	case 0x1040F3:
		cid = "Apple, Inc.";
		break;
	case 0x001D4F:
		cid = "Apple, Inc.";
		break;
	case 0x001E52:
		cid = "Apple, Inc.";
		break;
	case 0x001F5B:
		cid = "Apple, Inc.";
		break;
	case 0x001FF3:
		cid = "Apple, Inc.";
		break;
	case 0x0021E9:
		cid = "Apple, Inc.";
		break;
	case 0x00236C:
		cid = "Apple, Inc.";
		break;
	case 0x002500:
		cid = "Apple, Inc.";
		break;
	case 0x60FB42:
		cid = "Apple, Inc.";
		break;
	case 0xF81EDF:
		cid = "Apple, Inc.";
		break;
	case 0x90840D:
		cid = "Apple, Inc.";
		break;
	case 0xD8A25E:
		cid = "Apple, Inc.";
		break;
	case 0xC8BCC8:
		cid = "Apple, Inc.";
		break;
	case 0x28E7CF:
		cid = "Apple, Inc.";
		break;
	case 0xD89E3F:
		cid = "Apple, Inc.";
		break;
	case 0x040CCE:
		cid = "Apple, Inc.";
		break;
	case 0xA4D1D2:
		cid = "Apple, Inc.";
		break;
	case 0x7CFADF:
		cid = "Apple, Inc.";
		break;
	case 0x101C0C:
		cid = "Apple, Inc.";
		break;
	case 0x001124:
		cid = "Apple, Inc.";
		break;
	case 0x80C7C5:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0xFCB7F0:
		cid = "Idaho National Laboratory";
		break;
	case 0xE46059:
		cid = "Pingtek Co., Ltd.";
		break;
	case 0x6C709F:
		cid = "Apple, Inc.";
		break;
	case 0x0C3E9F:
		cid = "Apple, Inc.";
		break;
	case 0x34E2FD:
		cid = "Apple, Inc.";
		break;
	case 0x609217:
		cid = "Apple, Inc.";
		break;
	case 0x8863DF:
		cid = "Apple, Inc.";
		break;
	case 0x80E650:
		cid = "Apple, Inc.";
		break;
	case 0x006171:
		cid = "Apple, Inc.";
		break;
	case 0x90FD61:
		cid = "Apple, Inc.";
		break;
	case 0x5C97F3:
		cid = "Apple, Inc.";
		break;
	case 0x6C4008:
		cid = "Apple, Inc.";
		break;
	case 0x24A074:
		cid = "Apple, Inc.";
		break;
	case 0xF02475:
		cid = "Apple, Inc.";
		break;
	case 0x20A2E4:
		cid = "Apple, Inc.";
		break;
	case 0x5CF5DA:
		cid = "Apple, Inc.";
		break;
	case 0x649ABE:
		cid = "Apple, Inc.";
		break;
	case 0x94E96A:
		cid = "Apple, Inc.";
		break;
	case 0xAC293A:
		cid = "Apple, Inc.";
		break;
	case 0x10417F:
		cid = "Apple, Inc.";
		break;
	case 0xB844D9:
		cid = "Apple, Inc.";
		break;
	case 0xDC2B2A:
		cid = "Apple, Inc.";
		break;
	case 0x14205E:
		cid = "Apple, Inc.";
		break;
	case 0x5C1DD9:
		cid = "Apple, Inc.";
		break;
	case 0x18F1D8:
		cid = "Apple, Inc.";
		break;
	case 0xF86FC1:
		cid = "Apple, Inc.";
		break;
	case 0xF099B6:
		cid = "Apple, Inc.";
		break;
	case 0x907240:
		cid = "Apple, Inc.";
		break;
	case 0x0C4DE9:
		cid = "Apple, Inc.";
		break;
	case 0xD89695:
		cid = "Apple, Inc.";
		break;
	case 0x0C3021:
		cid = "Apple, Inc.";
		break;
	case 0xF0F61C:
		cid = "Apple, Inc.";
		break;
	case 0xB03495:
		cid = "Apple, Inc.";
		break;
	case 0x848E0C:
		cid = "Apple, Inc.";
		break;
	case 0x949426:
		cid = "Apple, Inc.";
		break;
	case 0xE0F5C6:
		cid = "Apple, Inc.";
		break;
	case 0x28E14C:
		cid = "Apple, Inc.";
		break;
	case 0x54E43A:
		cid = "Apple, Inc.";
		break;
	case 0xC8E0EB:
		cid = "Apple, Inc.";
		break;
	case 0xA88808:
		cid = "Apple, Inc.";
		break;
	case 0x444C0C:
		cid = "Apple, Inc.";
		break;
	case 0x84FCFE:
		cid = "Apple, Inc.";
		break;
	case 0xE48B7F:
		cid = "Apple, Inc.";
		break;
	case 0x5C969D:
		cid = "Apple, Inc.";
		break;
	case 0xA8FAD8:
		cid = "Apple, Inc.";
		break;
	case 0x7014A6:
		cid = "Apple, Inc.";
		break;
	case 0xA8667F:
		cid = "Apple, Inc.";
		break;
	case 0xD02598:
		cid = "Apple, Inc.";
		break;
	case 0xCC29F5:
		cid = "Apple, Inc.";
		break;
	case 0xDCD3A2:
		cid = "Apple, Inc.";
		break;
	case 0x40FC89:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x002493:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xE46449:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x745612:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x74EAE8:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xA811FC:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x044E5A:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x94E8C5:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xF8A097:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xB0DAF9:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x18B81F:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xBC2E48:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x5819F8:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x2C9569:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x509551:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x240A63:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001E8D:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x00230B:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001B52:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0023ED:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x002395:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0022B4:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x002136:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0024C1:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x3C754A:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xA47AA4:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001AAD:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x00195E:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001404:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001BDD:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0023A2:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xBC644B:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x347A60:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x84E058:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x003676:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x707E43:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x1C1448:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001225:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x00128A:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0003E0:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x70C833:
		cid = "Wirepas Oy";
		break;
	case 0xE8FAF7:
		cid = "Guangdong Uniteddata Holding Group Co., Ltd.";
		break;
	case 0x9487E0:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0xC08135:
		cid = "Ningbo Forfan technology Co., LTD";
		break;
	case 0xB46BFC:
		cid = "Intel Corporate";
		break;
	case 0x0050C7:
		cid = "Private";
		break;
	case 0x001477:
		cid = "Trilliant";
		break;
	case 0x28EF01:
		cid = "Private";
		break;
	case 0xF85C4D:
		cid = "Nokia";
		break;
	case 0xF82DC0:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xA85B6C:
		cid = "Robert Bosch Gmbh, CM-CI2";
		break;
	case 0x4CEDFB:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x585FF6:
		cid = "zte corporation";
		break;
	case 0xA8E552:
		cid = "JUWEL Aquarium AG & Co. KG";
		break;
	case 0x746BAB:
		cid = "GUANGDONG ENOK COMMUNICATION CO., LTD";
		break;
	case 0x08C5E1:
		cid = "SAMSUNG ELECTRO-MECHANICS(THAILAND)";
		break;
	case 0x203DBD:
		cid = "LG Innotek";
		break;
	case 0x00111E:
		cid = "ETHERNET Powerlink Standarization Group (EPSG)";
		break;
	case 0x00409D:
		cid = "DigiBoard";
		break;
	case 0x001472:
		cid = "China Broadband Wireless IP Standard group(ChinaBWIPS)";
		break;
	case 0xD82477:
		cid = "Universal Electric Corporation";
		break;
	case 0x4006A0:
		cid = "Texas Instruments";
		break;
	case 0x802994:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0xE0885D:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0x4432C8:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0x80B234:
		cid = "Technicolor CH USA Inc.";
		break;
	case 0x386E88:
		cid = "zte corporation";
		break;
	case 0xBCC31B:
		cid = "Kygo Life AS";
		break;
	case 0xFCD6BD:
		cid = "Robert Bosch GmbH";
		break;
	case 0x782D7E:
		cid = "TRENDnet, Inc.";
		break;
	case 0x28AD3E:
		cid = "Shenzhen TONG BO WEI Technology CO.,LTD";
		break;
	case 0xB06EBF:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x48BA4E:
		cid = "Hewlett Packard";
		break;
	case 0xFC65DE:
		cid = "Amazon Technologies Inc.";
		break;
	case 0xF092B4:
		cid = "SICHUAN TIANYI COMHEART TELECOMCO., LTD";
		break;
	case 0x707D95:
		cid = "Shenzhen City LinwlanTechnology Co. Ltd.";
		break;
	case 0x28D93E:
		cid = "Telecor Inc.";
		break;
	case 0x8C0F83:
		cid = "Angie Hospitality LLC";
		break;
	case 0x0050FC:
		cid = "Edimax Technology Co. Ltd.";
		break;
	case 0x7483EF:
		cid = "Arista Networks";
		break;
	case 0x001C73:
		cid = "Arista Networks";
		break;
	case 0x38AD8E:
		cid = "New H3C Technologies Co., Ltd";
		break;
	case 0x001248:
		cid = "Dell EMC";
		break;
	case 0x000144:
		cid = "Dell EMC";
		break;
	case 0x00BF61:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x309FFB:
		cid = "Ardomus Networks Corporation";
		break;
	case 0xE4BD4B:
		cid = "zte corporation";
		break;
	case 0x6C5697:
		cid = "Amazon Technologies Inc.";
		break;
	case 0x3CA581:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0xF4EAB5:
		cid = "Aerohive Networks Inc.";
		break;
	case 0xF82055:
		cid = "Green Information System";
		break;
	case 0x785C28:
		cid = "Prime Motion Inc.";
		break;
	case 0x944996:
		cid = "WiSilica Inc";
		break;
	case 0x0026A8:
		cid = "DAEHAP HYPER-TECH";
		break;
	case 0xF87B20:
		cid = "Cisco Systems, Inc";
		break;
	case 0xF81D0F:
		cid = "Hitron Technologies. Inc";
		break;
	case 0x30FB94:
		cid = "Shanghai Fangzhiwei Information Technology CO.,Ltd.";
		break;
	case 0x08BA22:
		cid = "Swaive Corporation";
		break;
	case 0xF80CF3:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x30766F:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x8C3AE3:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x942A3F:
		cid = "Diversey Inc";
		break;
	case 0x78F882:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x0C6111:
		cid = "Anda Technologies SAC";
		break;
	case 0xB8F74A:
		cid = "RCNTEC";
		break;
	case 0xC8D12A:
		cid = "Comtrend Corporation";
		break;
	case 0xB4F1DA:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0x0021FB:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0xD013FD:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0xA8B86E:
		cid = "LG Electronics (Mobile Communications)";
		break;
	case 0xDC4F22:
		cid = "Espressif Inc.";
		break;
	case 0x342AF1:
		cid = "Texas Instruments";
		break;
	case 0x70E56E:
		cid = "Texas Instruments";
		break;
	case 0xF085C1:
		cid = "SHENZHEN RF-LINK TECHNOLOGY CO.,LTD.";
		break;
	case 0xC8DEC9:
		cid = "Coriant";
		break;
	case 0x380E4D:
		cid = "Cisco Systems, Inc";
		break;
	case 0xFC9DD8:
		cid = "Beijing TongTongYiLian Science and Technology Ltd.";
		break;
	case 0x04B167:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x38ADBE:
		cid = "New H3C Technologies Co., Ltd";
		break;
	case 0x207852:
		cid = "Nokia";
		break;
	case 0xCC5D4E:
		cid = "Zyxel Communications Corporation";
		break;
	case 0x404A03:
		cid = "Zyxel Communications Corporation";
		break;
	case 0x001349:
		cid = "Zyxel Communications Corporation";
		break;
	case 0x1C740D:
		cid = "Zyxel Communications Corporation";
		break;
	case 0xA0E4CB:
		cid = "Zyxel Communications Corporation";
		break;
	case 0x5C6A80:
		cid = "Zyxel Communications Corporation";
		break;
	case 0x5CE28C:
		cid = "Zyxel Communications Corporation";
		break;
	case 0xA8EEC6:
		cid = "Muuselabs NV/SA";
		break;
	case 0xA09DC1:
		cid = "China Dragon Technology Limited";
		break;
	case 0x38437D:
		cid = "Compal Broadband Networks, Inc.";
		break;
	case 0x5C86C1:
		cid = "DONGGUAN SOLUM ELECTRONICS CO.,LTD";
		break;
	case 0x6CDD30:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00806C:
		cid = "Secure Systems & Services";
		break;
	case 0x000261:
		cid = "Tilgin AB";
		break;
	case 0xACE2D3:
		cid = "Hewlett Packard";
		break;
	case 0x282FC2:
		cid = "Automotive Data Solutions";
		break;
	case 0x001D38:
		cid = "Seagate Technology";
		break;
	case 0x683E02:
		cid = "SIEMENS AG, Digital Factory, Motion Control System";
		break;
	case 0x34E380:
		cid = "Genexis B.V.";
		break;
	case 0x2CB21A:
		cid = "Phicomm (Shanghai) Co., Ltd.";
		break;
	case 0xCC81DA:
		cid = "Phicomm (Shanghai) Co., Ltd.";
		break;
	case 0xB80716:
		cid = "vivo Mobile Communication Co., Ltd.";
		break;
	case 0xC8DF84:
		cid = "Texas Instruments";
		break;
	case 0x5C0E8B:
		cid = "Extreme Networks, Inc.";
		break;
	case 0xB4C799:
		cid = "Extreme Networks, Inc.";
		break;
	case 0x7467F7:
		cid = "Extreme Networks, Inc.";
		break;
	case 0x980074:
		cid = "Raisecom Technology CO., LTD";
		break;
	case 0x18C19D:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0x00E02B:
		cid = "Extreme Networks, Inc.";
		break;
	case 0xA486AE:
		cid = "Quectel Wireless Solutions";
		break;
	case 0x702605:
		cid = "SONY Visual Products Inc.";
		break;
	case 0x5C5F67:
		cid = "Intel Corporate";
		break;
	case 0x7C7635:
		cid = "Intel Corporate";
		break;
	case 0xDC48B2:
		cid = "Baraja Pty. Ltd.";
		break;
	case 0x000123:
		cid = "Schneider Electric Japan Holdings Ltd.";
		break;
	case 0xD86375:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0xDCBFE9:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x2C37C5:
		cid = "Qingdao Haier Intelligent Home Appliance Technology Co.,Ltd";
		break;
	case 0x7495EC:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x185282:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x18D225:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x0402CA:
		cid = "Shenzhen Vtsonic Co.,ltd";
		break;
	case 0x306A85:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0xE4F14C:
		cid = "Private";
		break;
	case 0x341A35:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x6CA858:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x74CC39:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0xFCF647:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x1088CE:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0xBC9889:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0xE42F26:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x344B3D:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x70B921:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x74E19A:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x948DEF:
		cid = "Oetiker Schweiz AG";
		break;
	case 0x74721E:
		cid = "Edison Labs Inc.";
		break;
	case 0xA8367A:
		cid = "frogblue TECHNOLOGY GmbH";
		break;
	case 0x144E34:
		cid = "Remote Solution";
		break;
	case 0xEC65CC:
		cid = "Panasonic Automotive Systems Company of America";
		break;
	case 0xDC4EF4:
		cid = "Shenzhen MTN Electronics CO., Ltd";
		break;
	case 0x40CD7A:
		cid = "Qingdao Hisense Communications Co.,Ltd.";
		break;
	case 0x7CA177:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xE40EEE:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x2047DA:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x101D51:
		cid = "8Mesh Networks Limited";
		break;
	case 0x8035C1:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0x78B6EC:
		cid = "Scuf Gaming International LLC";
		break;
	case 0x0025D4:
		cid = "General Dynamics Mission Systems";
		break;
	case 0xD076E7:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xDC2919:
		cid = "AltoBeam (Xiamen) Technology Ltd, Co.";
		break;
	case 0x00583F:
		cid = "PC Aquarius";
		break;
	case 0xF09CD7:
		cid = "Guangzhou Blue Cheetah Intelligent Technology Co., Ltd.";
		break;
	case 0x00200E:
		cid = "NSSLGlobal Technologies AS";
		break;
	case 0xE0383F:
		cid = "zte corporation";
		break;
	case 0x00250C:
		cid = "Senet Inc";
		break;
	case 0xDC330D:
		cid = "QING DAO HAIER TELECOM CO.,LTD.";
		break;
	case 0xE83EFC:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xE8892C:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x001DD3:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x0015D1:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x3CDFA9:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x8C09F4:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x083E0C:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x446AB7:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xD404CD:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x105611:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x2C9924:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x6455B1:
		cid = "ARRIS Group, Inc.";
		break;
	case 0xC005C2:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x203D66:
		cid = "ARRIS Group, Inc.";
		break;
	case 0x40F04E:
		cid = "Integrated Device Technology (Malaysia) Sdn. Bhd.";
		break;
	case 0x58DB15:
		cid = "TECNO MOBILE LIMITED";
		break;
	case 0x4466FC:
		cid = "GUANGDONG OPPO MOBILE TELECOMMUNICATIONS CORP.,LTD";
		break;
	case 0x3835FB:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x0000A8:
		cid = "Stratus Technologies";
		break;
	case 0x0004FC:
		cid = "Stratus Technologies";
		break;
	case 0x00CBB4:
		cid = "SHENZHEN ATEKO PHOTOELECTRICITY CO.,LTD";
		break;
	case 0x7079B3:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0CB34F:
		cid = "Shenzhen Xiaoqi Intelligent Technology Co., Ltd.";
		break;
	case 0xF04CD5:
		cid = "Maxlinear, Inc";
		break;
	case 0xBC9911:
		cid = "Zyxel Communications Corporation";
		break;
	case 0x280245:
		cid = "Konze System Technology Co.,Ltd.";
		break;
	case 0x8C1CDA:
		cid = "IEEE Registration Authority";
		break;
	case 0xE8D099:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0xD0B214:
		cid = "PoeWit Inc";
		break;
	case 0x0847D0:
		cid = "Nokia Shanghai Bell Co. Ltd.�?";
		break;
	case 0x1869DA:
		cid = "China Mobile Group Device Co.,Ltd.";
		break;
	case 0x60D21C:
		cid = "Sunnovo International Limited";
		break;
	case 0xA492CB:
		cid = "Nokia";
		break;
	case 0xDCB4AC:
		cid = "FLEXTRONICS MANUFACTURING(ZHUHAI)CO.,LTD.";
		break;
	case 0x5CCD7C:
		cid = "MEIZU Technology Co.,Ltd.";
		break;
	case 0xA87D12:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xC0F4E6:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x2C4835:
		cid = "IEEE Registration Authority";
		break;
	case 0xD460E3:
		cid = "Sercomm Corporation.";
		break;
	case 0x00C002:
		cid = "Sercomm Corporation.";
		break;
	case 0xE06066:
		cid = "Sercomm Corporation.";
		break;
	case 0xA41566:
		cid = "WEIFANG GOERTEK ELECTRONICS CO.,LTD";
		break;
	case 0xFCA621:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x60D02C:
		cid = "Ruckus Wireless";
		break;
	case 0x8CF228:
		cid = "MERCURY COMMUNICATION TECHNOLOGIES CO.,LTD.";
		break;
	case 0x0080B6:
		cid = "Mercury Systems �?Trusted Mission Solutions, Inc.";
		break;
	case 0xC8778B:
		cid = "Mercury Systems �?Trusted Mission Solutions, Inc.";
		break;
	case 0x80B32A:
		cid = "UK Grid Solutions Ltd";
		break;
	case 0x0009DF:
		cid = "Vestel Elektronik San ve Tic. A.Ş.";
		break;
	case 0xBC5FF6:
		cid = "MERCURY COMMUNICATION TECHNOLOGIES CO.,LTD.";
		break;
	case 0x9C713A:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xB44326:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x24EC51:
		cid = "ADF Technologies Sdn Bhd";
		break;
	case 0x3856B5:
		cid = "Peerbridge Health Inc";
		break;
	case 0x644F42:
		cid = "JETTER CO., Ltd.";
		break;
	case 0x14CAA0:
		cid = "Hu&Co";
		break;
	case 0x30A8DB:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x44746C:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x18002D:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x3017C8:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x0060BD:
		cid = "Enginuity Communications";
		break;
	case 0x0023F1:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x001B59:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x001963:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x001EDC:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x000FDE:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0xD0EFC1:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x646D6C:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x485702:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x000AD9:
		cid = "Sony Mobile Communications Inc";
		break;
	case 0x9CC950:
		cid = "Baumer Holding";
		break;
	case 0xB0027E:
		cid = "MULLER SERVICES";
		break;
	case 0x782F17:
		cid = "Xlab Co.,Ltd";
		break;
	case 0xC4518D:
		cid = "Shenzhen YOUHUA Technology Co., Ltd";
		break;
	case 0x78DA07:
		cid = "Zhejiang Tmall Technology Co., Ltd.";
		break;
	case 0x0013A3:
		cid = "Siemens Home & Office Comm. Devices";
		break;
	case 0xE0735F:
		cid = "NUCOM";
		break;
	case 0xB87C6F:
		cid = "NXP (China) Management Ltd.";
		break;
	case 0x40DC9D:
		cid = "HAJEN";
		break;
	case 0xA0D635:
		cid = "WBS Technology";
		break;
	case 0x84B31B:
		cid = "Kinexon GmbH";
		break;
	case 0x144802:
		cid = "THE YEOLRIM Co.,Ltd.";
		break;
	case 0xEC83D5:
		cid = "GIRD Systems Inc";
		break;
	case 0x0C1C57:
		cid = "Texas Instruments";
		break;
	case 0x0479B7:
		cid = "Texas Instruments";
		break;
	case 0x00235A:
		cid = "COMPAL INFORMATION (KUNSHAN) CO., LTD.";
		break;
	case 0x001B38:
		cid = "COMPAL INFORMATION (KUNSHAN) CO., LTD.";
		break;
	case 0x00BB60:
		cid = "Intel Corporate";
		break;
	case 0x7C6DA6:
		cid = "Superwave Group LLC";
		break;
	case 0xA4E615:
		cid = "SHENZHEN CHUANGWEI-RGB ELECTRONICS CO.,LTD";
		break;
	case 0x08D59D:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0xAC6417:
		cid = "Siemens AG";
		break;
	case 0x5C2623:
		cid = "WaveLynx Technologies Corporation";
		break;
	case 0x0020B5:
		cid = "YASKAWA ELECTRIC CORPORATION";
		break;
	case 0x30D16B:
		cid = "Liteon Technology Corporation";
		break;
	case 0x0CCB85:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0x0C9D92:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x80A796:
		cid = "Neurotek LLC";
		break;
	case 0x001B84:
		cid = "Scan Engineering Telecom";
		break;
	case 0x0C96E6:
		cid = "Cloud Network Technology (Samoa) Limited";
		break;
	case 0x8835C1:
		cid = "OI ELECTRIC CO.,LTD";
		break;
	case 0xBCF2AF:
		cid = "devolo AG";
		break;
	case 0xA4D990:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x5C63C9:
		cid = "Intellithings Ltd.";
		break;
	case 0xDCF719:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001E80:
		cid = "Icotera A/S";
		break;
	case 0x803AF4:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x48A0F8:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0x94A3CA:
		cid = "KonnectONE, LLC";
		break;
	case 0xE00EE1:
		cid = "We Corporation Inc.";
		break;
	case 0x342CC4:
		cid = "Compal Broadband Networks, Inc.";
		break;
	case 0x48A472:
		cid = "Intel Corporate";
		break;
	case 0xF85E3C:
		cid = "SHENZHEN ZHIBOTONG ELECTRONICS CO.,LTD";
		break;
	case 0x7C03AB:
		cid = "Xiaomi Communications Co Ltd";
		break;
	case 0xC4985C:
		cid = "Hui Zhou Gaoshengda Technology Co.,LTD";
		break;
	case 0xE43493:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x342912:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xB08BCF:
		cid = "Cisco Systems, Inc";
		break;
	case 0x34E5EC:
		cid = "Palo Alto Networks";
		break;
	case 0x4422F1:
		cid = "S.FAC, INC";
		break;
	case 0x18AC9E:
		cid = "ITEL MOBILE LIMITED";
		break;
	case 0xA02833:
		cid = "IEEE Registration Authority";
		break;
	case 0x949B2C:
		cid = "Extreme Networks, Inc.";
		break;
	case 0x7CD30A:
		cid = "INVENTEC CORPORATION";
		break;
	case 0x001AC5:
		cid = "Keysight Technologies, Inc.";
		break;
	case 0x00E05C:
		cid = "PHC Corporation";
		break;
	case 0x006097:
		cid = "3COM";
		break;
	case 0x0050DA:
		cid = "3COM";
		break;
	case 0x00104B:
		cid = "3COM";
		break;
	case 0x006008:
		cid = "3COM";
		break;
	case 0x00A024:
		cid = "3COM";
		break;
	case 0x00608C:
		cid = "3COM";
		break;
	case 0x743400:
		cid = "MTG Co., Ltd.";
		break;
	case 0x20D80B:
		cid = "Juniper Networks";
		break;
	case 0x6035C0:
		cid = "SFR";
		break;
	case 0x0C7C28:
		cid = "Nokia";
		break;
	case 0xFC61E9:
		cid = "Fiberhome Telecommunication Technologies Co.,LTD";
		break;
	case 0xD003DF:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x6CC374:
		cid = "Texas Instruments";
		break;
	case 0x40C81F:
		cid = "Shenzhen Xinguodu Technology Co., Ltd.";
		break;
	case 0x24FCE5:
		cid = "Samsung Electronics Co.,Ltd";
		break;
	case 0x4C1B86:
		cid = "Arcadyan Corporation";
		break;
	case 0x185680:
		cid = "Intel Corporate";
		break;
	case 0x0C7512:
		cid = "Shenzhen Kunlun TongTai Technology  Co.,Ltd.";
		break;
	case 0x20AD56:
		cid = "Continental Automotive Systems Inc.";
		break;
	case 0x1838AE:
		cid = "CONSPIN SOLUTION";
		break;
	case 0x00258B:
		cid = "Mellanox Technologies, Inc.";
		break;
	case 0x248A07:
		cid = "Mellanox Technologies, Inc.";
		break;
	case 0xEC0D9A:
		cid = "Mellanox Technologies, Inc.";
		break;
	case 0x506B4B:
		cid = "Mellanox Technologies, Inc.";
		break;
	case 0xD86CE9:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x3C81D8:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x2CE412:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x181E78:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x0037B7:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x0014BF:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x8C579B:
		cid = "Wistron Neweb Corporation";
		break;
	case 0xB436A9:
		cid = "Fibocom Wireless Inc.";
		break;
	case 0x6416F0:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x48DB50:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x2400BA:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x3CBB73:
		cid = "Shenzhen Xinguodu Technology Co., Ltd.";
		break;
	case 0x3CCF5B:
		cid = "ICOMM HK LIMITED";
		break;
	case 0xF40304:
		cid = "Google, Inc.";
		break;
	case 0x78ACC0:
		cid = "Hewlett Packard";
		break;
	case 0x3C9066:
		cid = "SmartRG, Inc.";
		break;
	case 0x00195B:
		cid = "D-Link Corporation";
		break;
	case 0x000D88:
		cid = "D-Link Corporation";
		break;
	case 0x001346:
		cid = "D-Link Corporation";
		break;
	case 0x205532:
		cid = "Gotech International Technology Limited";
		break;
	case 0x002401:
		cid = "D-Link Corporation";
		break;
	case 0x1CAFF7:
		cid = "D-Link International";
		break;
	case 0xB8A386:
		cid = "D-Link International";
		break;
	case 0xC8D3A3:
		cid = "D-Link International";
		break;
	case 0x4419B6:
		cid = "Hangzhou Hikvision Digital Technology Co.,Ltd.";
		break;
	case 0xC056E3:
		cid = "Hangzhou Hikvision Digital Technology Co.,Ltd.";
		break;
	case 0x9CEFD5:
		cid = "Panda Wireless, Inc.";
		break;
	case 0xC02C7A:
		cid = "Shenzhen Horn Audio Co.,Ltd.";
		break;
	case 0x88B8D0:
		cid = "Dongguan Koppo Electronic Co.,Ltd";
		break;
	case 0x38E7D8:
		cid = "HTC Corporation";
		break;
	case 0xD8B377:
		cid = "HTC Corporation";
		break;
	case 0xB4CEF6:
		cid = "HTC Corporation";
		break;
	case 0xD40B1A:
		cid = "HTC Corporation";
		break;
	case 0xA08D16:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x601888:
		cid = "zte corporation";
		break;
	case 0x8002DF:
		cid = "ORA Inc.";
		break;
	case 0xD8FC38:
		cid = "Giantec Semiconductor Inc";
		break;
	case 0x2C6798:
		cid = "InTalTech Ltd.";
		break;
	case 0xD0BF9C:
		cid = "Hewlett Packard";
		break;
	case 0xB05ADA:
		cid = "Hewlett Packard";
		break;
	case 0x001083:
		cid = "Hewlett Packard";
		break;
	case 0x0001E6:
		cid = "Hewlett Packard";
		break;
	case 0xC44044:
		cid = "RackTop Systems Inc.";
		break;
	case 0x3898D8:
		cid = "MERITECH CO.,LTD";
		break;
	case 0x000CF1:
		cid = "Intel Corporation";
		break;
	case 0x000E0C:
		cid = "Intel Corporation";
		break;
	case 0xBC0F64:
		cid = "Intel Corporate";
		break;
	case 0x6CA100:
		cid = "Intel Corporate";
		break;
	case 0x94659C:
		cid = "Intel Corporate";
		break;
	case 0x1002B5:
		cid = "Intel Corporate";
		break;
	case 0x441EA1:
		cid = "Hewlett Packard";
		break;
	case 0xD8D385:
		cid = "Hewlett Packard";
		break;
	case 0x18A905:
		cid = "Hewlett Packard";
		break;
	case 0x00237D:
		cid = "Hewlett Packard";
		break;
	case 0x002655:
		cid = "Hewlett Packard";
		break;
	case 0x001560:
		cid = "Hewlett Packard";
		break;
	case 0x288023:
		cid = "Hewlett Packard";
		break;
	case 0x645106:
		cid = "Hewlett Packard";
		break;
	case 0x5CB901:
		cid = "Hewlett Packard";
		break;
	case 0xDC4A3E:
		cid = "Hewlett Packard";
		break;
	case 0x2C59E5:
		cid = "Hewlett Packard";
		break;
	case 0x9CB654:
		cid = "Hewlett Packard";
		break;
	case 0x38EAA7:
		cid = "Hewlett Packard";
		break;
	case 0xE83935:
		cid = "Hewlett Packard";
		break;
	case 0x08EB74:
		cid = "HUMAX Co., Ltd.";
		break;
	case 0x6CB56B:
		cid = "HUMAX Co., Ltd.";
		break;
	case 0x940937:
		cid = "HUMAX Co., Ltd.";
		break;
	case 0x403DEC:
		cid = "HUMAX Co., Ltd.";
		break;
	case 0xE84DD0:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x140467:
		cid = "SNK Technologies Co.,Ltd.";
		break;
	case 0xEC5F23:
		cid = "Qinghai Kimascend Electronics Technology Co. Ltd.";
		break;
	case 0x047D50:
		cid = "Shenzhen Kang Ying Technology Co.Ltd.";
		break;
	case 0x54EFFE:
		cid = "Fullpower Technologies, Inc.";
		break;
	case 0xEC52DC:
		cid = "WORLD MEDIA AND TECHNOLOGY Corp.";
		break;
	case 0x240995:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x247F3C:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x1C8E5C:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x94772B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xF4E3FB:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x04021F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x0034FE:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xD02DB3:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x086361:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xF80113:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x70723C:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x5C7D5E:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x4C8BEF:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x20F3A3:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xACE87B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x688F84:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x4CAC0A:
		cid = "zte corporation";
		break;
	case 0x0026ED:
		cid = "zte corporation";
		break;
	case 0x002293:
		cid = "zte corporation";
		break;
	case 0xFCD733:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x10A5D0:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0xD4C9B2:
		cid = "Quanergy Systems Inc";
		break;
	case 0xE4CE02:
		cid = "WyreStorm Technologies Ltd";
		break;
	case 0x2002AF:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x0026E8:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0xECCB30:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x786A89:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x2008ED:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x509F27:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xCC96A0:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x54A51B:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xF4C714:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x286ED4:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x04F938:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xFC48EF:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x80FB06:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xD4B110:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xCC53B5:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x002127:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x54E6FC:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xD85D4C:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xF81A67:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xF0F336:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x44B32D:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0xF07816:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001310:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x0023BE:
		cid = "Cisco SPVTG";
		break;
	case 0x54D46F:
		cid = "Cisco SPVTG";
		break;
	case 0x24374C:
		cid = "Cisco SPVTG";
		break;
	case 0xBCC810:
		cid = "Cisco SPVTG";
		break;
	case 0x484487:
		cid = "Cisco SPVTG";
		break;
	case 0x445829:
		cid = "Cisco SPVTG";
		break;
	case 0x481D70:
		cid = "Cisco SPVTG";
		break;
	case 0x00214F:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x00E036:
		cid = "PIONEER CORPORATION";
		break;
	case 0xE0AE5E:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x34C731:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x60380E:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x64D4BD:
		cid = "ALPS ELECTRIC CO.,LTD.";
		break;
	case 0x00000C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x004096:
		cid = "Cisco Systems, Inc";
		break;
	case 0x30F70D:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB07D47:
		cid = "Cisco Systems, Inc";
		break;
	case 0xD8B190:
		cid = "Cisco Systems, Inc";
		break;
	case 0xF0B2E5:
		cid = "Cisco Systems, Inc";
		break;
	case 0x188B9D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x38ED18:
		cid = "Cisco Systems, Inc";
		break;
	case 0xECBD1D:
		cid = "Cisco Systems, Inc";
		break;
	case 0xDCCEC1:
		cid = "Cisco Systems, Inc";
		break;
	case 0x84B261:
		cid = "Cisco Systems, Inc";
		break;
	case 0x70E422:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0050BD:
		cid = "Cisco Systems, Inc";
		break;
	case 0x009086:
		cid = "Cisco Systems, Inc";
		break;
	case 0x005054:
		cid = "Cisco Systems, Inc";
		break;
	case 0x3C0E23:
		cid = "Cisco Systems, Inc";
		break;
	case 0x90E6BA:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0xBCAEC5:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x10BF48:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0xA80C0D:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB83861:
		cid = "Cisco Systems, Inc";
		break;
	case 0x6C9989:
		cid = "Cisco Systems, Inc";
		break;
	case 0x580A20:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0050D1:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00500B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x005073:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00603E:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00E034:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001868:
		cid = "Cisco SPVTG";
		break;
	case 0x887556:
		cid = "Cisco Systems, Inc";
		break;
	case 0x60735C:
		cid = "Cisco Systems, Inc";
		break;
	case 0xFC9947:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00E16D:
		cid = "Cisco Systems, Inc";
		break;
	case 0xF8C288:
		cid = "Cisco Systems, Inc";
		break;
	case 0xE0ACF1:
		cid = "Cisco Systems, Inc";
		break;
	case 0xFC5B39:
		cid = "Cisco Systems, Inc";
		break;
	case 0x346F90:
		cid = "Cisco Systems, Inc";
		break;
	case 0xE0D173:
		cid = "Cisco Systems, Inc";
		break;
	case 0x74A02F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x547C69:
		cid = "Cisco Systems, Inc";
		break;
	case 0x689CE2:
		cid = "Cisco Systems, Inc";
		break;
	case 0x40A6E8:
		cid = "Cisco Systems, Inc";
		break;
	case 0x6C2056:
		cid = "Cisco Systems, Inc";
		break;
	case 0xBC1665:
		cid = "Cisco Systems, Inc";
		break;
	case 0x44ADD9:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0C2724:
		cid = "Cisco Systems, Inc";
		break;
	case 0x6C416A:
		cid = "Cisco Systems, Inc";
		break;
	case 0xF872EA:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0C6803:
		cid = "Cisco Systems, Inc";
		break;
	case 0x2857BE:
		cid = "Hangzhou Hikvision Digital Technology Co.,Ltd.";
		break;
	case 0x50D59C:
		cid = "Thai Habel Industrial Co., Ltd.";
		break;
	case 0xFCA386:
		cid = "SHENZHEN CHUANGWEI-RGB ELECTRONICS CO.,LTD";
		break;
	case 0xF0F249:
		cid = "Hitron Technologies. Inc";
		break;
	case 0xCCE0C3:
		cid = "Mangstor, Inc.";
		break;
	case 0x84A423:
		cid = "Sagemcom Broadband SAS";
		break;
	case 0x346987:
		cid = "zte corporation";
		break;
	case 0x58685D:
		cid = "Tempo Australia Pty Ltd";
		break;
	case 0x789C85:
		cid = "August Home, Inc.";
		break;
	case 0xFCCF43:
		cid = "HUIZHOU CITY HUIYANG DISTRICT MEISIQI INDUSTRY DEVELOPMENT CO,.LTD";
		break;
	case 0x5882A8:
		cid = "Microsoft";
		break;
	case 0xB4EF04:
		cid = "DAIHAN Scientific Co., Ltd.";
		break;
	case 0x049645:
		cid = "WUXI SKY CHIP INTERCONNECTION TECHNOLOGY CO.,LTD.";
		break;
	case 0xC8C2C6:
		cid = "Shanghai Airm2m Communication Technology Co., Ltd";
		break;
	case 0xEC64E7:
		cid = "MOCACARE Corporation";
		break;
	case 0xD07C2D:
		cid = "Leie IOT technology Co., Ltd";
		break;
	case 0x40862E:
		cid = "JDM MOBILE INTERNET SOLUTION CO., LTD.";
		break;
	case 0xEC388F:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xBC9C31:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x90C99B:
		cid = "Recore Systems";
		break;
	case 0x5CB559:
		cid = "CNEX Labs";
		break;
	case 0x5CCF7F:
		cid = "Espressif Inc.";
		break;
	case 0x380546:
		cid = "Foctek Photonics, Inc.";
		break;
	case 0x6858C5:
		cid = "ZF TRW Automotive";
		break;
	case 0x044169:
		cid = "GoPro";
		break;
	case 0xACC51B:
		cid = "Zhuhai Pantum Electronics Co., Ltd.";
		break;
	case 0xE80734:
		cid = "Champion Optical Network Engineering, LLC";
		break;
	case 0x6CEBB2:
		cid = "Dongguan Sen DongLv Electronics Co.,Ltd";
		break;
	case 0xA03299:
		cid = "Lenovo (Beijing) Co., Ltd.";
		break;
	case 0xA845CD:
		cid = "Siselectron Technology LTD.";
		break;
	case 0xD0C193:
		cid = "SKYBELL, INC";
		break;
	case 0xE435C8:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xD47208:
		cid = "Bragi GmbH";
		break;
	case 0x489A42:
		cid = "Technomate Ltd";
		break;
	case 0xB49D0B:
		cid = "BQ";
		break;
	case 0x98CB27:
		cid = "Galore Networks Pvt. Ltd.";
		break;
	case 0xCC794A:
		cid = "BLU Products Inc.";
		break;
	case 0x60FD56:
		cid = "WOORISYSTEMS CO., Ltd";
		break;
	case 0x483974:
		cid = "Proware Technologies Co., Ltd.";
		break;
	case 0xE855B4:
		cid = "SAI Technology Inc.";
		break;
	case 0x9CA69D:
		cid = "Whaley Technology Co.Ltd";
		break;
	case 0x342606:
		cid = "CarePredict, Inc.";
		break;
	case 0xB4AE2B:
		cid = "Microsoft";
		break;
	case 0x80EB77:
		cid = "Wistron Corporation";
		break;
	case 0xB88981:
		cid = "Chengdu InnoThings Technology Co., Ltd.";
		break;
	case 0xB4293D:
		cid = "Shenzhen Urovo Technology Co.,Ltd.";
		break;
	case 0x906FA9:
		cid = "NANJING PUTIAN TELECOMMUNICATIONS TECHNOLOGY CO.,LTD.";
		break;
	case 0x14B370:
		cid = "Gigaset Digital Technology (Shenzhen) Co., Ltd.";
		break;
	case 0xFC2FEF:
		cid = "UTT Technologies Co., Ltd.";
		break;
	case 0xEC21E5:
		cid = "Toshiba";
		break;
	case 0x44FDA3:
		cid = "Everysight LTD.";
		break;
	case 0x84D4C8:
		cid = "Widex A/S";
		break;
	case 0x247260:
		cid = "IOTTECH Corp";
		break;
	case 0x44975A:
		cid = "SHENZHEN FAST TECHNOLOGIES CO.,LTD";
		break;
	case 0xF8BF09:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xB4B265:
		cid = "DAEHO I&T";
		break;
	case 0x081FEB:
		cid = "BinCube";
		break;
	case 0x785F4C:
		cid = "Argox Information Co., Ltd.";
		break;
	case 0x5870C6:
		cid = "Shanghai Xiaoyi Technology Co., Ltd.";
		break;
	case 0x803B2A:
		cid = "ABB Xiamen Low Voltage Equipment Co.,Ltd.";
		break;
	case 0xA0A65C:
		cid = "Supercomputing Systems AG";
		break;
	case 0x5CB395:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0xC412F5:
		cid = "D-Link International";
		break;
	case 0x44F436:
		cid = "zte corporation";
		break;
	case 0x349B5B:
		cid = "Maquet GmbH";
		break;
	case 0xE861BE:
		cid = "Melec Inc.";
		break;
	case 0x54B80A:
		cid = "D-Link International";
		break;
	case 0xD8ADDD:
		cid = "Sonavation, Inc.";
		break;
	case 0xC09A71:
		cid = "XIAMEN MEITU MOBILE TECHNOLOGY CO.LTD";
		break;
	case 0x340B40:
		cid = "MIOS ELETTRONICA SRL";
		break;
	case 0xD05C7A:
		cid = "Sartura d.o.o.";
		break;
	case 0x9C37F4:
		cid = "HUAWEI TECHNOLOGIES CO.,LTD";
		break;
	case 0x5CEB68:
		cid = "Cheerstar Technology Co., Ltd";
		break;
	case 0xF46A92:
		cid = "SHENZHEN FAST TECHNOLOGIES CO.,LTD";
		break;
	case 0x14AEDB:
		cid = "VTech Telecommunications Ltd.";
		break;
	case 0xB8C3BF:
		cid = "Henan Chengshi NetWork Technology Co.，Ltd";
		break;
	case 0xC0EE40:
		cid = "Laird Technologies";
		break;
	case 0xF0182B:
		cid = "LG Chem";
		break;
	case 0xCC5FBF:
		cid = "Topwise 3G Communication Co., Ltd.";
		break;
	case 0x14DDA9:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x485D36:
		cid = "Verizon";
		break;
	case 0xEC60E0:
		cid = "AVI-ON LABS";
		break;
	case 0x145A83:
		cid = "Logi-D inc";
		break;
	case 0x4CEEB0:
		cid = "SHC Netzwerktechnik GmbH";
		break;
	case 0x188EF9:
		cid = "G2C Co. Ltd.";
		break;
	case 0xF4E9D4:
		cid = "QLogic Corporation";
		break;
	case 0x1422DB:
		cid = "eero inc.";
		break;
	case 0x0C413E:
		cid = "Microsoft Corporation";
		break;
	case 0x007E56:
		cid = "China Dragon Technology Limited";
		break;
	case 0x086266:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x346C0F:
		cid = "Pramod Telecom Pvt. Ltd";
		break;
	case 0x3C912B:
		cid = "Vexata Inc";
		break;
	case 0x54369B:
		cid = "1Verge Internet Technology (Beijing) Co., Ltd.";
		break;
	case 0xE4FED9:
		cid = "EDMI Europe Ltd";
		break;
	case 0x2852E0:
		cid = "Layon international Electronic & Telecom Co.,Ltd";
		break;
	case 0xE48501:
		cid = "Geberit International AG";
		break;
	case 0x2CAD13:
		cid = "SHENZHEN ZHILU TECHNOLOGY CO.,LTD";
		break;
	case 0x68B983:
		cid = "b-plus GmbH";
		break;
	case 0xBC74D7:
		cid = "HangZhou JuRu Technology CO.,LTD";
		break;
	case 0xE88E60:
		cid = "NSD Corporation";
		break;
	case 0x545146:
		cid = "AMG Systems Ltd.";
		break;
	case 0x84DDB7:
		cid = "Cilag GmbH International";
		break;
	case 0x78EB14:
		cid = "SHENZHEN FAST TECHNOLOGIES CO.,LTD";
		break;
	case 0xD05BA8:
		cid = "zte corporation";
		break;
	case 0x8CE78C:
		cid = "DK Networks";
		break;
	case 0xE4BAD9:
		cid = "360 Fly Inc.";
		break;
	case 0x7C3CB6:
		cid = "Shenzhen Homecare Technology Co.,Ltd.";
		break;
	case 0xBCE767:
		cid = "Quanzhou  TDX Electronics Co., Ltd";
		break;
	case 0x6CA7FA:
		cid = "YOUNGBO ENGINEERING INC.";
		break;
	case 0xD0929E:
		cid = "Microsoft Corporation";
		break;
	case 0xF4032F:
		cid = "Reduxio Systems";
		break;
	case 0x84CFBF:
		cid = "Fairphone";
		break;
	case 0xAC9E17:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0xACC73F:
		cid = "VITSMO CO., LTD.";
		break;
	case 0x18BDAD:
		cid = "L-TECH CORPORATION";
		break;
	case 0x10C07C:
		cid = "Blu-ray Disc Association";
		break;
	case 0xB87879:
		cid = "Roche Diagnostics GmbH";
		break;
	case 0x4480EB:
		cid = "Motorola Mobility LLC, a Lenovo Company";
		break;
	case 0xD06F4A:
		cid = "TOPWELL INTERNATIONAL HOLDINGS LIMITED";
		break;
	case 0xBC54F9:
		cid = "Drogoo Technology Co., Ltd.";
		break;
	case 0x349E34:
		cid = "Evervictory Electronic Co.Ltd";
		break;
	case 0xA0C2DE:
		cid = "Costar Video Systems";
		break;
	case 0x3809A4:
		cid = "Firefly Integrations";
		break;
	case 0x00A509:
		cid = "WigWag Inc.";
		break;
	case 0xA86405:
		cid = "nimbus 9, Inc";
		break;
	case 0x7076FF:
		cid = "KERLINK";
		break;
	case 0x68F0BC:
		cid = "Shenzhen LiWiFi Technology Co., Ltd";
		break;
	case 0xBCD165:
		cid = "Cisco SPVTG";
		break;
	case 0x4CA928:
		cid = "Insensi";
		break;
	case 0x2884FA:
		cid = "SHARP Corporation";
		break;
	case 0x3C1E04:
		cid = "D-Link International";
		break;
	case 0xE0FFF7:
		cid = "Softiron Inc.";
		break;
	case 0xDC60A1:
		cid = "Teledyne DALSA Professional Imaging";
		break;
	case 0x78E980:
		cid = "RainUs Co.,Ltd";
		break;
	case 0x7C8274:
		cid = "Shenzhen Hikeen Technology CO.,LTD";
		break;
	case 0xB40566:
		cid = "SP Best Corporation Co., LTD.";
		break;
	case 0x70AD54:
		cid = "Malvern Instruments Ltd";
		break;
	case 0xDCE026:
		cid = "Patrol Tag, Inc";
		break;
	case 0xEC3C88:
		cid = "MCNEX Co.,Ltd.";
		break;
	case 0xF07959:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0xE08E3C:
		cid = "Aztech Electronics Pte Ltd";
		break;
	case 0x78A351:
		cid = "SHENZHEN ZHIBOTONG ELECTRONICS CO.,LTD";
		break;
	case 0x94E2FD:
		cid = "Boge Kompressoren OTTO Boge GmbH & Co. KG";
		break;
	case 0xE4695A:
		cid = "Dictum Health, Inc.";
		break;
	case 0xD46132:
		cid = "Pro Concept Manufacturer Co.,Ltd.";
		break;
	case 0x54A050:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x841826:
		cid = "Osram GmbH";
		break;
	case 0x14F893:
		cid = "Wuhan FiberHome Digital Technology Co.,Ltd.";
		break;
	case 0x9816EC:
		cid = "IC Intracom";
		break;
	case 0xDCDA4F:
		cid = "GETCK TECHNOLOGY,  INC";
		break;
	case 0x30FAB7:
		cid = "Tunai Creative";
		break;
	case 0x0809B6:
		cid = "Masimo Corp";
		break;
	case 0x14EDE4:
		cid = "Kaiam Corporation";
		break;
	case 0x3438AF:
		cid = "Inlab Software GmbH";
		break;
	case 0x049B9C:
		cid = "Eadingcore  Intelligent Technology Co., Ltd.";
		break;
	case 0x842690:
		cid = "BEIJING THOUGHT SCIENCE CO.,LTD.";
		break;
	case 0xB84FD5:
		cid = "Microsoft Corporation";
		break;
	case 0x587BE9:
		cid = "AirPro Technology India Pvt. Ltd";
		break;
	case 0xFC1D84:
		cid = "Autobase";
		break;
	case 0x4CE933:
		cid = "RailComm, LLC";
		break;
	case 0x6050C1:
		cid = "Kinetek Sports";
		break;
	case 0x003560:
		cid = "Rosen Aviation";
		break;
	case 0xEC59E7:
		cid = "Microsoft Corporation";
		break;
	case 0x08EFAB:
		cid = "SAYME WIRELESS SENSOR NETWORK";
		break;
	case 0xC81B6B:
		cid = "Innova Security";
		break;
	case 0x5C966A:
		cid = "RTNET";
		break;
	case 0x2C5089:
		cid = "Shenzhen Kaixuan Visual Technology Co.,Limited";
		break;
	case 0xEC13B2:
		cid = "Netonix";
		break;
	case 0x74BADB:
		cid = "Longconn Electornics(shenzhen)Co.,Ltd";
		break;
	case 0x4C7403:
		cid = "BQ";
		break;
	case 0x5876C5:
		cid = "DIGI I'S LTD";
		break;
	case 0x00A2F5:
		cid = "Guangzhou Yuanyun Network Technology Co.,Ltd";
		break;
	case 0x70FC8C:
		cid = "OneAccess SA";
		break;
	case 0x902CC7:
		cid = "C-MAX Asia Limited";
		break;
	case 0x188219:
		cid = "Alibaba Cloud Computing Ltd.";
		break;
	case 0xB41780:
		cid = "DTI Group Ltd";
		break;
	case 0xD437D7:
		cid = "zte corporation";
		break;
	case 0xAC3870:
		cid = "Lenovo Mobile Communication Technology Ltd.";
		break;
	case 0x80EACA:
		cid = "Dialog Semiconductor Hellas SA";
		break;
	case 0x4CBC42:
		cid = "Shenzhen Hangsheng Electronics Co.,Ltd.";
		break;
	case 0x987E46:
		cid = "Emizon Networks Limited";
		break;
	case 0x8432EA:
		cid = "ANHUI WANZTEN P&T CO., LTD";
		break;
	case 0x90B686:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x4C6E6E:
		cid = "Comnect Technology CO.,LTD";
		break;
	case 0xF4DD9E:
		cid = "GoPro";
		break;
	case 0x40B3CD:
		cid = "Chiyoda Electronics Co.,Ltd.";
		break;
	case 0x3451AA:
		cid = "JID GLOBAL";
		break;
	case 0x04572F:
		cid = "Sertel Electronics UK Ltd";
		break;
	case 0x08B2A3:
		cid = "Cynny Italia S.r.L.";
		break;
	case 0xD8977C:
		cid = "Grey Innovation";
		break;
	case 0x80AD67:
		cid = "Kasda Networks Inc";
		break;
	case 0x30595B:
		cid = "streamnow AG";
		break;
	case 0xB8AD3E:
		cid = "BLUECOM";
		break;
	case 0x10C37B:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x48D855:
		cid = "Telvent";
		break;
	case 0x284ED7:
		cid = "OutSmart Power Systems, Inc.";
		break;
	case 0x5C5BC2:
		cid = "YIK Corporation";
		break;
	case 0xEC8A4C:
		cid = "zte corporation";
		break;
	case 0x8014A8:
		cid = "Guangzhou V-SOLUTION Electronic Technology Co., Ltd.";
		break;
	case 0x908C63:
		cid = "GZ Weedong Networks Technology Co. , Ltd";
		break;
	case 0xB49EAC:
		cid = "Imagik Int'l Corp";
		break;
	case 0xC8E42F:
		cid = "Technical Research Design and Development";
		break;
	case 0xFC2325:
		cid = "EosTek (Shenzhen) Co., Ltd.";
		break;
	case 0xA81374:
		cid = "Panasonic Corporation AVC Networks Company";
		break;
	case 0x4C83DE:
		cid = "Cisco SPVTG";
		break;
	case 0x5CB6CC:
		cid = "NovaComm Technologies Inc.";
		break;
	case 0xB4AE6F:
		cid = "Circle Reliance, Inc DBA Cranberry Networks";
		break;
	case 0xB89919:
		cid = "7signal Solutions, Inc";
		break;
	case 0x90DA6A:
		cid = "FOCUS H&S Co., Ltd.";
		break;
	case 0xA45DA1:
		cid = "ADB Broadband Italia";
		break;
	case 0xE8EF89:
		cid = "OPMEX Tech.";
		break;
	case 0xF4C447:
		cid = "Coagent International Enterprise Limited";
		break;
	case 0x08DF1F:
		cid = "Bose Corporation";
		break;
	case 0x542AA2:
		cid = "Alpha Networks Inc.";
		break;
	case 0x84948C:
		cid = "Hitron Technologies. Inc";
		break;
	case 0xCCA0E5:
		cid = "DZG Metering GmbH";
		break;
	case 0x3059B7:
		cid = "Microsoft";
		break;
	case 0x0874F6:
		cid = "Winterhalter Gastronom GmbH";
		break;
	case 0xFCC2DE:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x1C1CFD:
		cid = "Dalian Hi-Think Computer Technology, Corp";
		break;
	case 0x7062B8:
		cid = "D-Link International";
		break;
	case 0xB875C0:
		cid = "PayPal, Inc.";
		break;
	case 0xE47FB2:
		cid = "FUJITSU LIMITED";
		break;
	case 0x38262B:
		cid = "UTran Technology";
		break;
	case 0x20ED74:
		cid = "Ability enterprise co.,Ltd.";
		break;
	case 0x7824AF:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x0CAC05:
		cid = "Unitend Technologies Inc.";
		break;
	case 0xB4B859:
		cid = "Texa Spa";
		break;
	case 0x045C8E:
		cid = "gosund GROUP CO.,LTD";
		break;
	case 0x54B753:
		cid = "Hunan Fenghui Yinjia Science And Technology Co.,Ltd";
		break;
	case 0x4826E8:
		cid = "Tek-Air Systems, Inc.";
		break;
	case 0xA012DB:
		cid = "TABUCHI ELECTRIC CO.,LTD";
		break;
	case 0xACB859:
		cid = "Uniband Electronic Corp,";
		break;
	case 0x100F18:
		cid = "Fu Gang Electronic(KunShan)CO.,LTD";
		break;
	case 0xC8D590:
		cid = "FLIGHT DATA SYSTEMS";
		break;
	case 0x709383:
		cid = "Intelligent Optical Network High Tech CO.,LTD.";
		break;
	case 0x6047D4:
		cid = "FORICS Electronic Technology Co., Ltd.";
		break;
	case 0xC09D26:
		cid = "Topicon HK Lmd.";
		break;
	case 0xB061C7:
		cid = "Ericsson-LG Enterprise";
		break;
	case 0xB05706:
		cid = "Vallox Oy";
		break;
	case 0xC8D429:
		cid = "Muehlbauer AG";
		break;
	case 0x20EAC7:
		cid = "SHENZHEN RIOPINE ELECTRONICS CO., LTD";
		break;
	case 0x80618F:
		cid = "Shenzhen sangfei consumer communications co.,ltd";
		break;
	case 0x5CF50D:
		cid = "Institute of microelectronic applications";
		break;
	case 0x10DEE4:
		cid = "automationNEXT GmbH";
		break;
	case 0x444891:
		cid = "HDMI Licensing, LLC";
		break;
	case 0xFC923B:
		cid = "Nokia Corporation";
		break;
	case 0x38F708:
		cid = "National Resource Management, Inc.";
		break;
	case 0xC4C919:
		cid = "Energy Imports Ltd";
		break;
	case 0x88A73C:
		cid = "Ragentek Technology Group";
		break;
	case 0xB0D7C5:
		cid = "Logipix Ltd";
		break;
	case 0xBC1A67:
		cid = "YF Technology Co., Ltd";
		break;
	case 0xB024F3:
		cid = "Progeny Systems";
		break;
	case 0x8C4DB9:
		cid = "Unmonday Ltd";
		break;
	case 0xD87CDD:
		cid = "SANIX INCORPORATED";
		break;
	case 0xF8A2B4:
		cid = "RHEWA-WAAGENFABRIK August Freudewald GmbH &amp;Co. KG";
		break;
	case 0x84FE9E:
		cid = "RTC Industries, Inc.";
		break;
	case 0x403067:
		cid = "Conlog (Pty) Ltd";
		break;
	case 0x98DA92:
		cid = "Vuzix Corporation";
		break;
	case 0x5C2AEF:
		cid = "Open Access Pty Ltd";
		break;
	case 0xE40439:
		cid = "TomTom Software Ltd";
		break;
	case 0x90AE1B:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x441E91:
		cid = "ARVIDA Intelligent Electronics Technology  Co.,Ltd.";
		break;
	case 0x6C14F7:
		cid = "Erhardt+Leimer GmbH";
		break;
	case 0xCC07E4:
		cid = "Lenovo Mobile Communication Technology Ltd.";
		break;
	case 0xB4430D:
		cid = "Broadlink Pty Ltd";
		break;
	case 0xA4BBAF:
		cid = "Lime Instruments";
		break;
	case 0x7CE1FF:
		cid = "Computer Performance, Inc. DBA Digital Loggers, Inc.";
		break;
	case 0xD069D0:
		cid = "Verto Medical Solutions, LLC";
		break;
	case 0xACE069:
		cid = "ISAAC Instruments";
		break;
	case 0xE8EA6A:
		cid = "StarTech.com";
		break;
	case 0xC4E984:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x8059FD:
		cid = "Noviga";
		break;
	case 0x18FF2E:
		cid = "Shenzhen Rui Ying Da Technology Co., Ltd";
		break;
	case 0x1CAB01:
		cid = "Innovolt";
		break;
	case 0x68856A:
		cid = "OuterLink Corporation";
		break;
	case 0x30F42F:
		cid = "ESP";
		break;
	case 0x746A8F:
		cid = "VS Vision Systems GmbH";
		break;
	case 0xB068B6:
		cid = "Hangzhou OYE Technology Co. Ltd";
		break;
	case 0x9C65F9:
		cid = "AcSiP Technology Corp.";
		break;
	case 0x487604:
		cid = "Private";
		break;
	case 0xD057A1:
		cid = "Werma Signaltechnik GmbH & Co. KG";
		break;
	case 0x3C89A6:
		cid = "KAPELSE";
		break;
	case 0x90F1B0:
		cid = "Hangzhou Anheng Info&Tech CO.,LTD";
		break;
	case 0x9C86DA:
		cid = "Phoenix Geophysics Ltd.";
		break;
	case 0x48FEEA:
		cid = "HOMA B.V.";
		break;
	case 0x10DDF4:
		cid = "Maxway Electronics CO.,LTD";
		break;
	case 0x080371:
		cid = "KRG CORPORATE";
		break;
	case 0xACC595:
		cid = "Graphite Systems";
		break;
	case 0x3413A8:
		cid = "Mediplan Limited";
		break;
	case 0x4CD9C4:
		cid = "Magneti Marelli Automotive Electronics (Guangzhou) Co. Ltd";
		break;
	case 0x743ECB:
		cid = "Gentrice tech";
		break;
	case 0x7071B3:
		cid = "Brain Corporation";
		break;
	case 0x208986:
		cid = "zte corporation";
		break;
	case 0x3CD4D6:
		cid = "WirelessWERX, Inc";
		break;
	case 0x64E625:
		cid = "Woxu Wireless Co., Ltd";
		break;
	case 0x7C444C:
		cid = "Entertainment Solutions, S.L.";
		break;
	case 0x501AC5:
		cid = "Microsoft";
		break;
	case 0x609620:
		cid = "Private";
		break;
	case 0xF8572E:
		cid = "Core Brands, LLC";
		break;
	case 0xE0E631:
		cid = "SNB TECHNOLOGIES LIMITED";
		break;
	case 0x20C60D:
		cid = "Shanghai annijie Information technology Co.,LTD";
		break;
	case 0x7C9763:
		cid = "Openmatics s.r.o.";
		break;
	case 0x0444A1:
		cid = "TELECON GALICIA,S.A.";
		break;
	case 0x84569C:
		cid = "Coho Data, Inc.,";
		break;
	case 0x78AE0C:
		cid = "Far South Networks";
		break;
	case 0x38CA97:
		cid = "Contour Design LLC";
		break;
	case 0x84A783:
		cid = "Alcatel Lucent";
		break;
	case 0x1CC11A:
		cid = "Wavetronix";
		break;
	case 0x4CF02E:
		cid = "Vifa Denmark A/S";
		break;
	case 0x3051F8:
		cid = "BYK-Gardner GmbH";
		break;
	case 0xFC19D0:
		cid = "Cloud Vision Networks Technology Co.,Ltd.";
		break;
	case 0x20E791:
		cid = "Siemens Healthcare Diagnostics, Inc";
		break;
	case 0xD4D919:
		cid = "GoPro";
		break;
	case 0xA49F89:
		cid = "Shanghai Rui Rui Communication Technology Co.Ltd.";
		break;
	case 0xD850E6:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0x94103E:
		cid = "Belkin International Inc.";
		break;
	case 0xB4750E:
		cid = "Belkin International Inc.";
		break;
	case 0x346178:
		cid = "The Boeing Company";
		break;
	case 0x187ED5:
		cid = "shenzhen kaism technology Co. Ltd";
		break;
	case 0x841B38:
		cid = "Shenzhen Excelsecu Data Technology Co.,Ltd";
		break;
	case 0xEC2AF0:
		cid = "Ypsomed AG";
		break;
	case 0x044F8B:
		cid = "Adapteva, Inc.";
		break;
	case 0x9CE7BD:
		cid = "Winduskorea co., Ltd";
		break;
	case 0xA0BF50:
		cid = "S.C. ADD-PRODUCTION S.R.L.";
		break;
	case 0x7CB733:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0x705957:
		cid = "Medallion Instrumentation Systems";
		break;
	case 0x6C8366:
		cid = "Nanjing SAC Power Grid Automation Co., Ltd.";
		break;
	case 0x88576D:
		cid = "XTA Electronics Ltd";
		break;
	case 0xF83D4E:
		cid = "Softlink Automation System Co., Ltd";
		break;
	case 0xFCD817:
		cid = "Beijing Hesun Technologies Co.Ltd.";
		break;
	case 0x909F43:
		cid = "Accutron Instruments Inc.";
		break;
	case 0x50C006:
		cid = "Carmanah Signs";
		break;
	case 0x98FB12:
		cid = "Grand Electronics (HK) Ltd";
		break;
	case 0x3C1040:
		cid = "daesung network";
		break;
	case 0xB04545:
		cid = "YACOUB Automation GmbH";
		break;
	case 0x701D7F:
		cid = "Comtech Technology Co., Ltd.";
		break;
	case 0x60DB2A:
		cid = "HNS";
		break;
	case 0x7CBF88:
		cid = "Mobilicom LTD";
		break;
	case 0x90028A:
		cid = "Shenzhen Shidean Legrand Electronic Products Co.,Ltd";
		break;
	case 0x90356E:
		cid = "Vodafone Omnitel N.V.";
		break;
	case 0x3CCA87:
		cid = "Iders Incorporated";
		break;
	case 0x08CA45:
		cid = "Toyou Feiji Electronics Co., Ltd.";
		break;
	case 0x9CA9E4:
		cid = "zte corporation";
		break;
	case 0xE47723:
		cid = "zte corporation";
		break;
	case 0xC098E5:
		cid = "University of Michigan";
		break;
	case 0xB8DF6B:
		cid = "SpotCam Co., Ltd.";
		break;
	case 0x742B62:
		cid = "FUJITSU LIMITED";
		break;
	case 0x58BDF9:
		cid = "Sigrand";
		break;
	case 0x344F3F:
		cid = "IO-Power Technology Co., Ltd.";
		break;
	case 0xC0C687:
		cid = "Cisco SPVTG";
		break;
	case 0x142BD2:
		cid = "Armtel Ltd.";
		break;
	case 0x54A54B:
		cid = "NSC Communications Siberia Ltd";
		break;
	case 0xBC2B6B:
		cid = "Beijing Haier IC Design Co.,Ltd";
		break;
	case 0x642184:
		cid = "Nippon Denki Kagaku Co.,LTD";
		break;
	case 0xEC3E09:
		cid = "PERFORMANCE DESIGNED PRODUCTS, LLC";
		break;
	case 0xEC219F:
		cid = "VidaBox LLC";
		break;
	case 0x98D331:
		cid = "Shenzhen Bolutek Technology Co.,Ltd.";
		break;
	case 0x3C1A57:
		cid = "Cardiopulmonary Corp";
		break;
	case 0x6CF97C:
		cid = "Nanoptix Inc.";
		break;
	case 0x58E02C:
		cid = "Micro Technic A/S";
		break;
	case 0xE481B3:
		cid = "Shenzhen ACT Industrial Co.,Ltd.";
		break;
	case 0xE4F3E3:
		cid = "Shanghai iComhome Co.,Ltd.";
		break;
	case 0x04CF25:
		cid = "MANYCOLORS, INC.";
		break;
	case 0xD41090:
		cid = "iNFORM Systems AG";
		break;
	case 0x3495DB:
		cid = "Logitec Corporation";
		break;
	case 0x88142B:
		cid = "Protonic Holland";
		break;
	case 0xB8241A:
		cid = "SWEDA INFORMATICA LTDA";
		break;
	case 0x3806B4:
		cid = "A.D.C. GmbH";
		break;
	case 0x341B22:
		cid = "Grandbeing Technology Co., Ltd";
		break;
	case 0xB4346C:
		cid = "MATSUNICHI DIGITAL TECHNOLOGY (HONG KONG) LIMITED";
		break;
	case 0x9C1465:
		cid = "Edata Elektronik San. ve Tic. A.Ş.";
		break;
	case 0x587A4D:
		cid = "Stonesoft Corporation";
		break;
	case 0xE89218:
		cid = "Arcontia International AB";
		break;
	case 0x58F387:
		cid = "HCCP";
		break;
	case 0xB0793C:
		cid = "Revolv Inc";
		break;
	case 0x20CEC4:
		cid = "Peraso Technologies";
		break;
	case 0x700FEC:
		cid = "Poindus Systems Corp.";
		break;
	case 0x78D5B5:
		cid = "NAVIELEKTRO KY";
		break;
	case 0xE067B3:
		cid = "C-Data Technology Co., Ltd";
		break;
	case 0xB887A8:
		cid = "Step Ahead Innovations Inc.";
		break;
	case 0x140D4F:
		cid = "Flextronics International";
		break;
	case 0xB847C6:
		cid = "SanJet Technology Corp.";
		break;
	case 0x4CDF3D:
		cid = "TEAM ENGINEERS ADVANCE TECHNOLOGIES INDIA PVT LTD";
		break;
	case 0x70F176:
		cid = "Data Modul AG";
		break;
	case 0x205721:
		cid = "Salix Technology CO., Ltd.";
		break;
	case 0x704CED:
		cid = "TMRG, Inc.";
		break;
	case 0xE8516E:
		cid = "TSMART Inc.";
		break;
	case 0x7C1AFC:
		cid = "Dalian Co-Edifice Video Technology Co., Ltd";
		break;
	case 0xC034B4:
		cid = "Gigastone Corporation";
		break;
	case 0x74ADB7:
		cid = "China Mobile Group Device Co.,Ltd.";
		break;
	case 0xDC6F00:
		cid = "Livescribe, Inc.";
		break;
	case 0xD0737F:
		cid = "Mini-Circuits";
		break;
	case 0xA4D094:
		cid = "Erwin Peters Systemtechnik GmbH";
		break;
	case 0x0488E2:
		cid = "Beats Electronics LLC";
		break;
	case 0xD00EA4:
		cid = "Porsche Cars North America";
		break;
	case 0xF415FD:
		cid = "Shanghai Pateo Electronic Equipment Manufacturing Co., Ltd.";
		break;
	case 0x2C9464:
		cid = "Cincoze Co., Ltd.";
		break;
	case 0xB050BC:
		cid = "SHENZHEN BASICOM ELECTRONIC CO.,LTD.";
		break;
	case 0xDC7014:
		cid = "Private";
		break;
	case 0x40BC73:
		cid = "Cronoplast  S.L.";
		break;
	case 0x78303B:
		cid = "Stephen Technologies Co.,Limited";
		break;
	case 0x78F5E5:
		cid = "BEGA Gantenbrink-Leuchten KG";
		break;
	case 0x804B20:
		cid = "Ventilation Control";
		break;
	case 0x4007C0:
		cid = "Railtec Systems GmbH";
		break;
	case 0x94B8C5:
		cid = "RuggedCom Inc.";
		break;
	case 0x8C3C07:
		cid = "Skiva Technologies, Inc.";
		break;
	case 0x784B08:
		cid = "f.robotics acquisitions ltd";
		break;
	case 0x0C2D89:
		cid = "QiiQ Communications Inc.";
		break;
	case 0x604A1C:
		cid = "SUYIN Corporation";
		break;
	case 0xA4D3B5:
		cid = "GLITEL Stropkov, s.r.o.";
		break;
	case 0xA4F3C1:
		cid = "Open Source Robotics Foundation, Inc.";
		break;
	case 0x6C8B2F:
		cid = "zte corporation";
		break;
	case 0xB863BC:
		cid = "ROBOTIS, Co, Ltd";
		break;
	case 0xC8DDC9:
		cid = "Lenovo Mobile Communication Technology Ltd.";
		break;
	case 0xCC1AFA:
		cid = "zte corporation";
		break;
	case 0x8C5AF0:
		cid = "Exeltech Solar Products";
		break;
	case 0xF8DADF:
		cid = "EcoTech, Inc.";
		break;
	case 0x30AE7B:
		cid = "Deqing Dusun Electron CO., LTD";
		break;
	case 0x1441E2:
		cid = "Monaco Enterprises, Inc.";
		break;
	case 0xF07765:
		cid = "Sourcefire, Inc";
		break;
	case 0xE4F7A1:
		cid = "Datafox GmbH";
		break;
	case 0x601E02:
		cid = "EltexAlatau";
		break;
	case 0xE47D5A:
		cid = "Beijing Hanbang Technology Corp.";
		break;
	case 0x4C6255:
		cid = "SANMINA-SCI SYSTEM DE MEXICO S.A. DE C.V.";
		break;
	case 0x381766:
		cid = "PROMZAKAZ LTD.";
		break;
	case 0x204C6D:
		cid = "Hugo Brennenstuhl Gmbh & Co. KG.";
		break;
	case 0xDC825B:
		cid = "JANUS, spol. s r.o.";
		break;
	case 0xB08807:
		cid = "Strata Worldwide";
		break;
	case 0x74D02B:
		cid = "ASUSTek COMPUTER INC.";
		break;
	case 0xA4E0E6:
		cid = "FILIZOLA S.A. PESAGEM E AUTOMACAO";
		break;
	case 0x60E00E:
		cid = "SHINSEI ELECTRONICS CO LTD";
		break;
	case 0x30D46A:
		cid = "Autosales Incorporated";
		break;
	case 0x30AABD:
		cid = "Shanghai Reallytek Information Technology Co.,Ltd";
		break;
	case 0xA4B818:
		cid = "PENTA Gesellschaft für elektronische Industriedatenverarbeitung mbH";
		break;
	case 0x106682:
		cid = "NEC Platforms, Ltd.";
		break;
	case 0x102831:
		cid = "Morion Inc.";
		break;
	case 0xD81EDE:
		cid = "B&W Group Ltd";
		break;
	case 0x6897E8:
		cid = "Society of Motion Picture &amp; Television Engineers";
		break;
	case 0xFC58FA:
		cid = "Shen Zhen Shi Xin Zhong Xin Technology Co.,Ltd.";
		break;
	case 0x60601F:
		cid = "SZ DJI TECHNOLOGY CO.,LTD";
		break;
	case 0xE0C6B3:
		cid = "MilDef AB";
		break;
	case 0xFCDB96:
		cid = "ENERVALLEY CO., LTD";
		break;
	case 0x882E5A:
		cid = "storONE";
		break;
	case 0xD429EA:
		cid = "Zimory GmbH";
		break;
	case 0xC80E95:
		cid = "OmniLync Inc.";
		break;
	case 0x50ABBF:
		cid = "Hoseo Telecom";
		break;
	case 0xC8EEA6:
		cid = "Shenzhen SHX Technology Co., Ltd";
		break;
	case 0x28CBEB:
		cid = "One";
		break;
	case 0x18E8DD:
		cid = "MODULETEK";
		break;
	case 0x4CCC34:
		cid = "Motorola Solutions Inc.";
		break;
	case 0xF084C9:
		cid = "zte corporation";
		break;
	case 0xE894F6:
		cid = "TP-LINK TECHNOLOGIES CO.,LTD.";
		break;
	case 0x94ACCA:
		cid = "trivum technologies GmbH";
		break;
	case 0x7CD844:
		cid = "Enmotus Inc";
		break;
	case 0xF4C6D7:
		cid = "blackned GmbH";
		break;
	case 0x4CCA53:
		cid = "Skyera, Inc.";
		break;
	case 0x081DFB:
		cid = "Shanghai Mexon Communication Technology Co.,Ltd";
		break;
	case 0xD0CDE1:
		cid = "Scientech Electronics";
		break;
	case 0x94756E:
		cid = "QinetiQ North America";
		break;
	case 0x0C5521:
		cid = "Axiros GmbH";
		break;
	case 0xA4D856:
		cid = "Gimbal, Inc";
		break;
	case 0x10A743:
		cid = "SK Mtek Limited";
		break;
	case 0xE4A7FD:
		cid = "Cellco Partnership";
		break;
	case 0x24F2DD:
		cid = "Radiant Zemax LLC";
		break;
	case 0x80CF41:
		cid = "Lenovo Mobile Communication Technology Ltd.";
		break;
	case 0x7C9A9B:
		cid = "VSE valencia smart energy";
		break;
	case 0xA845E9:
		cid = "Firich Enterprises CO., LTD.";
		break;
	case 0x78995C:
		cid = "Nationz Technologies Inc";
		break;
	case 0x8CC5E1:
		cid = "ShenZhen Konka Telecommunication Technology Co.,Ltd";
		break;
	case 0x6CB311:
		cid = "Shenzhen Lianrui Electronics Co.,Ltd";
		break;
	case 0x54115F:
		cid = "Atamo Pty Ltd";
		break;
	case 0x2411D0:
		cid = "Chongqing Ehs Science and Technology Development Co.,Ltd.";
		break;
	case 0x6C9AC9:
		cid = "Valentine Research, Inc.";
		break;
	case 0x10F49A:
		cid = "T3 Innovation";
		break;
	case 0x5865E6:
		cid = "INFOMARK CO., LTD.";
		break;
	case 0x60BD91:
		cid = "Move Innovation";
		break;
	case 0x98473C:
		cid = "SHANGHAI SUNMON COMMUNICATION TECHNOGY CO.,LTD";
		break;
	case 0xCC4BFB:
		cid = "Hellberg Safety AB";
		break;
	case 0xACA22C:
		cid = "Baycity Technologies Ltd";
		break;
	case 0x6CADEF:
		cid = "KZ Broadband Technologies, Ltd.";
		break;
	case 0x044BFF:
		cid = "GuangZhou Hedy Digital Technology Co., Ltd";
		break;
	case 0x949BFD:
		cid = "Trans New Technology, Inc.";
		break;
	case 0xE4EEFD:
		cid = "MR&D Manufacturing";
		break;
	case 0x105CBF:
		cid = "DuroByte Inc";
		break;
	case 0xEC89F5:
		cid = "Lenovo Mobile Communication Technology Ltd.";
		break;
	case 0x083AB8:
		cid = "Shinoda Plasma Co., Ltd.";
		break;
	case 0xA0DD97:
		cid = "PolarLink Technologies, Ltd";
		break;
	case 0xE05597:
		cid = "Emergent Vision Technologies Inc.";
		break;
	case 0xA01917:
		cid = "Bertel S.p.a.";
		break;
	case 0xFC9FAE:
		cid = "Fidus Systems Inc";
		break;
	case 0xFC0647:
		cid = "Cortland Research, LLC";
		break;
	case 0x20918A:
		cid = "PROFALUX";
		break;
	case 0x7C438F:
		cid = "E-Band Communications Corp.";
		break;
	case 0xFC626E:
		cid = "Beijing MDC Telecom";
		break;
	case 0xC0B339:
		cid = "Comigo Ltd.";
		break;
	case 0xDCC0DB:
		cid = "Shenzhen Kaiboer Technology Co., Ltd.";
		break;
	case 0x7076DD:
		cid = "Oxyguard International A/S";
		break;
	case 0x683B1E:
		cid = "Countwise LTD";
		break;
	case 0xD4136F:
		cid = "Asia Pacific Brands";
		break;
	case 0xA0A130:
		cid = "DLI Taiwan Branch office";
		break;
	case 0xECE915:
		cid = "STI Ltd";
		break;
	case 0xA81FAF:
		cid = "KRYPTON POLSKA";
		break;
	case 0x087BAA:
		cid = "SVYAZKOMPLEKTSERVICE, LLC";
		break;
	case 0x2C26C5:
		cid = "zte corporation";
		break;
	case 0xBC629F:
		cid = "Telenet Systems P. Ltd.";
		break;
	case 0xB47F5E:
		cid = "Foresight Manufacture (S) Pte Ltd";
		break;
	case 0x785517:
		cid = "SankyuElectronics";
		break;
	case 0x848E96:
		cid = "Embertec Pty Ltd";
		break;
	case 0xCC3A61:
		cid = "SAMSUNG ELECTRO MECHANICS CO., LTD.";
		break;
	case 0xA00363:
		cid = "Robert Bosch Healthcare GmbH";
		break;
	case 0xF0F644:
		cid = "Whitesky Science & Technology Co.,Ltd.";
		break;
	case 0x30D357:
		cid = "Logosol, Inc.";
		break;
	case 0x2C441B:
		cid = "Spectrum Medical Limited";
		break;
	case 0x1C5A6B:
		cid = "Philips Electronics Nederland BV";
		break;
	case 0xA875D6:
		cid = "FreeTek International Co., Ltd.";
		break;
	case 0x58EB14:
		cid = "Proteus Digital Health";
		break;
	case 0x789F87:
		cid = "Siemens AG I IA PP PRM";
		break;
	case 0x7C0A50:
		cid = "J-MEX Inc.";
		break;
	case 0x40F2E9:
		cid = "IBM";
		break;
	case 0x9C0473:
		cid = "Tecmobile (International) Ltd.";
		break;
	case 0xCC262D:
		cid = "Verifi, LLC";
		break;
	case 0x3C8AE5:
		cid = "Tensun Information Technology(Hangzhou) Co.,LTD";
		break;
	case 0x54DF63:
		cid = "Intrakey technologies GmbH";
		break;
	case 0x7C0187:
		cid = "Curtis Instruments, Inc.";
		break;
	case 0x388EE7:
		cid = "Fanhattan LLC";
		break;
	case 0x54F666:
		cid = "Berthold Technologies GmbH and Co.KG";
		break;
	case 0x802FDE:
		cid = "Zurich Instruments AG";
		break;
	case 0x08AF78:
		cid = "Totus Solutions, Inc.";
		break;
	case 0x5C38E0:
		cid = "Shanghai Super Electronics Technology Co.,LTD";
		break;
	case 0xA0E534:
		cid = "Stratec Biomedical AG";
		break;
	case 0x2891D0:
		cid = "Stage Tec Entwicklungsgesellschaft für professionelle Audiotechnik mbH";
		break;
	case 0x98291D:
		cid = "Jaguar de Mexico, SA de CV";
		break;
	case 0x18863A:
		cid = "DIGITAL ART SYSTEM";
		break;
	case 0xF4B72A:
		cid = "TIME INTERCONNECT LTD";
		break;
	case 0x34D7B4:
		cid = "Tributary Systems, Inc.";
		break;
	case 0xF40F9B:
		cid = "WAVELINK";
		break;
	case 0x144319:
		cid = "Creative&Link Technology Limited";
		break;
	case 0x64F50E:
		cid = "Kinion Technology Company Limited";
		break;
	case 0x28A186:
		cid = "enblink";
		break;
	case 0x1C9492:
		cid = "RUAG Schweiz AG";
		break;
	case 0x24694A:
		cid = "Jasmine Systems Inc.";
		break;
	case 0xC8C791:
		cid = "Zero1.tv GmbH";
		break;
	case 0x60748D:
		cid = "Atmaca Elektronik";
		break;
	case 0x78D129:
		cid = "Vicos";
		break;
	case 0x78AB60:
		cid = "ABB Australia";
		break;
	case 0x289A4B:
		cid = "SteelSeries ApS";
		break;
	case 0x0CC66A:
		cid = "Nokia Corporation";
		break;
	case 0x7CFE28:
		cid = "Salutron Inc.";
		break;
	case 0x109FA9:
		cid = "Actiontec Electronics, Inc";
		break;
	case 0xC0A364:
		cid = "3D Systems Massachusetts";
		break;
	case 0x98A7B0:
		cid = "MCST ZAO";
		break;
	case 0x88DC96:
		cid = "SENAO Networks, Inc.";
		break;
	case 0xC455C2:
		cid = "Bach-Simpson";
		break;
	case 0xECA29B:
		cid = "Kemppi Oy";
		break;
	case 0x04CE14:
		cid = "Wilocity LTD.";
		break;
	case 0x802AFA:
		cid = "Germaneers GmbH";
		break;
	case 0x1C8464:
		cid = "FORMOSA WIRELESS COMMUNICATION CORP.";
		break;
	case 0xD867D9:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB4218A:
		cid = "Dog Hunter LLC";
		break;
	case 0xF8A03D:
		cid = "Dinstar Technologies Co., Ltd.";
		break;
	case 0xD08CFF:
		cid = "UPWIS AB";
		break;
	case 0x9C066E:
		cid = "Hytera Communications Corporation Limited";
		break;
	case 0x746A89:
		cid = "Rezolt Corporation";
		break;
	case 0x68D1FD:
		cid = "Shenzhen Trimax Technology Co.,Ltd";
		break;
	case 0x241B13:
		cid = "Shanghai Nutshell Electronic Co., Ltd.";
		break;
	case 0xB43564:
		cid = "Fujian Tian Cheng Electron Science & Technical Development Co.,Ltd.";
		break;
	case 0x54D1B0:
		cid = "Universal Laser Systems, Inc";
		break;
	case 0xA497BB:
		cid = "Hitachi Industrial Equipment Systems Co.,Ltd";
		break;
	case 0xFC52CE:
		cid = "Control iD";
		break;
	case 0xE804F3:
		cid = "Throughtek Co., Ltd.";
		break;
	case 0xB85810:
		cid = "NUMERA, INC.";
		break;
	case 0x9886B1:
		cid = "Flyaudio corporation (China)";
		break;
	case 0x28B3AB:
		cid = "Genmark Automation";
		break;
	case 0x44E8A5:
		cid = "Myreka Technologies Sdn. Bhd.";
		break;
	case 0xAC14D2:
		cid = "wi-daq, inc.";
		break;
	case 0x9C4CAE:
		cid = "Mesa Labs";
		break;
	case 0x7CD9FE:
		cid = "New Cosmos Electric Co., Ltd.";
		break;
	case 0xE49069:
		cid = "Rockwell Automation";
		break;
	case 0xB48910:
		cid = "Coster T.E. S.P.A.";
		break;
	case 0xA4B1E9:
		cid = "Technicolor";
		break;
	case 0x30AEF6:
		cid = "Radio Mobile Access";
		break;
	case 0x58343B:
		cid = "Glovast Technology Ltd.";
		break;
	case 0x54A04F:
		cid = "t-mac Technologies Ltd";
		break;
	case 0xE44F5F:
		cid = "EDS Elektronik Destek San.Tic.Ltd.Sti";
		break;
	case 0x08B738:
		cid = "Lite-On Technogy Corp.";
		break;
	case 0x9C6650:
		cid = "Glodio Technolies Co.,Ltd Tianjin Branch";
		break;
	case 0x503955:
		cid = "Cisco SPVTG";
		break;
	case 0x90CF6F:
		cid = "Dlogixs Co Ltd";
		break;
	case 0x68AF13:
		cid = "Futura Mobility";
		break;
	case 0xB82410:
		cid = "Magneti Marelli Slovakia s.r.o.";
		break;
	case 0xA8EF26:
		cid = "Tritonwave";
		break;
	case 0xF0D3E7:
		cid = "Sensometrix SA";
		break;
	case 0x7CC8D0:
		cid = "TIANJIN YAAN TECHNOLOGY CO., LTD.";
		break;
	case 0x88E917:
		cid = "Tamaggo";
		break;
	case 0x80AAA4:
		cid = "USAG";
		break;
	case 0x5C2479:
		cid = "Baltech AG";
		break;
	case 0xE8CBA1:
		cid = "Nokia Corporation";
		break;
	case 0xF85F2A:
		cid = "Nokia Corporation";
		break;
	case 0x286094:
		cid = "CAPELEC";
		break;
	case 0x60E956:
		cid = "Ayla Networks, Inc";
		break;
	case 0x287184:
		cid = "Spire Payments";
		break;
	case 0x1CB094:
		cid = "HTC Corporation";
		break;
	case 0xFC5090:
		cid = "SIMEX Sp. z o.o.";
		break;
	case 0x209BA5:
		cid = "JIAXING GLEAD Electronics Co.,Ltd";
		break;
	case 0x60843B:
		cid = "Soladigm, Inc.";
		break;
	case 0x508C77:
		cid = "DIRMEIER Schanktechnik GmbH &Co KG";
		break;
	case 0x6089B1:
		cid = "Key Digital Systems";
		break;
	case 0x080CC9:
		cid = "Mission Technology Group, dba Magma";
		break;
	case 0xA0F450:
		cid = "HTC Corporation";
		break;
	case 0x44D15E:
		cid = "Shanghai Kingto Information Technology Ltd";
		break;
	case 0x545EBD:
		cid = "NL Technologies";
		break;
	case 0xC8BBD3:
		cid = "Embrane";
		break;
	case 0xECD19A:
		cid = "Zhuhai Liming Industries Co., Ltd";
		break;
	case 0x346E8A:
		cid = "Ecosense";
		break;
	case 0xACEE3B:
		cid = "6harmonics Inc";
		break;
	case 0x681605:
		cid = "Systems And Electronic Development FZCO";
		break;
	case 0x04F17D:
		cid = "Tarana Wireless";
		break;
	case 0xA0DC04:
		cid = "Becker-Antriebe GmbH";
		break;
	case 0x2CBE97:
		cid = "Ingenieurbuero Bickele und Buehler GmbH";
		break;
	case 0x045A95:
		cid = "Nokia Corporation";
		break;
	case 0xB40E96:
		cid = "HERAN";
		break;
	case 0x0CAF5A:
		cid = "GENUS POWER INFRASTRUCTURES LIMITED";
		break;
	case 0xD0699E:
		cid = "LUMINEX Lighting Control Equipment";
		break;
	case 0x64AE88:
		cid = "Polytec GmbH";
		break;
	case 0x2C542D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x709E86:
		cid = "X6D Limited";
		break;
	case 0x946124:
		cid = "Pason Systems";
		break;
	case 0xDC309C:
		cid = "Heyrex Limited";
		break;
	case 0xE81324:
		cid = "GuangZhou Bonsoninfo System CO.,LTD";
		break;
	case 0x0036F8:
		cid = "Conti Temic microelectronic GmbH";
		break;
	case 0x443839:
		cid = "Cumulus Networks, inc";
		break;
	case 0x20F002:
		cid = "MTData Developments Pty. Ltd.";
		break;
	case 0xCC912B:
		cid = "TE Connectivity Touch Solutions";
		break;
	case 0x785262:
		cid = "Shenzhen Hojy Software Co., Ltd.";
		break;
	case 0x40336C:
		cid = "Godrej & Boyce Mfg. co. ltd";
		break;
	case 0xFC1D59:
		cid = "I Smart Cities HK Ltd";
		break;
	case 0xEC0ED6:
		cid = "ITECH INSTRUMENTS SAS";
		break;
	case 0xD0D212:
		cid = "K2NET Co.,Ltd.";
		break;
	case 0x9C8EDC:
		cid = "Teracom Limited";
		break;
	case 0x146A0B:
		cid = "Cypress Electronics Limited";
		break;
	case 0xB0750C:
		cid = "QA Cafe";
		break;
	case 0xB4E1EB:
		cid = "Private";
		break;
	case 0xFC2A54:
		cid = "Connected Data, Inc.";
		break;
	case 0xA090DE:
		cid = "VEEDIMS,LLC";
		break;
	case 0xAC1461:
		cid = "ATAW  Co., Ltd.";
		break;
	case 0x508A42:
		cid = "Uptmate Technology Co., LTD";
		break;
	case 0x8C57FD:
		cid = "LVX Western";
		break;
	case 0x002A6A:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB88F14:
		cid = "Analytica GmbH";
		break;
	case 0x94FAE8:
		cid = "Shenzhen Eycom Technology Co., Ltd";
		break;
	case 0x3CA315:
		cid = "Bless Information & Communications Co., Ltd";
		break;
	case 0xF8DB4C:
		cid = "PNY Technologies, INC.";
		break;
	case 0xF83094:
		cid = "Alcatel-Lucent Telecom Limited";
		break;
	case 0x2817CE:
		cid = "Omnisense Ltd";
		break;
	case 0x28E608:
		cid = "Tokheim";
		break;
	case 0xE477D4:
		cid = "Minrray Industry Co.,Ltd";
		break;
	case 0xA4B980:
		cid = "Parking BOXX Inc.";
		break;
	case 0x002D76:
		cid = "TITECH GmbH";
		break;
	case 0x78A183:
		cid = "Advidia";
		break;
	case 0xF85063:
		cid = "Verathon";
		break;
	case 0x400E67:
		cid = "Tremol Ltd.";
		break;
	case 0x901B0E:
		cid = "Fujitsu Technology Solutions GmbH";
		break;
	case 0x5C6F4F:
		cid = "S.A. SISTEL";
		break;
	case 0xB058C4:
		cid = "Broadcast Microwave Services, Inc";
		break;
	case 0xB820E7:
		cid = "Guangzhou Horizontal Information & Network Integration Co. Ltd";
		break;
	case 0x98588A:
		cid = "SYSGRATION Ltd.";
		break;
	case 0x842B50:
		cid = "Huria Co.,Ltd.";
		break;
	case 0x0C5A19:
		cid = "Axtion Sdn Bhd";
		break;
	case 0xA00CA1:
		cid = "SKTB SKiT";
		break;
	case 0xE09579:
		cid = "ORTHOsoft inc, d/b/a Zimmer CAS";
		break;
	case 0x307ECB:
		cid = "SFR";
		break;
	case 0x90A783:
		cid = "JSW PACIFIC CORPORATION";
		break;
	case 0x000830:
		cid = "Cisco Systems, Inc";
		break;
	case 0xCCEF48:
		cid = "Cisco Systems, Inc";
		break;
	case 0x78A5DD:
		cid = "Shenzhen Smarteye Digital Electronics Co., Ltd";
		break;
	case 0x28B0CC:
		cid = "Xenya d.o.o.";
		break;
	case 0xECE744:
		cid = "Omntec mfg. inc";
		break;
	case 0x80427C:
		cid = "Adolf Tedsen GmbH & Co. KG";
		break;
	case 0xF8F7D3:
		cid = "International Communications Corporation";
		break;
	case 0xB89AED:
		cid = "OceanServer Technology, Inc";
		break;
	case 0xE455EA:
		cid = "Dedicated Computing";
		break;
	case 0x00FC58:
		cid = "WebSilicon Ltd.";
		break;
	case 0x64A0E7:
		cid = "Cisco Systems, Inc";
		break;
	case 0x18E80F:
		cid = "Viking Electronics Inc.";
		break;
	case 0xEC6264:
		cid = "Global411 Internet Services, LLC";
		break;
	case 0x00F051:
		cid = "KWB Gmbh";
		break;
	case 0xF0DEB9:
		cid = "ShangHai Y&Y Electronics Co., Ltd";
		break;
	case 0xAC54EC:
		cid = "IEEE P1823 Standards Working Group";
		break;
	case 0xC8292A:
		cid = "Barun Electronics";
		break;
	case 0xE0DADC:
		cid = "JVC KENWOOD Corporation";
		break;
	case 0xC894D2:
		cid = "Jiangsu Datang  Electronic Products Co., Ltd";
		break;
	case 0xA0423F:
		cid = "Tyan Computer Corp";
		break;
	case 0x5C18B5:
		cid = "Talon Communications";
		break;
	case 0x78BAD0:
		cid = "Shinybow Technology Co. Ltd.";
		break;
	case 0x306CBE:
		cid = "Skymotion Technology (HK) Limited";
		break;
	case 0x40D559:
		cid = "MICRO S.E.R.I.";
		break;
	case 0xF82F5B:
		cid = "eGauge Systems LLC";
		break;
	case 0x3499D7:
		cid = "Universal Flow Monitors, Inc.";
		break;
	case 0x7C336E:
		cid = "MEG Electronics Inc.";
		break;
	case 0xD4D249:
		cid = "Power Ethernet";
		break;
	case 0x10C2BA:
		cid = "UTT Co., Ltd.";
		break;
	case 0xF0DA7C:
		cid = "RLH INDUSTRIES,INC.";
		break;
	case 0x40984C:
		cid = "Casacom Solutions AG";
		break;
	case 0xB8975A:
		cid = "BIOSTAR Microtech Int'l Corp.";
		break;
	case 0x4833DD:
		cid = "ZENNIO AVANCE Y TECNOLOGIA, S.L.";
		break;
	case 0xD4D748:
		cid = "Cisco Systems, Inc";
		break;
	case 0x9CCAD9:
		cid = "Nokia Corporation";
		break;
	case 0xF8313E:
		cid = "endeavour GmbH";
		break;
	case 0x10FC54:
		cid = "Shany Electronic Co., Ltd.";
		break;
	case 0xD8E743:
		cid = "Wush, Inc";
		break;
	case 0x908FCF:
		cid = "UNO System Co., Ltd";
		break;
	case 0x903CAE:
		cid = "Yunnan KSEC Digital Technology Co.,Ltd.";
		break;
	case 0x000831:
		cid = "Cisco Systems, Inc";
		break;
	case 0xF0620D:
		cid = "Shenzhen Egreat Tech Corp.,Ltd";
		break;
	case 0x843611:
		cid = "hyungseul publishing networks";
		break;
	case 0xB8FD32:
		cid = "Zhejiang ROICX Microelectronics";
		break;
	case 0xD8052E:
		cid = "Skyviia Corporation";
		break;
	case 0xF83553:
		cid = "Magenta Research Ltd.";
		break;
	case 0xDC3C2E:
		cid = "Manufacturing System Insights, Inc.";
		break;
	case 0x40BC8B:
		cid = "itelio GmbH";
		break;
	case 0x88C36E:
		cid = "Beijing Ereneben lnformation Technology Limited";
		break;
	case 0x8CDE52:
		cid = "ISSC Technologies Corp.";
		break;
	case 0xA8776F:
		cid = "Zonoff";
		break;
	case 0x902B34:
		cid = "GIGA-BYTE TECHNOLOGY CO.,LTD.";
		break;
	case 0x48E1AF:
		cid = "Vity";
		break;
	case 0xC0A0DE:
		cid = "Multi Touch Oy";
		break;
	case 0x943AF0:
		cid = "Nokia Corporation";
		break;
	case 0xB826D4:
		cid = "Furukawa Industrial S.A. Produtos Elétricos";
		break;
	case 0x14E4EC:
		cid = "mLogic LLC";
		break;
	case 0xAC0DFE:
		cid = "Ekon GmbH - myGEKKO";
		break;
	case 0x005CB1:
		cid = "Gospell DIGITAL TECHNOLOGY CO., LTD";
		break;
	case 0x186751:
		cid = "KOMEG Industrielle Messtechnik GmbH";
		break;
	case 0xB467E9:
		cid = "Qingdao GoerTek Technology Co., Ltd.";
		break;
	case 0xB49EE6:
		cid = "SHENZHEN TECHNOLOGY CO LTD";
		break;
	case 0x7041B7:
		cid = "Edwards Lifesciences LLC";
		break;
	case 0xA849A5:
		cid = "Lisantech Co., Ltd.";
		break;
	case 0x94DB49:
		cid = "SITCORP";
		break;
	case 0x8CD17B:
		cid = "CG Mobile";
		break;
	case 0x144978:
		cid = "Digital Control Incorporated";
		break;
	case 0xFC8FC4:
		cid = "Intelligent Technology Inc.";
		break;
	case 0xF04A2B:
		cid = "PYRAMID Computer GmbH";
		break;
	case 0xCC9093:
		cid = "Hansong Tehnologies";
		break;
	case 0x78F7D0:
		cid = "Silverbrook Research";
		break;
	case 0xF04B6A:
		cid = "Scientific Production Association Siberian Arsenal, Ltd.";
		break;
	case 0x30DE86:
		cid = "Cedac Software S.r.l.";
		break;
	case 0xF013C3:
		cid = "SHENZHEN FENDA TECHNOLOGY CO., LTD";
		break;
	case 0xCCE7DF:
		cid = "American Magnetics, Inc.";
		break;
	case 0xE44E18:
		cid = "Gardasoft VisionLimited";
		break;
	case 0xD41C1C:
		cid = "RCF S.P.A.";
		break;
	case 0x8C94CF:
		cid = "Encell Technology, Inc.";
		break;
	case 0x149090:
		cid = "KongTop industrial(shen zhen)CO.,LTD";
		break;
	case 0xCCF8F0:
		cid = "Xi'an HISU Multimedia Technology Co.,Ltd.";
		break;
	case 0x30F9ED:
		cid = "Sony Corporation";
		break;
	case 0x28C718:
		cid = "Altierre";
		break;
	case 0x2046A1:
		cid = "VECOW Co., Ltd";
		break;
	case 0x8C271D:
		cid = "QuantHouse";
		break;
	case 0x9C8BF1:
		cid = "The Warehouse Limited";
		break;
	case 0x147DC5:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0x944696:
		cid = "BaudTec Corporation";
		break;
	case 0x90342B:
		cid = "Gatekeeper Systems, Inc.";
		break;
	case 0xD45251:
		cid = "IBT Ingenieurbureau Broennimann Thun";
		break;
	case 0x3071B2:
		cid = "Hangzhou Prevail Optoelectronic Equipment Co.,LTD.";
		break;
	case 0xB82ADC:
		cid = "EFR Europäische Funk-Rundsteuerung GmbH";
		break;
	case 0xB09BD4:
		cid = "GNH Software India Private Limited";
		break;
	case 0x7CF429:
		cid = "NUUO Inc.";
		break;
	case 0xB8CDA7:
		cid = "Maxeler Technologies Ltd.";
		break;
	case 0xF49461:
		cid = "NexGen Storage";
		break;
	case 0x804731:
		cid = "Packet Design, Inc.";
		break;
	case 0xACCB09:
		cid = "Hefcom Metering (Pty) Ltd";
		break;
	case 0x10EED9:
		cid = "Canoga Perkins Corporation";
		break;
	case 0x240BB1:
		cid = "KOSTAL Industrie Elektrik GmbH";
		break;
	case 0x20EEC6:
		cid = "Elefirst Science & Tech Co ., ltd";
		break;
	case 0x807A7F:
		cid = "ABB Genway Xiamen Electrical Equipment CO., LTD";
		break;
	case 0x14373B:
		cid = "PROCOM Systems";
		break;
	case 0xB81999:
		cid = "Nesys";
		break;
	case 0x4C5585:
		cid = "Hamilton Systems";
		break;
	case 0x8CCF5C:
		cid = "BEFEGA GmbH";
		break;
	case 0xA0133B:
		cid = "HiTi Digital, Inc.";
		break;
	case 0x448E12:
		cid = "DT Research, Inc.";
		break;
	case 0x9C5711:
		cid = "Feitian Xunda(Beijing) Aeronautical Information Technology Co., Ltd.";
		break;
	case 0x18AD4D:
		cid = "Polostar Technology Corporation";
		break;
	case 0x4CA74B:
		cid = "Alcatel Lucent";
		break;
	case 0x549478:
		cid = "Silvershore Technology Partners";
		break;
	case 0xF4B164:
		cid = "Lightning Telecommunications Technology Co. Ltd";
		break;
	case 0x0CFC83:
		cid = "Airoha Technology Corp.,";
		break;
	case 0x0C51F7:
		cid = "CHAUVIN ARNOUX";
		break;
	case 0x70B035:
		cid = "Shenzhen Zowee Technology Co., Ltd";
		break;
	case 0x708105:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00082F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x542018:
		cid = "Tely Labs";
		break;
	case 0x581FEF:
		cid = "Tuttnaer LTD";
		break;
	case 0xF8F25A:
		cid = "G-Lab GmbH";
		break;
	case 0xBC779F:
		cid = "SBM Co., Ltd.";
		break;
	case 0xC058A7:
		cid = "Pico Systems Co., Ltd.";
		break;
	case 0x04D783:
		cid = "Y&H E&C Co.,LTD.";
		break;
	case 0x00E175:
		cid = "AK-Systems Ltd";
		break;
	case 0x843F4E:
		cid = "Tri-Tech Manufacturing, Inc.";
		break;
	case 0xC83232:
		cid = "Hunting Innova";
		break;
	case 0xD059C3:
		cid = "CeraMicro Technology Corporation";
		break;
	case 0xEC9681:
		cid = "2276427 Ontario Inc";
		break;
	case 0xB8288B:
		cid = "Parker Hannifin Manufacturing (UK) Ltd";
		break;
	case 0x5835D9:
		cid = "Cisco Systems, Inc";
		break;
	case 0x802E14:
		cid = "azeti Networks AG";
		break;
	case 0xE8944C:
		cid = "Cogent Healthcare Systems Ltd";
		break;
	case 0x68F895:
		cid = "Redflow Limited";
		break;
	case 0xA88792:
		cid = "Broadband Antenna Tracking Systems";
		break;
	case 0x901900:
		cid = "SCS SA";
		break;
	case 0xAC932F:
		cid = "Nokia Corporation";
		break;
	case 0x1435B3:
		cid = "Future Designs, Inc.";
		break;
	case 0xFCF1CD:
		cid = "OPTEX-FA CO.,LTD.";
		break;
	case 0xB03829:
		cid = "Siliconware Precision Industries Co., Ltd.";
		break;
	case 0xBC0F2B:
		cid = "FORTUNE TECHGROUP CO.,LTD";
		break;
	case 0x8CF9C9:
		cid = "MESADA Technology Co.,Ltd.";
		break;
	case 0xE42AD3:
		cid = "Magneti Marelli S.p.A. Powertrain";
		break;
	case 0xFC10BD:
		cid = "Control Sistematizado S.A.";
		break;
	case 0x443719:
		cid = "2 Save Energy Ltd";
		break;
	case 0xE83EB6:
		cid = "RIM";
		break;
	case 0x94FD1D:
		cid = "WhereWhen Corp";
		break;
	case 0x0CE82F:
		cid = "Bonfiglioli Vectron GmbH";
		break;
	case 0xC0626B:
		cid = "Cisco Systems, Inc";
		break;
	case 0xB4B88D:
		cid = "Thuh Company";
		break;
	case 0x60F59C:
		cid = "CRU-Dataport";
		break;
	case 0x4C73A5:
		cid = "KOVE";
		break;
	case 0xF86971:
		cid = "Seibu Electric Co.,";
		break;
	case 0x44AA27:
		cid = "udworks Co., Ltd.";
		break;
	case 0x6CAD3F:
		cid = "Hubbell Building Automation, Inc.";
		break;
	case 0x8427CE:
		cid = "Corporation of the Presiding Bishop of The Church of Jesus Christ of Latter-day Saints";
		break;
	case 0xD428B2:
		cid = "ioBridge, Inc.";
		break;
	case 0x90B8D0:
		cid = "Joyent, Inc.";
		break;
	case 0x909060:
		cid = "RSI VIDEO TECHNOLOGIES";
		break;
	case 0x281471:
		cid = "Lantis co., LTD.";
		break;
	case 0x1407E0:
		cid = "Abrantix AG";
		break;
	case 0xDCCF94:
		cid = "Beijing Rongcheng Hutong Technology Co., Ltd.";
		break;
	case 0x18E288:
		cid = "STT Condigi";
		break;
	case 0x68876B:
		cid = "INQ Mobile Limited";
		break;
	case 0x9866EA:
		cid = "Industrial Control Communications, Inc.";
		break;
	case 0xF4A52A:
		cid = "Hawa Technologies Inc";
		break;
	case 0x90CF15:
		cid = "Nokia Corporation";
		break;
	case 0xB8D49D:
		cid = "M Seven System Ltd.";
		break;
	case 0xB0A10A:
		cid = "Pivotal Systems Corporation";
		break;
	case 0x48F47D:
		cid = "TechVision Holding  Internation Limited";
		break;
	case 0x6C391D:
		cid = "Beijing ZhongHuaHun Network Information center";
		break;
	case 0x64D241:
		cid = "Keith & Koep GmbH";
		break;
	case 0x101212:
		cid = "Vivo International Corporation Pty Ltd";
		break;
	case 0x5087B8:
		cid = "Nuvyyo Inc";
		break;
	case 0xE41289:
		cid = "topsystem Systemhaus GmbH";
		break;
	case 0xA4134E:
		cid = "Luxul";
		break;
	case 0xB09928:
		cid = "FUJITSU LIMITED";
		break;
	case 0x8C11CB:
		cid = "ABUS Security-Center GmbH & Co. KG";
		break;
	case 0x806459:
		cid = "Nimbus Inc.";
		break;
	case 0xA45A1C:
		cid = "smart-electronic GmbH";
		break;
	case 0x8C89A5:
		cid = "Micro-Star INT'L CO., LTD";
		break;
	case 0x3C672C:
		cid = "Sciovid Inc.";
		break;
	case 0x18D071:
		cid = "DASAN CO., LTD.";
		break;
	case 0x38D135:
		cid = "EasyIO Corporation Sdn. Bhd.";
		break;
	case 0x184E94:
		cid = "MESSOA TECHNOLOGIES INC.";
		break;
	case 0x94D93C:
		cid = "ENELPS";
		break;
	case 0xDC9B1E:
		cid = "Intercom, Inc.";
		break;
	case 0x5C7757:
		cid = "Haivision Network Video";
		break;
	case 0xE8B4AE:
		cid = "Shenzhen C&D Electronics Co.,Ltd";
		break;
	case 0xC45600:
		cid = "Galleon Embedded Computing";
		break;
	case 0xE42FF6:
		cid = "Unicore communication Inc.";
		break;
	case 0xB8F4D0:
		cid = "Herrmann Ultraschalltechnik GmbH & Co. Kg";
		break;
	case 0xB4F323:
		cid = "PETATEL INC.";
		break;
	case 0xC81E8E:
		cid = "ADV Security (S) Pte Ltd";
		break;
	case 0xACCABA:
		cid = "Midokura Co., Ltd.";
		break;
	case 0x9C417C:
		cid = "Hame  Technology Co.,  Limited";
		break;
	case 0x10768A:
		cid = "EoCell";
		break;
	case 0x044665:
		cid = "Murata Manufacturing Co., Ltd.";
		break;
	case 0xD0131E:
		cid = "Sunrex Technology Corp";
		break;
	case 0x380197:
		cid = "TSST Global,Inc";
		break;
	case 0xB40142:
		cid = "GCI Science & Technology Co.,LTD";
		break;
	case 0x846EB1:
		cid = "Park Assist LLC";
		break;
	case 0x6C504D:
		cid = "Cisco Systems, Inc";
		break;
	case 0xC0C1C0:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x1CBD0E:
		cid = "Amplified Engineering Pty Ltd";
		break;
	case 0xF0A764:
		cid = "GST Co., Ltd.";
		break;
	case 0xA0F217:
		cid = "GE Medical System(China) Co., Ltd.";
		break;
	case 0x643409:
		cid = "BITwave Pte Ltd";
		break;
	case 0x20D5AB:
		cid = "Korea Infocom Co.,Ltd.";
		break;
	case 0xF05849:
		cid = "CareView Communications";
		break;
	case 0xBC15A6:
		cid = "Taiwan Jantek Electronics,Ltd.";
		break;
	case 0x241A8C:
		cid = "Squarehead Technology AS";
		break;
	case 0x1083D2:
		cid = "Microseven Systems, LLC";
		break;
	case 0xF05D89:
		cid = "Dycon Limited";
		break;
	case 0xAC02CF:
		cid = "RW Tecnologia Industria e Comercio Ltda";
		break;
	case 0x9067B5:
		cid = "Alcatel-Lucent";
		break;
	case 0x40987B:
		cid = "Aisino Corporation";
		break;
	case 0x6C2E33:
		cid = "Accelink Technologies Co.,Ltd.";
		break;
	case 0x4CEDDE:
		cid = "ASKEY COMPUTER CORP";
		break;
	case 0xE8E08F:
		cid = "GRAVOTECH MARKING SAS";
		break;
	case 0x78B6C1:
		cid = "AOBO Telecom Co.,Ltd";
		break;
	case 0xB8BA68:
		cid = "Xi'an Jizhong Digital Communication Co.,Ltd";
		break;
	case 0xBC38D2:
		cid = "Pandachip Limited";
		break;
	case 0x14EE9D:
		cid = "AirNav Systems LLC";
		break;
	case 0x48174C:
		cid = "MicroPower technologies";
		break;
	case 0xF81037:
		cid = "Atopia Systems, LP";
		break;
	case 0x64F987:
		cid = "Avvasi Inc.";
		break;
	case 0x3C7437:
		cid = "RIM";
		break;
	case 0x64DC01:
		cid = "Static Systems Group PLC";
		break;
	case 0x1CF5E7:
		cid = "Turtle Industry Co., Ltd.";
		break;
	case 0x2C8065:
		cid = "HARTING Inc. of North America";
		break;
	case 0xF8F014:
		cid = "RackWare Inc.";
		break;
	case 0xE41C4B:
		cid = "V2 TECHNOLOGY, INC.";
		break;
	case 0xE0143E:
		cid = "Modoosis Inc.";
		break;
	case 0x204AAA:
		cid = "Hanscan Spain S.A.";
		break;
	case 0xF02572:
		cid = "Cisco Systems, Inc";
		break;
	case 0x8091C0:
		cid = "AgileMesh, Inc.";
		break;
	case 0x0CF0B4:
		cid = "Globalsat International Technology Ltd";
		break;
	case 0xBCC61A:
		cid = "SPECTRA EMBEDDED SYSTEMS";
		break;
	case 0x48DF1C:
		cid = "Wuhan NEC Fibre Optic Communications industry Co. Ltd";
		break;
	case 0xD0D3FC:
		cid = "Mios, Ltd.";
		break;
	case 0x989449:
		cid = "Skyworth Wireless Technology Ltd.";
		break;
	case 0xC8DF7C:
		cid = "Nokia Corporation";
		break;
	case 0xF8C678:
		cid = "Carefusion";
		break;
	case 0xFC3598:
		cid = "Favite Inc.";
		break;
	case 0xA0AAFD:
		cid = "EraThink Technologies Corp.";
		break;
	case 0xE03E7D:
		cid = "data-complex GmbH";
		break;
	case 0xA4E32E:
		cid = "Silicon & Software Systems Ltd.";
		break;
	case 0x1C19DE:
		cid = "eyevis GmbH";
		break;
	case 0xDC07C1:
		cid = "HangZhou QiYang Technology Co.,Ltd.";
		break;
	case 0xD8FE8F:
		cid = "IDFone Co., Ltd.";
		break;
	case 0x0006F6:
		cid = "Cisco Systems, Inc";
		break;
	case 0xACAB8D:
		cid = "Lyngso Marine A/S";
		break;
	case 0xE8995A:
		cid = "PiiGAB, Processinformation i Goteborg AB";
		break;
	case 0xD4E32C:
		cid = "S. Siedle & Sohne";
		break;
	case 0x68DCE8:
		cid = "PacketStorm Communications";
		break;
	case 0x78223D:
		cid = "Affirmed Networks";
		break;
	case 0x60C980:
		cid = "Trymus";
		break;
	case 0x94CDAC:
		cid = "Creowave Oy";
		break;
	case 0xF4DCDA:
		cid = "Zhuhai Jiahe Communication Technology Co., limited";
		break;
	case 0x100D32:
		cid = "Embedian, Inc.";
		break;
	case 0xD82986:
		cid = "Best Wish Technology LTD";
		break;
	case 0xC03B8F:
		cid = "Minicom Digital Signage";
		break;
	case 0xA4218A:
		cid = "Nortel Networks";
		break;
	case 0x6C0460:
		cid = "RBH Access Technologies Inc.";
		break;
	case 0x5C864A:
		cid = "Secret Labs LLC";
		break;
	case 0xB8BA72:
		cid = "Cynove";
		break;
	case 0xC00D7E:
		cid = "Additech, Inc.";
		break;
	case 0x68784C:
		cid = "Nortel Networks";
		break;
	case 0x6C626D:
		cid = "Micro-Star INT'L CO., LTD";
		break;
	case 0x8841C1:
		cid = "ORBISAT DA AMAZONIA IND E AEROL SA";
		break;
	case 0x18B209:
		cid = "Torrey Pines Logic, Inc";
		break;
	case 0x3018CF:
		cid = "DEOS control systems GmbH";
		break;
	case 0x4CF737:
		cid = "SamJi Electronics Co., Ltd";
		break;
	case 0x40406B:
		cid = "Icomera";
		break;
	case 0x1880CE:
		cid = "Barberry Solutions Ltd";
		break;
	case 0xCC43E3:
		cid = "Trump s.a.";
		break;
	case 0x6C22AB:
		cid = "Ainsworth Game Technology";
		break;
	case 0x3C106F:
		cid = "ALBAHITH TECHNOLOGIES";
		break;
	case 0x7CE044:
		cid = "NEON Inc";
		break;
	case 0x64D02D:
		cid = "Next Generation Integration (NGI)";
		break;
	case 0xA04041:
		cid = "SAMWONFA Co.,Ltd.";
		break;
	case 0x9411DA:
		cid = "ITF Fröschl GmbH";
		break;
	case 0x10E8EE:
		cid = "PhaseSpace";
		break;
	case 0xA47C1F:
		cid = "Cobham plc";
		break;
	case 0x8C1F94:
		cid = "RF Surgical System Inc.";
		break;
	case 0x74A4A7:
		cid = "QRS Music Technologies, Inc.";
		break;
	case 0x8039E5:
		cid = "PATLITE CORPORATION";
		break;
	case 0xBCFFAC:
		cid = "TOPCON CORPORATION";
		break;
	case 0x602A54:
		cid = "CardioTek B.V.";
		break;
	case 0x1C3DE7:
		cid = "Sigma Koki Co.,Ltd.";
		break;
	case 0x482CEA:
		cid = "Motorola Inc Business Light Radios";
		break;
	case 0x70E139:
		cid = "3view Ltd";
		break;
	case 0xAC6123:
		cid = "Drivven, Inc.";
		break;
	case 0x3C04BF:
		cid = "PRAVIS SYSTEMS Co.Ltd.,";
		break;
	case 0x443D21:
		cid = "Nuvolt";
		break;
	case 0x749050:
		cid = "Renesas Electronics Corporation";
		break;
	case 0x7CBB6F:
		cid = "Cosco Electronics Co., Ltd.";
		break;
	case 0x98E165:
		cid = "Accutome";
		break;
	case 0xEC66D1:
		cid = "B&W Group LTD";
		break;
	case 0x385FC3:
		cid = "Yu Jeong System, Co.Ltd";
		break;
	case 0x94857A:
		cid = "Evantage Industries Corp";
		break;
	case 0x4451DB:
		cid = "Raytheon BBN Technologies";
		break;
	case 0x64995D:
		cid = "LGE";
		break;
	case 0x585076:
		cid = "Linear Equipamentos Eletronicos SA";
		break;
	case 0x4083DE:
		cid = "Zebra Technologies Inc";
		break;
	case 0x8897DF:
		cid = "Entrypass Corporation Sdn. Bhd.";
		break;
	case 0x0C15C5:
		cid = "SDTEC Co., Ltd.";
		break;
	case 0x9803A0:
		cid = "ABB n.v. Power Quality Products";
		break;
	case 0xDCFAD5:
		cid = "STRONG Ges.m.b.H.";
		break;
	case 0xD84606:
		cid = "Silicon Valley Global Marketing";
		break;
	case 0xD0E347:
		cid = "Yoga";
		break;
	case 0x84A991:
		cid = "Cyber Trans Japan Co.,Ltd.";
		break;
	case 0xD81C14:
		cid = "Compacta International, Ltd.";
		break;
	case 0x9088A2:
		cid = "IONICS TECHNOLOGY ME LTDA";
		break;
	case 0xB0B8D5:
		cid = "Nanjing Nengrui Auto Equipment CO.,Ltd";
		break;
	case 0x8497B8:
		cid = "Memjet Inc.";
		break;
	case 0xA8556A:
		cid = "Pocketnet Technology Inc.";
		break;
	case 0xB081D8:
		cid = "I-sys Corp";
		break;
	case 0x206AFF:
		cid = "Atlas Elektronik UK Limited";
		break;
	case 0xEC542E:
		cid = "Shanghai XiMei Electronic Technology Co. Ltd";
		break;
	case 0xB88E3A:
		cid = "Infinite Technologies JLT";
		break;
	case 0x74BE08:
		cid = "ATEK Products, LLC";
		break;
	case 0xE0EE1B:
		cid = "Panasonic Automotive Systems Company of America";
		break;
	case 0xE80C38:
		cid = "DAEYOUNG INFORMATION SYSTEM CO., LTD";
		break;
	case 0x68597F:
		cid = "Alcatel Lucent";
		break;
	case 0x2C3068:
		cid = "Pantech Co.,Ltd";
		break;
	case 0x5C4058:
		cid = "Jefferson Audio Video Systems, Inc.";
		break;
	case 0x64317E:
		cid = "Dexin Corporation";
		break;
	case 0xAC9B84:
		cid = "Smak Tecnologia e Automacao";
		break;
	case 0x4C022E:
		cid = "CMR KOREA CO., LTD";
		break;
	case 0x24A42C:
		cid = "KOUKAAM a.s.";
		break;
	case 0x34F39B:
		cid = "WizLAN Ltd.";
		break;
	case 0x74B9EB:
		cid = "JinQianMao Technology Co.,Ltd.";
		break;
	case 0x244597:
		cid = "GEMUE Gebr. Mueller Apparatebau";
		break;
	case 0x30694B:
		cid = "RIM";
		break;
	case 0xAC5135:
		cid = "MPI TECH";
		break;
	case 0x00D38D:
		cid = "Hotel Technology Next Generation";
		break;
	case 0x3C6278:
		cid = "SHENZHEN JETNET TECHNOLOGY CO.,LTD.";
		break;
	case 0x8081A5:
		cid = "TONGQING COMMUNICATION EQUIPMENT (SHENZHEN) Co.,Ltd";
		break;
	case 0xEC8EAD:
		cid = "DLX";
		break;
	case 0xECDE3D:
		cid = "Lamprey Networks, Inc.";
		break;
	case 0x04FE7F:
		cid = "Cisco Systems, Inc";
		break;
	case 0xE8056D:
		cid = "Nortel Networks";
		break;
	case 0x00D11C:
		cid = "ACETEL";
		break;
	case 0x1056CA:
		cid = "Peplink International Ltd.";
		break;
	case 0x44A689:
		cid = "PROMAX ELECTRONICA SA";
		break;
	case 0x10CCDB:
		cid = "AXIMUM PRODUITS ELECTRONIQUES";
		break;
	case 0x6C92BF:
		cid = "Inspur Electronic Information Industry Co.,Ltd.";
		break;
	case 0xE01CEE:
		cid = "Bravo Tech, Inc.";
		break;
	case 0x3C1915:
		cid = "GFI Chrono Time";
		break;
	case 0xEC5C69:
		cid = "MITSUBISHI HEAVY INDUSTRIES MECHATRONICS SYSTEMS,LTD.";
		break;
	case 0x04E548:
		cid = "Cohda Wireless Pty Ltd";
		break;
	case 0x0C1DC2:
		cid = "SeAH Networks";
		break;
	case 0x28CD4C:
		cid = "Individual Computers GmbH";
		break;
	case 0x8C53F7:
		cid = "A&D ENGINEERING CO., LTD.";
		break;
	case 0x781185:
		cid = "NBS Payment Solutions Inc.";
		break;
	case 0x2893FE:
		cid = "Cisco Systems, Inc";
		break;
	case 0x10B7F6:
		cid = "Plastoform Industries Ltd.";
		break;
	case 0x2059A0:
		cid = "Paragon Technologies Inc.";
		break;
	case 0x487119:
		cid = "SGB GROUP LTD.";
		break;
	case 0xE0ABFE:
		cid = "Orb Networks, Inc.";
		break;
	case 0xCCEA1C:
		cid = "DCONWORKS  Co., Ltd";
		break;
	case 0xACE348:
		cid = "MadgeTech, Inc";
		break;
	case 0x687F74:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0xCCB888:
		cid = "AnB Securite s.a.";
		break;
	case 0xCC2218:
		cid = "InnoDigital Co., Ltd.";
		break;
	case 0xB86491:
		cid = "CK Telecom Ltd";
		break;
	case 0x80C862:
		cid = "Openpeak, Inc";
		break;
	case 0xE43593:
		cid = "Hangzhou GoTo technology Co.Ltd";
		break;
	case 0xE0BC43:
		cid = "C2 Microsystems, Inc.";
		break;
	case 0x7884EE:
		cid = "INDRA ESPACIO S.A.";
		break;
	case 0x2C3F3E:
		cid = "Alge-Timing GmbH";
		break;
	case 0xC0CFA3:
		cid = "Creative Electronics & Software, Inc.";
		break;
	case 0xD4823E:
		cid = "Argosy Technologies, Ltd.";
		break;
	case 0x844823:
		cid = "WOXTER TECHNOLOGY Co. Ltd";
		break;
	case 0xD0F0DB:
		cid = "Ericsson";
		break;
	case 0x7C1476:
		cid = "Damall Technologies SAS";
		break;
	case 0xD05875:
		cid = "Active Control Technology Inc.";
		break;
	case 0xD81BFE:
		cid = "TWINLINX CORPORATION";
		break;
	case 0xD46CBF:
		cid = "Goodrich ISR";
		break;
	case 0x5C57C8:
		cid = "Nokia Corporation";
		break;
	case 0x4CC602:
		cid = "Radios, Inc.";
		break;
	case 0x3C05AB:
		cid = "Product Creation Studio";
		break;
	case 0x3C39C3:
		cid = "JW Electronics Co., Ltd.";
		break;
	case 0x547FEE:
		cid = "Cisco Systems, Inc";
		break;
	case 0xA4C2AB:
		cid = "Hangzhou LEAD-IT Information & Technology Co.,Ltd";
		break;
	case 0x48AA5D:
		cid = "Store Electronic Systems";
		break;
	case 0x1062C9:
		cid = "Adatis GmbH & Co. KG";
		break;
	case 0xD8AE90:
		cid = "Itibia Technologies";
		break;
	case 0x904716:
		cid = "RORZE CORPORATION";
		break;
	case 0x28E794:
		cid = "Microtime Computer Inc.";
		break;
	case 0x8894F9:
		cid = "Gemicom Technology, Inc.";
		break;
	case 0x0CA42A:
		cid = "OB Telecom Electronic Technology Co., Ltd";
		break;
	case 0x5850E6:
		cid = "Best Buy Corporation";
		break;
	case 0xAC9A96:
		cid = "Lantiq Deutschland GmbH";
		break;
	case 0xE86CDA:
		cid = "Supercomputers and Neurocomputers Research Center";
		break;
	case 0x24B6B8:
		cid = "FRIEM SPA";
		break;
	case 0xF86ECF:
		cid = "Arcx Inc";
		break;
	case 0x8C8401:
		cid = "Private";
		break;
	case 0x6C7039:
		cid = "Novar GmbH";
		break;
	case 0xA4561B:
		cid = "MCOT Corporation";
		break;
	case 0x80EE73:
		cid = "Shuttle Inc.";
		break;
	case 0x10C73F:
		cid = "Midas Klark Teknik Ltd";
		break;
	case 0x408A9A:
		cid = "TITENG CO., Ltd.";
		break;
	case 0x702B1D:
		cid = "E-Domus International Limited";
		break;
	case 0xF077D0:
		cid = "Xcellen";
		break;
	case 0x785C72:
		cid = "Hioso Technology Co., Ltd.";
		break;
	case 0x94236E:
		cid = "Shenzhen Junlan Electronic Ltd";
		break;
	case 0x88BA7F:
		cid = "Qfiednet Co., Ltd.";
		break;
	case 0xE02636:
		cid = "Nortel Networks";
		break;
	case 0x4456B7:
		cid = "Spawn Labs, Inc";
		break;
	case 0xA09805:
		cid = "OpenVox Communication Co Ltd";
		break;
	case 0x00271D:
		cid = "Comba Telecom Systems (China) Ltd.";
		break;
	case 0x002721:
		cid = "Shenzhen Baoan Fenda Industrial Co., Ltd";
		break;
	case 0xA09A5A:
		cid = "Time Domain";
		break;
	case 0x64A837:
		cid = "Juni Korea Co., Ltd";
		break;
	case 0xB4B5AF:
		cid = "Minsung Electronics";
		break;
	case 0x44568D:
		cid = "PNC Technologies  Co., Ltd.";
		break;
	case 0xACD180:
		cid = "Crexendo Business Solutions, Inc.";
		break;
	case 0xAC8317:
		cid = "Shenzhen Furtunetel Communication Co., Ltd";
		break;
	case 0xE80B13:
		cid = "Akib Systems Taiwan, INC";
		break;
	case 0x44C9A2:
		cid = "Greenwald Industries";
		break;
	case 0x646E6C:
		cid = "Radio Datacom LLC";
		break;
	case 0xE4751E:
		cid = "Getinge Sterilization AB";
		break;
	case 0xF8811A:
		cid = "OVERKIZ";
		break;
	case 0x042BBB:
		cid = "PicoCELA, Inc.";
		break;
	case 0xFC0877:
		cid = "Prentke Romich Company";
		break;
	case 0xECD00E:
		cid = "MiraeRecognition Co., Ltd.";
		break;
	case 0x747E1A:
		cid = "Red Embedded Design Limited";
		break;
	case 0xC47D4F:
		cid = "Cisco Systems, Inc";
		break;
	case 0x4C9EE4:
		cid = "Hanyang Navicom Co.,Ltd.";
		break;
	case 0x3CDF1E:
		cid = "Cisco Systems, Inc";
		break;
	case 0xBCB181:
		cid = "SHARP CORPORATION";
		break;
	case 0x78B81A:
		cid = "INTER SALES A/S";
		break;
	case 0x78192E:
		cid = "NASCENT Technology";
		break;
	case 0x2C0623:
		cid = "Win Leader Inc.";
		break;
	case 0xC82E94:
		cid = "Halfa Enterprise Co., Ltd.";
		break;
	case 0x0C2755:
		cid = "Valuable Techologies Limited";
		break;
	case 0xC038F9:
		cid = "Nokia Danmark A/S";
		break;
	case 0xF46349:
		cid = "Diffon Corporation";
		break;
	case 0x5C8778:
		cid = "Cybertelbridge co.,ltd";
		break;
	case 0x9C5E73:
		cid = "Calibre UK LTD";
		break;
	case 0xF06281:
		cid = "ProCurve Networking by HP";
		break;
	case 0x003A9B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x2C9127:
		cid = "Eintechno Corporation";
		break;
	case 0xC09C92:
		cid = "COBY";
		break;
	case 0x849000:
		cid = "Arnold & Richter Cine Technik";
		break;
	case 0xC87248:
		cid = "Aplicom Oy";
		break;
	case 0x74D850:
		cid = "Evrisko Systems";
		break;
	case 0x6CAC60:
		cid = "Venetex Corp";
		break;
	case 0xDC0265:
		cid = "Meditech Kft";
		break;
	case 0x68A1B7:
		cid = "Honghao Mingchuan Technology (Beijing) CO.,Ltd.";
		break;
	case 0x7CCFCF:
		cid = "Shanghai SEARI Intelligent System Co., Ltd";
		break;
	case 0xEC3091:
		cid = "Cisco Systems, Inc";
		break;
	case 0x3032D4:
		cid = "Hanilstm Co., Ltd.";
		break;
	case 0x0026EE:
		cid = "TKM GmbH";
		break;
	case 0x0026E7:
		cid = "Shanghai ONLAN Communication Tech. Co., Ltd.";
		break;
	case 0x0026E1:
		cid = "Stanford University, OpenFlow Group";
		break;
	case 0x0026DB:
		cid = "Ionics EMS Inc.";
		break;
	case 0x0026CE:
		cid = "Kozumi USA Corp.";
		break;
	case 0x0026D5:
		cid = "Ory Solucoes em Comercio de Informatica Ltda.";
		break;
	case 0x0026C8:
		cid = "System Sensor";
		break;
	case 0x002711:
		cid = "LanPro Inc";
		break;
	case 0x00270D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002707:
		cid = "Lift Complex DS, JSC";
		break;
	case 0x002700:
		cid = "Shenzhen Siglent Technology Co., Ltd.";
		break;
	case 0x0026FA:
		cid = "BandRich Inc.";
		break;
	case 0x0026F4:
		cid = "Nesslab";
		break;
	case 0x0025D7:
		cid = "CEDO";
		break;
	case 0x0025D2:
		cid = "InpegVision Co., Ltd";
		break;
	case 0x0025D1:
		cid = "Eastern Asia Technology Limited";
		break;
	case 0x0025CB:
		cid = "Reiner SCT";
		break;
	case 0x0025BF:
		cid = "Wireless Cables Inc.";
		break;
	case 0x0025B1:
		cid = "Maya-Creation Corporation";
		break;
	case 0x0025B8:
		cid = "Agile Communications, Inc.";
		break;
	case 0x0025B2:
		cid = "MBDA Deutschland GmbH";
		break;
	case 0x0025AC:
		cid = "I-Tech corporation";
		break;
	case 0x0026C2:
		cid = "SCDI Co. LTD";
		break;
	case 0x0026BC:
		cid = "General Jack Technology Ltd.";
		break;
	case 0x0026B4:
		cid = "Ford Motor Company";
		break;
	case 0x0026AE:
		cid = "Wireless Measurement Ltd";
		break;
	case 0x0026AA:
		cid = "Kenmec Mechanical Engineering Co., Ltd.";
		break;
	case 0x0026A4:
		cid = "Novus Produtos Eletronicos Ltda";
		break;
	case 0x002698:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00269D:
		cid = "M2Mnet Co., Ltd.";
		break;
	case 0x00268B:
		cid = "Guangzhou Escene Computer Technology Limited";
		break;
	case 0x002685:
		cid = "Digital Innovation";
		break;
	case 0x002678:
		cid = "Logic Instrument SA";
		break;
	case 0x002672:
		cid = "AAMP of America";
		break;
	case 0x00266B:
		cid = "SHINE UNION ENTERPRISE LIMITED";
		break;
	case 0x002666:
		cid = "EFM Networks";
		break;
	case 0x002665:
		cid = "ProtectedLogic Corporation";
		break;
	case 0x002651:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002652:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002646:
		cid = "SHENYANG TONGFANG MULTIMEDIA TECHNOLOGY COMPANY LIMITED";
		break;
	case 0x002640:
		cid = "Baustem Broadband Technologies, Ltd.";
		break;
	case 0x00263A:
		cid = "Digitec Systems";
		break;
	case 0x002634:
		cid = "Infineta Systems, Inc";
		break;
	case 0x002633:
		cid = "MIR - Medical International Research";
		break;
	case 0x00262E:
		cid = "Chengdu Jiuzhou Electronic Technology Inc";
		break;
	case 0x002627:
		cid = "Truesell";
		break;
	case 0x002621:
		cid = "InteliCloud Technology Inc.";
		break;
	case 0x00261B:
		cid = "LAUREL BANK MACHINES CO., LTD.";
		break;
	case 0x002614:
		cid = "KTNF";
		break;
	case 0x00260E:
		cid = "Ablaze Systems, LLC";
		break;
	case 0x002602:
		cid = "SMART Temps LLC";
		break;
	case 0x002601:
		cid = "Cutera Inc";
		break;
	case 0x0025F7:
		cid = "Ansaldo STS USA";
		break;
	case 0x0025FC:
		cid = "ENDA ENDUSTRIYEL ELEKTRONIK LTD. STI.";
		break;
	case 0x0025ED:
		cid = "NuVo Technologies LLC";
		break;
	case 0x0025EE:
		cid = "Avtex Ltd";
		break;
	case 0x0025E8:
		cid = "Idaho Technology";
		break;
	case 0x0025E3:
		cid = "Hanshinit Inc.";
		break;
	case 0x0025DE:
		cid = "Probits Co., LTD.";
		break;
	case 0x002579:
		cid = "J & F Labs";
		break;
	case 0x00257E:
		cid = "NEW POS Technology Limited";
		break;
	case 0x002572:
		cid = "Nemo-Q International AB";
		break;
	case 0x00256B:
		cid = "ATENIX E.E. s.r.l.";
		break;
	case 0x00256C:
		cid = "Azimut Production Association JSC";
		break;
	case 0x00255F:
		cid = "SenTec AG";
		break;
	case 0x00255A:
		cid = "Tantalus Systems Corp.";
		break;
	case 0x002559:
		cid = "Syphan Technologies Ltd";
		break;
	case 0x0025A5:
		cid = "Walnut Media Network";
		break;
	case 0x00259F:
		cid = "TechnoDigital Technologies GmbH";
		break;
	case 0x002599:
		cid = "Hedon e.d. B.V.";
		break;
	case 0x002592:
		cid = "Guangzhou Shirui Electronic Co., Ltd";
		break;
	case 0x00258D:
		cid = "Haier";
		break;
	case 0x002588:
		cid = "Genie Industries, Inc.";
		break;
	case 0x002583:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00254C:
		cid = "Videon Central, Inc.";
		break;
	case 0x002536:
		cid = "Oki Electric Industry Co., Ltd.";
		break;
	case 0x00253D:
		cid = "DRS Consolidated Controls";
		break;
	case 0x002540:
		cid = "Quasar Technologies, Inc.";
		break;
	case 0x002533:
		cid = "WITTENSTEIN AG";
		break;
	case 0x00252C:
		cid = "Entourage Systems, Inc.";
		break;
	case 0x002502:
		cid = "NaturalPoint";
		break;
	case 0x0024FB:
		cid = "Private";
		break;
	case 0x0024F6:
		cid = "MIYOSHI ELECTRONICS CORPORATION";
		break;
	case 0x0024EA:
		cid = "iris-GmbH infrared & intelligent sensors";
		break;
	case 0x0024E3:
		cid = "CAO Group";
		break;
	case 0x002527:
		cid = "Bitrode Corp.";
		break;
	case 0x002524:
		cid = "Lightcomm Technology Co., Ltd";
		break;
	case 0x00251F:
		cid = "ZYNUS VISION INC.";
		break;
	case 0x00251A:
		cid = "Psiber Data Systems Inc.";
		break;
	case 0x002515:
		cid = "SFR";
		break;
	case 0x00250E:
		cid = "gt german telematics gmbh";
		break;
	case 0x002507:
		cid = "ASTAK Inc.";
		break;
	case 0x002509:
		cid = "SHARETRONIC Group LTD";
		break;
	case 0x002437:
		cid = "Motorola - BSG";
		break;
	case 0x00243C:
		cid = "S.A.A.A.";
		break;
	case 0x002430:
		cid = "Ruby Tech Corp.";
		break;
	case 0x0023FB:
		cid = "IP Datatel, LLC.";
		break;
	case 0x0023F3:
		cid = "Glocom, Inc.";
		break;
	case 0x0023EF:
		cid = "Zuend Systemtechnik AG";
		break;
	case 0x0023E9:
		cid = "F5 Networks, Inc.";
		break;
	case 0x0023E3:
		cid = "Microtronic AG";
		break;
	case 0x0023E2:
		cid = "SEA Signalisation";
		break;
	case 0x0023DD:
		cid = "ELGIN S.A.";
		break;
	case 0x0023D0:
		cid = "Uniloc USA Inc.";
		break;
	case 0x0023CA:
		cid = "Behind The Set, LLC";
		break;
	case 0x0024B0:
		cid = "ESAB AB";
		break;
	case 0x0024A9:
		cid = "Ag Leader Technology";
		break;
	case 0x0024A2:
		cid = "Hong Kong Middleware Technology Limited";
		break;
	case 0x0024A4:
		cid = "Siklu Communication";
		break;
	case 0x00249D:
		cid = "NES Technology Inc.";
		break;
	case 0x00248A:
		cid = "Kaga Electronics Co., Ltd.";
		break;
	case 0x00248F:
		cid = "DO-MONIX";
		break;
	case 0x002496:
		cid = "Ginzinger electronic systems";
		break;
	case 0x002477:
		cid = "Tibbo Technology";
		break;
	case 0x002470:
		cid = "AUROTECH ultrasound AS.";
		break;
	case 0x002472:
		cid = "ReDriven Power Inc.";
		break;
	case 0x00246B:
		cid = "Covia, Inc.";
		break;
	case 0x002464:
		cid = "Bridge Technologies Co AS";
		break;
	case 0x00245F:
		cid = "Vine Telecom CO.,Ltd.";
		break;
	case 0x002420:
		cid = "NetUP Inc.";
		break;
	case 0x002426:
		cid = "NOHMI BOSAI LTD.";
		break;
	case 0x00241A:
		cid = "Red Beetle Inc.";
		break;
	case 0x002413:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00240D:
		cid = "OnePath Networks LTD.";
		break;
	case 0x00240E:
		cid = "Inventec Besta Co., Ltd.";
		break;
	case 0x002407:
		cid = "TELEM SAS";
		break;
	case 0x002400:
		cid = "Nortel Networks";
		break;
	case 0x0024D0:
		cid = "Shenzhen SOGOOD Industry CO.,LTD.";
		break;
	case 0x0024D5:
		cid = "Winward Industrial Limited";
		break;
	case 0x0024C9:
		cid = "Broadband Solutions Group";
		break;
	case 0x0024C4:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0024BF:
		cid = "CIAT";
		break;
	case 0x0024B5:
		cid = "Nortel Networks";
		break;
	case 0x00245A:
		cid = "Nanjing Panda Electronics Company Limited";
		break;
	case 0x002453:
		cid = "Initra d.o.o.";
		break;
	case 0x00244D:
		cid = "Hokkaido Electronics Corporation";
		break;
	case 0x002452:
		cid = "Silicon Software GmbH";
		break;
	case 0x002446:
		cid = "MMB Research Inc.";
		break;
	case 0x002441:
		cid = "Wanzl Metallwarenfabrik GmbH";
		break;
	case 0x002368:
		cid = "Zebra Technologies Inc";
		break;
	case 0x00236F:
		cid = "DAQ System";
		break;
	case 0x002362:
		cid = "Goldline Controls";
		break;
	case 0x002361:
		cid = "Unigen Corporation";
		break;
	case 0x00235C:
		cid = "Aprius, Inc.";
		break;
	case 0x002355:
		cid = "Kinco Automation(Shanghai) Ltd.";
		break;
	case 0x00234F:
		cid = "Luminous Power Technologies Pvt. Ltd.";
		break;
	case 0x002350:
		cid = "LynTec";
		break;
	case 0x002349:
		cid = "Helmholtz Centre Berlin for Material and Energy";
		break;
	case 0x002244:
		cid = "Chengdu Linkon Communications Device Co., Ltd";
		break;
	case 0x00224F:
		cid = "Byzoro Networks Ltd.";
		break;
	case 0x002248:
		cid = "Microsoft Corporation";
		break;
	case 0x00223E:
		cid = "IRTrans GmbH";
		break;
	case 0x002239:
		cid = "Indiana Life Sciences Incorporated";
		break;
	case 0x002232:
		cid = "Design Design Technology Ltd";
		break;
	case 0x00222C:
		cid = "Ceton Corp";
		break;
	case 0x00230E:
		cid = "Gorba AG";
		break;
	case 0x002307:
		cid = "FUTURE INNOVATION TECH CO.,LTD";
		break;
	case 0x002302:
		cid = "Cobalt Digital, Inc.";
		break;
	case 0x0022EB:
		cid = "Data Respons A/S";
		break;
	case 0x0022EC:
		cid = "IDEALBT TECHNOLOGY CORPORATION";
		break;
	case 0x0022F1:
		cid = "Private";
		break;
	case 0x00239E:
		cid = "Jiangsu Lemote Technology Corporation Limited";
		break;
	case 0x002398:
		cid = "Vutlan sro";
		break;
	case 0x002384:
		cid = "GGH Engineering s.r.l.";
		break;
	case 0x002342:
		cid = "Coffee Equipment Company";
		break;
	case 0x002336:
		cid = "METEL s.r.o.";
		break;
	case 0x002330:
		cid = "DIZIPIA, INC.";
		break;
	case 0x00232C:
		cid = "Senticare";
		break;
	case 0x002320:
		cid = "Nicira Networks";
		break;
	case 0x00231D:
		cid = "Deltacom Electronics Ltd";
		break;
	case 0x00231E:
		cid = "Cezzer Multimedia Technologies";
		break;
	case 0x0022B8:
		cid = "Norcott";
		break;
	case 0x0022B7:
		cid = "GSS Grundig SAT-Systems GmbH";
		break;
	case 0x0022B2:
		cid = "4RF Communications Ltd";
		break;
	case 0x0022AB:
		cid = "Shenzhen Turbosight Technology Ltd";
		break;
	case 0x0022A6:
		cid = "Sony Computer Entertainment America";
		break;
	case 0x00229F:
		cid = "Sensys Traffic AB";
		break;
	case 0x0022E5:
		cid = "Fisher-Rosemount Systems Inc.";
		break;
	case 0x0022DE:
		cid = "OPPO Digital, Inc.";
		break;
	case 0x0022D9:
		cid = "Fortex Industrial Ltd.";
		break;
	case 0x0022D2:
		cid = "All Earth Comércio de Eletrônicos LTDA.";
		break;
	case 0x0022CC:
		cid = "SciLog, Inc.";
		break;
	case 0x0022C8:
		cid = "Applied Instruments B.V.";
		break;
	case 0x0022BE:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00228C:
		cid = "Photon Europe GmbH";
		break;
	case 0x002286:
		cid = "ASTRON";
		break;
	case 0x002285:
		cid = "NOMUS COMM SYSTEMS";
		break;
	case 0x002280:
		cid = "A2B Electronics AB";
		break;
	case 0x002276:
		cid = "Triple EYE B.V.";
		break;
	case 0x00227B:
		cid = "Apogee Labs, Inc.";
		break;
	case 0x002262:
		cid = "BEP Marine";
		break;
	case 0x00226C:
		cid = "LinkSprite Technologies, Inc.";
		break;
	case 0x00225E:
		cid = "Uwin Technologies Co.,LTD";
		break;
	case 0x002258:
		cid = "Taiyo Yuden Co., Ltd.";
		break;
	case 0x0023C3:
		cid = "LogMeIn, Inc.";
		break;
	case 0x0023BD:
		cid = "Digital Ally, Inc.";
		break;
	case 0x0023B7:
		cid = "Q-Light Co., Ltd.";
		break;
	case 0x0023B1:
		cid = "Longcheer Technology (Singapore) Pte Ltd";
		break;
	case 0x0023B0:
		cid = "COMXION Technology Inc.";
		break;
	case 0x0023AB:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0023A4:
		cid = "New Concepts Development Corp.";
		break;
	case 0x001FC0:
		cid = "Control Express Finland Oy";
		break;
	case 0x001FBB:
		cid = "Xenatech Co.,LTD";
		break;
	case 0x001FB4:
		cid = "SmartShare Systems";
		break;
	case 0x001FAD:
		cid = "Brown Innovations, Inc";
		break;
	case 0x001FAF:
		cid = "NextIO, Inc.";
		break;
	case 0x001FAE:
		cid = "Blick South Africa (Pty) Ltd";
		break;
	case 0x001FA8:
		cid = "Smart Energy Instruments Inc.";
		break;
	case 0x001FA3:
		cid = "T&W Electronics(Shenzhen)Co.,Ltd.";
		break;
	case 0x002142:
		cid = "Advanced Control Systems doo";
		break;
	case 0x002140:
		cid = "EN Technologies Inc.";
		break;
	case 0x002138:
		cid = "Cepheid";
		break;
	case 0x00212E:
		cid = "dresden-elektronik";
		break;
	case 0x002128:
		cid = "Oracle Corporation";
		break;
	case 0x002122:
		cid = "Chip-pro Ltd.";
		break;
	case 0x00211B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002115:
		cid = "PHYWE Systeme GmbH & Co. KG";
		break;
	case 0x002116:
		cid = "Transcon Electronic Systems, spol. s r. o.";
		break;
	case 0x00210F:
		cid = "Cernium Corp";
		break;
	case 0x00210B:
		cid = "GEMINI TRAZE RFID PVT. LTD.";
		break;
	case 0x00210C:
		cid = "Cymtec Systems, Inc.";
		break;
	case 0x001FFC:
		cid = "Riccius+Sohn GmbH";
		break;
	case 0x001FF7:
		cid = "Nakajima All Precision Co., Ltd.";
		break;
	case 0x00216E:
		cid = "Function ATI (Huizhou) Telecommunications Co., Ltd.";
		break;
	case 0x002168:
		cid = "iVeia, LLC";
		break;
	case 0x002161:
		cid = "Yournet Inc.";
		break;
	case 0x002155:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00214E:
		cid = "GS Yuasa Power Supply Ltd.";
		break;
	case 0x002149:
		cid = "China Daheng Group ,Inc.";
		break;
	case 0x001FF0:
		cid = "Audio Partnership";
		break;
	case 0x001FE9:
		cid = "Printrex, Inc.";
		break;
	case 0x001FEB:
		cid = "Trio Datacom Pty Ltd";
		break;
	case 0x001FEA:
		cid = "Applied Media Technologies Corporation";
		break;
	case 0x001FDD:
		cid = "GDI LLC";
		break;
	case 0x001FD8:
		cid = "A-TRUST COMPUTER CORPORATION";
		break;
	case 0x001FD3:
		cid = "RIVA Networks Inc.";
		break;
	case 0x001FCE:
		cid = "QTECH LLC";
		break;
	case 0x00219D:
		cid = "Adesys BV";
		break;
	case 0x0021A1:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002198:
		cid = "Thai Radio Co, LTD";
		break;
	case 0x002193:
		cid = "Videofon MV";
		break;
	case 0x00218D:
		cid = "AP Router Ind. Eletronica LTDA";
		break;
	case 0x00218E:
		cid = "MEKICS CO., LTD.";
		break;
	case 0x002187:
		cid = "Imacs GmbH";
		break;
	case 0x002181:
		cid = "Si2 Microsystems Limited";
		break;
	case 0x00217B:
		cid = "Bastec AB";
		break;
	case 0x002174:
		cid = "AvaLAN Wireless";
		break;
	case 0x0021F8:
		cid = "Enseo, Inc.";
		break;
	case 0x0021F3:
		cid = "Si14 SpA";
		break;
	case 0x0021EC:
		cid = "Solutronic GmbH";
		break;
	case 0x0021E6:
		cid = "Starlight Video Limited";
		break;
	case 0x0021E0:
		cid = "CommAgility Ltd";
		break;
	case 0x0021D3:
		cid = "BOCOM SECURITY(ASIA PACIFIC) LIMITED";
		break;
	case 0x0021D4:
		cid = "Vollmer Werke GmbH";
		break;
	case 0x0021D9:
		cid = "SEKONIC CORPORATION";
		break;
	case 0x0021CD:
		cid = "LiveTV";
		break;
	case 0x0021C7:
		cid = "Russound";
		break;
	case 0x0021C6:
		cid = "CSJ Global, Inc.";
		break;
	case 0x0021C1:
		cid = "ABB Oy / Medium Voltage Products";
		break;
	case 0x0021B4:
		cid = "APRO MEDIA CO., LTD";
		break;
	case 0x0021AE:
		cid = "ALCATEL-LUCENT FRANCE - WTD";
		break;
	case 0x0021A2:
		cid = "EKE-Electronics Ltd.";
		break;
	case 0x0021A7:
		cid = "Hantle System Co., Ltd.";
		break;
	case 0x00221F:
		cid = "eSang Technologies Co., Ltd.";
		break;
	case 0x002226:
		cid = "Avaak, Inc.";
		break;
	case 0x00221A:
		cid = "Audio Precision";
		break;
	case 0x002213:
		cid = "PCI CORPORATION";
		break;
	case 0x00220D:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00220C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x002202:
		cid = "Excito Elektronik i Skåne AB";
		break;
	case 0x0021F9:
		cid = "WIRECOM Technologies";
		break;
	case 0x001F40:
		cid = "Speakercraft Inc.";
		break;
	case 0x001F38:
		cid = "POSITRON";
		break;
	case 0x001F3D:
		cid = "Qbit GmbH";
		break;
	case 0x001F37:
		cid = "Genesis I&C";
		break;
	case 0x001F2A:
		cid = "ACCM";
		break;
	case 0x001F31:
		cid = "Radiocomp";
		break;
	case 0x001F25:
		cid = "MBS GmbH";
		break;
	case 0x001F1E:
		cid = "Astec Technology Co., Ltd";
		break;
	case 0x001F17:
		cid = "IDX Company, Ltd.";
		break;
	case 0x001F18:
		cid = "Hakusan.Mfg.Co,.Ltd";
		break;
	case 0x001E61:
		cid = "ITEC GmbH";
		break;
	case 0x001E5C:
		cid = "RB GeneralEkonomik";
		break;
	case 0x001E5B:
		cid = "Unitron Company, Inc.";
		break;
	case 0x001E55:
		cid = "COWON SYSTEMS,Inc.";
		break;
	case 0x001E4E:
		cid = "DAKO EDV-Ingenieur- und Systemhaus GmbH";
		break;
	case 0x001E49:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001E44:
		cid = "SANTEC";
		break;
	case 0x001E3F:
		cid = "TrellisWare Technologies, Inc.";
		break;
	case 0x001E38:
		cid = "Bluecard Software Technology Co., Ltd.";
		break;
	case 0x001E31:
		cid = "INFOMARK CO.,LTD.";
		break;
	case 0x001E32:
		cid = "Zensys";
		break;
	case 0x001E2C:
		cid = "CyVerse Corporation";
		break;
	case 0x001E20:
		cid = "Intertain Inc.";
		break;
	case 0x001E19:
		cid = "GTRI";
		break;
	case 0x001E0F:
		cid = "Briot International";
		break;
	case 0x001EE4:
		cid = "ACS Solutions France";
		break;
	case 0x001EEB:
		cid = "Talk-A-Phone Co.";
		break;
	case 0x001EDF:
		cid = "Master Industrialization Center Kista";
		break;
	case 0x001EDA:
		cid = "Wesemann Elektrotechniek B.V.";
		break;
	case 0x001ED5:
		cid = "Tekon-Automatics";
		break;
	case 0x001ECE:
		cid = "BISA Technologies (Hong Kong) Limited";
		break;
	case 0x001EC8:
		cid = "Rapid Mobile (Pty) Ltd";
		break;
	case 0x001EBB:
		cid = "BLUELIGHT TECHNOLOGY INC.";
		break;
	case 0x001EB6:
		cid = "TAG Heuer SA";
		break;
	case 0x001EB5:
		cid = "Ever Sparkle Technologies Ltd";
		break;
	case 0x001EAF:
		cid = "Ophir Optronics Ltd";
		break;
	case 0x001EAA:
		cid = "E-Senza Technologies GmbH";
		break;
	case 0x001E9D:
		cid = "Recall Technologies, Inc.";
		break;
	case 0x001E98:
		cid = "GreenLine Communications";
		break;
	case 0x001E97:
		cid = "Medium Link System Technology CO., LTD,";
		break;
	case 0x001E91:
		cid = "KIMIN Electronic Co., Ltd.";
		break;
	case 0x001E8A:
		cid = "eCopy, Inc";
		break;
	case 0x001E85:
		cid = "Lagotek Corporation";
		break;
	case 0x001E78:
		cid = "Owitek Technology Ltd.,";
		break;
	case 0x001E6D:
		cid = "IT R&D Center";
		break;
	case 0x001E6E:
		cid = "Shenzhen First Mile Communications Ltd";
		break;
	case 0x001F71:
		cid = "xG Technology, Inc.";
		break;
	case 0x001F72:
		cid = "QingDao Hiphone Technology Co,.Ltd";
		break;
	case 0x001F76:
		cid = "AirLogic Systems Inc.";
		break;
	case 0x001F6C:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001F60:
		cid = "COMPASS SYSTEMS CORP.";
		break;
	case 0x001F65:
		cid = "KOREA ELECTRIC TERMINAL CO., LTD.";
		break;
	case 0x001F5F:
		cid = "Blatand GmbH";
		break;
	case 0x001F59:
		cid = "Kronback Tracers";
		break;
	case 0x001F4D:
		cid = "Segnetics LLC";
		break;
	case 0x001F52:
		cid = "UVT Unternehmensberatung fur Verkehr und Technik GmbH";
		break;
	case 0x001F03:
		cid = "NUM AG";
		break;
	case 0x001EFE:
		cid = "LEVEL s.r.o.";
		break;
	case 0x001F04:
		cid = "Granch Ltd.";
		break;
	case 0x001EF2:
		cid = "Micro Motion Inc";
		break;
	case 0x001EF7:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001EF1:
		cid = "Servimat";
		break;
	case 0x001F9E:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001F97:
		cid = "BERTANA srl";
		break;
	case 0x001F8B:
		cid = "Cache IQ";
		break;
	case 0x001F84:
		cid = "Gigle Semiconductor";
		break;
	case 0x001F7F:
		cid = "Phabrix Limited";
		break;
	case 0x001CFF:
		cid = "Napera Networks Inc";
		break;
	case 0x001CF8:
		cid = "Parade Technologies, Ltd.";
		break;
	case 0x001CF1:
		cid = "SUPoX Technology Co. , LTD.";
		break;
	case 0x001CF2:
		cid = "Tenlon Technology Co.,Ltd.";
		break;
	case 0x001CEC:
		cid = "Mobilesoft (Aust.) Pty Ltd";
		break;
	case 0x001CE7:
		cid = "Rocon PLC Research Centre";
		break;
	case 0x001CE2:
		cid = "Attero Tech, LLC.";
		break;
	case 0x001CDB:
		cid = "CARPOINT CO.,LTD";
		break;
	case 0x001CD5:
		cid = "ZeeVee, Inc.";
		break;
	case 0x001CCF:
		cid = "LIMETEK";
		break;
	case 0x001E08:
		cid = "Centec Networks Inc";
		break;
	case 0x001E03:
		cid = "LiComm Co., Ltd.";
		break;
	case 0x001DFC:
		cid = "KSIC";
		break;
	case 0x001DF5:
		cid = "Sunshine Co,LTD";
		break;
	case 0x001DF0:
		cid = "Vidient Systems, Inc.";
		break;
	case 0x001DDC:
		cid = "HangZhou DeChangLong Tech&Info Co.,Ltd";
		break;
	case 0x001DE4:
		cid = "Visioneered Image Systems";
		break;
	case 0x001DE2:
		cid = "Radionor Communications";
		break;
	case 0x001CC8:
		cid = "INDUSTRONIC Industrie-Electronic GmbH & Co. KG";
		break;
	case 0x001CBC:
		cid = "CastGrabber, LLC";
		break;
	case 0x001CB2:
		cid = "BPT SPA";
		break;
	case 0x001CA6:
		cid = "Win4NET";
		break;
	case 0x001CAB:
		cid = "Meyer Sound Laboratories, Inc.";
		break;
	case 0x001CAC:
		cid = "Qniq Technology Corp.";
		break;
	case 0x001CA1:
		cid = "AKAMAI TECHNOLOGIES, INC.";
		break;
	case 0x001C95:
		cid = "Opticomm Corporation";
		break;
	case 0x001C90:
		cid = "Empacket Corporation";
		break;
	case 0x001C8F:
		cid = "Advanced Electronic Design, Inc.";
		break;
	case 0x001C89:
		cid = "Force Communications, Inc.";
		break;
	case 0x001C7F:
		cid = "Check Point Software Technologies";
		break;
	case 0x001C75:
		cid = "Segnet Ltd.";
		break;
	case 0x001C6E:
		cid = "Newbury Networks, Inc.";
		break;
	case 0x001C69:
		cid = "Packet Vision Ltd";
		break;
	case 0x001DA5:
		cid = "WB Electronics";
		break;
	case 0x001DA6:
		cid = "Media Numerics Limited";
		break;
	case 0x001DA0:
		cid = "Heng Yu Electronic Manufacturing Company Limited";
		break;
	case 0x001D99:
		cid = "Cyan Optic, Inc.";
		break;
	case 0x001D94:
		cid = "Climax Technology Co., Ltd";
		break;
	case 0x001D93:
		cid = "Modacom";
		break;
	case 0x001D8D:
		cid = "Raytek GmbH";
		break;
	case 0x001D86:
		cid = "Shinwa Industries(China) Ltd.";
		break;
	case 0x001DC9:
		cid = "GainSpan Corp.";
		break;
	case 0x001DC2:
		cid = "XORTEC OY";
		break;
	case 0x001DBD:
		cid = "Versamed Inc.";
		break;
	case 0x001DB6:
		cid = "BestComm Networks, Inc.";
		break;
	case 0x001DB0:
		cid = "FuJian HengTong Information Technology Co.,Ltd";
		break;
	case 0x001DAC:
		cid = "Gigamon Systems LLC";
		break;
	case 0x001D81:
		cid = "GUANGZHOU GATEWAY ELECTRONICS CO., LTD";
		break;
	case 0x001D69:
		cid = "Knorr-Bremse IT-Services GmbH";
		break;
	case 0x001D70:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001D77:
		cid = "NSGate";
		break;
	case 0x001D7C:
		cid = "ABE Elettronica S.p.A.";
		break;
	case 0x001D64:
		cid = "Adam Communications Systems Int Ltd";
		break;
	case 0x001D5D:
		cid = "Control Dynamics Pty. Ltd.";
		break;
	case 0x001D21:
		cid = "Alcad SL";
		break;
	case 0x001D1C:
		cid = "Gennet s.a.";
		break;
	case 0x001D17:
		cid = "Digital Sky Corporation";
		break;
	case 0x001D12:
		cid = "ROHM CO., LTD.";
		break;
	case 0x001D11:
		cid = "Analogue & Micro Ltd";
		break;
	case 0x001D0B:
		cid = "Power Standards Lab";
		break;
	case 0x001D04:
		cid = "Zipit Wireless, Inc.";
		break;
	case 0x001D58:
		cid = "CQ Inc";
		break;
	case 0x001D57:
		cid = "CAETEC Messtechnik";
		break;
	case 0x001D51:
		cid = "Babcock & Wilcox Power Generation Group, Inc";
		break;
	case 0x001D47:
		cid = "Covote GmbH & Co KG";
		break;
	case 0x001D40:
		cid = " Intel �?GE Care Innovations LLC";
		break;
	case 0x001D34:
		cid = "SYRIS Technology Corp";
		break;
	case 0x001D2D:
		cid = "Pylone, Inc.";
		break;
	case 0x001B2A:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001B1D:
		cid = "Phoenix International Co., Ltd";
		break;
	case 0x001B22:
		cid = "Palit Microsystems ( H.K.) Ltd.";
		break;
	case 0x001B1B:
		cid = "Siemens AG,";
		break;
	case 0x001B16:
		cid = "Celtro Ltd.";
		break;
	case 0x001B0A:
		cid = "Intelligent Distributed Controls Ltd";
		break;
	case 0x001B0F:
		cid = "Petratec";
		break;
	case 0x001AFE:
		cid = "SOFACREAL";
		break;
	case 0x001B03:
		cid = "Action Technology (SZ) Co., Ltd";
		break;
	case 0x001B68:
		cid = "Modnnet Co., Ltd";
		break;
	case 0x001B62:
		cid = "JHT Optoelectronics Co.,Ltd.";
		break;
	case 0x001B61:
		cid = "Digital Acoustics, LLC";
		break;
	case 0x001B5C:
		cid = "Azuretec Co., Ltd.";
		break;
	case 0x001B55:
		cid = "Hurco Automation Ltd.";
		break;
	case 0x001B50:
		cid = "Nizhny Novgorod Factory named after M.Frunze, FSUE (NZiF)";
		break;
	case 0x001B44:
		cid = "SanDisk Corporation";
		break;
	case 0x001B49:
		cid = "Roberts Radio limited";
		break;
	case 0x001B42:
		cid = "Wise & Blue";
		break;
	case 0x001B3D:
		cid = "EuroTel Spa";
		break;
	case 0x001B36:
		cid = "Tsubata Engineering Co.,Ltd. (Head Office)";
		break;
	case 0x001B31:
		cid = "Neural Image. Co. Ltd.";
		break;
	case 0x001C56:
		cid = "Pado Systems, Inc.";
		break;
	case 0x001C5B:
		cid = "Chubb Electronic Security Systems Ltd";
		break;
	case 0x001C5D:
		cid = "Leica Microsystems";
		break;
	case 0x001C5C:
		cid = "Integrated Medical Systems, Inc.";
		break;
	case 0x001C51:
		cid = "Celeno Communications";
		break;
	case 0x001C52:
		cid = "VISIONEE SRL";
		break;
	case 0x001C45:
		cid = "Chenbro Micom Co., Ltd.";
		break;
	case 0x001C4C:
		cid = "Petrotest Instruments";
		break;
	case 0x001C39:
		cid = "S Netsystems Inc.";
		break;
	case 0x001C40:
		cid = "VDG-Security bv";
		break;
	case 0x001C32:
		cid = "Telian Corporation";
		break;
	case 0x001AC7:
		cid = "UNIPOINT";
		break;
	case 0x001AC2:
		cid = "YEC Co.,Ltd.";
		break;
	case 0x001AB8:
		cid = "Anseri Corporation";
		break;
	case 0x001ABD:
		cid = "Impatica Inc.";
		break;
	case 0x001AB1:
		cid = "Asia Pacific Satellite Industries Co., Ltd.";
		break;
	case 0x001B8C:
		cid = "JMicron Technology Corp.";
		break;
	case 0x001B91:
		cid = "EFKON AG";
		break;
	case 0x001B87:
		cid = "Deepsound Tech. Co., Ltd";
		break;
	case 0x001B82:
		cid = "Taiwan Semiconductor Co., Ltd.";
		break;
	case 0x001B7B:
		cid = "The Tintometer Ltd";
		break;
	case 0x001B74:
		cid = "MiraLink Corporation";
		break;
	case 0x001B6F:
		cid = "Teletrak Ltd";
		break;
	case 0x001AFC:
		cid = "ModusLink Corporation";
		break;
	case 0x001AF2:
		cid = "Dynavisions Schweiz AG";
		break;
	case 0x001AF7:
		cid = "dataschalt e+a GmbH";
		break;
	case 0x001AED:
		cid = "INCOTEC GmbH";
		break;
	case 0x001ADF:
		cid = "Interactivetv Pty Limited";
		break;
	case 0x001AE1:
		cid = "EDGE ACCESS INC";
		break;
	case 0x001AE6:
		cid = "Atlanta Advanced Communications Holdings Limited";
		break;
	case 0x001AD3:
		cid = "Vamp Ltd.";
		break;
	case 0x001ADA:
		cid = "Biz-2-Me Inc.";
		break;
	case 0x001ACE:
		cid = "YUPITERU CORPORATION";
		break;
	case 0x001BC8:
		cid = "MIURA CO.,LTD";
		break;
	case 0x001BC1:
		cid = "HOLUX Technology, Inc.";
		break;
	case 0x001BB7:
		cid = "Alta Heights Technology Corp.";
		break;
	case 0x001BAB:
		cid = "Telchemy, Incorporated";
		break;
	case 0x001BB0:
		cid = "BHARAT ELECTRONICS";
		break;
	case 0x001BA4:
		cid = "S.A.E Afikim";
		break;
	case 0x001B9F:
		cid = "Calyptech Pty Ltd";
		break;
	case 0x001B9D:
		cid = "Novus Security Sp. z o.o.";
		break;
	case 0x001BF6:
		cid = "CONWISE Technology Corporation Ltd.";
		break;
	case 0x001BF1:
		cid = "Nanjing SilverNet Software Co., Ltd.";
		break;
	case 0x001BEC:
		cid = "Netio Technologies Co., Ltd";
		break;
	case 0x001BE7:
		cid = "Postek Electronics Co., Ltd.";
		break;
	case 0x001BE0:
		cid = "TELENOT ELECTRONIC GmbH";
		break;
	case 0x001BDB:
		cid = "Valeo VECS";
		break;
	case 0x001BD4:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001BCD:
		cid = "DAVISCOMMS (S) PTE LTD";
		break;
	case 0x001C2D:
		cid = "FlexRadio Systems";
		break;
	case 0x001C1C:
		cid = "Center Communication Systems GmbH";
		break;
	case 0x001C21:
		cid = "Nucsafe Inc.";
		break;
	case 0x001C20:
		cid = "CLB Benelux";
		break;
	case 0x001C15:
		cid = "iPhotonix LLC";
		break;
	case 0x001C16:
		cid = "ThyssenKrupp Elevator";
		break;
	case 0x001C10:
		cid = "Cisco-Linksys, LLC";
		break;
	case 0x001C09:
		cid = "SAE Electronic Co.,Ltd.";
		break;
	case 0x001C04:
		cid = "Airgain, Inc.";
		break;
	case 0x001BFD:
		cid = "Dignsys Inc.";
		break;
	case 0x00192B:
		cid = "Aclara RF Systems Inc.";
		break;
	case 0x001930:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00191F:
		cid = "Microlink communications Inc.";
		break;
	case 0x001924:
		cid = "LBNL  Engineering";
		break;
	case 0x001911:
		cid = "Just In Mobile Information Technologies (Shanghai) Co., Ltd.";
		break;
	case 0x001918:
		cid = "Interactive Wear AG";
		break;
	case 0x00190C:
		cid = "Encore Electronics, Inc.";
		break;
	case 0x001900:
		cid = "Intelliverese - DBA Voicecom";
		break;
	case 0x001905:
		cid = "SCHRACK Seconet AG";
		break;
	case 0x0018F4:
		cid = "EO TECHNICS Co., Ltd.";
		break;
	case 0x0018F6:
		cid = "Thomson Telecom Belgium";
		break;
	case 0x0018FB:
		cid = "Compro Technology";
		break;
	case 0x0019EE:
		cid = "CARLO GAVAZZI CONTROLS SPA-Controls Division";
		break;
	case 0x0019F5:
		cid = "Imagination Technologies Ltd";
		break;
	case 0x0019E9:
		cid = "S-Information Technolgy, Co., Ltd.";
		break;
	case 0x0019DB:
		cid = "MICRO-STAR INTERNATIONAL CO., LTD.";
		break;
	case 0x0019DD:
		cid = "FEI-Zyfer, Inc.";
		break;
	case 0x0019CA:
		cid = "Broadata Communications, Inc";
		break;
	case 0x0019CF:
		cid = "SALICRU, S.A.";
		break;
	case 0x0019D6:
		cid = "LS Cable and System Ltd.";
		break;
	case 0x0019B4:
		cid = "Intellio Ltd";
		break;
	case 0x001A6E:
		cid = "Impro Technologies";
		break;
	case 0x001A67:
		cid = "Infinite QL Sdn Bhd";
		break;
	case 0x001A69:
		cid = "Wuhan Yangtze Optical Technology CO.,Ltd.";
		break;
	case 0x001A62:
		cid = "Data Robotics, Incorporated";
		break;
	case 0x001A58:
		cid = "CCV Deutschland GmbH - Celectronic eHealth Div.";
		break;
	case 0x001A5D:
		cid = "Mobinnova Corp.";
		break;
	case 0x001A4C:
		cid = "Crossbow Technology, Inc";
		break;
	case 0x001A51:
		cid = "Alfred Mann Foundation";
		break;
	case 0x001AAA:
		cid = "Analogic Corp.";
		break;
	case 0x001AA1:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001A9C:
		cid = "RightHand Technologies, Inc.";
		break;
	case 0x001A8B:
		cid = "CHUNIL ELECTRIC IND., CO.";
		break;
	case 0x001A95:
		cid = "Hisense Mobile Communications Technoligy Co.,Ltd.";
		break;
	case 0x001A84:
		cid = "V One Multimedia Pte Ltd";
		break;
	case 0x0019A1:
		cid = "LG INFORMATION & COMM.";
		break;
	case 0x0019AD:
		cid = "BOBST SA";
		break;
	case 0x0019B2:
		cid = "XYnetsoft Co.,Ltd";
		break;
	case 0x00199A:
		cid = "EDO-EVI";
		break;
	case 0x00199F:
		cid = "DKT A/S";
		break;
	case 0x001995:
		cid = "Jurong Hi-Tech (Suzhou)Co.ltd";
		break;
	case 0x001990:
		cid = "ELM DATA Co., Ltd.";
		break;
	case 0x001989:
		cid = "Sonitrol Corporation";
		break;
	case 0x001A3E:
		cid = "Faster Technology LLC";
		break;
	case 0x001A40:
		cid = "A-FOUR TECH CO., LTD.";
		break;
	case 0x001A2D:
		cid = "The Navvo Group";
		break;
	case 0x001A32:
		cid = "ACTIVA MULTIMEDIA";
		break;
	case 0x001A28:
		cid = "ASWT Co., LTD. Taiwan Branch H.K.";
		break;
	case 0x001A1C:
		cid = "GT&T Engineering Pte Ltd";
		break;
	case 0x001A23:
		cid = "Ice Qube, Inc";
		break;
	case 0x001A15:
		cid = "gemalto e-Payment";
		break;
	case 0x001A10:
		cid = "LUCENT TRANS ELECTRONICS CO.,LTD";
		break;
	case 0x001A09:
		cid = "Wayfarer Transit Systems Ltd";
		break;
	case 0x001A02:
		cid = "SECURE CARE PRODUCTS, INC";
		break;
	case 0x001A04:
		cid = "Interay Solutions BV";
		break;
	case 0x001984:
		cid = "ESTIC Corporation";
		break;
	case 0x001976:
		cid = "Xipher Technologies, LLC";
		break;
	case 0x001978:
		cid = "Datum Systems, Inc.";
		break;
	case 0x00196A:
		cid = "MikroM GmbH";
		break;
	case 0x001971:
		cid = "Guangzhou Unicomp Technology Co.,Ltd";
		break;
	case 0x001965:
		cid = "YuHua TelTech (ShangHai) Co., Ltd.";
		break;
	case 0x001960:
		cid = "DoCoMo Systems, Inc.";
		break;
	case 0x001954:
		cid = "Leaf Corporation.";
		break;
	case 0x001959:
		cid = "Staccato Communications Inc.";
		break;
	case 0x00194D:
		cid = "Avago Technologies Sdn Bhd";
		break;
	case 0x001948:
		cid = "AireSpider Networks";
		break;
	case 0x001941:
		cid = "Pitney Bowes, Inc";
		break;
	case 0x001935:
		cid = "DUERR DENTAL AG";
		break;
	case 0x00193A:
		cid = "OESOLUTIONS";
		break;
	case 0x00193C:
		cid = "HighPoint Technologies Incorporated";
		break;
	case 0x001773:
		cid = "Laketune Technologies Co. Ltd";
		break;
	case 0x001778:
		cid = "Central Music Co.";
		break;
	case 0x00177A:
		cid = "ASSA ABLOY AB";
		break;
	case 0x00176F:
		cid = "PAX Computer Technology(Shenzhen) Ltd.";
		break;
	case 0x00176A:
		cid = "Avago Technologies";
		break;
	case 0x001763:
		cid = "Essentia S.p.A.";
		break;
	case 0x00175E:
		cid = "Zed-3";
		break;
	case 0x001750:
		cid = "GSI Group, MicroE Systems";
		break;
	case 0x001752:
		cid = "DAGS, Inc";
		break;
	case 0x001757:
		cid = "RIX TECHNOLOGY LIMITED";
		break;
	case 0x00183D:
		cid = "Vertex Link Corporation";
		break;
	case 0x001844:
		cid = "Heads Up Technologies, Inc.";
		break;
	case 0x001838:
		cid = "PanAccess Communications,Inc.";
		break;
	case 0x001827:
		cid = "NEC UNIFIED SOLUTIONS NEDERLAND B.V.";
		break;
	case 0x00182C:
		cid = "Ascend Networks, Inc.";
		break;
	case 0x00181B:
		cid = "TaiJin Metal Co., Ltd.";
		break;
	case 0x001814:
		cid = "Mitutoyo Corporation";
		break;
	case 0x001819:
		cid = "Cisco Systems, Inc";
		break;
	case 0x001820:
		cid = "w5networks";
		break;
	case 0x001808:
		cid = "SightLogix, Inc.";
		break;
	case 0x00180D:
		cid = "Terabytes Server Storage Tech Corp";
		break;
	case 0x001803:
		cid = "ArcSoft Shanghai Co. LTD";
		break;
	case 0x0017F0:
		cid = "SZCOM Broadband Network Technology Co.,Ltd";
		break;
	case 0x0017F7:
		cid = "CEM Solutions Pvt Ltd";
		break;
	case 0x0017FE:
		cid = "TALOS SYSTEM INC.";
		break;
	case 0x0017D8:
		cid = "Magnum Semiconductor, Inc.";
		break;
	case 0x0017DD:
		cid = "Clipsal Australia";
		break;
	case 0x0017DF:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0018C6:
		cid = "OPW Fuel Management Systems";
		break;
	case 0x0018CB:
		cid = "Tecobest Technology Limited";
		break;
	case 0x0018BF:
		cid = "Essence Technology Solution, Inc.";
		break;
	case 0x0018BA:
		cid = "Cisco Systems, Inc";
		break;
	case 0x0018B8:
		cid = "New Voice International AG";
		break;
	case 0x0018B3:
		cid = "TEC WizHome Co., Ltd.";
		break;
	case 0x0018AC:
		cid = "Shanghai Jiao Da HISYS Technology Co. Ltd.";
		break;
	case 0x0018A5:
		cid = "ADigit Technologies Corp.";
		break;
	case 0x0018A7:
		cid = "Yoggie Security Systems LTD.";
		break;
	case 0x001896:
		cid = "Great Well Electronic LTD";
		break;
	case 0x00189B:
		cid = "Thomson Inc.";
		break;
	case 0x00179E:
		cid = "Sirit Inc";
		break;
	case 0x0017A3:
		cid = "MIX s.r.l.";
		break;
	case 0x0017A8:
		cid = "EDM Corporation";
		break;
	case 0x001792:
		cid = "Falcom Wireless Comunications Gmbh";
		break;
	case 0x001797:
		cid = "Telsy Elettronica S.p.A.";
		break;
	case 0x001799:
		cid = "SmarTire Systems Inc.";
		break;
	case 0x00178B:
		cid = "Teledyne Technologies Incorporated";
		break;
	case 0x00177F:
		cid = "Worldsmart Retech";
		break;
	case 0x001786:
		cid = "wisembed";
		break;
	case 0x001877:
		cid = "Amplex A/S";
		break;
	case 0x00186B:
		cid = "Sambu Communics CO., LTD.";
		break;
	case 0x001870:
		cid = "E28 Shanghai Limited";
		break;
	case 0x001863:
		cid = "Veritech Electronics Limited";
		break;
	case 0x001850:
		cid = "Secfone Kft";
		break;
	case 0x001855:
		cid = "Aeromaritime Systembau GmbH";
		break;
	case 0x001857:
		cid = "Unilever R&D";
		break;
	case 0x0017C7:
		cid = "MARA Systems Consulting AB";
		break;
	case 0x0017CE:
		cid = "Screen Service Spa";
		break;
	case 0x0017D3:
		cid = "Etymotic Research, Inc.";
		break;
	case 0x0017BB:
		cid = "Syrinx Industrial Electronics";
		break;
	case 0x0017B4:
		cid = "Remote Security Systems, LLC";
		break;
	case 0x0017AF:
		cid = "Enermet";
		break;
	case 0x0018E8:
		cid = "Hacetron Corporation";
		break;
	case 0x0018EF:
		cid = "Escape Communications, Inc.";
		break;
	case 0x0018E3:
		cid = "Visualgate Systems, Inc.";
		break;
	case 0x0018DC:
		cid = "Prostar Co., Ltd.";
		break;
	case 0x0018E1:
		cid = "Verkerk Service Systemen";
		break;
	case 0x0018D0:
		cid = "AtRoad,  A Trimble Company";
		break;
	case 0x0018D5:
		cid = "REIGNCOM";
		break;
	case 0x0018A0:
		cid = "Cierma Ascenseurs";
		break;
	case 0x001883:
		cid = "FORMOSA21 INC.";
		break;
	case 0x00188A:
		cid = "Infinova LLC";
		break;
	case 0x00188F:
		cid = "Montgomery Technology, Inc.";
		break;
	case 0x00187C:
		cid = "INTERCROSS, LLC";
		break;
	case 0x00187E:
		cid = "RGB Spectrum";
		break;
	case 0x00164A:
		cid = "Vibration Technology Limited";
		break;
	case 0x001644:
		cid = "LITE-ON Technology Corp.";
		break;
	case 0x001645:
		cid = "Power Distribution, Inc.";
		break;
	case 0x00163B:
		cid = "VertexRSI/General Dynamics";
		break;
	case 0x001640:
		cid = "Asmobile Communication Inc.";
		break;
	case 0x00163A:
		cid = "YVES TECHNOLOGY CO., LTD.";
		break;
	case 0x001634:
		cid = "Mathtech, Inc.";
		break;
	case 0x00162D:
		cid = "STNet Co., Ltd.";
		break;
	case 0x001621:
		cid = "Colorado Vnet";
		break;
	case 0x00161A:
		cid = "Dametric AB";
		break;
	case 0x001615:
		cid = "Nittan Company, Limited";
		break;
	case 0x0016C4:
		cid = "SiRF Technology, Inc.";
		break;
	case 0x0016C6:
		cid = "North Atlantic Industries";
		break;
	case 0x0016D2:
		cid = "Caspian";
		break;
	case 0x0016BF:
		cid = "PaloDEx Group Oy";
		break;
	case 0x0016B3:
		cid = "Photonicbridges (China) Co., Ltd.";
		break;
	case 0x0016AC:
		cid = "Toho Technology Corp.";
		break;
	case 0x0016B1:
		cid = "KBS";
		break;
	case 0x0016A7:
		cid = "AWETA G&P";
		break;
	case 0x001724:
		cid = "Studer Professional Audio GmbH";
		break;
	case 0x001718:
		cid = "Vansco Electronics Oy";
		break;
	case 0x00171D:
		cid = "DIGIT";
		break;
	case 0x001711:
		cid = "GE Healthcare Bio-Sciences AB";
		break;
	case 0x00170C:
		cid = "Twig Com Ltd.";
		break;
	case 0x001707:
		cid = "InGrid, Inc";
		break;
	case 0x001702:
		cid = "Osung Midicom Co., Ltd";
		break;
	case 0x001744:
		cid = "Araneo Ltd.";
		break;
	case 0x00173C:
		cid = "Extreme Engineering Solutions";
		break;
	case 0x001737:
		cid = "Industrie Dial Face S.p.A.";
		break;
	case 0x00172B:
		cid = "Global Technologies Inc.";
		break;
	case 0x001730:
		cid = "Automation Electronics";
		break;
	case 0x001729:
		cid = "Ubicod Co.LTD";
		break;
	case 0x00169B:
		cid = "Alstom Transport";
		break;
	case 0x0016A2:
		cid = "CentraLite Systems, Inc.";
		break;
	case 0x001696:
		cid = "QDI Technology (H.K.) Limited";
		break;
	case 0x001688:
		cid = "ServerEngines LLC";
		break;
	case 0x00168A:
		cid = "id-Confirm Inc";
		break;
	case 0x001683:
		cid = "WEBIO International Co.,.Ltd.";
		break;
	case 0x00167C:
		cid = "iRex Technologies BV";
		break;
	case 0x001610:
		cid = "Carina Technology";
		break;
	case 0x00160B:
		cid = "TVWorks LLC";
		break;
	case 0x001604:
		cid = "Sigpro";
		break;
	case 0x0015FE:
		cid = "SCHILLING ROBOTICS LLC";
		break;
	case 0x0015FD:
		cid = "Complete Media Systems";
		break;
	case 0x0015F8:
		cid = "Kingtronics Industrial Co. Ltd.";
		break;
	case 0x0015EC:
		cid = "Boca Devices LLC";
		break;
	case 0x0015F1:
		cid = "KYLINK Communications Corp.";
		break;
	case 0x001677:
		cid = "Bihl + Wiedemann GmbH";
		break;
	case 0x001670:
		cid = "SKNET Corporation";
		break;
	case 0x001664:
		cid = "Prod-El SpA";
		break;
	case 0x001669:
		cid = "MRV Communication (Networks) LTD";
		break;
	case 0x00165D:
		cid = "AirDefense, Inc.";
		break;
	case 0x001651:
		cid = "Exeo Systems";
		break;
	case 0x0015E5:
		cid = "Cheertek Inc.";
		break;
	case 0x0015DB:
		cid = "Canesta Inc.";
		break;
	case 0x0015D4:
		cid = "Emitor AB";
		break;
	case 0x0015C8:
		cid = "FlexiPanel Ltd";
		break;
	case 0x0015C3:
		cid = "Ruf Telematik AG";
		break;
	case 0x0015C2:
		cid = "3M Germany";
		break;
	case 0x0015BE:
		cid = "Iqua Ltd.";
		break;
	case 0x0016EF:
		cid = "Koko Fitness, Inc.";
		break;
	case 0x0016F4:
		cid = "Eidicom Co., Ltd.";
		break;
	case 0x0016E8:
		cid = "Sigma Designs, Inc.";
		break;
	case 0x0016DC:
		cid = "ARCHOS";
		break;
	case 0x0016E1:
		cid = "SiliconStor, Inc.";
		break;
	case 0x0016D7:
		cid = "Sunways AG";
		break;
	case 0x0014CB:
		cid = "LifeSync Corporation";
		break;
	case 0x0014D0:
		cid = "BTI Systems Inc.";
		break;
	case 0x0014C4:
		cid = "Vitelcom Mobile Technology";
		break;
	case 0x0014BE:
		cid = "Wink communication technology CO.LTD";
		break;
	case 0x0014BD:
		cid = "incNETWORKS, Inc";
		break;
	case 0x0014B8:
		cid = "Hill-Rom";
		break;
	case 0x0014AE:
		cid = "Wizlogics Co., Ltd.";
		break;
	case 0x0014B3:
		cid = "CoreStar International Corp";
		break;
	case 0x00149B:
		cid = "Nokota Communications, LLC";
		break;
	case 0x001431:
		cid = "PDL Electronics Ltd";
		break;
	case 0x001433:
		cid = "Empower Technologies(Canada) Inc.";
		break;
	case 0x001432:
		cid = "Tarallax Wireless, Inc.";
		break;
	case 0x00142C:
		cid = "Koncept International, Inc.";
		break;
	case 0x001425:
		cid = "Galactic Computing Corp.";
		break;
	case 0x001420:
		cid = "G-Links networking company";
		break;
	case 0x00141B:
		cid = "Cisco Systems, Inc";
		break;
	case 0x00146D:
		cid = "RF Technologies";
		break;
	case 0x00146F:
		cid = "Kohler Co";
		break;
	case 0x00146E:
		cid = "H. Stoll GmbH & Co. KG";
		break;
	case 0x001468:
		cid = "CelPlan International, Inc.";
		break;
	case 0x001461:
		cid = "CORONA CORPORATION";
		break;
	case 0x00145C:
		cid = "Intronics B.V.";
		break;
	case 0x001455:
		cid = "Coder Electronics Corporation";
		break;
	case 0x001444:
		cid = "Grundfos Holding";
		break;
	case 0x00144B:
		cid = "Hifn, Inc.";
		break;
	case 0x001589:
		cid = "D-MAX Technology Co.,Ltd";
		break;
	case 0x001582:
		cid = "Pulse Eight Limited";
		break;
	case 0x00157C:
		cid = "Dave Networks, Inc.";
		break;
	case 0x001578:
		cid = "Audio / Video Innovations";
		break;
	case 0x001573:
		cid = "NewSoft  Technology Corporation";
		break;
	case 0x00156C:
		cid = "SANE SYSTEM CO., LTD";
		break;
	case 0x001571:
		cid = "Nolan Systems";
		break;
	case 0x001572:
		cid = "Red-Lemon";
		break;
	case 0x001565:
		cid = "XIAMEN YEALINK NETWORK TECHNOLOGY CO.,LTD";
		break;
	case 0x001559:
		cid = "Securaplane Technologies, Inc.";
		break;
	case 0x0014A2:
		cid = "Core Micro Systems Inc.";
		break;
	case 0x001494:
		cid = "ESU AG";
		break;
	case 0x00148F:
		cid = "Protronic (Far East) Ltd.";
		break;
	case 0x001488:
		cid = "Akorri";
		break;
	case 0x001483:
		break;
	}