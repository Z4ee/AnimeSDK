#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x103D2A00)
#define XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x103D2A80)
#define XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x103D2670)
#define XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x103D2650)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator_UpdateCSObject_TypeDefinitionIndex = 40398;

	class ObjectTranslator_UpdateCSObject : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr L, ::System::Int32 idx, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT_INVOKE_OFFSET))(this, L, idx, obj);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr L, ::System::Int32 idx, ::System::Object* obj, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT_BEGININVOKE_OFFSET))(this, L, idx, obj, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
