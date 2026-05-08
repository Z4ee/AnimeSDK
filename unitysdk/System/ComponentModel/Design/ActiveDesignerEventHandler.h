#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel::Design { class ActiveDesignerEventArgs; }

#define SYSTEM_COMPONENTMODEL_DESIGN_ACTIVEDESIGNEREVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AA91C80)
#define SYSTEM_COMPONENTMODEL_DESIGN_ACTIVEDESIGNEREVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AA91CC0)
#define SYSTEM_COMPONENTMODEL_DESIGN_ACTIVEDESIGNEREVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AA91700)
#define SYSTEM_COMPONENTMODEL_DESIGN_ACTIVEDESIGNEREVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA916F0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ActiveDesignerEventHandler_TypeDefinitionIndex = 3032;

	class ActiveDesignerEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_ACTIVEDESIGNEREVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::Design::ActiveDesignerEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::Design::ActiveDesignerEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_ACTIVEDESIGNEREVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::Design::ActiveDesignerEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::Design::ActiveDesignerEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_ACTIVEDESIGNEREVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_ACTIVEDESIGNEREVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
