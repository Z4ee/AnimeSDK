#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text::RegularExpressions { class Capture; }
namespace System::Text::RegularExpressions { class GroupCollection; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPENUMERATOR_GET_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1D633BF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D633BE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D633B90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D633C90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D633B80)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int GroupEnumerator_TypeDefinitionIndex = 2737;

	class GroupEnumerator : public ::System::Object
	{
	public:
		::System::Text::RegularExpressions::GroupCollection* _rgc; // 0x10
		::System::Int32 _curindex; // 0x18

		::System::Void _ctor(::System::Text::RegularExpressions::GroupCollection* rgc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::GroupCollection*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPENUMERATOR__CTOR_OFFSET))(this, rgc);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Capture* get_Capture()
		{
			return ((::System::Text::RegularExpressions::Capture*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPENUMERATOR_GET_CAPTURE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
