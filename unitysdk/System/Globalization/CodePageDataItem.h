#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_CREATESTRING_OFFSET UNITYSDK_OFFSET(0x172AA090)
#define SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_GET_BODYNAME_OFFSET UNITYSDK_OFFSET(0x172AA290)
#define SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x172AA330)
#define SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_GET_HEADERNAME_OFFSET UNITYSDK_OFFSET(0x172AA1F0)
#define SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_GET_UIFAMILYCODEPAGE_OFFSET UNITYSDK_OFFSET(0x172AA1E0)
#define SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_GET_WEBNAME_OFFSET UNITYSDK_OFFSET(0x172AA140)
#define SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x172AA340)
#define SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x172AA010)

namespace System::Globalization
{
	inline static constexpr unsigned int CodePageDataItem_TypeDefinitionIndex = 781;

	class CodePageDataItem : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_sep()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodePageDataItem_TypeDefinitionIndex)->GetStaticField(0x9900);
		}
		::System::String* m_bodyName; // 0x10
		::System::String* m_headerName; // 0x18
		::System::String* m_webName; // 0x20
		::System::Int32 m_uiFamilyCodePage; // 0x28
		::System::UInt32 m_flags; // 0x2C
		::System::Int32 m_dataIndex; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM__CCTOR_OFFSET))();
		}

		static ::System::String* CreateString(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_CREATESTRING_OFFSET))(a1, a2);
		}

		::System::String* get_WebName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_GET_WEBNAME_OFFSET))(this);
		}

		::System::Int32 get_UIFamilyCodePage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_GET_UIFAMILYCODEPAGE_OFFSET))(this);
		}

		::System::String* get_HeaderName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_GET_HEADERNAME_OFFSET))(this);
		}

		::System::String* get_BodyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_GET_BODYNAME_OFFSET))(this);
		}

		::System::UInt32 get_Flags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_GET_FLAGS_OFFSET))(this);
		}
	};
}
