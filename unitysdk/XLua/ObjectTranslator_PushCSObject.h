#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11698D10)
#define XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11698D80)
#define XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x116989C0)
#define XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x116989A0)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator_PushCSObject_TypeDefinitionIndex = 46305;

	class ObjectTranslator_PushCSObject : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr L, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT_INVOKE_OFFSET))(this, L, obj);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr L, ::System::Object* obj, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT_BEGININVOKE_OFFSET))(this, L, obj, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
