#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/RegularExpressions/Capture.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class CaptureCollection; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_GET_CAPTURES_OFFSET UNITYSDK_OFFSET(0x1A178FC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_GET_SUCCESS_OFFSET UNITYSDK_OFFSET(0x1A178FB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A179020)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A1790A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A178F20)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int Group_TypeDefinitionIndex = 2503;

	class Group : public ::System::Text::RegularExpressions::Capture
	{
	public:
		static ::System::Text::RegularExpressions::Group** StaticGet__emptygroup()
		{
			return (::System::Text::RegularExpressions::Group**)Il2CppClass::FromTypeDefinitionIndex(Group_TypeDefinitionIndex)->GetStaticField(0x106B0);
		}
		::System::String* _name; // 0x20
		::Il2CppArray<::System::Int32>* _caps; // 0x28
		::System::Text::RegularExpressions::CaptureCollection* _capcoll; // 0x30
		::System::Int32 _capcount; // 0x38

		::System::Void _ctor(::System::String* text, ::Il2CppArray<::System::Int32>* caps, ::System::Int32 capcount, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CTOR_OFFSET))(this, text, caps, capcount, name);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CTOR_1_OFFSET))(this);
		}

		::System::Boolean get_Success()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_GET_SUCCESS_OFFSET))(this);
		}

		::System::Text::RegularExpressions::CaptureCollection* get_Captures()
		{
			return ((::System::Text::RegularExpressions::CaptureCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_GET_CAPTURES_OFFSET))(this);
		}
	};
}
