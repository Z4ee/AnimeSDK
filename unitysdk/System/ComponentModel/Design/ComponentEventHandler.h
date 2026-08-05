#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel::Design { class ComponentEventArgs; }

#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E7DF1B0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E7DF1F0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E7DEC20)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DEC00)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ComponentEventHandler_TypeDefinitionIndex = 3039;

	class ComponentEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::Design::ComponentEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::Design::ComponentEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::Design::ComponentEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::Design::ComponentEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
