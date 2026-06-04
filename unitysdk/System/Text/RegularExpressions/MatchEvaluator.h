#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AFDF4B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AFDF4E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AFDF4A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDF3B0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int MatchEvaluator_TypeDefinitionIndex = 2487;

	class MatchEvaluator : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke(::System::Text::RegularExpressions::Match* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Text::RegularExpressions::Match* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Text::RegularExpressions::Match*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
