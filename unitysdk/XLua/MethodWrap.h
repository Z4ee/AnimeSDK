#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class OverloadMethodWrap; }

#define XLUA_METHODWRAP_CALL_OFFSET UNITYSDK_OFFSET(0x14B2EE30)
#define XLUA_METHODWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x14B2EDC0)

namespace XLua
{
	inline static constexpr unsigned int MethodWrap_TypeDefinitionIndex = 50546;

	class MethodWrap : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::XLua::OverloadMethodWrap*>* overloads; // 0x10
		::System::String* TypeName; // 0x18
		::System::String* methodName; // 0x20
		::System::Boolean forceCheck; // 0x28
		::System::Boolean TriggeredError; // 0x29

		::System::Void _ctor(::System::String* a1, ::System::Collections::Generic::List_1<::XLua::OverloadMethodWrap*>* a2, ::System::Boolean a3, ::System::Type* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::XLua::OverloadMethodWrap*>*, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAP__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 Call(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_METHODWRAP_CALL_OFFSET))(this, a1);
		}
	};
}
