#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel::Design { class DesignerTransactionCloseEventArgs; }

#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DAB1410)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DAB1450)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DAB0E80)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB0E60)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int DesignerTransactionCloseEventHandler_TypeDefinitionIndex = 3049;

	class DesignerTransactionCloseEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::Design::DesignerTransactionCloseEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::Design::DesignerTransactionCloseEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::Design::DesignerTransactionCloseEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::Design::DesignerTransactionCloseEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
