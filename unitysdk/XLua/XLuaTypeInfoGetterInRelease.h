#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/Reflection/BindingFlags.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define XLUA_XLUATYPEINFOGETTERINRELEASE_CHECKTYPEVALID_OFFSET UNITYSDK_OFFSET(0x1344FED0)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_GETENUMFIELDS_OFFSET UNITYSDK_OFFSET(0x1344FF10)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x134503F0)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_GETMETHODS_OFFSET UNITYSDK_OFFSET(0x134500B0)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x13450250)
#define XLUA_XLUATYPEINFOGETTERINRELEASE_LOADXLUABUILDASSEMBLIES_OFFSET UNITYSDK_OFFSET(0x1344FCF0)
#define XLUA_XLUATYPEINFOGETTERINRELEASE__CTOR_OFFSET UNITYSDK_OFFSET(0x13450590)

namespace XLua
{
	inline static constexpr unsigned int XLuaTypeInfoGetterInRelease_TypeDefinitionIndex = 47057;

	class XLuaTypeInfoGetterInRelease : public ::System::MarshalByRefObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE__CTOR_OFFSET))(this);
		}

		::System::Boolean LoadXLuaBuildAssemblies(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_LOADXLUABUILDASSEMBLIES_OFFSET))(this, a1);
		}

		::System::Boolean CheckTypeValid(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_CHECKTYPEVALID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetEnumFields(::System::Type* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_GETENUMFIELDS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetMethods(::System::Type* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_GETMETHODS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetProperties(::System::Type* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_GETPROPERTIES_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetFields(::System::Type* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::System::Type*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + XLUA_XLUATYPEINFOGETTERINRELEASE_GETFIELDS_OFFSET))(this, a1, a2);
		}
	};
}
