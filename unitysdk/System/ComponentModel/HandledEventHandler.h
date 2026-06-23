#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class HandledEventArgs; }

#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B1B8260)
#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B1B82A0)
#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B1B7CE0)
#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B7CC0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int HandledEventHandler_TypeDefinitionIndex = 2886;

	class HandledEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::HandledEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::HandledEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::HandledEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::HandledEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
