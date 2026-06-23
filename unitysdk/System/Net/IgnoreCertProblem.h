#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int IgnoreCertProblem_TypeDefinitionIndex = 3306;

	enum class IgnoreCertProblem : ::System::Int32
	{
		not_time_valid = 1,
		ctl_not_time_valid = 2,
		not_time_nested = 4,
		invalid_basic_constraints = 8,
		all_not_time_valid = 7,
		allow_unknown_ca = 16,
		wrong_usage = 32,
		invalid_name = 64,
		invalid_policy = 128,
		end_rev_unknown = 256,
		ctl_signer_rev_unknown = 512,
		ca_rev_unknown = 1024,
		root_rev_unknown = 2048,
		all_rev_unknown = 3840,
		none = 4095,
	};
}
