#ifndef POINTBUDGETGETREQUEST_H
#define POINTBUDGETGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PointBudgetGetResponse.h>

/**
 * TOP API: 查询已采购的集分宝余额，操作流程如下： 
1、申请支付宝增值包。 
2、申请支付宝应用上线时选择集分宝API。 
3、引导商家签约支付宝集分宝服务，地址为https://openapi.alipay.com/subscribe.htm?id=应用ID。 
4、引导商家对授予支付宝集分宝发放权限，地址为https://openauth.alipay.com/oauth2/authorize.htm?scope=p&client_id=应用ID 
5、引导授权的商家采购集分宝，地址为https://jf.alipay.com/aop/purchase.htm，进行集分宝采购。 
6、商家采购之后可以通过集分宝余额API（alipay.point.budget.get）查询商家的集分宝数量。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PointBudgetGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAuthToken() const
;  void setAuthToken (QString authToken);


  virtual PointBudgetGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 支付宝给用户的授权。如果没有top的授权，这个字段是必填项
 **/
  QString authToken;

};

#endif  /* POINTBUDGETGETREQUEST_H */
