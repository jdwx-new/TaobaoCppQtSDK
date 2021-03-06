#ifndef WANGWANGESERVICEEVALUATIONGETRESPONSE_H
#define WANGWANGESERVICEEVALUATIONGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/StaffEvalStatOnDay.h>


/**
 * @brief TOP RESPONSE API: 根据操作者ID，返回被查者ID指定日期内每个帐号每日的"客服评价统计" 
 
备注：1、如果是操作者ID=被查者ID，返回被查者ID的"客服评价统计"。 
 
    2、如果操作者是组管理员，他可以查询他的组中的所有子帐号的"客服评价统计"。 
 
    3、如果操作者是主账户，他可以查询所有子帐号的"客服评价统计"。 
    4、被查者ID可以是多个，用 "," 隔开，id数不能超过30。 
    5、开始时间与结束时间之间的间隔不能超过7天 
    6、不能查询90天以前的数据 
    7、不能查询当天的记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangEserviceEvaluationGetResponse : public TaoResponse
{
public:
 virtual ~WangwangEserviceEvaluationGetResponse() { }

  QList<StaffEvalStatOnDay> getStaffEvalStatOnDays() const;
  void setStaffEvalStatOnDays (QList<StaffEvalStatOnDay> staffEvalStatOnDays);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 客服平均统计列表
 **/
  QList<StaffEvalStatOnDay> staffEvalStatOnDays;

};

#endif
