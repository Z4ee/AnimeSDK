#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel::Design { class DesignerEventArgs; }

#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEREVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C6C3B30)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEREVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C6C3B70)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEREVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C6C35B0)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEREVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C3590)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int DesignerEventHandler_TypeDefinitionIndex = 3057;

	class DesignerEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEREVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::Design::DesignerEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::Design::DesignerEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEREVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::Design::DesignerEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::Design::DesignerEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEREVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEREVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
