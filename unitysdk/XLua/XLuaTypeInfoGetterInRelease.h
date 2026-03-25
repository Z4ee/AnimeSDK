#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/Reflection/BindingFlags.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define XLUA_XLUATYPEINFOGETTERINRELEASE_CHECKTYPEVALID_OFFSET UNITYSDK_OFFSET(0x104943E0)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_GETENUMFIELDS_OFFSET UNITYSDK_OFFSET(0x10494420)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x10494930)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_GETMETHODS_OFFSET UNITYSDK_OFFSET(0x104945D0)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x10494780)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_LOADXLUABUILDASSEMBLIES_OFFSET UNITYSDK_OFFSET(0x104941F0)
#define XLUA_XLUATYPEINFOGETTERINRELEASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10494AE0)

namespace XLua
{
	inline static constexpr unsigned int XLuaTypeInfoGetterInRelease_TypeDefinitionIndex = 40554;

	class XLuaTypeInfoGetterInRelease : public ::System::MarshalByRefObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE__CTOR_OFFSET))(this);
		}

		::System::Boolean LoadXLuaBuildAssemblies(::System::String* dllDir)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_LOADXLUABUILDASSEMBLIES_OFFSET))(this, dllDir);
		}

		::System::Boolean CheckTypeValid(::System::String* typeName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_CHECKTYPEVALID_OFFSET))(this, typeName);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetEnumFields(::System::Type* type, ::System::Reflection::BindingFlags bindingFlags)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_GETENUMFIELDS_OFFSET))(this, type, bindingFlags);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetMethods(::System::Type* type, ::System::Reflection::BindingFlags bindingFlags)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_GETMETHODS_OFFSET))(this, type, bindingFlags);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetProperties(::System::Type* type, ::System::Reflection::BindingFlags bindingFlags)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_GETPROPERTIES_OFFSET))(this, type, bindingFlags);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetFields(::System::Type* type, ::System::Reflection::BindingFlags bindingFlags)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_GETFIELDS_OFFSET))(this, type, bindingFlags);
		}
	};
}
