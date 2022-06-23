export module spreadsheet_cell;

import <string>;
import <string_view>;

export class SpreadsheetCell
{
public:
	virtual ~SpreadsheetCell() = default;

	virtual void set(std::string_view value) = 0;

	virtual std::string getString() const = 0;
};
