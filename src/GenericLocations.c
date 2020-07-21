/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITIS"
 * 	found in "J2735_201603DA-CAMP.ASN"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#include "GenericLocations.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_GenericLocations_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_GenericLocations_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  7,  7,  0,  95 }	/* (0..95,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_GenericLocations_value2enum_1[] = {
	{ 7937,	10,	"on-bridges" },
	{ 7938,	10,	"in-tunnels" },
	{ 7939,	27,	"entering-or-leaving-tunnels" },
	{ 7940,	8,	"on-ramps" },
	{ 7941,	25,	"in-road-construction-area" },
	{ 7942,	14,	"around-a-curve" },
	{ 7943,	14,	"on-minor-roads" },
	{ 7944,	21,	"in-the-opposing-lanes" },
	{ 7945,	19,	"adjacent-to-roadway" },
	{ 7946,	7,	"on-bend" },
	{ 7947,	19,	"entire-intersection" },
	{ 7948,	13,	"in-the-median" },
	{ 7949,	21,	"moved-to-side-of-road" },
	{ 7950,	17,	"moved-to-shoulder" },
	{ 7951,	14,	"on-the-roadway" },
	{ 7952,	15,	"in-shaded-areas" },
	{ 7953,	18,	"in-low-lying-areas" },
	{ 7954,	20,	"in-the-downtown-area" },
	{ 7955,	22,	"in-the-inner-city-area" },
	{ 7956,	8,	"in-parts" },
	{ 7957,	14,	"in-some-places" },
	{ 7958,	12,	"in-the-ditch" },
	{ 7959,	13,	"in-the-valley" },
	{ 7960,	11,	"on-hill-top" },
	{ 7961,	18,	"near-the-foothills" },
	{ 7962,	17,	"at-high-altitudes" },
	{ 7963,	13,	"near-the-lake" },
	{ 7964,	14,	"near-the-shore" },
	{ 7965,	24,	"over-the-crest-of-a-hill" },
	{ 7966,	25,	"other-than-on-the-roadway" },
	{ 7967,	14,	"near-the-beach" },
	{ 7968,	23,	"near-beach-access-point" },
	{ 7969,	11,	"lower-level" },
	{ 7970,	11,	"upper-level" },
	{ 7971,	7,	"airport" },
	{ 7972,	9,	"concourse" },
	{ 7973,	4,	"gate" },
	{ 7974,	13,	"baggage-claim" },
	{ 7975,	13,	"customs-point" },
	{ 7976,	7,	"station" },
	{ 7977,	8,	"platform" },
	{ 7978,	4,	"dock" },
	{ 7979,	5,	"depot" },
	{ 7980,	17,	"ev-charging-point" },
	{ 7981,	25,	"information-welcome-point" },
	{ 7982,	12,	"at-rest-area" },
	{ 7983,	15,	"at-service-area" },
	{ 7984,	16,	"at-weigh-station" },
	{ 7985,	12,	"picnic-areas" },
	{ 7986,	9,	"rest-area" },
	{ 7987,	16,	"service-stations" },
	{ 7988,	7,	"toilets" },
	{ 7989,	12,	"on-the-right" },
	{ 7990,	11,	"on-the-left" },
	{ 7991,	13,	"in-the-center" },
	{ 7992,	25,	"in-the-opposite-direction" },
	{ 7993,	13,	"cross-traffic" },
	{ 7994,	18,	"northbound-traffic" },
	{ 7995,	17,	"eastbound-traffic" },
	{ 7996,	18,	"southbound-traffic" },
	{ 7997,	17,	"westbound-traffic" },
	{ 7998,	5,	"north" },
	{ 7999,	5,	"south" },
	{ 8000,	4,	"east" },
	{ 8001,	4,	"west" },
	{ 8002,	9,	"northeast" },
	{ 8003,	9,	"northwest" },
	{ 8004,	9,	"southeast" },
	{ 8005,	9,	"southwest" },
	{ 8006,	13,	"mountain-pass" },
	{ 8007,	18,	"reservation-center" },
	{ 8008,	12,	"nearby-basin" },
	{ 8009,	9,	"on-tracks" },
	{ 8010,	3,	"dip" },
	{ 8011,	14,	"traffic-circle" },
	{ 8012,	17,	"park-and-ride-lot" },
	{ 8014,	2,	"to" },
	{ 8015,	2,	"by" },
	{ 8016,	7,	"through" },
	{ 8017,	7,	"area-of" },
	{ 8018,	5,	"under" },
	{ 8019,	4,	"over" },
	{ 8020,	4,	"from" },
	{ 8021,	11,	"approaching" },
	{ 8022,	11,	"entering-at" },
	{ 8023,	10,	"exiting-at" },
	{ 8024,	13,	"across-tracks" },
	{ 8025,	9,	"in-street" },
	{ 8026,	8,	"on-curve" },
	{ 8027,	8,	"shoulder" },
	{ 8028,	9,	"crossover" },
	{ 8029,	10,	"cross-road" },
	{ 8030,	9,	"side-road" },
	{ 8031,	8,	"bus-stop" },
	{ 8032,	12,	"intersection" },
	{ 8033,	13,	"roadside-park" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_GenericLocations_enum2value_1[] = {
	86,	/* across-tracks(8024) */
	8,	/* adjacent-to-roadway(7945) */
	34,	/* airport(7971) */
	83,	/* approaching(8021) */
	79,	/* area-of(8017) */
	5,	/* around-a-curve(7942) */
	25,	/* at-high-altitudes(7962) */
	45,	/* at-rest-area(7982) */
	46,	/* at-service-area(7983) */
	47,	/* at-weigh-station(7984) */
	37,	/* baggage-claim(7974) */
	93,	/* bus-stop(8031) */
	77,	/* by(8015) */
	35,	/* concourse(7972) */
	91,	/* cross-road(8029) */
	56,	/* cross-traffic(7993) */
	90,	/* crossover(8028) */
	38,	/* customs-point(7975) */
	42,	/* depot(7979) */
	73,	/* dip(8010) */
	41,	/* dock(7978) */
	63,	/* east(8000) */
	58,	/* eastbound-traffic(7995) */
	84,	/* entering-at(8022) */
	2,	/* entering-or-leaving-tunnels(7939) */
	10,	/* entire-intersection(7947) */
	43,	/* ev-charging-point(7980) */
	85,	/* exiting-at(8023) */
	82,	/* from(8020) */
	36,	/* gate(7973) */
	16,	/* in-low-lying-areas(7953) */
	19,	/* in-parts(7956) */
	4,	/* in-road-construction-area(7941) */
	15,	/* in-shaded-areas(7952) */
	20,	/* in-some-places(7957) */
	87,	/* in-street(8025) */
	54,	/* in-the-center(7991) */
	21,	/* in-the-ditch(7958) */
	17,	/* in-the-downtown-area(7954) */
	18,	/* in-the-inner-city-area(7955) */
	11,	/* in-the-median(7948) */
	7,	/* in-the-opposing-lanes(7944) */
	55,	/* in-the-opposite-direction(7992) */
	22,	/* in-the-valley(7959) */
	1,	/* in-tunnels(7938) */
	44,	/* information-welcome-point(7981) */
	94,	/* intersection(8032) */
	32,	/* lower-level(7969) */
	69,	/* mountain-pass(8006) */
	13,	/* moved-to-shoulder(7950) */
	12,	/* moved-to-side-of-road(7949) */
	31,	/* near-beach-access-point(7968) */
	30,	/* near-the-beach(7967) */
	24,	/* near-the-foothills(7961) */
	26,	/* near-the-lake(7963) */
	27,	/* near-the-shore(7964) */
	71,	/* nearby-basin(8008) */
	61,	/* north(7998) */
	57,	/* northbound-traffic(7994) */
	65,	/* northeast(8002) */
	66,	/* northwest(8003) */
	9,	/* on-bend(7946) */
	0,	/* on-bridges(7937) */
	88,	/* on-curve(8026) */
	23,	/* on-hill-top(7960) */
	6,	/* on-minor-roads(7943) */
	3,	/* on-ramps(7940) */
	53,	/* on-the-left(7990) */
	52,	/* on-the-right(7989) */
	14,	/* on-the-roadway(7951) */
	72,	/* on-tracks(8009) */
	29,	/* other-than-on-the-roadway(7966) */
	81,	/* over(8019) */
	28,	/* over-the-crest-of-a-hill(7965) */
	75,	/* park-and-ride-lot(8012) */
	48,	/* picnic-areas(7985) */
	40,	/* platform(7977) */
	70,	/* reservation-center(8007) */
	49,	/* rest-area(7986) */
	95,	/* roadside-park(8033) */
	50,	/* service-stations(7987) */
	89,	/* shoulder(8027) */
	92,	/* side-road(8030) */
	62,	/* south(7999) */
	59,	/* southbound-traffic(7996) */
	67,	/* southeast(8004) */
	68,	/* southwest(8005) */
	39,	/* station(7976) */
	78,	/* through(8016) */
	76,	/* to(8014) */
	51,	/* toilets(7988) */
	74,	/* traffic-circle(8011) */
	80,	/* under(8018) */
	33,	/* upper-level(7970) */
	64,	/* west(8001) */
	60	/* westbound-traffic(7997) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_GenericLocations_specs_1 = {
	asn_MAP_GenericLocations_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_GenericLocations_enum2value_1,	/* N => "tag"; sorted by N */
	96,	/* Number of elements in the maps */
	97,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_GenericLocations_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_GenericLocations = {
	"GenericLocations",
	"GenericLocations",
	&asn_OP_NativeEnumerated,
	asn_DEF_GenericLocations_tags_1,
	sizeof(asn_DEF_GenericLocations_tags_1)
		/sizeof(asn_DEF_GenericLocations_tags_1[0]), /* 1 */
	asn_DEF_GenericLocations_tags_1,	/* Same as above */
	sizeof(asn_DEF_GenericLocations_tags_1)
		/sizeof(asn_DEF_GenericLocations_tags_1[0]), /* 1 */
	{ &asn_OER_type_GenericLocations_constr_1, &asn_PER_type_GenericLocations_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_GenericLocations_specs_1	/* Additional specs */
};

