#ifndef TAOBAOKEWIDGETITEMSCONVERTRESPONSE_H
#define TAOBAOKEWIDGETITEMSCONVERTRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TaobaokeItem.h>


/**
 * @brief TOP RESPONSE API: 淘客商品转换，该接口只支持js方式去调用，具体的调用方式参考文档【http://open.taobao.com/doc/detail.htm?id=101372】 
 
<p>淘宝客应用、网站接入的过程中，难免会遇到问题，这里对从接入到线上运营的各个环节最常碰到的问题，做了汇总，帮助开发者提高接入的效率。 </p> <p>一、淘宝客网站应用创建流程：<a href="http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028">http://open.taobao.com/doc/detail.htm?spm=0.0.0.34.b1f9de&id=1028</a></p> <p>二、淘宝客API结合实际使用场景的介绍：<a href="http://open.taobao.com/doc/detail.htm?id=1014">http://open.taobao.com/doc/detail.htm?id=1014</a></p> <p>三、淘宝客网站官方推荐的架构：<a href="http://open.taobao.com/doc/detail.htm?id=1011">http://open.taobao.com/doc/detail.htm?id=1011</a></p> <p>四、淘宝客最常见的几个问题以及解决方案汇总：<a href="http://open.taobao.com/doc/detail.htm?id=1005">http://open.taobao.com/doc/detail.htm?id=1005</a></p>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeWidgetItemsConvertResponse : public TaoResponse
{
public:
 virtual ~TaobaokeWidgetItemsConvertResponse() { }

  QList<TaobaokeItem> getTaobaokeItems() const;
  void setTaobaokeItems (QList<TaobaokeItem> taobaokeItems);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 淘宝客商品对象列表
 **/
  QList<TaobaokeItem> taobaokeItems;

/**
 * @brief 返回的结果总数
 **/
  qlonglong totalResults;

};

#endif
