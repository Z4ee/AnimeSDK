#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel::Design { class ComponentChangingEventArgs; }

#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGINGEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C009B30)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGINGEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C009B70)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGINGEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C0095B0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGINGEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C009590)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ComponentChangingEventHandler_TypeDefinitionIndex = 3037;

	class ComponentChangingEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGINGEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::Design::ComponentChangingEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::Design::ComponentChangingEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGINGEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::Design::ComponentChangingEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::Design::ComponentChangingEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGINGEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGINGEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
