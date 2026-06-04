#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define XLUA_TYPEEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1343E1A0)
#define XLUA_TYPEEXTENSIONS___C__CSHARPNAME_B__13_0_OFFSET UNITYSDK_OFFSET(0x1343E200)
#define XLUA_TYPEEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1343E1E0)
#define XLUA_TYPEEXTENSIONS___C__GETFRIENDLYNAME_B__12_0_OFFSET UNITYSDK_OFFSET(0x1343E1F0)

namespace XLua
{
	inline static constexpr unsigned int TypeExtensions___c_TypeDefinitionIndex = 47042;

	class TypeExtensions___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions___c_TypeDefinitionIndex)->GetStaticField(0x58030);
		}
		static ::XLua::TypeExtensions___c** StaticGet___9()
		{
			return (::XLua::TypeExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions___c_TypeDefinitionIndex)->GetStaticField(0x58038);
		}
		static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions___c_TypeDefinitionIndex)->GetStaticField(0x58040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::String* _GetFriendlyName_b__12_0(::System::Type* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS___C__GETFRIENDLYNAME_B__12_0_OFFSET))(this, a1);
		}

		::System::String* _CSharpName_b__13_0(::System::Type* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS___C__CSHARPNAME_B__13_0_OFFSET))(this, a1);
		}
	};
}
