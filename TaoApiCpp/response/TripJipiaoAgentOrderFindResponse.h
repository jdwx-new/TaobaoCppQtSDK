#ifndef TRIPJIPIAOAGENTORDERFINDRESPONSE_H
#define TRIPJIPIAOAGENTORDERFINDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/SearchOrderResult.h>


/**
 * @brief TOP RESPONSE API: 根据淘宝机票政策id搜索订单
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderFindResponse : public TaoResponse
{
public:
 virtual ~TripJipiaoAgentOrderFindResponse() { }

  SearchOrderResult getSearchResult() const;
  void setSearchResult (SearchOrderResult searchResult);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 国内机票订单搜索返回结果对象
 **/
  SearchOrderResult searchResult;

};

#endif
