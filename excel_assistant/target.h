#include <vector>

// read file
void read_file(std::vector<CStringW> & pp_res, std::vector<CStringW> & lt_res,
    std::vector<CStringW> & mt_res, std::vector<CStringW> & ht_res, LPCWSTR file);

// list files in specified directory
// and put each files into the passed vector container
void list_files(std::vector<CStringW> & files_arr, LPCTSTR pstr);

// split a string using the specified symbol
std::vector<CStringW> split(CStringW str, char symbol);

BOOL belongs_to(CStringW str, std::vector<CStringW> target_array);

void _parse_line(std::vector<CStringW> & pp_res, std::vector<CStringW> & lt_res,
    std::vector<CStringW> & mt_res, std::vector<CStringW> & ht_res, CStringW line, short index);

// create a new file and write into the content
void write_folder(CStringW path);

void write_file(CStringW path, std::vector<CStringW> lines);

const CStringW PP = "001,011,012,016,017,022,023,024,025,036,037,\
                                041,042,043,044,045,046,047,048,054,056,057,058,\
                                            059,061,062,071,072,073,074,075,081,091,098,111,\
                                                        112,121,211,212,222,223,231,232,244,245,246,247,\
                                                                    248,251,261,263,264,265,266,267,268,272,273,274,\
                                                                                277,278,281,282,283,284,285,286,287,288,289,291,\
                                                                                            292,321,322,325,333,334,335,342,343,344,345,351,\
                                                                                                        411,421,422,431,551,661,662,663,664,667";

const CStringW LT = "269,579,611,612,613,621,625,629,633,634,635,\
                                641,642,651,652,653,654,655,656,657,658,659,665,\
                                            666,533,821,831,841,842,843,844,845,846,848,851,\
                                                        873,885,892,893,894,895,898,899,911";

const CStringW MT = "511,512,513,514,515,516,522,523,524,525,531,\
                                532,533,541,542,553,554,562,571,572,573,574,575,\
                                            581,582,583,591,592,593,594,598,599,671,672,673,\
                                                        674,675,676,677,678,679,681,682,683,684,685,686,\
                                                                    687,689,691,692,693,694,695,696,697,699,711,712,\
                                                                                713,714,716,718,721,722,723,724,725,726,727,728,\
                                                                                            731,733,735,737,741,742,743,744,745,746,747,748,\
                                                                                                        749,751,759,762,771,772,773,775,776,778,781,782,\
                                                                                                                    783,784,785,786,791,793,811,812,813,881,882,883,\
                                                                                                                                884,891,896,897,931,961,971";

const CStringW HT = "752,761,763,764,774,792,871,872,874";