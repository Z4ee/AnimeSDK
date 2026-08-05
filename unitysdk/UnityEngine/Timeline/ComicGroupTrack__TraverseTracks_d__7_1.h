#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::Timeline { class ComicGroupTrack; }

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ComicGroupTrack__TraverseTracks_d__7_1_TypeDefinitionIndex = 32941;

	template <typename T>
	class ComicGroupTrack__TraverseTracks_d__7_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::UnityEngine::Timeline::ComicGroupTrack* __4__this; // 0x0
		::System::Int32 _i_5__2; // 0x0
	};
}
