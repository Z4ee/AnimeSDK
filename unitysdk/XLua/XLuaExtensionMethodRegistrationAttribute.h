#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define XLUA_XLUAEXTENSIONMETHODREGISTRATIONATTRIBUTE_GET_CONTAININGCLASS_OFFSET UNITYSDK_OFFSET(0x15184B50)
#define XLUA_XLUAEXTENSIONMETHODREGISTRATIONATTRIBUTE_GET_FIRSTPARAMTYPE_OFFSET UNITYSDK_OFFSET(0x15184B70)
#define XLUA_XLUAEXTENSIONMETHODREGISTRATIONATTRIBUTE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x15184B60)
#define XLUA_XLUAEXTENSIONMETHODREGISTRATIONATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x15184B90)
#define XLUA_XLUAEXTENSIONMETHODREGISTRATIONATTRIBUTE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x15184B80)
#define XLUA_XLUAEXTENSIONMETHODREGISTRATIONATTRIBUTE_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x15184B40)
#define XLUA_XLUAEXTENSIONMETHODREGISTRATIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x15184BA0)

namespace XLua
{
	inline static constexpr unsigned int XLuaExtensionMethodRegistrationAttribute_TypeDefinitionIndex = 50615;

	class XLuaExtensionMethodRegistrationAttribute : public ::System::Attribute
	{
	public:
		::System::String* _FirstParamType_k__BackingField; // 0x10
		::System::String* _ContainingClass_k__BackingField; // 0x18
		::System::String* _ReturnType_k__BackingField; // 0x20
		::System::String* _MethodName_k__BackingField; // 0x28
		::System::String* _Parameters_k__BackingField; // 0x30
		::System::Int32 _Order_k__BackingField; // 0x38

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_XLUAEXTENSIONMETHODREGISTRATIONATTRIBUTE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* get_ReturnType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_XLUAEXTENSIONMETHODREGISTRATIONATTRIBUTE_GET_RETURNTYPE_OFFSET))(this);
		}

		::System::String* get_ContainingClass()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_XLUAEXTENSIONMETHODREGISTRATIONATTRIBUTE_GET_CONTAININGCLASS_OFFSET))(this);
		}

		::System::String* get_MethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_XLUAEXTENSIONMETHODREGISTRATIONATTRIBUTE_GET_METHODNAME_OFFSET))(this);
		}

		::System::String* get_FirstParamType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_XLUAEXTENSIONMETHODREGISTRATIONATTRIBUTE_GET_FIRSTPARAMTYPE_OFFSET))(this);
		}

		::System::String* get_Parameters()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_XLUAEXTENSIONMETHODREGISTRATIONATTRIBUTE_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_XLUAEXTENSIONMETHODREGISTRATIONATTRIBUTE_GET_ORDER_OFFSET))(this);
		}
	};
}
