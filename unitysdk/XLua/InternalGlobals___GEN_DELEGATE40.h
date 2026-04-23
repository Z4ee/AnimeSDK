#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_345;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE40_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11221240)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE40_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11221280)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE40_INVOKE_OFFSET UNITYSDK_OFFSET(0x11220C80)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE40__CTOR_OFFSET UNITYSDK_OFFSET(0x11213000)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE40_TypeDefinitionIndex = 46366;

	class InternalGlobals___GEN_DELEGATE40 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE40__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::Class_0_16E4307DCC419505_345* ability, ::System::String*& originPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_345*, ::System::String*&))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE40_INVOKE_OFFSET))(this, ability, originPath);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_345* ability, ::System::String*& originPath, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_345*, ::System::String*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE40_BEGININVOKE_OFFSET))(this, ability, originPath, callback, object);
		}

		::System::Boolean EndInvoke(::System::String*& originPath, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE40_ENDINVOKE_OFFSET))(this, originPath, result);
		}
	};
}
