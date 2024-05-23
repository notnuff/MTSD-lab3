FROM python:3.12-bullseye

#change shell so it supports source command
SHELL ["bash", "-c"]

WORKDIR /project

#first mistake in provided build sequence - we use python3 instead of python
RUN python3 -m venv ./.venv 

COPY requirements requirements

#here i replaced . shortcut with source, so it is more clear what`s going on
RUN source ./.venv/bin/activate 

RUN pip install -r requirements/requirements.txt --no-deps

COPY spaceship spaceship

COPY build build


#when we have finally built our image, we can start the program:
CMD ["uvicorn", "spaceship.main:app", "--host=0.0.0.0", "--port=8080"]