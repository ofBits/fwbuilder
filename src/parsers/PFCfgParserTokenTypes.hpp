#ifndef INC_PFCfgParserTokenTypes_hpp_
#define INC_PFCfgParserTokenTypes_hpp_

/* $ANTLR 2.7.7 (20090306): "pf.g" -> "PFCfgParserTokenTypes.hpp"$ */

#ifndef CUSTOM_API
# define CUSTOM_API
#endif

#ifdef __cplusplus
struct CUSTOM_API PFCfgParserTokenTypes {
#endif
	enum {
		EOF_ = 1,
		NEWLINE = 4,
		LINE_COMMENT = 5,
		WORD = 6,
		EQUAL = 7,
		ANTISPOOF = 8,
		ALTQ = 9,
		QUEUE = 10,
		SET = 11,
		SCRUB = 12,
		TABLE = 13,
		LESS_THAN = 14,
		GREATER_THAN = 15,
		PERSIST = 16,
		CONST = 17,
		COUNTERS = 18,
		FILE = 19,
		STRING = 20,
		OPENING_BRACE = 21,
		COMMA = 22,
		CLOSING_BRACE = 23,
		EXLAMATION = 24,
		COLON = 25,
		NETWORK = 26,
		BROADCAST = 27,
		PEER = 28,
		INT_CONST = 29,
		SELF = 30,
		IPV4 = 31,
		SLASH = 32,
		NO = 33,
		NAT = 34,
		PASS = 35,
		MINUS = 36,
		STATIC_PORT = 37,
		RDR = 38,
		OPENING_PAREN = 39,
		CLOSING_PAREN = 40,
		PORT = 41,
		STAR = 42,
		BITMASK = 43,
		RANDOM = 44,
		SOURCE_HASH = 45,
		HEX_KEY = 46,
		STRING_KEY = 47,
		ROUND_ROBIN = 48,
		STICKY_ADDRESS = 49,
		BINAT = 50,
		TIMEOUT = 51,
		BLOCK = 52,
		DROP = 53,
		RETURN = 54,
		RETURN_RST = 55,
		TTL = 56,
		RETURN_ICMP = 57,
		RETURN_ICMP6 = 58,
		IN = 59,
		OUT = 60,
		LOG = 61,
		ALL = 62,
		USER = 63,
		TO = 64,
		QUICK = 65,
		ON = 66,
		INET = 67,
		INET6 = 68,
		PROTO = 69,
		IP = 70,
		ICMP = 71,
		IGMP = 72,
		TCP = 73,
		UDP = 74,
		RDP = 75,
		RSVP = 76,
		GRE = 77,
		ESP = 78,
		AH = 79,
		EIGRP = 80,
		OSPF = 81,
		IPIP = 82,
		VRRP = 83,
		L2TP = 84,
		ISIS = 85,
		FROM = 86,
		URPF_FAILED = 87,
		ANY = 88,
		NO_ROUTE = 89,
		IPV6 = 90,
		ROUTE_TO = 91,
		REPLY_TO = 92,
		FLAGS = 93,
		ICMP_TYPE = 94,
		ICMP_CODE = 95,
		ICMP6_TYPE = 96,
		TAGGED = 97,
		TAG = 98,
		KEEP = 99,
		MODULATE = 100,
		SYNPROXY = 101,
		STATE = 102,
		LABEL = 103,
		EXIT = 104,
		QUIT = 105,
		INTRFACE = 106,
		ICMP6 = 107,
		IGRP = 108,
		IPSEC = 109,
		NOS = 110,
		PCP = 111,
		PIM = 112,
		PPTP = 113,
		RIP = 114,
		SNP = 115,
		HOST = 116,
		RANGE = 117,
		LOG_LEVEL_ALERTS = 118,
		LOG_LEVEL_CRITICAL = 119,
		LOG_LEVEL_DEBUGGING = 120,
		LOG_LEVEL_EMERGENCIES = 121,
		LOG_LEVEL_ERRORS = 122,
		LOG_LEVEL_INFORMATIONAL = 123,
		LOG_LEVEL_NOTIFICATIONS = 124,
		LOG_LEVEL_WARNINGS = 125,
		LOG_LEVEL_DISABLE = 126,
		LOG_LEVEL_INACTIVE = 127,
		Whitespace = 128,
		HEX_CONST = 129,
		NUMBER = 130,
		NEG_INT_CONST = 131,
		HEX_DIGIT = 132,
		DIGIT = 133,
		NUM_3DIGIT = 134,
		NUM_HEX_4DIGIT = 135,
		NUMBER_ADDRESS_OR_WORD = 136,
		PIPE_CHAR = 137,
		NUMBER_SIGN = 138,
		PERCENT = 139,
		AMPERSAND = 140,
		APOSTROPHE = 141,
		PLUS = 142,
		DOT = 143,
		SEMICOLON = 144,
		QUESTION = 145,
		COMMERCIAL_AT = 146,
		OPENING_SQUARE = 147,
		CLOSING_SQUARE = 148,
		CARET = 149,
		UNDERLINE = 150,
		TILDE = 151,
		DOUBLE_QUOTE = 152,
		NULL_TREE_LOOKAHEAD = 3
	};
#ifdef __cplusplus
};
#endif
#endif /*INC_PFCfgParserTokenTypes_hpp_*/