// Default empty project template
#ifndef HolaCascada_HPP_
#define HolaCascada_HPP_

#include <QObject>
#include <QVariant>

namespace bb { namespace cascades { class Application; }}

/*!
 * @brief Application pane object
 *
 *Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class HolaCascada : public QObject
{
    Q_OBJECT
public:
    HolaCascada(bb::cascades::Application *app);
    virtual ~HolaCascada() {}
    //slot agregada por mi
    public slots:
    void btnClickSlot();

    signals:
    void dataSignal(QVariant data);
};


#endif /* HolaCascada_HPP_ */
